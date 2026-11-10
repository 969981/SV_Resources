/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b7a064; name: FUN_02b7a064
 */


undefined8 FUN_02b7a064(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  if (*(int *)(param_1 + 0x3c) != 1) {
    lVar1 = 0x28;
  }
  return *(undefined8 *)(param_1 + lVar1);
}


