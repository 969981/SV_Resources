/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7b094; name: FUN_01f7b094
 */


void FUN_01f7b094(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  if (param_2[1] - *param_2 == 0) {
    return;
  }
  FUN_01f7b33c(param_1,(param_2[1] - *param_2 >> 5) * -0x1111111111111111);
  FUN_01f7b0f8(param_1,*param_2,param_2[1]);
  return;
}


