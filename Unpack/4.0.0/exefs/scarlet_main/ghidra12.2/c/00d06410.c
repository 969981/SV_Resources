/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d06410; name: FUN_00d06410
 */


void FUN_00d06410(undefined8 param_1,undefined8 *param_2)

{
  uint *__src;
  char *__dest;
  uint *puVar1;
  char acStack_a0 [128];
  char *local_8;
  
  puVar1 = (uint *)*param_2;
  __dest = acStack_a0 + (0x80 - ((ulong)*puVar1 + 0x10 & 0x1fffffff0));
  __src = (uint *)0x0;
  if (puVar1 != (uint *)0x0) {
    __src = puVar1 + 1;
  }
  local_8 = __dest;
  *__dest = '\0';
  strcat(__dest,(char *)__src);
  FUN_00cf9768(param_1,&local_8);
  return;
}


