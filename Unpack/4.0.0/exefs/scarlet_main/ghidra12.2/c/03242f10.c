/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242f10; name: _INIT_1701
 */


void _INIT_1701(void)

{
  if ((DAT_04885d90 & 1) == 0) {
    DAT_04885b58 = 1;
    DAT_04885b50 = &PTR_LAB_046ac8d0;
    DAT_04885d90 = 1;
  }
  return;
}


