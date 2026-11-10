/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03056e00; name: _INIT_828
 */


void _INIT_828(void)

{
  DAT_04873178 = 0x4300000043000000;
  DAT_04873180 = 0x3c0000003c000000;
  DAT_04873188 = 0;
  FUN_00100190(&LAB_03056504,&DAT_04873188,&PTR_LOOP_04483000);
  DAT_04873190 = "$hknpGlobals";
  DAT_04873198 = &LAB_03056510;
  DAT_048731a0 = &LAB_03056a50;
  DAT_048731a8 = &DAT_04873188;
  DAT_048731b0 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04873190;
  return;
}


