/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118eed0; name: FUN_0118eed0
 */


void FUN_0118eed0(undefined8 param_1,long param_2)

{
  long lVar1;
  size_t sVar2;
  char *__s;
  char acStack_b0 [128];
  char *local_18;
  
  lVar1 = 0x80 - (*(long *)(param_2 + 0x10) + 0x13U & 0xfffffffffffffff0);
  __s = acStack_b0 + lVar1;
  local_18 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,"sys",4);
  strcat(__s,*(char **)(param_2 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


