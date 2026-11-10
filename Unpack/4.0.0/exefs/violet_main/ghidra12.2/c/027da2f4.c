/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027da2f4; name: FUN_027da2f4
 */


void FUN_027da2f4(undefined8 *param_1,undefined8 param_2)

{
  FUN_01870100();
  *param_1 = &PTR_FUN_045e2f38;
  param_1[0xb] = 0;
  param_1[4] = &PTR_LAB_045e2fb8;
  param_1[5] = &PTR_LAB_045e3008;
  param_1[10] = 0;
  FUN_027c2138(param_1 + 10,param_2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


