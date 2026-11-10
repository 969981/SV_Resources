/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d200; name: _INIT_1140
 */


void _INIT_1140(void)

{
  if ((DAT_048793e0 & 1) == 0) {
    DAT_048793c8 = 1;
    DAT_048793d0 = FUN_0314ce5c;
    DAT_048793d8 = 0;
    DAT_048793c0 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048793c0,&PTR_LOOP_04483000);
    DAT_048793e0 = 1;
  }
  return;
}


