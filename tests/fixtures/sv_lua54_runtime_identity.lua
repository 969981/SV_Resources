-- Original synthetic Lua 5.4 VM test, NOT proprietary game code.
-- Validates the mechanism the R3 probe must observe: shared UpVal cell identity
-- and actual table/metatable method lookup. No pointer bytes are logged.

local function fresh_root_activation()
    local r55 = {tag = "before"}
    local r58 = nil

    local function setup()
        return r55, r58
    end
    local function mutate(v)
        r55 = v
        r58 = v
    end
    return setup, mutate
end

local function slot(fn, name)
    for index = 1, 32 do
        local key = debug.getupvalue(fn, index)
        if key == nil then break end
        if key == name then return index end
    end
    error("expected UpVal slot not found: " .. name)
end

local first, mutate = fresh_root_activation()
local second = fresh_root_activation()
local first55, first58 = slot(first, "r55"), slot(first, "r58")
local write55, write58 = slot(mutate, "r55"), slot(mutate, "r58")
assert(debug.upvalueid(first, first55) == debug.upvalueid(mutate, write55))
assert(debug.upvalueid(first, first58) == debug.upvalueid(mutate, write58))
assert(debug.upvalueid(first, first55) ~= debug.upvalueid(first, first58))
assert(debug.upvalueid(first, first55) ~= debug.upvalueid(second, slot(second, "r55")))
assert(type(select(1,first())) == "table")
assert(select(2,first()) == nil)
mutate({tag="after"})
assert(select(1,first()).tag == "after")
assert(select(2,first()).tag == "after")
assert(select(2,second()) == nil)
print("LUA54_SYNTHETIC_SHARED_UPVALUE_CELL_PASS")

local class = {}
class.__index = class
local fields = {
    "F7CD5FEDB7A083576",
    "S668179E3DFA5CD49",
    "FA46877DC47484C79",
}
for index, field in ipairs(fields) do
    class[field] = function(self)
        return self.identity, index
    end
end
local receiver = setmetatable({identity="mock-receiver"}, class)
for index, field in ipairs(fields) do
    local target = receiver[field]
    assert(type(target)=="function")
    assert(rawequal(target,class[field]))
    local obj, returned_index = target(receiver)
    assert(obj == "mock-receiver" and returned_index == index)
end
print("LUA54_SYNTHETIC_RECEIVER_LOOKUP_PASS")
