/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014671a8; name: FUN_014671a8
 */


void FUN_014671a8(undefined8 param_1,long param_2,char *param_3,long param_4,undefined8 *param_5)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char acStack_60 [8];
  char *local_58;
  
  lVar4 = *(long *)(param_2 + 0x10);
  sVar1 = strlen(param_3);
  lVar5 = *(long *)(param_4 + 0x10);
  sVar2 = strlen((char *)*param_5);
  pcVar3 = acStack_60 + -(lVar4 + sVar1 + lVar5 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_58 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,*(char **)(param_2 + 8));
  pcVar3 = strcat(pcVar3,param_3);
  pcVar3 = strcat(pcVar3,*(char **)(param_4 + 8));
  strcat(pcVar3,(char *)*param_5);
  FUN_00cf9768(param_1,&local_58);
  return;
}


