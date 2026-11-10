/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00daf8b8; name: FUN_00daf8b8
 */


void FUN_00daf8b8(undefined8 param_1,long param_2,int param_3)

{
  size_t __n;
  char *pcVar1;
  char acStack_30 [8];
  char *local_28;
  
  if (0 < param_3) {
    __n = *(long *)(param_2 + 0x10) - 5;
    if (__n != 0) {
      local_28 = acStack_30 + -(*(long *)(param_2 + 0x10) + 0xbU & 0xfffffffffffffff0);
      pcVar1 = strncpy(local_28,*(char **)(param_2 + 8),__n);
      pcVar1[__n] = '\0';
      FUN_00cf9768(param_1,&local_28);
      return;
    }
  }
  FUN_00daf940(param_1,param_2);
  return;
}


