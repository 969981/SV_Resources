-- R13 SV400 original Lua54 Child vs ZAScripts Haxe, strict observable field state.
-- Applies identical, fresh per-case self table/aux tables to each implementation.
-- Read: GETI + GETFIELD including __index event sequence and nil/errors.
-- Write: GETI + SETFIELD=true including raw nested/outer table state,
--        untouched keys, __newindex events, and error side effects.
-- Never treat identical return nil as proof of a correct table write.
local directory,main_file,report_file=arg[1],arg[2],arg[3]
assert(directory and main_file and report_file, "R13 requires fixtures, generated main Lua and report path")
package.preload["lua-utf8"]=function() return utf8 end
math.atan2=math.atan
lua_helper={createtable=function() return {} end}

local exports=assert(loadfile(main_file,"t",_G))()
assert(type(exports)=="table","Haxe LuaOutput did not export class table")
local function get_generated(class_hash,method_hash)
  local class=assert(exports[class_hash],"missing native class hash "..class_hash)
  local proto=assert(class.prototype,"missing F prototype for "..class_hash)
  local function_value=assert(proto[method_hash],"missing F method "..method_hash)
  assert(type(function_value)=="function","Haxe F value is not callable")
  return function_value
end
local function orig(id)
  return assert(loadfile(directory.."/R13_"..id..".luac","b",_G))
end

local function equal(a,b,cache)
  if type(a)~=type(b) then return false end
  if type(a)=="number" then
    if math.type(a)~=math.type(b) then return false end
    if a~=a and b~=b then return true end
    if a==0 and b==0 then return 1/a==1/b end
    return a==b
  end
  if type(a)~="table" then return a==b end
  cache=cache or {}
  if cache[a] then return cache[a]==b end
  cache[a]=b
  local count_a,count_b=0,0
  for key,value in next,a do
    count_a=count_a+1
    if not equal(value,rawget(b,key),cache) then return false end
  end
  for key in next,b do count_b=count_b+1 end
  return count_a==count_b
end

