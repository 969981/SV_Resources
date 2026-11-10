/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210f424; name: FUN_0210f424
 */


void FUN_0210f424(undefined8 param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  char acStack_40 [8];
  char *local_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  sVar1 = strlen((char *)*param_3);
  pcVar2 = acStack_40 + -(lVar3 + sVar1 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,*(char **)(param_2 + 8));
  strcat(pcVar2,(char *)*param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


