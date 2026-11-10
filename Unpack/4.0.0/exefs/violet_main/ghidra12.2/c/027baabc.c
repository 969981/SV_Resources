/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027baabc; name: FUN_027baabc
 */


void FUN_027baabc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_01f78de8();
  *param_1 = &PTR_FUN_045e13b0;
  param_1[4] = &PTR_LAB_045e1438;
  param_1[5] = &DAT_045e1488;
  param_1[10] = *param_2;
  param_1[0xb] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


