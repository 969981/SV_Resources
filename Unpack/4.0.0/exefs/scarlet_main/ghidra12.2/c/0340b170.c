/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0340b170; name: FUN_0340b170
 */


int FUN_0340b170(long param_1,int param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  void *pvVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong local_70;
  undefined1 local_68;
  int local_64;
  
  puVar9 = PTR_DAT_047e6c20;
  uVar16 = *(ulong *)*param_3;
  bVar6 = *(byte *)(param_3 + 1);
  uVar5 = *(uint *)(PTR_DAT_047e6c20 + 0x20);
  uVar1 = (ulong)bVar6 + 8;
  uVar17 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar17 * 4;
  iVar11 = (uVar5 & (uint)(uVar16 >> ((ulong)bVar6 & 0x3f))) + 1;
  iVar7 = iVar11 * 0x20;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar17;
  *(int *)(param_1 + 0x90) = iVar11;
  puVar8 = PTR_DAT_047e2fd0;
  pvVar12 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,iVar7);
  *(void **)(param_1 + 0xb8) = pvVar12;
  if (pvVar12 == (void *)0x0) {
    return -0x85;
  }
  lVar15 = param_1 + 0x10;
  memset(pvVar12,0,(long)iVar7);
  iVar11 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x90) * 0x48;
  *(int *)(param_1 + 0x68) = iVar11;
  puVar10 = PTR_PTR_047e6c90;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar18 = 0;
    lVar19 = 0;
    uVar13 = 1;
    if (param_2 == 2) {
      uVar13 = 2;
    }
    do {
      uVar16 = *(ulong *)*param_3;
      bVar6 = *(byte *)(param_3 + 1);
      uVar5 = *(uint *)(puVar9 + 0x28);
      uVar1 = (ulong)bVar6 + 10;
      uVar17 = uVar1 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
      *param_3 = *param_3 + uVar17 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar17;
      local_70 = *(ulong *)(puVar10 + (uVar16 >> ((ulong)bVar6 & 0x3f) & (ulong)uVar5) * 8) &
                 0xfffffffffffffffc;
      uVar5 = (uint)*(ulong *)(puVar10 + (uVar16 >> ((ulong)bVar6 & 0x3f) & (ulong)uVar5) * 8) & 3;
      local_64 = uVar5 + 0x36a;
      local_68 = (undefined1)(uVar5 << 3);
      iVar11 = FUN_03406f70(&local_70,*(long *)(param_1 + 0xb8) + lVar18,lVar15,uVar13);
      if (iVar11 != 0) {
        return iVar11;
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x20;
    } while (lVar19 < *(int *)(param_1 + 0x90));
    iVar11 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - iVar11;
  lVar19 = (**(code **)(puVar8 + 0x10))(5);
  *(long *)(param_1 + 0x50) = lVar19;
  *(long *)(param_1 + 0x58) = lVar19;
  if (lVar19 == 0) {
    return -0x8b;
  }
  lVar19 = param_1 + 0x78;
  bVar6 = *(byte *)(param_3 + 1);
  uVar5 = *(uint *)(puVar9 + 0x18);
  uVar17 = *(ulong *)*param_3;
  uVar1 = (ulong)bVar6 + 6;
  uVar16 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar16 * 4;
  iVar11 = (uVar5 & (uint)(uVar17 >> ((ulong)bVar6 & 0x3f))) + 1;
  uVar5 = iVar11 * 0x40;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar16;
  *(int *)(param_1 + 0x88) = iVar11;
  if ((uVar5 == 0) || (uVar2 = *(int *)(param_1 + 0x60) + uVar5, *(uint *)(param_1 + 100) < uVar2))
  {
    pvVar12 = (void *)0x0;
  }
  else {
    pvVar12 = *(void **)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = (long)pvVar12 + (ulong)uVar5;
    *(uint *)(param_1 + 0x60) = uVar2;
    if (pvVar12 != (void *)0x0) {
      memset(pvVar12,0,(ulong)uVar5);
      iVar11 = *(int *)(param_1 + 0x88);
    }
  }
  *(void **)(param_1 + 0xa8) = pvVar12;
  if (0 < iVar11) {
    iVar11 = FUN_03405620(pvVar12,lVar19,param_3,lVar15);
    if (iVar11 != 0) {
      return -0x85;
    }
    lVar18 = 0;
    lVar14 = 0x40;
    while (lVar18 = lVar18 + 1, lVar18 < *(int *)(param_1 + 0x88)) {
      lVar4 = *(long *)(param_1 + 0xa8) + lVar14;
      lVar14 = lVar14 + 0x40;
      iVar11 = FUN_03405620(lVar4,lVar19,param_3,lVar15);
      if (iVar11 != 0) {
        return -0x85;
      }
    }
  }
  uVar5 = *(uint *)(puVar9 + 0x18) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar16 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar16 * 4;
  iVar11 = uVar5 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar16;
  *(int *)(param_1 + 0x8c) = iVar11;
  uVar2 = iVar11 * 0x28;
  if ((uVar2 == 0) || (uVar3 = *(int *)(param_1 + 0x60) + uVar2, *(uint *)(param_1 + 100) < uVar3))
  {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = lVar18 + (ulong)uVar2;
    *(uint *)(param_1 + 0x60) = uVar3;
  }
  *(long *)(param_1 + 0xb0) = lVar18;
  if (-1 < (int)uVar5) {
    iVar11 = FUN_0340c180(lVar18,lVar19,param_3,lVar15);
    if (iVar11 != 0) {
      return -0x85;
    }
    lVar18 = 0;
    lVar14 = 0x28;
    while (lVar18 = lVar18 + 1, lVar18 < *(int *)(param_1 + 0x8c)) {
      lVar4 = *(long *)(param_1 + 0xb0) + lVar14;
      lVar14 = lVar14 + 0x28;
      iVar11 = FUN_0340c180(lVar4,lVar19,param_3,lVar15);
      if (iVar11 != 0) {
        return -0x85;
      }
    }
  }
  uVar5 = *(uint *)(puVar9 + 0x18) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar16 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar16 * 4;
  iVar11 = uVar5 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar16;
  *(int *)(param_1 + 0x84) = iVar11;
  uVar2 = iVar11 * 0x28;
  if ((uVar2 == 0) || (uVar3 = *(int *)(param_1 + 0x60) + uVar2, *(uint *)(param_1 + 100) < uVar3))
  {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = lVar18 + (ulong)uVar2;
    *(uint *)(param_1 + 0x60) = uVar3;
  }
  *(long *)(param_1 + 0xa0) = lVar18;
  if (-1 < (int)uVar5) {
    iVar11 = FUN_0340b760(lVar18,lVar19,param_2,param_3,lVar15);
    if (iVar11 != 0) {
      return -0x85;
    }
    lVar18 = 0;
    lVar14 = 0x28;
    while (lVar18 = lVar18 + 1, lVar18 < *(int *)(param_1 + 0x84)) {
      lVar4 = *(long *)(param_1 + 0xa0) + lVar14;
      lVar14 = lVar14 + 0x28;
      iVar11 = FUN_0340b760(lVar4,lVar19,param_2,param_3,lVar15);
      if (iVar11 != 0) {
        return -0x85;
      }
    }
  }
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar5 = *(uint *)(puVar9 + 0x18) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar16 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar16 * 4;
  iVar11 = uVar5 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar16;
  *(int *)(param_1 + 0x80) = iVar11;
  iVar11 = iVar11 * 2;
  if (iVar11 != 0) {
    uVar3 = iVar11 + 3U & 0xfffffffc;
    uVar2 = *(int *)(param_1 + 0x60) + uVar3;
    if (uVar2 <= *(uint *)(param_1 + 100)) {
      lVar15 = *(long *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = lVar15 + (ulong)uVar3;
      *(uint *)(param_1 + 0x60) = uVar2;
      goto LAB_0340b674;
    }
  }
  lVar15 = 0;
LAB_0340b674:
  *(long *)(param_1 + 0x98) = lVar15;
  if ((int)uVar5 < 0) {
    return 0;
  }
  lVar19 = 0;
  lVar15 = 0;
  do {
    uVar5 = *(uint *)*param_3;
    bVar6 = *(byte *)(param_3 + 1);
    uVar1 = (ulong)bVar6 + 1;
    uVar16 = uVar1 >> 5;
    *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
    *param_3 = (long)((uint *)*param_3 + uVar16);
    *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar16;
    *(byte *)(*(long *)(param_1 + 0x98) + lVar19) = (byte)(uVar5 >> (ulong)(bVar6 & 0x1f)) & 1;
    uVar16 = *(ulong *)*param_3;
    bVar6 = *(byte *)(param_3 + 1);
    uVar13 = *(undefined4 *)(puVar9 + 0x20);
    uVar1 = (ulong)bVar6 + 8;
    uVar17 = uVar1 >> 5;
    *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
    *param_3 = *param_3 + uVar17 * 4;
    *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar17;
    *(byte *)(*(long *)(param_1 + 0x98) + lVar19 + 1) =
         (byte)uVar13 & (byte)(uVar16 >> ((ulong)bVar6 & 0x3f));
    if (*(int *)(param_1 + 0x84) <= (int)(uint)*(byte *)(*(long *)(param_1 + 0x98) + lVar19 + 1)) {
      return -0x85;
    }
    lVar15 = lVar15 + 1;
    lVar19 = lVar19 + 2;
  } while (lVar15 < *(int *)(param_1 + 0x80));
  return 0;
}


