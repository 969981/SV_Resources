/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd7c4; name: FUN_007fd7c4
 */


bool FUN_007fd7c4(long param_1)

{
  if (*(int *)(param_1 + 0x13e0) == 2) {
    return *(int *)(param_1 + 0x13b0) - 2U < 3;
  }
  return false;
}


