/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291c2bc; name: FUN_0291c2bc
 */


void FUN_0291c2bc(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  char acStack_30 [8];
  char *local_28;
  
  sVar1 = strlen(param_2);
  __dest = acStack_30 + -(sVar1 + 0x10 & 0xfffffffffffffff0);
  local_28 = __dest;
  *__dest = '\0';
  strcat(__dest,param_2);
  FUN_00cf9768(param_1,&local_28);
  return;
}


