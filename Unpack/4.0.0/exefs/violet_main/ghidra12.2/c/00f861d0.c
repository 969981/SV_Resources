/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f861d0; name: FUN_00f861d0
 */


void FUN_00f861d0(undefined8 param_1,long param_2,long param_3)

{
  char *__s;
  size_t sVar1;
  char *__dest;
  char acStack_b0 [128];
  char *local_18;
  
  __dest = acStack_b0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) + 0x11U &
                   0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  __s = strcat(__dest,*(char **)(param_2 + 8));
  sVar1 = strlen(__s);
  (__dest + sVar1)[0] = '_';
  (__dest + sVar1)[1] = '\0';
  strcat(__dest,*(char **)(param_3 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


