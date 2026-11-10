/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b0c0; name: _INIT_1075
 */


void _INIT_1075(void)

{
  if ((DAT_048789b8 & 1) == 0) {
    DAT_048789a0 = 1;
    DAT_048789a8 = FUN_0314ae4c;
    DAT_048789b0 = 0;
    DAT_04878998 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04878998,&PTR_LOOP_04483000);
    DAT_048789b8 = 1;
  }
  return;
}


