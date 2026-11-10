/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03179ad0; name: _INIT_1415
 */


void _INIT_1415(void)

{
  if ((DAT_0487cba0 & 1) == 0) {
    DAT_0487cb88 = 1;
    DAT_0487cb90 = FUN_03179b3c;
    DAT_0487cb98 = 0;
    DAT_0487cb80 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487cb80,&PTR_LOOP_04483000);
    DAT_0487cba0 = 1;
  }
  return;
}


