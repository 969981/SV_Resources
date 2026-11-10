/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e8614; name: FUN_021e8614
 */


void FUN_021e8614(undefined8 param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_b0 [128];
  char *local_18;
  
  sVar2 = strlen(param_2);
  lVar1 = 0x80 - (sVar2 + 0x16 & 0xfffffffffffffff0);
  pcVar3 = acStack_b0 + lVar1;
  local_18 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  sVar2 = strlen(pcVar3);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,"backup",7);
  FUN_00cf9768(param_1,&local_18);
  return;
}


