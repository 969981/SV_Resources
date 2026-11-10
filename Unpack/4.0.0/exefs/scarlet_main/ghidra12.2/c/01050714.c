/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01050714; name: FUN_01050714
 */


void FUN_01050714(undefined8 param_1,long param_2)

{
  char *__src;
  char *__dest;
  char acStack_a0 [128];
  char *local_8;
  
  __src = *(char **)(param_2 + 8);
  __dest = acStack_a0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x10U & 0xfffffffffffffff0));
  local_8 = __dest;
  *__dest = '\0';
  strcat(__dest,__src);
  FUN_00cf9768(param_1,&local_8);
  return;
}


