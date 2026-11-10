/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02186330; name: FUN_02186330
 */


void FUN_02186330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  uVar1 = param_2[2];
  param_1[8] = 0;
  param_1[6] = uVar1;
  param_1[7] = 0;
  FUN_01161be4(param_1 + 7,param_2 + 3);
  uVar1 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar1;
  *param_1 = thunk_FUN_021863a4;
  param_1[1] = FUN_021863ec;
  param_1[2] = &LAB_021870f4;
  param_1[3] = &LAB_02187140;
  return;
}


