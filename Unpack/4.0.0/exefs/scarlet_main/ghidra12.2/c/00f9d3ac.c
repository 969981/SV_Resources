/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9d3ac; name: FUN_00f9d3ac
 */


void FUN_00f9d3ac(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  char acStack_b0 [128];
  char *local_18;
  
  pcVar3 = (char *)*param_2;
  sVar2 = strlen(pcVar3);
  lVar1 = 0x80 - (sVar2 + 0x15 & 0xfffffffffffffff0);
  __dest = acStack_b0 + lVar1;
  local_18 = __dest;
  *__dest = '\0';
  pcVar3 = strcat(__dest,pcVar3);
  sVar2 = strlen(pcVar3);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,".bnsh",6);
  FUN_00cf9768(param_1,&local_18);
  return;
}


