/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a2f0; name: _INIT_1043
 */


void _INIT_1043(void)

{
  if ((DAT_048784b8 & 1) == 0) {
    DAT_048784a0 = 1;
    DAT_048784a8 = FUN_0314a35c;
    DAT_048784b0 = 0;
    DAT_04878498 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04878498,&PTR_LOOP_04483000);
    DAT_048784b8 = 1;
  }
  return;
}


