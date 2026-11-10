/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6d8f0; name: _INIT_512
 */


void _INIT_512(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0486b388 = NEON_fmov(0x3f780000,4);
  DAT_0486b398 = 0x4300000043000000;
  DAT_0486b3a0 = 0x3c0000003c000000;
  DAT_0486b3fa = 1;
  DAT_0486b3a8 = &DAT_0486b3b8;
  DAT_0486b3b0 = 0x8000000400000000;
  DAT_0486b390 = 0x3f8400003f840000;
  DAT_0486b408 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0486b3f8 = 0;
  DAT_0486b400 = "hknp.collide.narrowphase";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0486b3a8;
  FUN_00100190(puVar1,&DAT_0486b3a8,&PTR_LOOP_04483000);
  return;
}


