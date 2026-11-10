/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02390e30; name: FUN_02390e30
 */


void FUN_02390e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[9] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  param_1[8] = 0;
  FUN_00d334b4(param_1 + 8,param_2 + 4);
  uVar4 = param_2[6];
  param_2[6] = 0;
  *param_1 = &LAB_02391150;
  param_1[1] = &LAB_02391158;
  param_1[10] = uVar4;
  param_1[2] = &LAB_023912c8;
  param_1[3] = &LAB_023913b4;
  return;
}


