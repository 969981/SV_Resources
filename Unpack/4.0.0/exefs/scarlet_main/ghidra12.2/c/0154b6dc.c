/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b6dc; name: FUN_0154b6dc
 */


uint FUN_0154b6dc(uint param_1)

{
  if (param_1 < 3) {
    return 3U >> (ulong)(param_1 & 7) & 1;
  }
  return 0;
}


