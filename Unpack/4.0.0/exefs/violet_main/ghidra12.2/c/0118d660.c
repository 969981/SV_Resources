/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118d660; name: FUN_0118d660
 */


void FUN_0118d660(undefined8 param_1,long param_2)

{
  long lVar1;
  size_t sVar2;
  char *__s;
  char acStack_b0 [128];
  char *local_18;
  
  lVar1 = 0x80 - (*(long *)(param_2 + 0x10) + 0x16U & 0xfffffffffffffff0);
  __s = acStack_b0 + lVar1;
  local_18 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,"exist_",7);
  strcat(__s,*(char **)(param_2 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


