/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a580; name: _INIT_1425
 */


void _INIT_1425(void)

{
  if ((DAT_0487cd30 & 1) == 0) {
    DAT_0487cd18 = 1;
    DAT_0487cd20 = FUN_0317a5ec;
    DAT_0487cd28 = 0;
    DAT_0487cd10 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487cd10,&PTR_LOOP_04483000);
    DAT_0487cd30 = 1;
  }
  return;
}


