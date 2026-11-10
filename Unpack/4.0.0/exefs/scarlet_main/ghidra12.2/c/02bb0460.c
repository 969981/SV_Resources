/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bb0460; name: FUN_02bb0460
 */


void FUN_02bb0460(undefined8 param_1,long param_2,long param_3,char *param_4)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  char acStack_50 [8];
  char *local_48;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_3 + 0x10);
  sVar1 = strlen(param_4);
  pcVar2 = acStack_50 + -(lVar3 + lVar4 + sVar1 + 0x10 & 0xfffffffffffffff0);
  local_48 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  pcVar2 = strcat(pcVar2,*(char **)(param_3 + 8));
  strcat(pcVar2,param_4);
  FUN_00cf9768(param_1,&local_48);
  return;
}


