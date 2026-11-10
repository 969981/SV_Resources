/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a884c; name: FUN_021a884c
 */


void FUN_021a884c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  param_2[2] = 0;
  *param_2 = uVar1;
  param_2[1] = 0;
  FUN_00c96b7c(param_2 + 1,param_1 + 1);
  param_2[3] = param_1[3];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


