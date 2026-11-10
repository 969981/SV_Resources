/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01745440; name: FUN_01745440
 */


void FUN_01745440(undefined8 param_1)

{
  size_t sVar1;
  char *param4;
  char *__s;
  char acStack_130 [255];
  undefined1 local_31;
  
  __s = *(char **)(*(long *)PTR_DAT_047d90c8 + 0x18);
  sVar1 = strlen(__s);
  param4 = "";
  if ((sVar1 != 0) && (param4 = "", __s[sVar1 - 1] != '/')) {
    param4 = "/";
  }
  snprintf(acStack_130,0xff,"%s%s%s",__s,param4,"growTable.bin");
  local_31 = 0;
  FUN_01745788(param_1,acStack_130);
  return;
}


