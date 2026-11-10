/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb5eb4; name: FUN_01fb5eb4
 */


undefined4 FUN_01fb5eb4(int param_1)

{
  if (param_1 - 2U < 8) {
    return *(undefined4 *)(&DAT_03cbf220 + (long)(int)(param_1 - 2U) * 4);
  }
  return 0;
}


