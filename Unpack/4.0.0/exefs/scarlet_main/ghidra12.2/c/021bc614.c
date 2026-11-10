/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021bc614; name: FUN_021bc614
 */


void FUN_021bc614(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char acStack_40 [8];
  char *local_38;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  sVar2 = strlen(param_3);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,__s);
  strcat(pcVar3,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


