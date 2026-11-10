/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bef60; name: _INIT_1567
 */


void _INIT_1567(void)

{
  DAT_04883240 = 0;
  DAT_048831f0 = &DAT_04883200;
  DAT_048831f8 = 0x8000000400000000;
  DAT_04883242 = 1;
  DAT_04883250 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04883248 = "common.visualize.debugdisplay";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_048831f0;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_048831f0,&PTR_LOOP_04483000);
  DAT_04883258 = 0;
  FUN_00100190(&LAB_031bed50,&DAT_04883258,&PTR_LOOP_04483000);
  DAT_04883260 = "$hkDebugDisplay";
  DAT_04883268 = &LAB_031bed60;
  DAT_04883270 = &LAB_031bee90;
  DAT_04883278 = &DAT_04883258;
  DAT_04883280 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04883260;
  return;
}


