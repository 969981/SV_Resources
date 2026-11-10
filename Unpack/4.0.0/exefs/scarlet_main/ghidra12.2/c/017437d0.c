/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017437d0; name: FUN_017437d0
 */


void FUN_017437d0(undefined8 param_1)

{
  size_t sVar1;
  char *param4;
  char *__s;
  char acStack_130 [255];
  undefined1 local_31;
  
  __s = *(char **)(*(long *)PTR_DAT_047d90c8 + 8);
  sVar1 = strlen(__s);
  param4 = "";
  if ((sVar1 != 0) && (param4 = "", __s[sVar1 - 1] != '/')) {
    param4 = "/";
  }
  snprintf(acStack_130,0xff,"%s%s%s",__s,param4,"waza_array.bin");
  local_31 = 0;
  FUN_01745788(param_1,acStack_130);
  return;
}


