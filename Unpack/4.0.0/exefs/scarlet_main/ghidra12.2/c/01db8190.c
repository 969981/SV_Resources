/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db8190; name: FUN_01db8190
 */


void FUN_01db8190(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_40 [8];
  char *local_38;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  strcat(pcVar3,(char *)*param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


