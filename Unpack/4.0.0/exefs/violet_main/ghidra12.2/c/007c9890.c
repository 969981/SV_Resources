/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


