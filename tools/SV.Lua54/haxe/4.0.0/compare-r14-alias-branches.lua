-- R14 original SV400 Lua54 Child vs pinned ZAScripts Haxe 4.3.1 / Lua5.4.3.
-- Cross-call alias graph must survive two ordered SETI writes.
-- Original writes vs Haxe writes: full raw nested snapshot + events +
-- object-reference alias bijection + exceptional partial state.
local dir,main_file,report=arg[1],arg[2],arg[3]
assert(dir and main_file and report,"R14 requires native fixtures, generated Lua, output report")
package.preload["lua-utf8"]=function() return utf8 end
math.atan2=math.atan
lua_helper={createtable=function() return {} end}

local classes=assert(loadfile(main_file,"t",_G))()
assert(type(classes)=="table","compiled Lua Haxe must return C class table")
local function generated(c,f)
  local cls=assert(classes[c],"missing C hash "..c)
  local parent=assert(cls.prototype,"missing C prototype "..c)
  local func=assert(parent[f],"missing registered F hash "..f)
  assert(type(func)=="function","wrong Haxe instance method ABI")
  return func
end
local function native(id)
  return assert(loadfile(dir.."/R14_"..id..".luac","b",_G))
end

-- Compare complete observable graph, preserving BOTH directions of alias
-- correspondence: two distinct tables must not collapse into one, and
-- repeated references to one source table must not be copied as two tables.
local function graph_equal(a,b,l2r,r2l)
  if type(a)~=type(b) then return false end
  if type(a)=="number" then
    if math.type(a)~=math.type(b) then return false end
    if a~=a and b~=b then return true end
    if a==0 and b==0 then return 1/a==1/b end
    return a==b
  end
  if type(a)~="table" then return a==b end
  l2r=l2r or {};r2l=r2l or {}
  if l2r[a]~=nil then return l2r[a]==b end
  if r2l[b]~=nil then return false end
  l2r[a]=b;r2l[b]=a
  local n1,n2=0,0
  for k,v in next,a do
    n1=n1+1
    if not graph_equal(v,rawget(b,k),l2r,r2l) then return false end
  end
  for _ in next,b do n2=n2+1 end
  return n1==n2
end

local function baseline(tbl,args,events,aux,return_value,ok)
  return {self=tbl,args=args,events=events,aux=aux,
          result=ok and {return_value} or {}}
end

local function run_suite(name,original,rebuilt,make,n,checker)
  local done=0
  for i=1,n do
    local l=make(i)
    local r=make(i)
    assert(l and r and l.args and r.args and l.self and r.self,
           name.." case factory missing")
    assert(graph_equal(l.expected or {},r.expected or {}),
           name.." case factory expected events not deterministic")
    local ok1,value1=pcall(original,l.self,table.unpack(l.args,1,l.args.n))
    local ok2,value2=pcall(rebuilt,r.self,table.unpack(r.args,1,r.args.n))
    local both=ok1==ok2
    if both then
      if ok1 then both=graph_equal(
            baseline(l.self,l.args,l.events,l.aux,value1,true),
            baseline(r.self,r.args,r.events,r.aux,value2,true))
      else
        -- Traceback line numbers and compiled chunk filenames differ.
        -- Exact error message equality is not a valid VM-level metric.
        both=type(value1)==type(value2) and graph_equal(
             baseline(l.self,l.args,l.events,l.aux,nil,false),
             baseline(r.self,r.args,r.events,r.aux,nil,false))
      end
    end
    if both and l.expected then
      both=graph_equal(l.events,l.expected)
    end
    if both and checker then
      both=checker(i,l,r,ok1,value1,ok2,value2)
    end
    if not both then
      error(string.format("R14 %s case%d DIFFERENTIAL: original=%s/%s generated=%s/%s",
          name,i,tostring(ok1),tostring(value1),tostring(ok2),tostring(value2)))
    end
    done=done+1
  end
  print("R14 "..name..": "..done.."/"..n.." original Bytecode vs compiled Haxe PASS")
  return done
end