local function case_read(kind,slot,key)
  local cases={}
  cases[1]=function()
    return {[slot]={[key]=true,other=44},keep="outer"}, {},{},{}
  end
  cases[2]=function()
    return {[slot]={[key]=false,other="ok"},keep="outer"}, {},{},{}
  end
  cases[3]=function()
    return {[slot]={other=44},keep="outer"}, {},{},{}
  end
  cases[4]=function()
    return {[slot]={[key]=17,other={nested=99}},keep="outer"}, {},{},{}
  end
  cases[5]=function()
    return {[slot]={[key]="SV400",other=true}}, {},{},{}
  end
  cases[6]=function()
    local events={}
    local inner=setmetatable({other=42},{
      __index=function(_,k)
        events[#events+1]="inner:"..tostring(k)
        return "from_inner"
      end
    })
    return {[slot]=inner,keep="outer"},events,{},{"inner:"..key}
  end
  cases[7]=function()
    local events={}
    local inner={[key]=73,keep="linked"}
    local outer=setmetatable({keep="outer"},{
      __index=function(_,k)
        events[#events+1]="outer:"..tostring(k)
        return inner
      end
    })
    return outer,events,{linked=inner},{"outer:"..tostring(slot)}
  end
  cases[8]=function()
    local events={}
    local inner=setmetatable({other="keep"},{
      __index=function(_,k)
        events[#events+1]="inner_nil:"..tostring(k)
        return nil
      end
    })
    return {[slot]=inner},events,{},{"inner_nil:"..key}
  end
  cases[9]=function()
    return {[slot]=nil,keep="outer"}, {},{},{}
  end
  return cases
end

local function case_write(slot,key)
  local cases={}
  cases[1]=function() return {[slot]={[key]=false,keep=41},other=true},{},{},{} end
  cases[2]=function() return {[slot]={[key]=true,keep=41},other=true},{},{},{} end
  cases[3]=function() return {[slot]={keep=41},other=true},{},{},{} end
  cases[4]=function() return {[slot]={keep={nested="SV",arr={1,2,3}}},other={seed=9}},{},{},{} end
  cases[5]=function()
    local ev={}
    local inner=setmetatable({keep="other"},{
      __newindex=function(t,k,v)
        ev[#ev+1]={"newindex",k,v}
        rawset(t,k,v)
      end
    })
    return {[slot]=inner,other=31},ev,{},{{"newindex",key,true}}
  end
  cases[6]=function()
    local ev={}
    local inner=setmetatable({keep="other"},{
      __newindex=function(t,k,v)
        ev[#ev+1]={"ignored_newindex",k,v}
      end
    })
    return {[slot]=inner,other=31},ev,{},{{"ignored_newindex",key,true}}
  end
  cases[7]=function()
    local ev={}
    local inner=setmetatable({keep="other"},{
      __newindex=function(t,k,v)
        ev[#ev+1]={"blocked",k,v}
        error("blocked",0)
      end
    })
    return {[slot]=inner,other=31},ev,{},{{"blocked",key,true}}
  end
  cases[8]=function()
    local ev={}
    local linked={keep=73}
    local outer=setmetatable({other=31},{
      __index=function(_,k)
        ev[#ev+1]={"outer_index",k}
        return linked
      end
    })
    return outer,ev,{linked=linked},{{"outer_index",slot}}
  end
  cases[9]=function() return {[slot]=nil,other="keep"},{},{},{} end
  cases[10]=function() return {[slot]=false,other="keep"},{},{},{} end
  return cases
end

local function run_suite(label,native,regenerated,cases,is_write)
  local pass=0
  for i,build in ipairs(cases) do
    local orig_self,orig_events,orig_aux,expected_events=build()
    local regen_self,regen_events,regen_aux,expected_events2=build()
    assert(equal(expected_events,expected_events2), "case factory has inconsistent event expectations")
    local native_ok,native_value=pcall(native,orig_self)
    local regen_ok,regen_value=pcall(regenerated,regen_self)
    local same_result=native_ok==regen_ok
    if native_ok and regen_ok then
      same_result=same_result and equal(native_value,regen_value)
    else
      -- Native and generated chunks have different debug line numbers.
      -- Error MESSAGE text is therefore not compared; success/failure
      -- category and ALL changes that happened before error are compared.
      same_result=same_result and type(native_value)==type(regen_value)
    end
    local valid=(same_result
                 and equal(orig_self,regen_self)
                 and equal(orig_aux,regen_aux)
                 and equal(orig_events,regen_events)
                 and equal(orig_events,expected_events))
    if not valid then
      error(string.format(
        "R13 %s case%d mismatch: native_ok=%s regenerated_ok=%s native=%s compiled=%s",
        label,i,tostring(native_ok),tostring(regen_ok),
        tostring(native_value),tostring(regen_value)))
    end
    pass=pass+1
  end
  print(string.format("R13 %s %d/%d %s",label,pass,#cases,
                      is_write and "full-table-state+__newindex" or "__index+value"))
  return pass
end

local get_reserve=run_suite(
  "GETFIELD_callFromReserve",
  orig(669),
  get_generated("C84BB2B6259521D93","F77BBD39690411500"),
  case_read("reserve",22,"callFromReserve"),false)
local get_length=run_suite(
  "GETFIELD_length",
  orig(5683),
  get_generated("C46AA0D78DCA3D948","FC3C074A28D3E9B8A"),
  case_read("length",1,"length"),false)
local set_skip=run_suite(
  "SETFIELD_skipPlayerStuckCheck",
  orig(11176),
  get_generated("CB35C3643C0F161F3","FC87C731D11C58354"),
  case_write(22,"skipPlayerStuckCheck"),true)
assert(get_reserve==9 and get_length==9 and set_skip==10,"R13 insufficient field state tests")

local f=assert(io.open(report_file,"w"))
f:write("GETFIELD_callFromReserve=9/9\n")
f:write("GETFIELD_length=9/9\n")
f:write("SETFIELD_skipPlayerStuckCheck_STATE_AND_NEWINDEX=10/10\n")
f:write("R13_TOTAL=28/28\n")
f:close()
print("R13 original Lua54 vs pinned ZAScripts Haxe total: 3/3 methods, 28/28 cases")
