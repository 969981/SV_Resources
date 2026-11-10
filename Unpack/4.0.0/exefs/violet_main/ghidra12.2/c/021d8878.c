/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d8878; name: FUN_021d8878
 */


void FUN_021d8878(undefined8 param_1,long param_2)

{
  size_t sVar1;
  char *__s;
  char acStack_b0 [128];
  char *local_18;
  
  __s = acStack_b0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x11U & 0xfffffffffffffff0));
  local_18 = __s;
  *__s = '\0';
  sVar1 = strlen(__s);
  (__s + sVar1)[0] = '*';
  (__s + sVar1)[1] = '\0';
  strcat(__s,*(char **)(param_2 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


