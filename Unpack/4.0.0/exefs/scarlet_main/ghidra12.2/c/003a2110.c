/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2110; name: FUN_003a2110
 */


long FUN_003a2110(long *param_1)

{
  if (param_1[1] == 0) {
    return *(long *)(*param_1 + 8) + param_1[2];
  }
  return param_1[1] + param_1[2];
}


