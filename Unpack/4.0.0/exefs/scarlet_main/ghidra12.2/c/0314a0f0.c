/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a0f0; name: _INIT_1037
 */


void _INIT_1037(void)

{
  if ((DAT_048783c8 & 1) == 0) {
    DAT_048783b0 = 1;
    DAT_048783b8 = FUN_03149e8c;
    DAT_048783c0 = 0;
    DAT_048783a8 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048783a8,&PTR_LOOP_04483000);
    DAT_048783c8 = 1;
  }
  return;
}


