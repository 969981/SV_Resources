/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178ff0; name: _INIT_1400
 */


void _INIT_1400(void)

{
  if ((DAT_0487c948 & 1) == 0) {
    DAT_0487c930 = 1;
    DAT_0487c938 = FUN_0317905c;
    DAT_0487c940 = 0;
    DAT_0487c928 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487c928,&PTR_LOOP_04483000);
    DAT_0487c948 = 1;
  }
  return;
}


