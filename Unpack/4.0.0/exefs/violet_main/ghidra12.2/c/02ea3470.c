/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ea3470; name: _INIT_505
 */


void _INIT_505(void)

{
  DAT_0486b1b0 = NEON_fmov(0x3f780000,4);
  DAT_0486b212 = 1;
  DAT_0486b1c0 = &DAT_0486b1d0;
  DAT_0486b1c8 = 0x8000000400000000;
  DAT_0486b220 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0486b1c0;
  DAT_0486b210 = 0;
  DAT_0486b1b8 = 0x3f8400003f840000;
  DAT_0486b218 = "hknp.collide.querydispatcher";
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0486b1c0,&PTR_LOOP_04483000);
  return;
}


