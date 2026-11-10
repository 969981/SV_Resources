/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0276ddd0; name: FUN_0276ddd0
 */


void FUN_0276ddd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar3 = param_2[4];
  param_1[10] = 0;
  param_1[8] = uVar3;
  param_1[9] = 0;
  FUN_00c6c994(param_1 + 9,param_2 + 5);
  *param_1 = &LAB_0276de48;
  param_1[1] = &LAB_0276e018;
  param_1[2] = &LAB_0276e128;
  param_1[3] = &LAB_0276e158;
  return;
}


