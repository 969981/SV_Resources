/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e5370; name: FUN_001e5370
 */


undefined4 FUN_001e5370(int param_1)

{
  if (param_1 - 5U < 4) {
    return *(undefined4 *)(&DAT_03caaf70 + (long)(int)(param_1 - 5U) * 4);
  }
  return 3;
}


