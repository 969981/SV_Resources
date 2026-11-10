/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a3730; name: FUN_001a3730
 */


void FUN_001a3730(ulong *param_1,uint param_2,uint param_3,uint param_4,long *param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (0x12 < (int)param_2) {
    param_2 = 0x13;
  }
  if (0x12 < (int)param_3) {
    param_3 = 0x13;
  }
  *(uint *)(param_1 + 10) = param_3;
  *(int *)(param_1 + 9) = ~(-1 << (ulong)(param_4 & 0x1f));
  *(uint *)((long)param_1 + 0x4c) = param_2;
  *(int *)(param_1 + 8) = ~(-1 << (ulong)(param_2 & 0x1f));
  *(int *)((long)param_1 + 0x44) = ~(-1 << (ulong)(param_3 & 0x1f));
  lVar5 = 4L << ((ulong)param_2 & 0x3f);
  if (param_5 == (long *)0x0) {
LAB_001a37bc:
    uVar3 = (**(code **)PTR_PTR_047cb890)(lVar5,0x40);
    if (uVar3 == 0) {
      FUN_0015ed40(lVar5);
    }
    *(undefined4 *)(param_1 + 1) = 1;
    lVar5 = 4L << ((ulong)param_3 & 0x3f);
    *param_1 = uVar3;
    if (param_5 != (long *)0x0) goto LAB_001a3874;
LAB_001a3898:
    uVar3 = (**(code **)PTR_PTR_047cb890)(lVar5,0x40);
    if (uVar3 == 0) {
      FUN_0015ed40(lVar5);
    }
    *(undefined4 *)(param_1 + 5) = 1;
    lVar5 = 2L << ((ulong)param_4 & 0x3f);
    param_1[4] = uVar3;
    if (param_5 != (long *)0x0) goto LAB_001a3950;
  }
  else {
    lVar1 = param_5[1];
    uVar3 = ((param_5[3] - lVar1) + *param_5) - 0x10;
    if ((long)(uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU)) < lVar5 + 0x40)
    goto LAB_001a37bc;
    uVar4 = lVar5 + 0x4fU & 0xfffffffffffffff0;
    uVar3 = lVar1 + uVar4;
    if ((ulong)(*param_5 + param_5[3]) < uVar3) {
      if ((int)param_5[4] != 0) {
        lVar1 = (**(code **)PTR_PTR_047cb890)(uVar4,0x10);
        if (lVar1 != 0) goto LAB_001a385c;
        FUN_0015ed40(uVar4);
      }
      lVar1 = 0;
    }
    else {
      uVar4 = param_5[2];
      if ((ulong)param_5[2] <= uVar3) {
        uVar4 = uVar3;
      }
      param_5[1] = uVar3;
      param_5[2] = uVar4;
    }
LAB_001a385c:
    *param_1 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    *(undefined4 *)(param_1 + 1) = 0;
    lVar5 = 4L << ((ulong)param_3 & 0x3f);
LAB_001a3874:
    lVar1 = param_5[1];
    uVar3 = ((param_5[3] - lVar1) + *param_5) - 0x10;
    if ((long)(uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU)) < lVar5 + 0x40)
    goto LAB_001a3898;
    uVar4 = lVar5 + 0x4fU & 0xfffffffffffffff0;
    uVar3 = lVar1 + uVar4;
    if ((ulong)(*param_5 + param_5[3]) < uVar3) {
      if ((int)param_5[4] != 0) {
        lVar1 = (**(code **)PTR_PTR_047cb890)(uVar4,0x10);
        if (lVar1 != 0) goto LAB_001a3938;
        FUN_0015ed40(uVar4);
      }
      lVar1 = 0;
    }
    else {
      uVar4 = param_5[2];
      if ((ulong)param_5[2] <= uVar3) {
        uVar4 = uVar3;
      }
      param_5[1] = uVar3;
      param_5[2] = uVar4;
    }
LAB_001a3938:
    param_1[4] = lVar1 + 0x3fU & 0xffffffffffffffc0;
    *(undefined4 *)(param_1 + 5) = 0;
    lVar5 = 2L << ((ulong)param_4 & 0x3f);
LAB_001a3950:
    lVar1 = param_5[1];
    uVar3 = ((param_5[3] - lVar1) + *param_5) - 0x10;
    if (lVar5 + 0x40 <= (long)(uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU))) {
      uVar4 = lVar5 + 0x4fU & 0xfffffffffffffff0;
      uVar3 = lVar1 + uVar4;
      if ((ulong)(*param_5 + param_5[3]) < uVar3) {
        if ((int)param_5[4] != 0) {
          lVar1 = (**(code **)PTR_PTR_047cb890)(uVar4,0x10);
          if (lVar1 != 0) goto LAB_001a3a00;
          FUN_0015ed40(uVar4);
        }
        lVar1 = 0;
      }
      else {
        uVar4 = param_5[2];
        if ((ulong)param_5[2] <= uVar3) {
          uVar4 = uVar3;
        }
        param_5[1] = uVar3;
        param_5[2] = uVar4;
      }
LAB_001a3a00:
      uVar2 = 0;
      uVar3 = lVar1 + 0x3fU & 0xffffffffffffffc0;
      goto LAB_001a3a0c;
    }
  }
  uVar3 = (**(code **)PTR_PTR_047cb890)(lVar5,0x40);
  if (uVar3 == 0) {
    FUN_0015ed40(lVar5);
    uVar3 = 0;
  }
  uVar2 = 1;
LAB_001a3a0c:
  *(undefined4 *)(param_1 + 3) = uVar2;
  param_1[2] = uVar3;
  memset((void *)*param_1,0,(ulong)((int)param_1[8] + 1) << 2);
  if ((void *)param_1[4] != (void *)0x0) {
    memset((void *)param_1[4],0,(ulong)(*(int *)((long)param_1 + 0x44) + 1) << 2);
  }
  if ((void *)param_1[2] == (void *)0x0) {
    return;
  }
  memset((void *)param_1[2],0,(ulong)((int)param_1[9] + 1) << 1);
  return;
}


