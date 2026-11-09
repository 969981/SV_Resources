-- R3: test native SETLIST vs indexed Lua on metamethod-returned nil values.
-- Inputs: ephemeral original-bytecode wrapper, ephemeral automatically-emitted Lua,
-- output report path. This is a NEGATIVE/REGRESSION experiment, not a success gate.
local native = assert(loadfile(assert(arg[1]), "b"))
local candidate = assert(loadfile(assert(arg[2]), "t"))()
local output = assert(arg[3], "output report path")

-- Experimental allocation-preserving candidate: compile an array with three
-- explicit nil placeholders *before* evaluating all arithmetic expressions.
local function preallocated(a, b, c, d, e, f)
    local t = {nil, nil, nil}
    local v1 = a + d * 3.0
    local v2 = b + e * 3.0 + 20.0
    local v3 = c + f * 3.0
    t[1], t[2], t[3] = v1, v2, v3
    return t
end

local nil_add = setmetatable({kind="nil-add"}, {
    __add = function() return nil end,
})
local deferred_nil = setmetatable({kind="deferred-nil"}, {
    __add = function()
        return setmetatable({kind="stage2"}, {
            __add = function() return nil end,
        })
    end,
})

local lines = {}
local disagreements = 0
local preallocated_disagreements = 0
local case_count = 0
for mask = 0, 7 do
    local a = (mask & 1) ~= 0 and nil_add or 1
    local b = (mask & 2) ~= 0 and deferred_nil or 2
    local c = (mask & 4) ~= 0 and nil_add or 3
    local n = native(a, b, c, 2, 3, 4)
    local e = candidate(a, b, c, 2, 3, 4)
    local p = preallocated(a, b, c, 2, 3, 4)
    local keys_equal = true
    for k = 1, 3 do
        if rawget(n, k) ~= rawget(e, k) then keys_equal = false end
    end
    local native_len, emitted_len = #n, #e
    local native_rawlen, emitted_rawlen = rawlen(n), rawlen(e)
    local equivalent = keys_equal and native_len == emitted_len
        and native_rawlen == emitted_rawlen
    if not equivalent then disagreements = disagreements + 1 end
    local same_pre_values = true
    for k=1,3 do
        if rawget(n,k) ~= rawget(p,k) then same_pre_values=false end
    end
    local pre_equivalent = same_pre_values and (#n == #p) and (rawlen(n) == rawlen(p))
    if not pre_equivalent then preallocated_disagreements = preallocated_disagreements + 1 end
    case_count = case_count + 1
    lines[#lines+1] = ("mask=%d indexed_equal=%s prealloc_equal=%s values=%s len=%d/%d/%d rawlen=%d/%d/%d"):
        format(mask, tostring(equivalent), tostring(pre_equivalent), tostring(keys_equal),
            native_len, emitted_len, #p, native_rawlen, emitted_rawlen, rawlen(p))
end

local file = assert(io.open(output, "w"))
file:write("SV Lua 5.4 R3 nil-returning metamethod comparison\n")
file:write("Original bytecode: Proto 752 / PC 649-665\n")
file:write("Candidate: R2 automatically emitted Lua\n")
for _, line in ipairs(lines) do file:write(line, "\n") end
file:write(("cases=%d divergences=%d preallocated_divergences=%d\n"):
    format(case_count, disagreements, preallocated_disagreements))
file:close()
for _, line in ipairs(lines) do print("SLR_R3_NIL_CASE " .. line) end
print(("SLR_R3_NIL_RESULT cases=%d divergences=%d preallocated_divergences=%d"):
    format(case_count, disagreements, preallocated_disagreements))
print("Scope: table results for metamethod-returned nil; this is NOT full Proto 752 parity.")
