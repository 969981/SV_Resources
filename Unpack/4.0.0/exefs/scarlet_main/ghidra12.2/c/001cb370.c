/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb370; name: FUN_001cb370
 */


byte FUN_001cb370(uint param_1)

{
  if (param_1 < 0x80) {
    return (&DAT_03cc05ae)[param_1] & 0x20;
  }
  return 0;
}


