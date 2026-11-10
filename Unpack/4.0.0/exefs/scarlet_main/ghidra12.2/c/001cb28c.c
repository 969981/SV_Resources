/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb28c; name: FUN_001cb28c
 */


byte FUN_001cb28c(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_03cc05ae)[param_1] & 4;
  }
  return 0;
}


