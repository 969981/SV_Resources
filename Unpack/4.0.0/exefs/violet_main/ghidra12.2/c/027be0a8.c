/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027be0a8; name: FUN_027be0a8
 */


void FUN_027be0a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar5 = param_3[7];
  uVar4 = param_3[6];
  param_1[1] = param_3[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  if (*(int *)(param_1 + 2) == -0x80000000) {
    uVar2 = *param_2;
    param_1[3] = param_2[1];
    param_1[2] = uVar2;
    iVar1 = *(int *)(param_1 + 1);
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
  }
  if (iVar1 == -0x80000000) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 2);
    return;
  }
  return;
}


