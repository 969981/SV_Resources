/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e53588; name: FUN_00e53588
 */


void FUN_00e53588(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *__dest;
  char *__s;
  char acStack_30 [8];
  char *local_28;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  __dest = acStack_30 + -(sVar1 + 0x10 & 0xfffffffffffffff0);
  local_28 = __dest;
  *__dest = '\0';
  strcat(__dest,__s);
  FUN_00cf9768(param_1,&local_28);
  return;
}


