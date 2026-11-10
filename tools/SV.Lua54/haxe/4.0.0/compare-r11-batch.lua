-- Original SV Violet 4.0.0 native Child Proto vs fixed ZAScripts Haxe Lua.
-- This file is a TEMPLATE: CI replaces the method-row marker from a strictly
-- authenticated PokeDocs C/F -> Root PC -> original child Proto report.
-- Test inputs compare nil/bool/number/string, and distinguish Lua integer/float.
-- No engine, no mutable state, no original BLUA published.
local native_dir, generated_path, report_path = arg[1], arg[2], arg[3]
assert(native_dir and generated_path and report_path, "paths required")
package.preload["lua-utf8"] = function() return utf8 end
math.atan2 = math.atan
lua_helper = {createtable=function() return {} end}

local exports = assert(loadfile(generated_path, "t", _G))()
assert(type(exports)=="table", "custom Haxe output did not export classes")
local methods = {
-- <NATIVE_METHOD_ROWS>
}
assert(#methods==59, "R11 must compare exactly 59 newly promoted methods")

local function compare_values(before,after)
  if type(before)~=type(after) then return false, "type mismatch" end
  if type(before)=="number" then
    if math.type(before)~=math.type(after) then
      return false, "Lua integer/float representation mismatch"
    end
    if before~=before and after~=after then return true end
    if before==0 and after==0 then
      return 1/before==1/after,"signed-zero mismatch"
    end
    return before==after,"numeric mismatch"
  end
  if before~=after then return false,"value mismatch" end
  return true
end

local saved=assert(io.open(report_path,"w"))
saved:write("name\tproto\tpassed\tcases\n")
local all_ok=true
local count=0
for _,m in ipairs(methods) do
  local binary=assert(loadfile(native_dir.."/"..m.file..".luac","b",_G))
  assert(type(binary)=="function", "not a detached original Lua native function")
  local class=assert(exports[m.c],"missing C class "..m.c)
  local prototype=assert(class.prototype,"missing native C prototype "..m.c)
  local generated=assert(prototype[m.f],"missing F method "..m.f)
  assert(type(generated)=="function","F member is not Lua function")
  local sample_self={{},13,"hello"}
  local passed=0
  for idx,self in ipairs(sample_self) do
    local orig_ok,orig_value=pcall(binary,self)
    local regen_ok,regen_value=pcall(generated,self)
    local same,why=compare_values(orig_value,regen_value)
    if orig_ok and regen_ok and same then
      passed=passed+1
    else
      all_ok=false
      io.stderr:write(string.format(
        "R11_DIFF %s case%d: native ok=%s val=%s, Haxe ok=%s val=%s, reason=%s\n",
        m.name,idx,tostring(orig_ok),tostring(orig_value),
        tostring(regen_ok),tostring(regen_value),tostring(why)))
    end
  end
  count=count+passed
  saved:write(m.name.."\t"..m.file.."\t"..passed.."\t3\n")
  if passed~=3 then all_ok=false end
end
saved:close()
print(string.format("R11 native-vs-Haxe Lua 5.4.3: methods=%d, cases=%d/177",
  #methods,count))
if not all_ok or count~=177 then error("R11 original Lua bytecode differential FAILED") end
