-- SLR R3: intentionally adversarial Lua 5.4 metamethod/nil-hole differential.
-- Two inputs: ephemeral original PC649-665 bytecode and auto-emitted Lua
-- from ORIGINAL native opcodes. This is NOT the complete Proto 752.
local raw = assert(loadfile(assert(arg[1]), "b"))
local emitted = assert(loadfile(assert(arg[2]), "t"))()

local function nil_on_add()
    return setmetatable({}, {__add=function() return nil end})
end

local function nil_on_final_add()
    local terminal = setmetatable({}, {__add=function() return nil end})
    return setmetatable({}, {__add=function() return terminal end})
end

local function keys(t)
    local k = nil
    local out = {}
    while true do
        k = next(t, k)
        if k == nil then break end
        out[#out+1] = tostring(k) .. "=" .. tostring(rawget(t, k))
    end
    return table.concat(out, "|")
end

local count, mismatches = 0, {}
for mask=0,7 do
    local a = mask & 1 ~= 0 and nil_on_add() or 10
    local b = mask & 2 ~= 0 and nil_on_final_add() or 20
    local c = mask & 4 ~= 0 and nil_on_add() or 30
    local v1 = raw(a,b,c,2,3,4)
    local v2 = emitted(a,b,c,2,3,4)
    assert(type(v1)=="table" and type(v2)=="table")
    local equal_values = true
    for i=1,3 do
        if rawget(v1,i) ~= rawget(v2,i) then equal_values=false end
    end
    local len1, len2 = #v1, #v2
    local keys1, keys2 = keys(v1), keys(v2)
    local equal_len = len1 == len2
    local equal_keys = keys1 == keys2
    count=count+1
    print(("case=%d values=%s len_native=%d len_emitted=%d keys_native=%q keys_emitted=%q"):format(
        mask,tostring(equal_values),len1,len2,keys1,keys2))
    if not (equal_values and equal_len and equal_keys) then
        mismatches[#mismatches+1]={case=mask,values=equal_values,length=equal_len,keys=equal_keys}
    end
end
print(("R3 NIL-HOLE PROBE: %d cases; %d observable mismatches"):format(count,#mismatches))
if #mismatches > 0 then
    print("PROOF BARRIER: indexed fallback cannot be globally assumed equivalent")
else
    print("NO COUNTEREXAMPLE in this bounded probe; not a full semantic proof")
end
