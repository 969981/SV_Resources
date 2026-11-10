/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae4530; name: FUN_02ae4530
 */


ulong FUN_02ae4530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = FUN_02ae4150();
  bVar1 = *(int *)((long)param_5 + 4) < *(int *)((long)param_4 + 4);
  if (*(short *)((long)param_5 + 2) != *(short *)((long)param_4 + 2)) {
    bVar1 = *(short *)((long)param_5 + 2) < *(short *)((long)param_4 + 2);
  }
  if (bVar1) {
    uVar2 = *param_4;
    uVar4 = param_4[1];
    uVar9 = param_4[2];
    uVar6 = *(undefined4 *)(param_4 + 3);
    uVar10 = param_5[2];
    uVar3 = *param_5;
    uVar5 = param_5[1];
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_5 + 3);
    param_4[1] = uVar5;
    param_4[2] = uVar10;
    *param_4 = uVar3;
    *(undefined4 *)(param_5 + 3) = uVar6;
    param_5[1] = uVar4;
    param_5[2] = uVar9;
    *param_5 = uVar2;
    bVar1 = *(int *)((long)param_4 + 4) < *(int *)((long)param_3 + 4);
    if (*(short *)((long)param_4 + 2) != *(short *)((long)param_3 + 2)) {
      bVar1 = *(short *)((long)param_4 + 2) < *(short *)((long)param_3 + 2);
    }
    iVar7 = (int)uVar8;
    if (bVar1) {
      uVar2 = *param_3;
      uVar4 = param_3[1];
      uVar9 = param_3[2];
      uVar6 = *(undefined4 *)(param_3 + 3);
      uVar10 = param_4[2];
      uVar3 = *param_4;
      uVar5 = param_4[1];
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_4 + 3);
      param_3[1] = uVar5;
      param_3[2] = uVar10;
      *param_3 = uVar3;
      *(undefined4 *)(param_4 + 3) = uVar6;
      param_4[1] = uVar4;
      param_4[2] = uVar9;
      *param_4 = uVar2;
      bVar1 = *(int *)((long)param_3 + 4) < *(int *)((long)param_2 + 4);
      if (*(short *)((long)param_3 + 2) != *(short *)((long)param_2 + 2)) {
        bVar1 = *(short *)((long)param_3 + 2) < *(short *)((long)param_2 + 2);
      }
      if (bVar1) {
        uVar2 = *param_2;
        uVar4 = param_2[1];
        uVar9 = param_2[2];
        uVar6 = *(undefined4 *)(param_2 + 3);
        uVar10 = param_3[2];
        uVar3 = *param_3;
        uVar5 = param_3[1];
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
        param_2[1] = uVar5;
        param_2[2] = uVar10;
        *param_2 = uVar3;
        *(undefined4 *)(param_3 + 3) = uVar6;
        param_3[1] = uVar4;
        param_3[2] = uVar9;
        *param_3 = uVar2;
        bVar1 = *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4);
        if (*(short *)((long)param_2 + 2) != *(short *)((long)param_1 + 2)) {
          bVar1 = *(short *)((long)param_2 + 2) < *(short *)((long)param_1 + 2);
        }
        if (bVar1) {
          uVar2 = *param_1;
          uVar4 = param_1[1];
          uVar8 = (ulong)(iVar7 + 4);
          uVar9 = param_1[2];
          uVar6 = *(undefined4 *)(param_1 + 3);
          uVar3 = *param_2;
          uVar5 = param_2[1];
          uVar10 = param_2[2];
          *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
          *param_1 = uVar3;
          param_1[1] = uVar5;
          param_1[2] = uVar10;
          *(undefined4 *)(param_2 + 3) = uVar6;
          param_2[1] = uVar4;
          param_2[2] = uVar9;
          *param_2 = uVar2;
        }
        else {
          uVar8 = (ulong)(iVar7 + 3);
        }
      }
      else {
        uVar8 = (ulong)(iVar7 + 2);
      }
    }
    else {
      uVar8 = (ulong)(iVar7 + 1);
    }
  }
  return uVar8;
}


