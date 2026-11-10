/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037e220; name: FUN_0037e220
 */


undefined4 FUN_0037e220(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  
  uVar4 = *(uint *)(param_1 + 10);
  if (param_1[3] - 5U <= (ulong)uVar4) {
    uVar4 = (uint)(param_1[3] - 5U);
  }
  plVar7 = (long *)*param_1;
  lVar9 = plVar7[1];
  do {
    uVar5 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    uVar14 = *(uint *)(plVar7 + 4) - uVar5;
    if (*(uint *)(plVar7 + 4) < uVar5) {
LAB_0037e4f8:
      bVar3 = true;
      iVar1 = (int)plVar7[1];
      goto joined_r0x0037e508;
    }
    uVar2 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x13];
    uVar5 = uVar2 + *(uint *)(plVar7 + 1);
    uVar13 = uVar5;
    if (0xfffe < (ulong)uVar2 + (ulong)*(uint *)(plVar7 + 1)) {
      uVar13 = 0xffff;
    }
    if (uVar13 <= uVar14) {
      uVar14 = uVar13;
    }
    if ((uVar14 < uVar4) && ((uVar14 != uVar5 || param_2 == 0) || param_2 != 4 && uVar14 == 0))
    goto LAB_0037e4f8;
    bVar3 = uVar14 == uVar5;
    FUN_00383700(param_1,0,0,param_2 == 4 && bVar3);
    *(char *)(param_1[5] + param_1[2] + -4) = (char)uVar14;
    *(char *)(param_1[5] + param_1[2] + -3) = (char)(uVar14 >> 8);
    *(char *)(param_1[5] + param_1[2] + -2) = (char)~uVar14;
    *(char *)(param_1[5] + param_1[2] + -1) = (char)(~uVar14 >> 8);
    lVar15 = *param_1;
    lVar10 = *(long *)(lVar15 + 0x38);
    FUN_00383870(lVar10);
    uVar5 = *(uint *)(lVar15 + 0x20);
    if (*(uint *)(lVar10 + 0x28) <= *(uint *)(lVar15 + 0x20)) {
      uVar5 = *(uint *)(lVar10 + 0x28);
    }
    if (uVar5 != 0) {
      uVar12 = (ulong)uVar5;
      memcpy(*(void **)(lVar15 + 0x18),*(void **)(lVar10 + 0x20),uVar12);
      *(ulong *)(lVar15 + 0x18) = *(long *)(lVar15 + 0x18) + uVar12;
      *(ulong *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + uVar12;
      *(ulong *)(lVar15 + 0x28) = *(long *)(lVar15 + 0x28) + uVar12;
      *(uint *)(lVar15 + 0x20) = *(int *)(lVar15 + 0x20) - uVar5;
      lVar15 = *(long *)(lVar10 + 0x28) - uVar12;
      *(long *)(lVar10 + 0x28) = lVar15;
      if (lVar15 == 0) {
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
      }
    }
    if (uVar2 != 0) {
      uVar5 = uVar14;
      if (uVar2 <= uVar14) {
        uVar5 = uVar2;
      }
      uVar12 = (ulong)uVar5;
      memcpy(*(void **)(*param_1 + 0x18),(void *)(param_1[0xc] + param_1[0x13]),uVar12);
      lVar10 = *param_1;
      uVar14 = uVar14 - uVar5;
      *(ulong *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + uVar12;
      *(uint *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) - uVar5;
      *(ulong *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + uVar12;
      param_1[0x13] = param_1[0x13] + uVar12;
    }
    if (uVar14 != 0) {
      plVar7 = (long *)*param_1;
      uVar13 = *(uint *)(plVar7 + 1);
      pvVar11 = (void *)plVar7[3];
      uVar5 = uVar14;
      if (uVar13 <= uVar14) {
        uVar5 = uVar13;
      }
      if (uVar5 != 0) {
        uVar12 = (ulong)uVar5;
        *(uint *)(plVar7 + 1) = uVar13 - uVar5;
        memcpy(pvVar11,(void *)*plVar7,uVar12);
        if (*(int *)(plVar7[7] + 0x30) == 2) {
          lVar10 = FUN_0037fe70(plVar7[0xc],pvVar11,uVar5);
LAB_0037e27c:
          plVar7[0xc] = lVar10;
        }
        else if (*(int *)(plVar7[7] + 0x30) == 1) {
          lVar10 = FUN_0037fbe0(plVar7[0xc],pvVar11,uVar5);
          goto LAB_0037e27c;
        }
        *plVar7 = *plVar7 + uVar12;
        plVar7[2] = plVar7[2] + uVar12;
        plVar7 = (long *)*param_1;
        pvVar11 = (void *)plVar7[3];
      }
      *(uint *)(plVar7 + 4) = (int)plVar7[4] - uVar14;
      plVar7[3] = (long)pvVar11 + (ulong)uVar14;
      plVar7[5] = plVar7[5] + (ulong)uVar14;
    }
    plVar7 = (long *)*param_1;
  } while (param_2 != 4 || !bVar3);
  bVar3 = false;
  iVar1 = (int)plVar7[1];
joined_r0x0037e508:
  uVar4 = (int)lVar9 - iVar1;
  if (uVar4 == 0) {
    uVar5 = *(uint *)((long)param_1 + 0xac);
    uVar12 = (ulong)uVar5;
    if ((ulong)param_1[0x2e7] < uVar12) {
LAB_0037e60c:
      param_1[0x2e7] = uVar12;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 10);
    uVar12 = (ulong)uVar5;
    if (uVar4 < uVar5) {
      uVar8 = (ulong)uVar4;
      if (param_1[0xd] - (ulong)*(uint *)((long)param_1 + 0xac) <= uVar8) {
        uVar5 = *(uint *)((long)param_1 + 0xac) - uVar5;
        *(uint *)((long)param_1 + 0xac) = uVar5;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar12),(ulong)uVar5);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
      }
      memcpy((void *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac)),
             (void *)(*(long *)*param_1 - uVar8),uVar8);
      uVar5 = *(int *)((long)param_1 + 0xac) + uVar4;
      *(uint *)((long)param_1 + 0xac) = uVar5;
      uVar14 = *(uint *)(param_1 + 10);
    }
    else {
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy((void *)param_1[0xc],(void *)(*plVar7 - uVar12),uVar12);
      uVar5 = *(uint *)(param_1 + 10);
      *(uint *)((long)param_1 + 0xac) = uVar5;
      uVar14 = uVar5;
    }
    uVar14 = uVar14 - *(int *)((long)param_1 + 0x172c);
    if (uVar4 <= uVar14) {
      uVar14 = uVar4;
    }
    uVar12 = (ulong)uVar5;
    param_1[0x13] = uVar12;
    *(uint *)((long)param_1 + 0x172c) = uVar14 + *(int *)((long)param_1 + 0x172c);
    if ((ulong)param_1[0x2e7] < uVar12) goto LAB_0037e60c;
  }
  if (!bVar3) {
    return 3;
  }
  plVar7 = (long *)*param_1;
  uVar4 = *(uint *)(plVar7 + 1);
  if (((param_2 & 0xfffffffb) == 0) || (uVar4 != 0)) {
    uVar14 = (int)param_1[0xd] + ~uVar5;
    if (uVar14 < uVar4) {
      uVar12 = (ulong)*(uint *)(param_1 + 10);
      if ((long)uVar12 <= param_1[0x13]) {
        uVar5 = uVar5 - *(uint *)(param_1 + 10);
        *(uint *)((long)param_1 + 0xac) = uVar5;
        param_1[0x13] = param_1[0x13] - uVar12;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar12),(ulong)uVar5);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        plVar7 = (long *)*param_1;
        uVar14 = (int)param_1[10] + uVar14;
        uVar4 = *(uint *)(plVar7 + 1);
      }
    }
    uVar5 = uVar4;
    if (uVar14 <= uVar4) {
      uVar5 = uVar14;
    }
    if (uVar5 == 0) goto LAB_0037e720;
    lVar9 = param_1[0xc];
    uVar12 = (ulong)uVar5;
    uVar14 = *(uint *)((long)param_1 + 0xac);
    *(uint *)(plVar7 + 1) = uVar4 - uVar5;
    pvVar11 = (void *)(lVar9 + (ulong)uVar14);
    memcpy(pvVar11,(void *)*plVar7,uVar12);
    if (*(int *)(plVar7[7] + 0x30) == 2) {
      lVar9 = FUN_0037fe70(plVar7[0xc],pvVar11,uVar5);
LAB_0037e748:
      plVar7[0xc] = lVar9;
    }
    else if (*(int *)(plVar7[7] + 0x30) == 1) {
      lVar9 = FUN_0037fbe0(plVar7[0xc],pvVar11,uVar5);
      goto LAB_0037e748;
    }
    *plVar7 = *plVar7 + uVar12;
    plVar7[2] = plVar7[2] + uVar12;
    uVar5 = *(int *)((long)param_1 + 0xac) + uVar5;
    *(uint *)((long)param_1 + 0xac) = uVar5;
    uVar12 = (ulong)uVar5;
    if (uVar12 <= (ulong)param_1[0x2e7]) goto LAB_0037e784;
  }
  else {
    if (param_1[0x13] == uVar12) {
      return 1;
    }
LAB_0037e720:
    uVar12 = (ulong)*(uint *)((long)param_1 + 0xac);
    if (uVar12 <= (ulong)param_1[0x2e7]) goto LAB_0037e784;
  }
  param_1[0x2e7] = uVar12;
