/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148640; name: _INIT_962
 */


void _INIT_962(void)

{
  if ((DAT_04877810 & 1) == 0) {
    DAT_048777f8 = 1;
    DAT_04877800 = FUN_031486ac;
    DAT_04877808 = 0;
    DAT_048777f0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048777f0,&PTR_LOOP_04483000);
    DAT_04877810 = 1;
  }
  return;
}


