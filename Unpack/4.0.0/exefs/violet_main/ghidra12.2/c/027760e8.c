/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027760e8; name: FUN_027760e8
 */


void FUN_027760e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  uVar1 = param_2[2];
  param_1[8] = 0;
  param_1[6] = uVar1;
  param_1[7] = 0;
  FUN_00cacc64(param_1 + 7,param_2 + 3);
  uVar1 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar1;
  *param_1 = thunk_FUN_0277615c;
  param_1[1] = FUN_027761a4;
  param_1[2] = &LAB_02776ddc;
  param_1[3] = &LAB_02776e28;
  return;
}


