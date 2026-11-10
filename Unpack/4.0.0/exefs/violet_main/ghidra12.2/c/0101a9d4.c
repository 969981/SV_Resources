/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0101a9d4; name: FUN_0101a9d4
 */


void FUN_0101a9d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  FUN_010186a4();
  *param_1 = &PTR_FUN_04562d90;
  param_1[4] = &PTR_LAB_04562ef0;
  param_1[5] = &DAT_04563018;
  param_1[6] = &PTR_LAB_04563070;
  param_1[7] = &PTR_LAB_04563098;
  *(undefined2 *)(param_1 + 0x2a) = 0x101;
  *(undefined2 *)((long)param_1 + 0x152) = *param_4;
  return;
}


