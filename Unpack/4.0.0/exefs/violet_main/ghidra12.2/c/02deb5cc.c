/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02deb5cc; name: FUN_02deb5cc
 */


void FUN_02deb5cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  param_2[3] = 0;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = 0;
  FUN_00dbefa4(param_2 + 2,param_1 + 2);
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_00f34110(param_2 + 4,param_1 + 4);
  return;
}


