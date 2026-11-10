/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a924d0; name: FUN_02a924d0
 */


void FUN_02a924d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}


