/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03227a00; name: _INIT_1670
 */


void _INIT_1670(void)

{
  DAT_04885320 = 0;
  FUN_00100190(&LAB_032276c8,&DAT_04885320,&PTR_LOOP_04483000);
  DAT_04885328 = "$hkHardwareInfo";
  DAT_04885330 = &LAB_032276d0;
  DAT_04885338 = &LAB_03227840;
  DAT_04885340 = &DAT_04885320;
  DAT_04885348 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_04885328;
  return;
}


