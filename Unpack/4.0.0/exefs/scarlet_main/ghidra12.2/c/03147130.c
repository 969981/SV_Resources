/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147130; name: _INIT_922
 */


void _INIT_922(void)

{
  if ((DAT_048771d0 & 1) == 0) {
    DAT_048771b8 = 1;
    DAT_048771c0 = FUN_0314719c;
    DAT_048771c8 = 0;
    DAT_048771b0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048771b0,&PTR_LOOP_04483000);
    DAT_048771d0 = 1;
  }
  return;
}


