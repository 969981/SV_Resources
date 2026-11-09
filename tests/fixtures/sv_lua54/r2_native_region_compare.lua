-- Original, synthetic differential harness. No recovered third-party game source.
-- Arg1: temporary bytecode wrapper containing ORIGINAL 4.0.0 instructions
-- PC 649..665 from main_dynamic Proto 752; caller-supplied registers only.
local native_path = assert(arg[1], "native bytecode slice path required")
local raw_region = assert(loadfile(native_path, "b"))
local generated_path = assert(arg[2], "automatically emitted Lua source path required")
local generated_region = assert(loadfile(generated_path, "bt"))()

local function reconstructed_region(a, b, c, d, e, f)
    -- Recovered *candidate*, based on HIR: allocation first, then values,
    -- then one deferred array batch. No method/class/engine state involved.
    local t = {}
    local v1 = a + d * 3.0
    local v2 = b + e * 3.0 + 20.0
    local v3 = c + f * 3.0
    t[1], t[2], t[3] = v1, v2, v3
    return t
end

local function equivalent(lhs, rhs)
    for k = 1, 3 do
        if lhs[k] ~= rhs[k] or math.type(lhs[k]) ~= math.type(rhs[k]) then return false, k end
    end
    return true
end

local function run_one(label, args)
    local a = {raw_region(table.unpack(args, 1, 6))}
    local b = {reconstructed_region(table.unpack(args, 1, 6))}
    local auto = {generated_region(table.unpack(args, 1, 6))}
    assert(#a == 1 and #b == 1 and #auto == 1, "region should return one table")
    local equal, key = equivalent(a[1], b[1])
    assert(equal, ("mismatch %s index=%s native=%s candidate=%s"):
        format(label, tostring(key), tostring(a[1][key]), tostring(b[1][key])))
    local equivalent_auto, auto_key = equivalent(a[1], auto[1])
    assert(equivalent_auto, ("AUTO mismatch %s key=%s native=%s auto=%s"):
        format(label, tostring(auto_key), tostring(a[1][auto_key]), tostring(auto[1][auto_key])))
end

local count = 0
for i=-50, 50 do
    run_one("integer-" .. i, {i, i+1, i+2, i+3, i+4, i+5})
    count = count + 1
end

for i=1, 60 do
    local x = (i / 7) - 3
    run_one("floating-" .. i, {x, x+0.25, x-2, x+0.5, x+0.75, x-0.125})
    count = count + 1
end

local log = {}
local mt = {}
mt.__add = function(x, y)
    log[#log + 1] = "add:" .. tostring(x.tag or "n")
    return (x.value or x) + (type(y) == "table" and y.value or y)
end
mt.__mul = function(x, y)
    log[#log + 1] = "mul:" .. tostring(x.tag or "n")
    return (x.value or x) * (type(y) == "table" and y.value or y)
end
local function value(v, label)
    return setmetatable({value=v, tag=label}, mt)
end

local function run_logged(which)
    log = {}
    local fn = which == "native" and raw_region or (which == "generated" and generated_region or reconstructed_region)
    local t = fn(value(10, "a"), value(20, "b"), value(30, "c"),
                 value(2, "d"), value(3, "e"), value(4, "f"))
    return {t[1], t[2], t[3]}, table.concat(log, "|")
end

local n, nl = run_logged("native")
local c, cl = run_logged("candidate")
for k = 1,3 do assert(n[k] == c[k], "metamethod result mismatch " .. k) end
assert(nl == cl, "metamethod evaluation order differs: " .. nl .. " <> " .. cl)
local a, al = run_logged("generated")
for k=1,3 do assert(n[k] == a[k] and math.type(n[k]) == math.type(a[k]), "auto metamethod result mismatch " .. k) end
assert(nl == al, "auto metamethod evaluation order differs: " .. nl .. " <> " .. al)
count = count + 1

-- Error paths: demonstrate real VM MMBIN fallback reaches the same error
-- (without comparing Lua stack traces or original source line numbers).
local explosive = setmetatable({tag="explosive"}, {
    __mul = function() error("expected-mul-error", 0) end
})
local function first_error(fn)
    local ok, err = pcall(fn, 1, 2, 3, explosive, 4, 5)
    assert(not ok)
    return tostring(err)
end
assert(first_error(raw_region):find("expected%-mul%-error"))
assert(first_error(reconstructed_region):find("expected%-mul%-error"))
assert(first_error(generated_region):find("expected%-mul%-error"))
count = count + 1

print("PASS " .. count .. " real-native-bytecode vs manual AND AUTOMATICALLY EMITTED Lua 5.4 region cases")
print("PASS native MMBIN*/metamethod effect ordering and expected failure path")
print("SCOPE: 17 source instruction words; no whole Proto 752 or game runtime parity")
