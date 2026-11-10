/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e3ef4; name: FUN_026e3ef4
 */


void FUN_026e3ef4(undefined8 *param_1)

{
  FUN_026d505c();
  *param_1 = &PTR_FUN_045cd078;
  param_1[4] = &PTR_LAB_045cd218;
  param_1[5] = &DAT_045cd340;
  param_1[6] = &PTR_LAB_045cd398;
  param_1[7] = &PTR_LAB_045cd3c0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x141) = 0;
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


