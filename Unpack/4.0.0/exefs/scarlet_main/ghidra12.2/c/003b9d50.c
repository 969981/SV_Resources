/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b9d50; name: FUN_003b9d50
 */


bool FUN_003b9d50(long param_1)

{
  if (*(int *)(param_1 + 0x1b0) != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x150) == 0) {
    return *(long *)(param_1 + 0x228) != 0;
  }
  return true;
}


