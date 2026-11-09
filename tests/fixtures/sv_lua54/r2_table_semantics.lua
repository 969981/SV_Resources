-- Original synthetic Lua written for SLR R2. No extracted game source.
-- Exercise syntax, luac compilation, deterministic pure-value behavior,
-- and a counterexample showing why a generic SETLIST=>t[i] lowering is unsafe.

local function fresh_constructor(a, b, c, d, e, f)
    -- Both alternatives compute three expressions and place them in a fresh table.
    return { a + b * 3, c + d * 3 + 20, e + f * 3 }
end

local function fresh_explicit(a, b, c, d, e, f)
    local t = {}
    local v1 = a + b * 3
    local v2 = c + d * 3 + 20
    local v3 = e + f * 3
    t[1], t[2], t[3] = v1, v2, v3
    return t
end

for i = -15, 15 do
    local x = fresh_constructor(i, i + 1, i + 2, i + 3, i + 4, i + 5)
    local y = fresh_explicit(i, i + 1, i + 2, i + 3, i + 4, i + 5)
    for k = 1, 3 do
        assert(x[k] == y[k], ("pure-fresh-mismatch at i=%d k=%d"):format(i, k))
    end
end

-- Deliberate negative control: once a table acquires an __newindex
-- metamethod before writes, raw VM array writes and Lua indexed writes
-- are not generally interchangeable.
local events = {}
local t = setmetatable({}, {
    __newindex = function(_, k, v)
        events[#events + 1] = { k, v }
    end,
})
local raw = setmetatable({}, {
    __newindex = function()
        error("rawset should not trigger __newindex")
    end,
})
t[1] = 12
rawset(raw, 1, 12)
assert(#events == 1 and events[1][1] == 1 and events[1][2] == 12)
assert(rawget(t, 1) == nil and rawget(raw, 1) == 12)

print("PASS synthetic fresh constructor / explicit indexed variant 31 x 3")
print("PASS expected metamethod counterexample to unconditional indexed lowering")
