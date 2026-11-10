/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02191a68; name: FUN_02191a68
 */


void FUN_02191a68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = uVar1;
  FUN_00c96b7c(param_2 + 2,param_1 + 2);
  param_2[4] = param_1[4];
  return;
}


