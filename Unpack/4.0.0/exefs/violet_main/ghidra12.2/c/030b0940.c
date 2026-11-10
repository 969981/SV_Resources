/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030b0940; name: _INIT_841
 */


void _INIT_841(void)

{
  DAT_04873470 = 0;
  FUN_00100190(&LAB_030b0770,&DAT_04873470,&PTR_LOOP_04483000);
  DAT_04873478 = "$hkaiHeatMapParams";
  DAT_04873480 = &LAB_030b0780;
  DAT_04873488 = &LAB_030b0850;
  DAT_04873490 = &DAT_04873470;
  DAT_04873498 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04873478;
  return;
}


