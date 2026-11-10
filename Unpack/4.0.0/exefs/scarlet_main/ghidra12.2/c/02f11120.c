/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f11120; name: _INIT_510
 */


void _INIT_510(void)

{
  DAT_0486b330 = 0;
  FUN_00100190(&LAB_02f10358,&DAT_0486b330,&PTR_LOOP_04483000);
  DAT_0486b338 = "$hknpConstraintDataFunctionsSingleton";
  DAT_0486b340 = &LAB_02f10360;
  DAT_0486b348 = &LAB_02f10f30;
  DAT_0486b350 = &DAT_0486b330;
  DAT_0486b358 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_0486b338;
  return;
}


