/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed574; name: FUN_001ed574
 */


void FUN_001ed574(byte *param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (&DAT_03cc1218)[*param_1];
    param_1 = param_1 + 1;
  }
  return;
}


