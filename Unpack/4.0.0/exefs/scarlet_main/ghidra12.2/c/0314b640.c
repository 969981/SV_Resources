/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b640; name: _INIT_1087
 */


void _INIT_1087(void)

{
  if ((DAT_04878b98 & 1) == 0) {
    DAT_04878b80 = 1;
    DAT_04878b88 = FUN_0314b6ac;
    DAT_04878b90 = 0;
    DAT_04878b78 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04878b78,&PTR_LOOP_04483000);
    DAT_04878b98 = 1;
  }
  return;
}


