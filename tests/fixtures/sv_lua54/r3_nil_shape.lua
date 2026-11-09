-- R3: test native SETLIST vs indexed Lua on metamethod-returned nil values.
-- Inputs: ephemeral original-bytecode wrapper, ephemeral automatically-emitted Lua,
-- output report path. This is a NEGATIVE/REGRESSION experiment, not a success gate.
local native = assert(loadfile(assert(arg[1]), "b"))
local candidate = assert(loadfile(assert(arg[2]), "t"))()
local output = assert(arg[3], "output report path")

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
local case_count = 0
for mask = 0, 7 do
    local a = (mask & 1) ~= 0 and nil_add or 1
    local b = (mask & 2) ~= 0 and deferred_nil or 2
    local c = (mask & 4) ~= 0 and nil_add or 3
    local n = native(a, b, c, 2, 3, 4)
    local e = candidate(a, b, c, 2, 3, 4)
    local keys_equal = true
    for k = 1, 3 do
        if rawget(n, k) ~= rawget(e, k) then keys_equal = false end
    end
    local native_len, emitted_len = #n, #e
    local native_rawlen, emitted_rawlen = rawlen(n), rawlen(e)
    local equivalent = keys_equal and native_len == emitted_len
        and native_rawlen == emitted_rawlen
    if not equivalent then disagreements = disagreements + 1 end
    case_count = case_count + 1
    lines[#lines+1] = ("mask=%d equal=%s values=%s len=%d/%d rawlen=%d/%d"):
        format(mask, tostring(equivalent), tostring(keys_equal),
            native_len, emitted_len, native_rawlen, emitted_rawlen)
end

local file = assert(io.open(output, "w"))
file:write("SV Lua 5.4 R3 nil-returning metamethod comparison\n")
file:write("Original bytecode: Proto 752 / PC 649-665\n")
file:write("Candidate: R2 automatically emitted Lua\n")
for _, line in ipairs(lines) do file:write(line, "\n") end
file:write(("cases=%d divergences=%d\n"):format(case_count, disagreements))
file:close()
for _, line in ipairs(lines) do print("SLR_R3_NIL_CASE " .. line) end
print(("SLR_R3_NIL_RESULT cases=%d divergences=%d"):format(case_count, disagreements))
print("Scope: table results for metamethod-returned nil; this is NOT full Proto 752 parity.")
