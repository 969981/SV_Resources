/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003c3900; name: FUN_003c3900
 */


bool FUN_003c3900(long param_1)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    return *(int *)(param_1 + 0x48) == 0;
  }
  return false;
}


