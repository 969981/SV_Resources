-- SLR R3 synthetic source: compare native PUC NEWTABLE/SETLIST with
-- constructor fusion for metamethod-produced nil values. The original
-- executable instruction slice comes from pinned SV 4.0.0 Proto 752 and
-- exists only as an ephemeral CI file.
local original = assert(loadfile(assert(arg[1]), "b"))

local function fused(a,b,c,d,e,f)
  return { a + d * 3.0, b + e * 3.0 + 20.0, c + f * 3.0 }
end

local function keys(t)
  local r = {}
  for k, v in pairs(t) do
    r[#r+1] = tostring(k) .. "=" .. tostring(v)
  end
  table.sort(r)
  return table.concat(r,";")
end

local function equivalent(x,y)
  for i=1,3 do
    assert(rawget(x,i) == rawget(y,i), "array slot mismatch at "..i)
    assert(math.type(rawget(x,i)) == math.type(rawget(y,i)), "number type mismatch at "..i)
  end
  assert(keys(x) == keys(y), "table key set differs")
  assert(#x == #y, "array boundary differs: "..#x.." <> "..#y)
end

local nil_mt = {
  __add = function() return nil end
}
local additive_nil = setmetatable({}, nil_mt)
-- Final sum #1 is nil; #2 and #3 are ordinary.
local sets = {
  {additive_nil, 2, 3, 4, 5, 6},
  {1, 2, additive_nil, 4, 5, 6},
  {additive_nil, 2, additive_nil, 4, 5, 6}
}
local count = 0
for _, input in ipairs(sets) do
  local a = original(table.unpack(input, 1, 6))
  local b = fused(table.unpack(input, 1, 6))
  equivalent(a,b)
  count = count + 1
end
print("PASS "..count.." native PC649-665 vs constructor fusion nil-hole/metamethod cases")
print("SCOPE: synthetic operand effects and native original-region bytecode, not the full game function")
