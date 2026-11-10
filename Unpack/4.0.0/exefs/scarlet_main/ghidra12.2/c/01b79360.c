/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b79360; name: FUN_01b79360
 */


void FUN_01b79360(uint param_1)

{
  if (0x62 < param_1) {
    param_1 = 99;
  }
  *(char *)(DAT_04840ac0 + 0x78) = (char)param_1;
  return;
}


