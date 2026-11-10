/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033357c0; name: _INIT_2043
 */


void _INIT_2043(void)

{
  DAT_0488d5b0 = 0;
  DAT_0488d560 = &DAT_0488d570;
  DAT_0488d568 = 0x8000000400000000;
  DAT_0488d5b2 = 1;
  DAT_0488d5c0 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_0488d5b8 = "base.reflect";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488d560;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_0488d560,&PTR_LOOP_04483000);
  DAT_0488d5c8 = 0;
  FUN_00100190(&LAB_03335480,&DAT_0488d5c8,&PTR_LOOP_04483000);
  DAT_0488d5d0 = "$ReflectStrings";
  DAT_0488d5d8 = &LAB_03335490;
  DAT_0488d5e0 = &LAB_033355b0;
  DAT_0488d5e8 = &DAT_0488d5c8;
  DAT_0488d5f0 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_0488d5d0;
  return;
}


