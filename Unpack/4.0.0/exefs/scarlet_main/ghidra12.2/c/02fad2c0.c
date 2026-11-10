/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fad2c0; name: _INIT_513
 */


void _INIT_513(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0486b418 = NEON_fmov(0x3f780000,4);
  DAT_0486b428 = 0x4300000043000000;
  DAT_0486b430 = 0x3c0000003c000000;
  DAT_0486b48a = 1;
  DAT_0486b438 = &DAT_0486b448;
  DAT_0486b440 = 0x8000000400000000;
  DAT_0486b420 = 0x3f8400003f840000;
  DAT_0486b498 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0486b488 = 0;
  DAT_0486b490 = "np.dyn.sim.mt";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0486b438;
  FUN_00100190(puVar1,&DAT_0486b438,&PTR_LOOP_04483000);
  return;
}


