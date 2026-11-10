/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fcc7f0; name: FUN_02fcc7f0
 */


void FUN_02fcc7f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 uint param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_LAB_046121a8;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x8000000000000000;
  if ((int)param_4 < 1) {
    iVar6 = 0;
  }
  else {
    FUN_02fcfa74(param_1 + 0x20,param_4);
    iVar6 = *(int *)(param_1 + 0x21);
  }
  if (iVar6 < (int)param_4) {
    lVar8 = param_1[0x20];
    *(uint *)(param_1 + 0x21) = param_4;
    puVar7 = (undefined8 *)(lVar8 + (long)iVar6 * 0x500);
    do {
      *puVar7 = 0;
      puVar7[2] = puVar7 + 6;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0x80000018;
      puVar7[0x20] = 0;
      puVar7[0x22] = puVar7 + 0x26;
      *(undefined4 *)(puVar7 + 0x23) = 0;
      *(undefined4 *)((long)puVar7 + 0x11c) = 0x80000018;
      puVar7[0x40] = 0;
      puVar7[0x42] = puVar7 + 0x46;
      *(undefined4 *)(puVar7 + 0x43) = 0;
      *(undefined4 *)((long)puVar7 + 0x21c) = 0x80000018;
      puVar7[0x60] = 0;
      puVar7[0x62] = puVar7 + 0x66;
      *(undefined4 *)(puVar7 + 99) = 0;
      *(undefined4 *)((long)puVar7 + 0x31c) = 0x80000018;
      puVar7[0x80] = 0;
      puVar7[0x82] = puVar7 + 0x86;
      *(undefined4 *)(puVar7 + 0x83) = 0;
      puVar9 = puVar7 + 0xa0;
      *(undefined4 *)((long)puVar7 + 0x41c) = 0x80000018;
      puVar7 = puVar9;
    } while (puVar9 != (undefined8 *)(lVar8 + (long)(int)param_4 * 0x500));
  }
  else if ((int)param_4 < iVar6) {
    lVar8 = (long)(int)param_4 * 0x500 + (long)iVar6 * -0x500;
    lVar5 = param_1[0x20] + (long)iVar6 * 0x500;
    *(uint *)(param_1 + 0x21) = param_4;
    do {
      lVar5 = lVar5 + -0x500;
      FUN_02fcf60c(lVar5);
      lVar8 = lVar8 + 0x500;
    } while (lVar8 != 0);
  }
  puVar3 = PTR_PTR_047d1a50;
  if (0 < (int)param_4) {
    lVar8 = 0;
    do {
      puVar7 = (undefined8 *)(param_1[0x20] + lVar8);
      plVar4 = (long *)*param_3;
      puVar7[0x20] = plVar4;
      *(undefined4 *)(puVar7 + 0x21) = 0;
      *(undefined1 *)((long)puVar7 + 0x10c) = 0;
      uVar2 = *(int *)(param_3 + 0xb) - 1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar5 = param_3[1];
        (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
        puVar9 = (undefined8 *)(lVar5 + 0x28);
        *(undefined4 *)(param_3 + 0xb) = 5;
      }
      else {
        *(uint *)(param_3 + 0xb) = uVar2;
        puVar9 = (undefined8 *)(param_3[1] + (ulong)uVar2 * 8);
      }
      puVar9 = (undefined8 *)*puVar9;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar7 + 0x23);
      iVar6 = *(int *)(puVar7 + 0x23);
      lVar5 = (long)iVar6;
      if ((int)(*(uint *)((long)puVar7 + 0x11c) & 0x7fffffff) <= iVar6) {
        FUN_031c25b4(puVar7 + 0x22,puVar3,lVar5 + 1);
        iVar6 = *(int *)(puVar7 + 0x23);
      }
      *(undefined8 **)(puVar7[0x22] + (long)iVar6 * 8) = puVar9;
      *(int *)(puVar7 + 0x23) = (int)(lVar5 + 1);
      puVar7[0x3e] = "hknpSolverData::ThreadData::m_jacMovingStream";
      plVar4 = (long *)*param_3;
      puVar7[0x40] = plVar4;
      *(undefined4 *)(puVar7 + 0x41) = 0;
      *(undefined1 *)((long)puVar7 + 0x20c) = 0;
      uVar2 = *(int *)(param_3 + 0xb) - 1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar5 = param_3[1];
        (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
        puVar9 = (undefined8 *)(lVar5 + 0x28);
        *(undefined4 *)(param_3 + 0xb) = 5;
      }
      else {
        *(uint *)(param_3 + 0xb) = uVar2;
        puVar9 = (undefined8 *)(param_3[1] + (ulong)uVar2 * 8);
      }
      puVar9 = (undefined8 *)*puVar9;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar7 + 0x43);
      iVar6 = *(int *)(puVar7 + 0x43);
      lVar5 = (long)iVar6;
      if ((int)(*(uint *)((long)puVar7 + 0x21c) & 0x7fffffff) <= iVar6) {
        FUN_031c25b4(puVar7 + 0x42,puVar3,lVar5 + 1);
        iVar6 = *(int *)(puVar7 + 0x43);
      }
      *(undefined8 **)(puVar7[0x42] + (long)iVar6 * 8) = puVar9;
      *(int *)(puVar7 + 0x43) = (int)(lVar5 + 1);
      puVar7[0x5e] = "hknpSolverData::ThreadData::m_jacFixedStream";
      plVar4 = (long *)*param_3;
      *puVar7 = plVar4;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined1 *)((long)puVar7 + 0xc) = 0;
      uVar2 = *(int *)(param_3 + 0xb) - 1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar5 = param_3[1];
        (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
        puVar9 = (undefined8 *)(lVar5 + 0x28);
        *(undefined4 *)(param_3 + 0xb) = 5;
      }
      else {
        *(uint *)(param_3 + 0xb) = uVar2;
        puVar9 = (undefined8 *)(param_3[1] + (ulong)uVar2 * 8);
      }
      puVar9 = (undefined8 *)*puVar9;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar7 + 3);
      iVar6 = *(int *)(puVar7 + 3);
      lVar5 = (long)iVar6;
      if ((int)(*(uint *)((long)puVar7 + 0x1c) & 0x7fffffff) <= iVar6) {
        FUN_031c25b4(puVar7 + 2,puVar3,lVar5 + 1);
        iVar6 = *(int *)(puVar7 + 3);
      }
      *(undefined8 **)(puVar7[2] + (long)iVar6 * 8) = puVar9;
      *(int *)(puVar7 + 3) = (int)(lVar5 + 1);
      puVar7[0x1e] = "hknpSolverData::ThreadData::m_activePairStream";
      plVar4 = (long *)*param_3;
      puVar7[0x60] = plVar4;
      *(undefined4 *)(puVar7 + 0x61) = 0;
      *(undefined1 *)((long)puVar7 + 0x30c) = 0;
      uVar2 = *(int *)(param_3 + 0xb) - 1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar5 = param_3[1];
        (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
        puVar9 = (undefined8 *)(lVar5 + 0x28);
        *(undefined4 *)(param_3 + 0xb) = 5;
      }
      else {
        *(uint *)(param_3 + 0xb) = uVar2;
        puVar9 = (undefined8 *)(param_3[1] + (ulong)uVar2 * 8);
      }
      puVar9 = (undefined8 *)*puVar9;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar7 + 99);
      iVar6 = *(int *)(puVar7 + 99);
      lVar5 = (long)iVar6;
      if ((int)(*(uint *)((long)puVar7 + 0x31c) & 0x7fffffff) <= iVar6) {
        FUN_031c25b4(puVar7 + 0x62,puVar3,lVar5 + 1);
        iVar6 = *(int *)(puVar7 + 99);
      }
      *(undefined8 **)(puVar7[0x62] + (long)iVar6 * 8) = puVar9;
      *(int *)(puVar7 + 99) = (int)(lVar5 + 1);
      puVar7[0x7e] = "hknpSolverData::ThreadData::m_jacConstraintsStream";
      plVar4 = (long *)*param_3;
      puVar7[0x80] = plVar4;
      *(undefined4 *)(puVar7 + 0x81) = 0;
      *(undefined1 *)((long)puVar7 + 0x40c) = 0;
      uVar2 = *(int *)(param_3 + 0xb) - 1;
      if (*(int *)(param_3 + 0xb) < 1) {
        lVar5 = param_3[1];
        (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,6);
        puVar9 = (undefined8 *)(lVar5 + 0x28);
        *(undefined4 *)(param_3 + 0xb) = 5;
      }
      else {
        *(uint *)(param_3 + 0xb) = uVar2;
        puVar9 = (undefined8 *)(param_3[1] + (ulong)uVar2 * 8);
      }
      puVar9 = (undefined8 *)*puVar9;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)(puVar7 + 0x83);
      iVar6 = *(int *)(puVar7 + 0x83);
      lVar5 = (long)iVar6;
      if ((int)(*(uint *)((long)puVar7 + 0x41c) & 0x7fffffff) <= iVar6) {
        FUN_031c25b4(puVar7 + 0x82,puVar3,lVar5 + 1);
        iVar6 = *(int *)(puVar7 + 0x83);
      }
      lVar8 = lVar8 + 0x500;
      *(undefined8 **)(puVar7[0x82] + (long)iVar6 * 8) = puVar9;
      *(int *)(puVar7 + 0x83) = (int)(lVar5 + 1);
      puVar7[0x9e] = "hknpSolverData::ThreadData::m_solverTempsStream";
    } while ((ulong)param_4 * 0x500 != lVar8);
  }
  if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) < (int)param_6) {
    FUN_02fcf15c(param_1 + 2,(long)(int)param_6);
  }
  iVar6 = *(int *)(param_1 + 3);
  if (iVar6 < (int)param_6) {
    lVar8 = (-(ulong)(param_6 >> 0x1f) & 0xffffffe000000000 | (ulong)param_6 << 5) +
            (long)iVar6 * -0x20;
    *(uint *)(param_1 + 3) = param_6;
    puVar7 = (undefined8 *)(param_1[2] + (long)iVar6 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar7 + -4) = 0;
      lVar8 = lVar8 + -0x20;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar8 != 0);
  }
  else if ((int)param_6 < iVar6) {
    *(uint *)(param_1 + 3) = param_6;
  }
  if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) < (int)param_6) {
    FUN_02fcf2f0(param_1 + 4,(long)(int)param_6);
  }
  if (*(uint *)(param_1 + 5) != param_6) {
    *(uint *)(param_1 + 5) = param_6;
  }
  if (0 < *(int *)(param_1 + 3)) {
    lVar8 = 0;
    lVar5 = 0;
    do {
      puVar7 = (undefined8 *)(param_1[2] + lVar8);
      *puVar7 = 0;
      *(undefined4 *)((long)puVar7 + 0xc) = 0;
      puVar7[2] = 0;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      lVar1 = param_1[2] + lVar8;
      lVar8 = lVar8 + 0x20;
      *(long *)(param_1[4] + lVar5 * 8) = lVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 3));
  }
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) < (int)param_6) {
    FUN_02fcf404(param_1 + 6,PTR_PTR_047d1a50,(long)(int)param_6);
  }
  uVar2 = *(uint *)(param_1 + 7);
  if ((int)uVar2 < (int)param_6) {
    *(uint *)(param_1 + 7) = param_6;
    memset((void *)(param_1[6] + (long)(int)uVar2),0,(ulong)(~uVar2 + param_6) + 1);
  }
  else if ((int)param_6 < (int)uVar2) {
    *(uint *)(param_1 + 7) = param_6;
  }
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) < (int)param_6) {
    FUN_02e9b320(param_1 + 8,PTR_PTR_047d1a50,(long)(int)param_6);
  }
  uVar2 = *(uint *)(param_1 + 9);
  if ((int)uVar2 < (int)param_6) {
    *(uint *)(param_1 + 9) = param_6;
    memset((void *)(param_1[8] + (long)(int)uVar2 * 4),0,(ulong)(~uVar2 + param_6) * 4 + 4);
  }
  else if ((int)param_6 < (int)uVar2) {
    *(uint *)(param_1 + 9) = param_6;
  }
  if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) < (int)param_5) {
    FUN_02fcf15c(param_1 + 0xc,(long)(int)param_5);
  }
  iVar6 = *(int *)(param_1 + 0xd);
  if (iVar6 < (int)param_5) {
    lVar8 = (-(ulong)(param_5 >> 0x1f) & 0xffffffe000000000 | (ulong)param_5 << 5) +
            (long)iVar6 * -0x20;
    *(uint *)(param_1 + 0xd) = param_5;
    puVar7 = (undefined8 *)(param_1[0xc] + (long)iVar6 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar7 + -4) = 0;
      lVar8 = lVar8 + -0x20;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar8 != 0);
  }
  else if ((int)param_5 < iVar6) {
    *(uint *)(param_1 + 0xd) = param_5;
  }
  if ((int)(*(uint *)((long)param_1 + 0x7c) & 0x7fffffff) < (int)param_5) {
    FUN_02fcf2f0(param_1 + 0xe,(long)(int)param_5);
  }
  if (*(uint *)(param_1 + 0xf) != param_5) {
    *(uint *)(param_1 + 0xf) = param_5;
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar8 = 0;
    lVar5 = 0;
    do {
      puVar7 = (undefined8 *)(param_1[0xc] + lVar8);
      *puVar7 = 0;
      *(undefined4 *)((long)puVar7 + 0xc) = 0;
      puVar7[2] = 0;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      lVar1 = param_1[0xc] + lVar8;
      lVar8 = lVar8 + 0x20;
      *(long *)(param_1[0xe] + lVar5 * 8) = lVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xd));
  }
  if ((int)(*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) < (int)param_5) {
    FUN_02fcf404(param_1 + 0x10,PTR_PTR_047d1a50,(long)(int)param_5);
  }
  uVar2 = *(uint *)(param_1 + 0x11);
  if ((int)uVar2 < (int)param_5) {
    *(uint *)(param_1 + 0x11) = param_5;
    memset((void *)(param_1[0x10] + (long)(int)uVar2),0,(ulong)(~uVar2 + param_5) + 1);
  }
  else if ((int)param_5 < (int)uVar2) {
    *(uint *)(param_1 + 0x11) = param_5;
  }
  if ((int)(*(uint *)((long)param_1 + 0x9c) & 0x7fffffff) < (int)param_5) {
    FUN_02e9b320(param_1 + 0x12,PTR_PTR_047d1a50,(long)(int)param_5);
  }
  uVar2 = *(uint *)(param_1 + 0x13);
  if ((int)uVar2 < (int)param_5) {
    *(uint *)(param_1 + 0x13) = param_5;
    memset((void *)(param_1[0x12] + (long)(int)uVar2 * 4),0,(ulong)(~uVar2 + param_5) * 4 + 4);
  }
  else if ((int)param_5 < (int)uVar2) {
    *(uint *)(param_1 + 0x13) = param_5;
  }
  if ((int)(*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) < (int)param_6) {
    FUN_02fcf15c(param_1 + 0x16,(long)(int)param_6);
  }
  iVar6 = *(int *)(param_1 + 0x17);
  if (iVar6 < (int)param_6) {
    lVar8 = (-(ulong)(param_6 >> 0x1f) & 0xffffffe000000000 | (ulong)param_6 << 5) +
            (long)iVar6 * -0x20;
    *(uint *)(param_1 + 0x17) = param_6;
    puVar7 = (undefined8 *)(param_1[0x16] + (long)iVar6 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar7 + -4) = 0;
      lVar8 = lVar8 + -0x20;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar8 != 0);
  }
  else if ((int)param_6 < iVar6) {
    *(uint *)(param_1 + 0x17) = param_6;
  }
  if ((int)(*(uint *)((long)param_1 + 0xcc) & 0x7fffffff) < (int)param_6) {
    FUN_02fcf2f0(param_1 + 0x18,(long)(int)param_6);
  }
  if (*(uint *)(param_1 + 0x19) != param_6) {
    *(uint *)(param_1 + 0x19) = param_6;
  }
  if (0 < *(int *)(param_1 + 0x17)) {
    lVar8 = 0;
    lVar5 = 0;
    do {
      puVar7 = (undefined8 *)(param_1[0x16] + lVar8);
      *puVar7 = 0;
      *(undefined4 *)((long)puVar7 + 0xc) = 0;
      puVar7[2] = 0;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      lVar1 = param_1[0x16] + lVar8;
      lVar8 = lVar8 + 0x20;
      *(long *)(param_1[0x18] + lVar5 * 8) = lVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x17));
  }
  if ((int)(*(uint *)((long)param_1 + 0xdc) & 0x7fffffff) < (int)param_6) {
    FUN_02fcf404(param_1 + 0x1a,PTR_PTR_047d1a50,(long)(int)param_6);
  }
  uVar2 = *(uint *)(param_1 + 0x1b);
  if ((int)uVar2 < (int)param_6) {
    *(uint *)(param_1 + 0x1b) = param_6;
    memset((void *)(param_1[0x1a] + (long)(int)uVar2),0,(ulong)(~uVar2 + param_6) + 1);
  }
  else if ((int)param_6 < (int)uVar2) {
    *(uint *)(param_1 + 0x1b) = param_6;
  }
  if ((int)(*(uint *)((long)param_1 + 0xec) & 0x7fffffff) < (int)param_6) {
    FUN_02e9b320(param_1 + 0x1c,PTR_PTR_047d1a50,(long)(int)param_6);
  }
  uVar2 = *(uint *)(param_1 + 0x1d);
  if ((int)uVar2 < (int)param_6) {
    *(uint *)(param_1 + 0x1d) = param_6;
    memset((void *)(param_1[0x1c] + (long)(int)uVar2 * 4),0,(ulong)(~uVar2 + param_6) * 4 + 4);
  }
  else if ((int)param_6 < (int)uVar2) {
    *(uint *)(param_1 + 0x1d) = param_6;
  }
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}


