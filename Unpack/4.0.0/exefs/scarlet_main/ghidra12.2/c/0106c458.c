/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106c458; name: FUN_0106c458
 */


void FUN_0106c458(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  lVar3 = (long)puVar1 - (long)puVar8;
  if (lVar3 != 0) {
    uVar5 = param_1[8];
    plVar7 = (long *)((long)puVar8 + (uVar5 >> 7 & 0x1fffffffffffff8));
    lVar4 = *plVar7 + (uVar5 & 0x3ff) * 4;
    while (*(long *)((long)puVar8 + (param_1[9] + uVar5 >> 7 & 0x1fffffffffffff8)) +
           (param_1[9] + uVar5 & 0x3ff) * 4 != lVar4) {
      lVar4 = lVar4 + 4;
      if (lVar4 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        lVar4 = *plVar7;
      }
    }
  }
  param_1[9] = 0;
  while (uVar5 = lVar3 >> 3, 2 < uVar5) {
    plVar7 = (long *)param_1[10];
    uVar6 = *puVar8;
    uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0x1000,4);
    }
    else {
      FUN_00c48fe8(plVar7,uVar6,0x1000,4);
    }
    puVar1 = (undefined8 *)param_1[2];
    puVar8 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar8;
    lVar3 = (long)puVar1 - (long)puVar8;
  }
  if (uVar5 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar5 != 2) goto LAB_0106c590;
    lVar3 = 0x400;
  }
  param_1[8] = lVar3;
LAB_0106c590:
  if (puVar8 != puVar1) {
    do {
      plVar7 = (long *)param_1[10];
      uVar6 = *puVar8;
      uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0x1000,4);
      }
      else {
        FUN_00c48fe8(plVar7,uVar6,0x1000,4);
      }
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar8);
    lVar3 = param_1[2] - param_1[1];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[3];
  plVar7 = (long *)param_1[4];
  uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar5 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0106c674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar3,lVar4 - lVar3,4);
    return;
  }
  FUN_00c48fe8(plVar7,lVar3,lVar4 - lVar3,4);
  return;
}


