/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f7638; name: FUN_012f7638
 */


void FUN_012f7638(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)param_1[2];
  if ((long)puVar7 - (long)puVar8 != 0) {
    uVar3 = param_1[8];
    plVar6 = (long *)((long)puVar8 + (uVar3 >> 7 & 0x1fffffffffffff8));
    lVar4 = *plVar6 + (uVar3 & 0x3ff) * 4;
    while (*(long *)((long)puVar8 + (param_1[9] + uVar3 >> 7 & 0x1fffffffffffff8)) +
           (param_1[9] + uVar3 & 0x3ff) * 4 != lVar4) {
      lVar4 = lVar4 + 4;
      if (lVar4 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar4 = *plVar6;
      }
    }
  }
  uVar3 = (long)puVar7 - (long)puVar8 >> 3;
  param_1[9] = 0;
  if (2 < uVar3) {
    plVar6 = (long *)param_1[10];
    uVar5 = *puVar8;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,4);
    }
    else {
      FUN_00c48fe8(plVar6,uVar5,0x1000,4);
    }
    puVar7 = (undefined8 *)param_1[2];
    puVar8 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar8;
    lVar4 = (long)puVar7 - (long)puVar8;
    while (uVar3 = lVar4 >> 3, 2 < uVar3) {
      plVar6 = (long *)param_1[10];
      uVar5 = *puVar8;
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,4);
      }
      else {
        FUN_00c48fe8(plVar6,uVar5,0x1000,4);
      }
      puVar7 = (undefined8 *)param_1[2];
      puVar8 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar8;
      lVar4 = (long)puVar7 - (long)puVar8;
    }
  }
  if (uVar3 == 1) {
    lVar4 = 0x200;
  }
  else {
    if (uVar3 != 2) goto LAB_012f7690;
    lVar4 = 0x400;
  }
  param_1[8] = lVar4;
LAB_012f7690:
  if (puVar8 != puVar7) {
    plVar6 = (long *)param_1[10];
    uVar5 = *puVar8;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,4);
    }
    else {
      FUN_00c48fe8(plVar6,uVar5,0x1000,4);
    }
    while (puVar8 = puVar8 + 1, puVar8 != puVar7) {
      plVar6 = (long *)param_1[10];
      uVar5 = *puVar8;
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,4);
      }
      else {
        FUN_00c48fe8(plVar6,uVar5,0x1000,4);
      }
    }
    lVar4 = param_1[2] - param_1[1];
    if (lVar4 != 0) {
      param_1[2] = param_1[2] + (lVar4 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar6 = (long *)param_1[4];
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x012f786c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar1 - lVar4,4);
    return;
  }
  FUN_00c48fe8(plVar6,lVar4,lVar1 - lVar4,4);
  return;
}


