/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00302e90; name: FUN_00302e90
 */


bool FUN_00302e90(long *param_1)

{
  if (*param_1 == 0) {
    return true;
  }
  return param_1[4] == param_1[2];
}


