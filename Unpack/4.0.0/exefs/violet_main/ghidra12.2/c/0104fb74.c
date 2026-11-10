/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0104fb74; name: FUN_0104fb74
 */


void FUN_0104fb74(undefined8 param_1,long param_2,char *param_3,long param_4)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  char acStack_c0 [128];
  char *local_28;
  
  lVar3 = *(long *)(param_2 + 0x10);
  sVar1 = strlen(param_3);
  pcVar2 = acStack_c0 +
           (0x80 - (lVar3 + sVar1 + *(long *)(param_4 + 0x10) + 0x10 & 0xfffffffffffffff0));
  local_28 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  pcVar2 = strcat(pcVar2,param_3);
  strcat(pcVar2,*(char **)(param_4 + 8));
  FUN_00cf9768(param_1,&local_28);
  return;
}


