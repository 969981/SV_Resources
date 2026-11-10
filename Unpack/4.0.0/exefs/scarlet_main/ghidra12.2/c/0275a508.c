/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275a508; name: FUN_0275a508
 */


bool FUN_0275a508(long param_1)

{
  if (*(short *)(param_1 + 0xd0) == -1) {
    return false;
  }
  return *(short *)(param_1 + 0xd2) != -1;
}


