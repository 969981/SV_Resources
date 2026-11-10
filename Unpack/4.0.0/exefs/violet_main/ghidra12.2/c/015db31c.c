/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015db31c; name: FUN_015db31c
 */


void FUN_015db31c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = uVar1;
  FUN_00ca1ea4(param_1 + 4,param_2 + 4);
  return;
}


