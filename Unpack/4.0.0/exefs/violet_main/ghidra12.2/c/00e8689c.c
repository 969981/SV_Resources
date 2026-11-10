/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8689c; name: FUN_00e8689c
 */


void FUN_00e8689c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_2[4] = 0;
  param_1[4] = uVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar1 = param_2[6];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar1;
  FUN_00dc7a68(param_1 + 7,param_2 + 7);
  return;
}


