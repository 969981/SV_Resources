/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0019c5c0; name: FUN_0019c5c0
 */


void FUN_0019c5c0(long param_1,long param_2,ulong param_3,ulong param_4,long *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = (uint)param_4;
  *(long *)(param_1 + 0x28) = (2L << (param_4 & 0x3f)) + 0x20000;
  if (param_3 == 0) {
    return;
  }
  puVar5 = (ulong *)param_5[1];
  if ((param_5[3] - (long)puVar5) + *param_5 + -0x10 < 0x58) {
LAB_0019c698:
    puVar5 = (ulong *)(**(code **)PTR_PTR_047cb890)(0x58,0x10);
    if (puVar5 == (ulong *)0x0) {
      FUN_0015ed40(0x58);
    }
    puVar9 = &LAB_001a33c0;
    *puVar5 = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  else {
    puVar1 = puVar5 + 0xc;
    if ((ulong *)(*param_5 + param_5[3]) < puVar1) {
      if ((int)param_5[4] == 0) {
        puVar5 = (ulong *)0x0;
      }
      else {
        puVar5 = (ulong *)(**(code **)PTR_PTR_047cb890)(0x60,0x10);
        if (puVar5 == (ulong *)0x0) {
          FUN_0015ed40(0x60);
        }
      }
    }
    else {
      param_5[1] = (long)puVar1;
      puVar2 = (ulong *)param_5[2];
      if ((ulong *)param_5[2] <= puVar1) {
        puVar2 = puVar1;
      }
      param_5[2] = (long)puVar2;
    }
    *puVar5 = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    if (puVar5 == (ulong *)0x0) goto LAB_0019c698;
    puVar9 = &LAB_001a3330;
  }
  *(undefined1 **)(param_1 + 0x30) = puVar9;
  if (0x12 < (int)uVar7) {
    uVar7 = 0x13;
  }
  *(undefined4 *)(puVar5 + 9) = 0xffff;
  *(uint *)((long)puVar5 + 0x4c) = uVar7;
  uVar4 = ~(-1 << (ulong)(uVar7 & 0x1f));
  *(uint *)(puVar5 + 10) = uVar7;
  *(uint *)(puVar5 + 8) = uVar4;
  *(uint *)((long)puVar5 + 0x44) = uVar4;
  lVar11 = 2L << ((ulong)uVar7 & 0x3f);
  lVar6 = param_5[1];
  uVar10 = ((param_5[3] - lVar6) + *param_5) - 0x10;
  if ((long)(uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU)) < lVar11 + 0x40) {
    uVar10 = (**(code **)PTR_PTR_047cb890)(lVar11,0x40);
    if (uVar10 == 0) {
      FUN_0015ed40(lVar11);
      uVar10 = 0;
    }
    uVar8 = 1;
  }
  else {
    uVar12 = lVar11 + 0x4fU & 0xfffffffffffffff0;
    uVar10 = lVar6 + uVar12;
    if ((ulong)(*param_5 + param_5[3]) < uVar10) {
      if ((int)param_5[4] != 0) {
        lVar6 = (**(code **)PTR_PTR_047cb890)(uVar12,0x10);
        if (lVar6 != 0) goto LAB_0019c7bc;
        FUN_0015ed40(uVar12);
      }
      lVar6 = 0;
    }
    else {
      uVar12 = param_5[2];
      if ((ulong)param_5[2] <= uVar10) {
        uVar12 = uVar10;
      }
      param_5[1] = uVar10;
      param_5[2] = uVar12;
    }
LAB_0019c7bc:
    uVar8 = 0;
    uVar10 = lVar6 + 0x3fU & 0xffffffffffffffc0;
  }
  *(undefined4 *)(puVar5 + 1) = uVar8;
  *puVar5 = uVar10;
  lVar6 = param_5[1];
  if ((param_5[3] - lVar6) + *param_5 + -0x10 < 0x20040) {
    uVar10 = (**(code **)PTR_PTR_047cb890)(0x20000,0x40);
    if (uVar10 == 0) {
      FUN_0015ed40(0x20000);
      uVar10 = 0;
    }
    uVar8 = 1;
    goto LAB_0019c888;
  }
  uVar10 = lVar6 + 0x20040;
  if ((ulong)(*param_5 + param_5[3]) < uVar10) {
    if ((int)param_5[4] != 0) {
      lVar6 = (**(code **)PTR_PTR_047cb890)(0x20040,0x10);
      if (lVar6 != 0) goto LAB_0019c87c;
      FUN_0015ed40(0x20040);
    }
    lVar6 = 0;
  }
  else {
    param_5[1] = uVar10;
    uVar12 = param_5[2];
    if ((ulong)param_5[2] <= uVar10) {
      uVar12 = uVar10;
    }
    param_5[2] = uVar12;
  }
LAB_0019c87c:
  uVar8 = 0;
  uVar10 = lVar6 + 0x3fU & 0xffffffffffffffc0;
LAB_0019c888:
  *(undefined4 *)(puVar5 + 3) = uVar8;
  puVar5[2] = uVar10;
  memset((void *)*puVar5,0,(ulong)((int)puVar5[8] + 1) << 1);
  if ((void *)puVar5[4] != (void *)0x0) {
    memset((void *)puVar5[4],0,(ulong)(*(int *)((long)puVar5 + 0x44) + 1) << 2);
  }
  if ((void *)puVar5[2] != (void *)0x0) {
    memset((void *)puVar5[2],0,(ulong)((int)puVar5[9] + 1) << 1);
  }
  lVar6 = param_3 - param_2;
  if (lVar6 == 0) {
    puVar5[6] = param_3;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x10);
    if ((4 < *(int *)(param_1 + 4)) && (*(int *)(lVar11 + 0x28) != 0)) {
      if (*(int *)(lVar11 + 0x24) <= lVar6) {
        lVar6 = (long)*(int *)(lVar11 + 0x24);
      }
    }
    iVar3 = *(int *)(lVar11 + 0x14);
    lVar11 = lVar6;
    if (iVar3 <= lVar6) {
      lVar11 = (long)iVar3;
    }
    if (iVar3 < 1) {
      lVar11 = lVar6;
    }
    if (0x3ffffff < lVar11) {
      lVar11 = 0x4000000;
    }
    FUN_001a3440(puVar5,param_2,param_3,lVar11);
  }
  *(ulong **)(param_1 + 0x20) = puVar5;
  return;
}


