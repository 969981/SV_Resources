/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080ef14; name: FUN_0080ef14
 */


uint FUN_0080ef14(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0xae0) != '\0') || (*(long *)(param_1 + 0xac8) == 0)) {
    return 0;
  }
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return (uVar1 ^ 1) & 1;
}


