/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cd694; name: FUN_034cd694
 */


void FUN_034cd694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_034cbfe4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x58),param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


