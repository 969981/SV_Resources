-- R15 original 4.0.0 Lua54 SELF/CALL/TEST/JMP versus patched Haxe Lua.
-- Injected callback functions are OBSERVABLE MOCKS, NOT Switch engine C++.
-- We compare receiver identity, call sequence, __index/__newindex,
-- joined boolean return, deep alias graph and error-before-return state.
local dir,main_file,report_file=arg[1],arg[2],arg[3]
assert(dir and main_file and report_file,"R15 original fixtures/generated Haxe/report required")
package.preload["lua-utf8"]=function() return utf8 end
math.atan2=math.atan
lua_helper={createtable=function() return {} end}
local classes=assert(loadfile(main_file,"t",_G))()
local function compiled(c,f)
  return assert(assert(assert(classes[c],"class not emitted").prototype)[f],"native Setup F missing")
end
local function original(id)
  return assert(loadfile(dir.."/R15_"..id..".luac","b",_G))
end
local function graph_same(a,b,x2y,y2x)
  if type(a)~=type(b) then return false end
  local t=type(a)
  if t=="number" then
    if math.type(a)~=math.type(b) then return false end
    if a~=a and b~=b then return true end
    if a==0 and b==0 then return 1/a==1/b end
    return a==b
  end
  if t=="function" then
    x2y=x2y or {};y2x=y2x or {}
    if x2y[a]~=nil then return x2y[a]==b end
    if y2x[b]~=nil then return false end
    x2y[a]=b;y2x[b]=a
    return true
  end
  if t~="table" then return a==b end
  x2y=x2y or {};y2x=y2x or {}
  if x2y[a]~=nil then return x2y[a]==b end
  if y2x[b]~=nil then return false end
  x2y[a]=b;y2x[b]=a
  local n1,n2=0,0
  for key,val in next,a do
    n1=n1+1
    if not graph_same(val,rawget(b,key),x2y,y2x) then return false end
  end
  for _ in next,b do n2=n2+1 end
  return n1==n2
end