local function scalar_case(i,key,readback)
  local self={keep="untouched"}
  local inner={extra={nested=11}}
  local value=17
  local events={}
  local aux={inner=inner}
  local expected={}
  if i==1 then value=true
  elseif i==2 then inner[key]=false;value="changed"
  elseif i==3 then inner[key]=23;value=nil
  elseif i==4 then value=1.5
  elseif i==5 then
    local shared={id="shared"}
    value=shared; inner.stored=shared; aux.shared=shared
  elseif i==6 then
    setmetatable(inner,{__newindex=function(t,k,v)
      events[#events+1]="set:"..tostring(k);rawset(t,k,v)
    end})
    expected={"set:"..key}
    value=false
  elseif i==7 then
    setmetatable(inner,{
      __newindex=function(t,k,v) events[#events+1]="intercept:"..tostring(k) end,
      __index=function(t,k)
        events[#events+1]="read:"..tostring(k)
        return "fallback"
      end
    })
    expected=readback and {"intercept:"..key,"read:"..key}
                      or {"intercept:"..key}
    value=2
  elseif i==8 then
    setmetatable(inner,{__newindex=function(t,k,v)
      events[#events+1]="error:"..tostring(k)
      error("intentional R14 write failure",0)
    end})
    expected={"error:"..key}
    value=9
  elseif i==9 then
    self=setmetatable({keep="untouched"},{
      __index=function(t,k)
        events[#events+1]="outer:"..tostring(k)
        return inner
      end
    })
    expected=readback and {"outer:22","outer:22"} or {"outer:22"}
    value="alias"
  elseif i==10 then self[22]=nil;value="error"
  elseif i==11 then self[22]=false;value=11
  elseif i==12 then value=self;inner.alias=self
  else error("bad field case index") end
  -- For cases 9/10/11, no raw self[22] should exist.
  if i~=9 and i~=10 and i~=11 then self[22]=inner end
  return {self=self,args=table.pack(value),events=events,aux=aux,expected=expected}
end

local proto_event="C84BB2B6259521D93"
local a=run_suite("dynamic_SET_FIELD_return_arg",native(670),
  generated(proto_event,"FA44A9D9B3415C01C"),
  function(i)return scalar_case(i,"callFromReserve",false) end,12)
local b=run_suite("dynamic_SET_FIELD_then_GETFIELD",native(674),
  generated(proto_event,"F275008C3DA7BD42B"),
  function(i)return scalar_case(i,"disableFieldCamera",true) end,12)

local function multi_case(i)
  local self={keep={deep={a=1,b=2}}}
  local events={}
  local aux={}
  local expected={}
  local first=11
  local second=22
  if i==1 then
    -- default two new numeric slots
  elseif i==2 then first=false;second=nil
  elseif i==3 then
    local shared={id="one",nested={id=3}}
    first=shared; second=shared; aux.shared=shared
  elseif i==4 then
    first=self;second={ref=self};aux.outer=self
  elseif i==5 then
    self[36]="old";self[37]=true;first="new";second=false
    setmetatable(self,{__newindex=function(_,k)events[#events+1]="unexpected:"..tostring(k) end})
  elseif i==6 then
    setmetatable(self,{__newindex=function(t,k,v)
      events[#events+1]="raw:"..tostring(k)
      rawset(t,k,v)
    end})
    expected={"raw:36","raw:37"}
  elseif i==7 then
    setmetatable(self,{__newindex=function(t,k,v)
      events[#events+1]="intercept:"..tostring(k)
      if k==37 then rawset(t,k,v) end
    end})
    expected={"intercept:36","intercept:37"}
  elseif i==8 then
    setmetatable(self,{__newindex=function(t,k,v)
      events[#events+1]="event:"..tostring(k)
      if k==37 then error("error on second write",0) end
      rawset(t,k,v)
    end})
    expected={"event:36","event:37"}
  elseif i==9 then
    setmetatable(self,{__newindex=function(t,k,v)
      events[#events+1]="error:"..tostring(k)
      error("error on first write",0)
    end})
    expected={"error:36"}
  elseif i==10 then
    local shadow={}
    aux.shadow=shadow
    setmetatable(self,{__newindex=function(t,k,v)
      events[#events+1]="shadow:"..tostring(k)
      rawset(shadow,k,v)
    end})
    expected={"shadow:36","shadow:37"}
  elseif i==11 then
    setmetatable(self,{__index=function(_,k)
      events[#events+1]="unexpected_index:"..tostring(k)
      return "unused"
    end})
    expected={}
  elseif i==12 then
    setmetatable(self,{__newindex=function(t,k,v)
      events[#events+1]="cascade:"..tostring(k)
      rawset(t,37,"prewritten")
      rawset(t,k,v)
    end})
    expected={"cascade:36"}
  else error("bad multi case") end
  return {self=self,args=table.pack(first,second),
          events=events,aux=aux,expected=expected}
end

local c=run_suite("two_SETI_ordered_alias_event_snapshots",native(6088),
  generated("C2391C1B3E531D954","FB84018749A6E841C"),
  multi_case,12,
  function(i,l,r,ok1,val1,ok2,val2)
    if i==3 then
      return rawequal(rawget(l.self,36),rawget(l.self,37)) and
             rawequal(rawget(r.self,36),rawget(r.self,37))
    elseif i==8 then
      return not ok1 and rawget(l.self,36)==11 and rawget(l.self,37)==nil
    elseif i==9 then
      return not ok1 and rawget(l.self,36)==nil and rawget(l.self,37)==nil
    end
    return true
  end)

local branch_values={
  {1,true},{3,true},{0,false},{2,false},{-1,false},
  {4,false},{1.0,true},{3.0,true},{math.huge,false},
  {0/0,false},{"1",false},{false,false},{nil,false}
}
local d=run_suite("two_EQI_short_circuit_branches",native(8129),
  generated("C4F1A34491D82F27A","F6AB89754286E2CDB"),
  function(i)
    local value,expected=branch_values[i][1],branch_values[i][2]
    return {self={keep="outer"},args=table.pack(value),events={},
            aux={},expected={},expected_result=expected}
  end,13,
  function(i,l,r,ok1,v1,ok2,v2)
    return ok1 and ok2 and type(v1)=="boolean" and type(v2)=="boolean"
         and v1==l.expected_result and v2==r.expected_result
  end)

assert(a==12 and b==12 and c==12 and d==13)
local f=assert(io.open(report,"w"))
f:write("DYNAMIC_SET_RETURN=12/12\n")
f:write("DYNAMIC_SET_READBACK=12/12\n")
f:write("DOUBLE_SET_ALIAS_GRAPH=12/12\n")
f:write("TWO_EQI_BRANCH=13/13\n")
f:write("R14_NEW_TOTAL=49/49\n")
f:close()
print("R14 original Lua54 vs ZAScripts Haxe: 4 methods, 49/49; previous 280 regress separately")
