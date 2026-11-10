/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf96e4; name: FUN_00cf96e4
 */


void FUN_00cf96e4(undefined8 param_1,char *param_2,long *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *__dest;
  char acStack_b0 [128];
  char *local_18;
  
  sVar1 = strlen(param_2);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + *(uint *)*param_3 + 0x10 & 0xfffffffffffffff0));
  local_18 = pcVar2;
  *pcVar2 = '\0';
  __dest = strcat(pcVar2,param_2);
  pcVar2 = (char *)0x0;
  if (*param_3 != 0) {
    pcVar2 = (char *)(*param_3 + 4);
  }
  strcat(__dest,pcVar2);
  FUN_00cf9768(param_1,&local_18);
  return;
}


