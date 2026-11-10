/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003778c0; name: FUN_003778c0
 */


bool FUN_003778c0(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return *(long *)(param_1 + 0xe0) == 0x7fffffffffffffff;
  }
  return false;
}


