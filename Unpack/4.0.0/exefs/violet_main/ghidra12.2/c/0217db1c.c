/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0217db1c; name: FUN_0217db1c
 */


void FUN_0217db1c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_01160880(param_1 + 9,param_2 + 5);
  *param_1 = &LAB_0217db94;
  param_1[1] = &LAB_0217dd64;
  param_1[2] = &LAB_0217de74;
  param_1[3] = &LAB_0217dea4;
  return;
}


