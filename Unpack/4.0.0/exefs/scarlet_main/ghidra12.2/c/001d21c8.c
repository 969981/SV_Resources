/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d21c8; name: FUN_001d21c8
 */


bool FUN_001d21c8(long param_1)

{
  if (*(long *)(param_1 + 0x658) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x658) + 0x4020) != 2;
}


