/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018462ec; name: FUN_018462ec
 */


void FUN_018462ec(undefined8 param_1,long param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  char acStack_40 [8];
  char *local_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  sVar1 = strlen(param_3);
  pcVar2 = acStack_40 + -(lVar3 + sVar1 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  strcat(pcVar2,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


