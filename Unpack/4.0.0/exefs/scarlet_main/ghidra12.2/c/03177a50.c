/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177a50; name: _INIT_1344
 */


void _INIT_1344(void)

{
  if ((DAT_0487c088 & 1) == 0) {
    DAT_0487c070 = 1;
    DAT_0487c078 = FUN_03177abc;
    DAT_0487c080 = 0;
    DAT_0487c068 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487c068,&PTR_LOOP_04483000);
    DAT_0487c088 = 1;
  }
  return;
}