local first_key="F22C7B81A049FA20D"
local child_key="f558733FC"
local function make(case,slot1,slot2)
  local events={}
  local owner={updateInterval={interval=5},original="kept"}
  local child={key="child"}
  local self={keep="outer",[slot1]=owner,[slot2]=child}
  local aux={owner=owner,child=child}
  local first_result=true
  if case==2 then first_result=false
  elseif case==3 then first_result=nil
  elseif case==4 then first_result=0
  elseif case==5 then first_result=""
  elseif case==9 then owner.component=nil
  elseif case==13 then child=owner;self[slot2]=owner;aux.child=owner
  elseif case==14 then child={key="missing_second"};self[slot2]=child;aux.child=child
  end

  local second=function(receiver,interval)
    events[#events+1]="CALL2"
    events[#events+1]=rawequal(receiver,child) and "SELF2_OK" or "SELF2_BAD"
    events[#events+1]=rawequal(interval,owner.updateInterval)
                     and "ARG_INTERVAL_OK" or "ARG_INTERVAL_BAD"
    if case==12 then error("mock child call threw",0) end
    receiver.called=(receiver.called or 0)+1
    return "ignored"
  end
  if case~=14 then child[child_key]=second end
  local first=function(receiver)
    events[#events+1]="CALL1"
    events[#events+1]=rawequal(receiver,self) and "SELF1_OK" or "SELF1_BAD"
    if case==7 then error("mock first call threw",0) end
    if case==6 then
      events[#events+1]="SWAP_CHILD"
      local alt={key="new_child",[child_key]=second}
      self[slot2]=alt;child=alt;aux.child=alt
    end
    return first_result
  end
  if case~=11 and case~=14 then self[first_key]=first end
  if case==14 then self[first_key]=first end

  if case==8 then
    setmetatable(owner,{__newindex=function(t,k,v)
      events[#events+1]="WRITE:"..tostring(k)
      rawset(t,k,v)
    end})
  elseif case==9 then
    setmetatable(owner,{__newindex=function(_,k,v)
      events[#events+1]="INTERCEPT:"..tostring(k)
    end})
  elseif case==10 then
    setmetatable(owner,{__newindex=function(_,k,v)
      events[#events+1]="WRITE_ERROR:"..tostring(k)
      error("mock SETFIELD failure",0)
    end})
  elseif case==11 then
    setmetatable(self,{__index=function(_,key)
      events[#events+1]="OUTER_INDEX:"..tostring(key)
      if key==first_key then return first end
      return nil
    end})
    setmetatable(child,{__index=function(_,key)
      events[#events+1]="CHILD_INDEX:"..tostring(key)
      if key==child_key then return second end
      return nil
    end})
    child[child_key]=nil
  end
  local truthy=(first_result~=nil and first_result~=false)
  return {self=self,aux=aux,events=events,slot1=slot1,slot2=slot2,
          truthy=truthy,case=case}
end
local function validate_expected(scene,ok,answer)
  local events=scene.events
  if #events<1 or events[1]~="CALL1" then
    if scene.case~=11 then return false end
    if events[1]~="OUTER_INDEX:"..first_key or events[2]~="CALL1" then return false end
  end
  local k=scene.case
  if k==2 or k==3 then return ok and answer==false
                             and rawget(scene.aux.owner,"component")==nil end
  if k==7 then return not ok and rawget(scene.aux.owner,"component")==nil end
  if k==8 then return ok and answer==true and events[3]=="WRITE:component" end
  if k==9 then return ok and answer==true
                       and rawget(scene.aux.owner,"component")==nil end
  if k==10 then return not ok and events[3]=="WRITE_ERROR:component" end
  if k==12 then return not ok and rawget(scene.aux.owner,"component")~=nil end
  if k==14 then return not ok and rawget(scene.aux.owner,"component")~=nil end
  if k==4 or k==5 then return ok and answer==true end
  if k==11 then return ok and answer==true end
  return ok and answer==true
end

local function run(label,id,c,slot1,slot2)
  local n=14
  local f1=original(id)
  local f2=compiled(c,"F7C68FEDB79AB6396")
  local passed=0
  for i=1,n do
    local a=make(i,slot1,slot2)
    local b=make(i,slot1,slot2)
    local ok1,res1=pcall(f1,a.self)
    local ok2,res2=pcall(f2,b.self)
    local same=(ok1==ok2) and (type(res1)==type(res2))
    if ok1 and ok2 then same=same and graph_same(res1,res2) end
    if same then
      same=graph_same({self=a.self,aux=a.aux,events=a.events},
                      {self=b.self,aux=b.aux,events=b.events})
    end
    if same then
      same=validate_expected(a,ok1,res1) and validate_expected(b,ok2,res2)
    end
    if not same then
      io.stderr:write("R15 A/B DIFFERENTIAL "..label.." case "..i
        .." orig="..tostring(ok1).."/"..tostring(res1)
        .." haxe="..tostring(ok2).."/"..tostring(res2).."\n")
      io.stderr:write("orig events "..table.concat(a.events,",").."\n")
      io.stderr:write("haxe events "..table.concat(b.events,",").."\n")
      error("R15 independent original Lua vs Haxe mismatch",0)
    end
    passed=passed+1
  end
  print("R15 "..label..": "..passed.."/"..n.." mocked native CALL/alias/CFG PASS")
  return passed
end

local a=run("IAction.Setup",12930,"C4247142D7AED2C4E",10,12)
local b=run("IAutoAction.Setup",13197,"C86D7C25BE8F75289",2,4)
assert(a==14 and b==14)
local out=assert(io.open(report_file,"w"))
out:write("R15_IACTION_SETUP=14/14\nR15_IAUTOACTION_SETUP=14/14\nR15_MOCKED_CALL_TOTAL=28/28\n")
out:close()
print("R15 native vs Haxe: 28/28 mocked host CALL differential; engine runtime NOT_OBSERVED")
