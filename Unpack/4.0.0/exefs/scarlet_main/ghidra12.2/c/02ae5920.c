/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae5920; name: FUN_02ae5920
 */


int FUN_02ae5920(short *param_1,short *param_2,short *param_3,short *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar6 = FUN_02ae5630();
  bVar1 = *(int *)(param_4 + 2) < *(int *)(param_3 + 2);
  if (*param_4 != *param_3) {
    bVar1 = *param_4 < *param_3;
  }
  if (bVar1) {
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    uVar2 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)(param_3 + 0xc);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_4 + 0xc);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar8;
    plVar7 = *(long **)(param_4 + 0x10);
    *(undefined8 *)param_4 = uVar2;
    *(undefined8 *)(param_4 + 4) = uVar4;
    *(undefined8 *)(param_4 + 8) = uVar3;
    *(undefined8 *)(param_4 + 0xc) = uVar5;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *(undefined8 *)(param_4 + 0x10) = uVar9;
    bVar1 = *(int *)(param_3 + 2) < *(int *)(param_2 + 2);
    if (*param_3 != *param_2) {
      bVar1 = *param_3 < *param_2;
    }
    if (bVar1) {
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      plVar7 = *(long **)(param_3 + 0x10);
      *(undefined8 *)param_3 = uVar2;
      *(undefined8 *)(param_3 + 4) = uVar4;
      *(undefined8 *)(param_3 + 8) = uVar3;
      *(undefined8 *)(param_3 + 0xc) = uVar5;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      *(undefined8 *)(param_3 + 0x10) = uVar9;
      bVar1 = *(int *)(param_2 + 2) < *(int *)(param_1 + 2);
      if (*param_2 != *param_1) {
        bVar1 = *param_2 < *param_1;
      }
      if (bVar1) {
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        uVar2 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        uVar3 = *(undefined8 *)(param_1 + 8);
        uVar5 = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        *(undefined8 *)(param_1 + 0x10) = uVar8;
        plVar7 = *(long **)(param_2 + 0x10);
        *(undefined8 *)param_2 = uVar2;
        *(undefined8 *)(param_2 + 4) = uVar4;
        *(undefined8 *)(param_2 + 8) = uVar3;
        *(undefined8 *)(param_2 + 0xc) = uVar5;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        iVar6 = iVar6 + 3;
        *(undefined8 *)(param_2 + 0x10) = uVar9;
      }
      else {
        iVar6 = iVar6 + 2;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  return iVar6;
}


