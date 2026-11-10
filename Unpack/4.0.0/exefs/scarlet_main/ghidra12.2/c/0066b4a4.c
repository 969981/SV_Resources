/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0066b4a4; name: FUN_0066b4a4
 */


void FUN_0066b4a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  param_1[3] = param_3[1];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}


