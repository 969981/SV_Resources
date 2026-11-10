/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149e20; name: _INIT_1033
 */


void _INIT_1033(void)

{
  if ((DAT_04878328 & 1) == 0) {
    DAT_04878310 = 1;
    DAT_04878318 = FUN_03149e8c;
    DAT_04878320 = 0;
    DAT_04878308 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04878308,&PTR_LOOP_04483000);
    DAT_04878328 = 1;
  }
  return;
}


