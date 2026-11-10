/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bde7c; name: FUN_027bde7c
 */


void FUN_027bde7c(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_34;
  undefined4 uStack_30;
  
  uVar6 = param_3[3];
  uVar3 = param_3[2];
  uVar8 = param_3[5];
  uVar7 = param_3[4];
  uVar10 = param_3[7];
  uVar9 = param_3[6];
  uVar12 = param_3[9];
  uVar11 = param_3[8];
  uVar14 = param_3[1];
  uVar13 = *param_3;
  param_1[0xe] = 0;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[9] = uVar12;
  param_1[8] = uVar11;
  param_1[1] = uVar14;
  *param_1 = uVar13;
  param_1[3] = uVar6;
  param_1[2] = uVar3;
  if (param_1 != param_3) {
    plVar2 = (long *)param_3[0xe];
    if (plVar2 == (long *)0x0) {
      param_1[0xe] = 0;
    }
    else if (plVar2 == param_3 + 10) {
      param_1[0xe] = param_1 + 10;
      (**(code **)(*plVar2 + 0x28))();
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      param_1[0xe] = uVar3;
    }
  }
  uStack_48 = *(undefined8 *)((long)param_1 + 0x2c);
  local_50 = *(undefined8 *)((long)param_1 + 0x24);
  uStack_30 = (undefined4)((ulong)param_1[8] >> 0x20);
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 3);
  local_34 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x3c) >> 0x20);
  if (iVar5 == -0x80000000) {
    iVar5 = *param_2;
    local_50 = *(undefined8 *)(param_2 + 1);
    uVar1 = (ulong)uStack_48 >> 0x20;
    uStack_48 = CONCAT44((int)uVar1,param_2[3]);
  }
  if (iVar4 == -0x80000000) {
    iVar4 = param_2[4];
  }
  *(int *)(param_1 + 3) = iVar4;
  *(int *)(param_1 + 4) = iVar5;
  param_1[9] = param_1[9];
  param_1[8] = CONCAT44(uStack_30,local_34);
  *(undefined8 *)((long)param_1 + 0x2c) = uStack_48;
  *(undefined8 *)((long)param_1 + 0x24) = local_50;
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_1 + 0x34);
  return;
}


