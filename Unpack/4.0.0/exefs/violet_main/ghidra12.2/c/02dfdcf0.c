/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02dfdcf0; name: _INIT_477
 */


void _INIT_477(void)

{
  FUN_00100190(&LAB_02dfcf58,&DAT_04865f20,&PTR_LOOP_04483000);
  DAT_04865f30 = 0;
  DAT_04865f38 = 0;
  DAT_04865f40 = 0;
  DAT_04865f48 = 0;
  FUN_00100190(&LAB_02dfcfd0,&DAT_04865f30,&PTR_LOOP_04483000);
  DAT_04865fb0 = 0;
  DAT_04865fb8 = 0;
  DAT_04865fcc = 1;
  nn::os::InitializeLightEvent(&DAT_04865fc0,0,1);
  FUN_00100190(&LAB_02dfcff0,&DAT_04865fb0,&PTR_LOOP_04483000);
  DAT_04865fec = 1;
  DAT_04865fd0 = 0;
  DAT_04865fd8 = 0;
  nn::os::InitializeLightEvent(&DAT_04865fe0,0,1);
  FUN_00100190(&LAB_02dfcff0,&DAT_04865fd0,&PTR_LOOP_04483000);
  return;
}


