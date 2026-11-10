/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177730; name: _INIT_1339
 */


void _INIT_1339(void)

{
  if ((DAT_0487bfc0 & 1) == 0) {
    DAT_0487bfa8 = 1;
    DAT_0487bfb0 = FUN_0317779c;
    DAT_0487bfb8 = 0;
    DAT_0487bfa0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487bfa0,&PTR_LOOP_04483000);
    DAT_0487bfc0 = 1;
  }
  return;
}


