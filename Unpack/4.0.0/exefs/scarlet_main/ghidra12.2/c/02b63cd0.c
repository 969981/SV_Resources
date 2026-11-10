/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b63cd0; name: _INIT_401
 */


void _INIT_401(void)

{
  DAT_04841c80 = NEON_fmov(0x3f780000,4);
  DAT_04841c88 = 0x3f8400003f840000;
  FUN_00100190(&LAB_021d8530,&DAT_04841c90,&PTR_LOOP_04483000);
  DAT_04841ca0 = 0;
  DAT_04841cb4 = 1;
  nn::os::InitializeLightEvent(&DAT_04841ca8,0,1);
  FUN_00100190(&LAB_02b62fa8,&DAT_04841ca0,&PTR_LOOP_04483000);
  return;
}


