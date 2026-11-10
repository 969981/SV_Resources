/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00124ef0; name: FUN_00124ef0
 */


void FUN_00124ef0(long param_1,char *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  char *pcVar2;
  void *pvVar3;
  size_t sVar4;
  
  sVar1 = strlen(param_3);
  pcVar2 = strstr(param_2,param_3);
  if (pcVar2 != (char *)0x0) {
    do {
      sVar4 = (long)pcVar2 - (long)param_2;
      if (sVar4 != 0) {
        pvVar3 = (void *)FUN_00124470(param_1,sVar4,0xffffffff);
        memcpy(pvVar3,param_2,sVar4);
        *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + sVar4;
      }
      sVar4 = strlen(param_4);
      if (sVar4 != 0) {
        pvVar3 = (void *)FUN_00124470(param_1,sVar4,0xffffffff);
        memcpy(pvVar3,param_4,sVar4);
        *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + sVar4;
      }
      param_2 = pcVar2 + sVar1;
      pcVar2 = strstr(param_2,param_3);
    } while (pcVar2 != (char *)0x0);
  }
  sVar1 = strlen(param_2);
  if (sVar1 != 0) {
    pvVar3 = (void *)FUN_00124470(param_1,sVar1,0xffffffff);
    memcpy(pvVar3,param_2,sVar1);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + sVar1;
  }
  return;
}


