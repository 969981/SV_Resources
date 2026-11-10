-- Compare exact ORIGINAL SV400 child instruction bodies against Haxe 4.3.1
-- HashAbi/LuaOutput-produced functions. No game engine, no modified source BLUA.
-- Usage: lua compare.lua TMP_NATIVE_DIR ZA_MAIN_LUA ZA_DLL_UTIL_LUA REPORT_JSON
local native_dir,main_path,dll_path,report_path=arg[1],arg[2],arg[3],arg[4]
assert(native_dir and main_path and dll_path and report_path, "all four paths required")
-- Keep host runtime adaptation explicit and identical for BOTH method versions.
package.preload["lua-utf8"]=function() return utf8 end
math.atan2=math.atan
lua_helper={createtable=function() return {} end}

local function load_module(path)
  local body=assert(loadfile(path,"t",_G))
  local exports=body()
  assert(type(exports)=="table","Haxe compiled module returned no export table")
  return exports
end

local main_export=load_module(main_path)
local dll_export=load_module(dll_path)

local function generated(exports,cls,method)
  assert(type(exports[cls])=="table","missing exported hashed Haxe class: "..cls)
  local fn=exports[cls][method]
  assert(type(fn)=="function","missing exported hashed Haxe method: "..method)
  return fn
end

local function native(name)
  local fn=assert(loadfile(native_dir.."/"..name..".luac","b",_G))
  assert(type(fn)=="function","native BLUA fixture not loadable: "..name)
  return fn
end

local functions={
  CalcXFov={
    native=native("CalcXFov"),
    compiled=generated(main_export,"CFEA9C3BFB3FCD429","S424E3EA0446070E7"),
    cases={{0.1},{0.3},{0.5},{0.7},{1.0},{1.25},{1.7},{2.4},{3.0},{0.0},{-0.0},{math.pi},{math.huge}},
  },
  Format={
    native=native("Format"),
    compiled=generated(main_export,"C23E5342B132D5323","S042B860498E558B2"),
    cases={
      {"%s:%d","SV",400},
      {"%.3f",1.234567},
      {"%d + %d = %d",2,3,5},
      {"%-7s|%.1f","abc",1.25},
      {"%02X",255},
      {"%s","hello"},
      {"%f",-0.0},
      {"%5d",0},
    },
  },
  Clamp={
    native=native("Clamp"),
    compiled=generated(dll_export,"CED59418C4CAB0EC4","S05B90B9B5A6DE6BC"),
    cases={
      {1.5,0,1},{-1,0,1},{0.5,0,1},{1,0,1},{0,0,1},
      {3,5,2},{math.huge,0,1},{-math.huge,0,1},
      {0,1,1},{-0.0,-0.0,1},
      {0/0,0,1},
    },
  },
}
local function scalar_equal(a,b)
  if type(a)~=type(b) then return false end
  if type(a)=="number" then
    if a~=a and b~=b then return true end -- both NaN
    if a==0 and b==0 then return (1/a)==(1/b) end -- preserve signed zero
    if a==b then return true end
    if math.abs(a-b)<=1e-12*(1+math.max(math.abs(a),math.abs(b))) then return true end
    return false
  end
  return a==b
end
local function display(value)
  if type(value)=="number" then
    if value~=value then return "NaN" end
    if value==0 and 1/value<0 then return "-0" end
    return string.format("%.17g",value)
  end
  return tostring(value)
end
local function json_escape(s)
  return (s:gsub("\\","\\\\"):gsub('"','\\"'):gsub("\n","\\n"):gsub("\r","\\r"))
end
local method_names={"CalcXFov","Format","Clamp"}
local output,failed={},false
for _,name in ipairs(method_names) do
  local entry=functions[name]
  local pass=0
  local errors={}
  for index,input in ipairs(entry.cases) do
    local before_ok,before=pcall(entry.native,table.unpack(input))
    local after_ok,after=pcall(entry.compiled,table.unpack(input))
    if not before_ok or not after_ok or not scalar_equal(before,after) then
      failed=true
      local msg=string.format("%s case %d: native[%s]=%s; regenerated[%s]=%s",
        name,index,tostring(before_ok),display(before),tostring(after_ok),display(after))
      table.insert(errors,msg)
      io.stderr:write("DIFF: "..msg.."\n")
    else
      pass=pass+1
    end
  end
  io.stdout:write(string.format("%s: %d/%d parity cases\n",name,pass,#entry.cases))
  local details=table.concat((function()
    local x={}
    for _,e in ipairs(errors) do x[#x+1]='"'..json_escape(e)..'"' end
    return x
  end)(),",")
  table.insert(output,string.format('{"name":"%s","passed":%d,"cases":%d,"errors":[%s]}',
        name,pass,#entry.cases,details))
end
local file=assert(io.open(report_path,"w"))
file:write('{"status":"',failed and "FAIL" or "PASS",
           '","comparison":"UNMODIFIED_SV400_CHILD_BYTECODE_VS_PINNED_ZASCRIPTS_HAXE_LUA",',
           '"runtime":"STANDALONE_LUA_5_4_3_WITH_EXPLICIT_SHIMS",',
           '"game_runtime":"NOT_OBSERVED","methods":[',table.concat(output,","),"]}\n")
file:close()
if failed then error("Original SV400 native/Haxe Lua differential failed") end
