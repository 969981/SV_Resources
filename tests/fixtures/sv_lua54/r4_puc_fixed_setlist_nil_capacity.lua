-- R4: safe fixed SETLIST must preserve original PUC array-part preallocation
-- when arithmetic metamethod results contain nil holes.
-- Original source by SV_Lua54 R4 project; no extracted game source.
-- unluac: expect-not-contains [[table-set-list]]
-- unluac: expect-not-contains [[unluac error]]

local function build(a, b, c, d, e, f)
    local result = {
        a + d * 3.0,
        b + e * 3.0 + 20.0,
        c + f * 3.0,
    }
    -- Keep an explicit post-SETLIST table identity handoff.
    local copy = result
    return copy
end

local nil_add = setmetatable({value = "nil-add"}, {
    __add = function() return nil end,
})
local second_add_nil = setmetatable({value = "two-adds"}, {
    __add = function()
        return setmetatable({}, { __add = function() return nil end })
    end,
})

local tally = 0
for mask = 0, 7 do
    local a = mask & 1 ~= 0 and nil_add or 1
    local b = mask & 2 ~= 0 and second_add_nil or 2
    local c = mask & 4 ~= 0 and nil_add or 3
    local t = build(a, b, c, 2, 3, 4)
    -- The observed length is implementation-layout-sensitive; downstream
    -- differential testing compares original and recompiled chunks on the
    -- same Lua VM instead of asserting a universal # for sparse tables.
    local slots = {}
    for i=1,3 do
        local v = rawget(t, i)
        slots[i] = v == nil and "nil" or tostring(v)
    end
    local out = table.concat(slots, ",")
    print("puc-nil-batch", mask, out, rawlen(t), #t)
    assert(type(t) == "table")
    tally = tally + 1
end

local events = {}
local mt = {
    __add = function(a, b)
        events[#events + 1] = a.label
        return a.value + b
    end,
}
local function val(n, tag)
    return setmetatable({value = n, label = tag}, mt)
end
local r = build(val(11,"a"), val(22,"b"), val(33,"c"), 2, 3, 4)
assert(math.type(r[1]) == "float")
assert(r[1] == 17.0 and r[2] == 51.0 and r[3] == 45.0)
assert(table.concat(events,",") == "a,b,c")
assert(tally == 8)
print("puc-fixed-setlist-nil-capacity", "OK")