LAB_0037e784:
  uVar8 = param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
  uVar4 = (uint)uVar8;
  if (0xfffe < uVar8) {
    uVar4 = 0xffff;
  }
  uVar5 = *(uint *)(param_1 + 10);
  if (uVar4 <= *(uint *)(param_1 + 10)) {
    uVar5 = uVar4;
  }
  uVar14 = (int)uVar12 - (int)param_1[0x13];
  if (uVar14 < uVar5) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 4 && uVar14 == 0) {
      return 0;
    }
    if (uVar4 < uVar14) {
      return 0;
    }
    if (*(int *)(*param_1 + 8) != 0) {
      return 0;
    }
  }
  uVar5 = uVar4;
  if (uVar14 <= uVar4) {
    uVar5 = uVar14;
  }
  if (param_2 == 4) {
    bVar3 = uVar14 <= uVar4 && *(int *)(*param_1 + 8) == 0;
  }
  else {
    bVar3 = false;
  }
  FUN_00383700(param_1,param_1[0xc] + param_1[0x13],(ulong)uVar5,bVar3);
  lVar10 = *param_1;
  param_1[0x13] = param_1[0x13] + (ulong)uVar5;
  lVar9 = *(long *)(lVar10 + 0x38);
  FUN_00383870(lVar9);
  uVar4 = *(uint *)(lVar10 + 0x20);
  if (*(uint *)(lVar9 + 0x28) <= *(uint *)(lVar10 + 0x20)) {
    uVar4 = *(uint *)(lVar9 + 0x28);
  }
  if (uVar4 != 0) {
    uVar12 = (ulong)uVar4;
    memcpy(*(void **)(lVar10 + 0x18),*(void **)(lVar9 + 0x20),uVar12);
    *(ulong *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + uVar12;
    *(ulong *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + uVar12;
    *(ulong *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + uVar12;
    *(uint *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) - uVar4;
    lVar10 = *(long *)(lVar9 + 0x28) - uVar12;
    *(long *)(lVar9 + 0x28) = lVar10;
    if (lVar10 == 0) {
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
    }
  }
  uVar6 = 2;
  if (bVar3 == false) {
    uVar6 = 0;
  }
  return uVar6;
}


