/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d3f34; name: FUN_007d3f34
 */


bool FUN_007d3f34(long param_1)

{
  if (*(int *)(param_1 + 0x98) == 2) {
    return *(int *)(param_1 + 0x68) - 2U < 3;
  }
  return false;
}


