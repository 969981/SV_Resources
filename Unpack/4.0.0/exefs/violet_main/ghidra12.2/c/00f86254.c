/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f86254; name: FUN_00f86254
 */


void FUN_00f86254(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  size_t sVar2;
  char *__dest;
  char acStack_c0 [128];
  char *local_28;
  
  __dest = acStack_c0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) +
                    *(long *)(param_4 + 0x10) + 0x12U & 0xfffffffffffffff0));
  local_28 = __dest;
  *__dest = '\0';
  pcVar1 = strcat(__dest,*(char **)(param_2 + 8));
  sVar2 = strlen(pcVar1);
  (__dest + sVar2)[0] = '_';
  (__dest + sVar2)[1] = '\0';
  pcVar1 = strcat(__dest,*(char **)(param_3 + 8));
  sVar2 = strlen(pcVar1);
  (__dest + sVar2)[0] = '_';
  (__dest + sVar2)[1] = '\0';
  strcat(__dest,*(char **)(param_4 + 8));
  FUN_00cf9768(param_1,&local_28);
  return;
}


