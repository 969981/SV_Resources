/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003c4910; name: FUN_003c4910
 */


bool FUN_003c4910(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x3d0) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x5c) != 0x24;
}


