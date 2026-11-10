/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010714ec; name: FUN_010714ec
 */


void FUN_010714ec(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04593668;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = param_2;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_010a98a4(param_1 + 10);
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_1[5] = param_3[3];
  param_1[6] = param_3[4];
  return;
}


