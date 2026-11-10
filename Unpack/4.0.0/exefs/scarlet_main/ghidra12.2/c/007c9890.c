/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c9890; name: _INIT_88
 */


void _INIT_88(void)

{
  undefined *puVar1;
  
  DAT_047fa5c8 = &DAT_047fa5d4;
  DAT_047fa5c0 = PTR_DAT_047d1008 + 0x10;
  DAT_047fa5d0 = 0x400;
  FUN_007c450c(&DAT_047fa5c0);
  puVar1 = PTR_DAT_047d1100;
  *DAT_047fa5c8 = *PTR_DAT_047d1018;
  DAT_047fa5c0 = puVar1 + 0x10;
  FUN_007c9f14(&DAT_047fa580);
  FUN_00100190(PTR_FUN_047d1108,&DAT_047fa580,&PTR_LOOP_04483000);
  return;
}


