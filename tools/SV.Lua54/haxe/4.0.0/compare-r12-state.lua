-- Original SV400 GETI/SETI and LT/JMP/MOVE vs Haxe Lua5.4.
-- For SETI the REQUIRED comparison includes table contents and __newindex
-- metamethod side effects, not just the returned nil value.
local dir,main_path,report_path=arg[1],arg[2],arg[3]
assert(dir and main_path and report_path,"R12 native dir, generated Lua, report required")
package.preload["lua-utf8"]=function() return utf8 end
math.atan2=math.atan
lua_helper={createtable=function() return {} end}
local classes=assert(loadfile(main_path,"t",_G))()
local c="CA5A5606298DDCB29"
local get_hash="FC4F4F6E68A4F6294"
local set_hash="FC38443D88FBF1318"
local clamp_c="C9B7934A3811EE858"
local clamp_f="FC578F301CC83391C"
local view=assert(assert(classes[c]).prototype)
local clamp_proto=assert(assert(classes[clamp_c]).prototype)
local function original(proto)
  return assert(loadfile(dir.."/R12_"..proto..".luac","b",_G))
end
local getter=assert(view[get_hash])
local setter=assert(view[set_hash])
local clamper=assert(clamp_proto[clamp_f])
local native_get=original(6367)
local native_set=original(6366)
local native_clamp=original(2183)

local function strict_equal(a,b)
  if type(a)~=type(b) then return false end
  if type(a)=="number" then
    if math.type(a)~=math.type(b) then return false end
    if a~=a and b~=b then return true end
    if a==0 and b==0 then return 1/a==1/b end
    return a==b
  end
  if type(a)=="table" then
    for k,v in next,a do
      if not strict_equal(v,rawget(b,k)) then return false end
    end
    for k,v in next,b do
      if not strict_equal(v,rawget(a,k)) then return false end
    end
    return true
  end
  return a==b
end

local passed_get=0
local get_tests={
  function()return {[86]=12,[7]="keep"},{} end,
  function()return {[86]=false},{} end,
  function()return {[86]=1.5},{} end,
  function()return {[7]="keep"},{} end,
  function()return {[86]="SV"},{} end,
  function()
    local events={}
    local self=setmetatable({[7]="keep"},{
      __index=function(_,key) events[#events+1]=key;return "fallback" end
    })
    return self,events
  end,
}
for i,factory in ipairs(get_tests) do
  local a,evA=factory()
  local b,evB=factory()
  local ok1,v1=pcall(native_get,a)
  local ok2,v2=pcall(getter,b)
  if not (ok1 and ok2 and strict_equal(v1,v2)
          and strict_equal(a,b) and strict_equal(evA,evB)) then
    error("R12 GETI original-vs-Haxe result/table/metamethod read discrepancy: case "..i)
  end
  passed_get=passed_get+1
end

local set_tests={
  function() return {[86]=12,keep="a"},21,{} end,
  function() return {[86]=false,keep=5},true,{} end,
  function() return {keep="a"},"abc",{} end,
  function() return {[86]=99,keep="a"},nil,{} end,
  function() return {[86]=0,keep="a"},{foo=3},{} end,
  function()
    local events={}
    local self=setmetatable({keep="a"},{
      __newindex=function(t,key,value)
        events[#events+1]={key=key,value=value}
        rawset(t,key,value)
      end
    })
    return self,17,events
  end,
}
local passed_set=0
for i,factory in ipairs(set_tests) do
  local a,val1,evA=factory()
  local b,val2,evB=factory()
  local ok1,v1=pcall(native_set,a,val1)
  local ok2,v2=pcall(setter,b,val2)
  if not (ok1 and ok2 and strict_equal(v1,v2)
          and strict_equal(a,b) and strict_equal(evA,evB)
          and strict_equal(rawget(a,86),rawget(b,86))
          and strict_equal(rawget(a,"keep"),rawget(b,"keep"))) then
    error("R12 SETI original-vs-Haxe returned/table-state/__newindex mismatch: case "..i)
  end
  passed_set=passed_set+1
end

local clamp_cases={
  {5,0,10},{-3,0,10},{12,0,10},{4,7,2},
  {1.5,0,1},{math.huge,0,1},{0/0,0,1},
}
local passed_clamp=0
for i,values in ipairs(clamp_cases) do
  local a,b,c=table.unpack(values)
  local ok1,v1=pcall(native_clamp,{},a,b,c)
  local ok2,v2=pcall(clamper,{},a,b,c)
  if not (ok1 and ok2 and strict_equal(v1,v2)) then
    error("R12 LT/JMP/MOVE clamp original-vs-Haxe mismatch: case "..i..
          ", native="..tostring(v1).." regenerated="..tostring(v2))
  end
  passed_clamp=passed_clamp+1
end
local out=assert(io.open(report_path,"w"))
out:write("GETI="..passed_get.."/6\nSETI_SIDE_EFFECT="..passed_set.."/6\nLT_MOVE="..passed_clamp.."/7\n")
out:close()
print("R12 original child differential: GETI "..passed_get..
      "/6; SETI table state+metamethod "..passed_set..
      "/6; LT/MOVE clamp "..passed_clamp.."/7; total 19/19")
