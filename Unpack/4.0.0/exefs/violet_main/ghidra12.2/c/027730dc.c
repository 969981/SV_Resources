/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027730dc; name: FUN_027730dc
 */


void FUN_027730dc(undefined8 *param_1,undefined8 *param_2)

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
  *param_1 = &LAB_02773154;
  param_1[1] = &LAB_0277315c;
  param_1[2] = &LAB_0277326c;
  param_1[3] = &LAB_0277329c;
  return;
}


