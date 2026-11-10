/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0c37c; name: FUN_00d0c37c
 */


void FUN_00d0c37c(undefined8 param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_b0 [128];
  char *local_18;
  
  sVar2 = strlen(param_2);
  lVar1 = 0x80 - (sVar2 + 0x14 & 0xfffffffffffffff0);
  pcVar3 = acStack_b0 + lVar1;
  local_18 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  sVar2 = strlen(pcVar3);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,"main",5);
  FUN_00cf9768(param_1,&local_18);
  return;
}


