/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030369a0; name: _INIT_815
 */


void _INIT_815(void)

{
  if ((DAT_04872fb8 & 1) == 0) {
    DAT_04872fb0 = 0;
    DAT_04872fa0 = 1;
    DAT_04872fa8 = FUN_030369e4;
    DAT_04872fb8 = 1;
    DAT_04872f98 = PTR_DAT_047e4e78 + 0x10;
  }
  return;
}


