/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef90a0; name: _INIT_508
 */


void _INIT_508(void)

{
  DAT_0486b2c8 = NEON_fmov(0x3f780000,4);
  DAT_0486b2d0 = 0x3f8400003f840000;
  DAT_0486b2d8 = 0;
  FUN_00100190(&LAB_02ef6c84,&DAT_0486b2d8,&PTR_LOOP_04483000);
  DAT_0486b2e0 = "$hknpShapeFunctionsSingleton";
  DAT_0486b2e8 = &LAB_02ef6c90;
  DAT_0486b2f0 = &LAB_02ef8f30;
  DAT_0486b2f8 = &DAT_0486b2d8;
  DAT_0486b300 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_0486b2e0;
  return;
}


