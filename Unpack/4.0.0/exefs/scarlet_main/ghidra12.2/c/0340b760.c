/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0340b760; name: FUN_0340b760
 */


undefined8 FUN_0340b760(int *param_1,long param_2,uint param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  bVar6 = *(byte *)(param_4 + 1);
  uVar11 = (ulong)bVar6 + 1;
  uVar3 = *(uint *)*param_4;
  uVar2 = (uint)uVar11 & 0x1f;
  uVar11 = uVar11 >> 5;
  *(char *)(param_4 + 1) = (char)uVar2;
  iVar8 = *(int *)((long)param_4 + 0xc) - (int)uVar11;
  puVar1 = (ulong *)((uint *)*param_4 + uVar11);
  *(int *)((long)param_4 + 0xc) = iVar8;
  *param_4 = (long)puVar1;
  puVar7 = PTR_DAT_047e6c20;
  if ((uVar3 >> (ulong)(bVar6 & 0x1f) & 1) == 0) {
    iVar8 = 1;
  }
  else {
    uVar11 = *puVar1;
    uVar3 = uVar2 + 4;
    uVar4 = *(uint *)(PTR_DAT_047e6c20 + 0x10);
    *(uint *)((long)param_4 + 0xc) = iVar8 - (uVar3 >> 5);
    *(byte *)(param_4 + 1) = (byte)uVar3 & 0x1f;
    iVar8 = (uVar4 & (uint)(uVar11 >> uVar2)) + 1;
    *param_4 = (long)((long)puVar1 + (ulong)(uVar3 >> 5) * 4);
  }
  *param_1 = iVar8;
  bVar6 = *(byte *)(param_4 + 1);
  uVar11 = (ulong)bVar6 + 1;
  uVar3 = *(uint *)*param_4;
  uVar2 = (uint)uVar11 & 0x1f;
  uVar11 = uVar11 >> 5;
  puVar1 = (ulong *)((uint *)*param_4 + uVar11);
  iVar8 = *(int *)((long)param_4 + 0xc) - (int)uVar11;
  *(char *)(param_4 + 1) = (char)uVar2;
  *param_4 = (long)puVar1;
  *(int *)((long)param_4 + 0xc) = iVar8;
  if ((uVar3 >> (ulong)(bVar6 & 0x1f) & 1) != 0) {
    uVar11 = *puVar1;
    uVar4 = *(uint *)(puVar7 + 0x20);
    uVar3 = uVar2 + 8;
    *(byte *)(param_4 + 1) = (byte)uVar3 & 0x1f;
    *(uint *)((long)param_4 + 0xc) = iVar8 - (uVar3 >> 5);
    *param_4 = (long)((long)puVar1 + (ulong)(uVar3 >> 5) * 4);
    iVar8 = (uVar4 & (uint)(uVar11 >> uVar2)) + 1;
    param_1[6] = iVar8;
    if (iVar8 * 2 == 0) {
LAB_0340b87c:
      lVar9 = 0;
    }
    else {
      uVar3 = iVar8 * 2 + 3U & 0xfffffffc;
      uVar2 = *(int *)(param_5 + 0x50) + uVar3;
      if (*(uint *)(param_5 + 0x54) < uVar2) goto LAB_0340b87c;
      lVar9 = *(long *)(param_5 + 0x48);
      *(ulong *)(param_5 + 0x48) = lVar9 + (ulong)uVar3;
      *(uint *)(param_5 + 0x50) = uVar2;
      iVar8 = param_1[6];
    }
    *(long *)(param_1 + 8) = lVar9;
    if (0 < iVar8) {
      lVar10 = 0;
      lVar9 = 0;
      uVar2 = 0;
      if (param_3 - 1 != 0 && param_3 != 0) {
        uVar2 = 0x20 - (int)LZCOUNT(param_3 - 1);
      }
      uVar11 = (ulong)uVar2;
      do {
        uVar3 = *(uint *)(puVar7 + uVar11 * 4) &
                (uint)(*(ulong *)*param_4 >> ((ulong)*(byte *)(param_4 + 1) & 0x3f));
        uVar12 = uVar11 + *(byte *)(param_4 + 1);
        uVar14 = uVar12 >> 5;
        *(byte *)(param_4 + 1) = (byte)uVar12 & 0x1f;
        *param_4 = *param_4 + uVar14 * 4;
        *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar14;
        *(char *)(*(long *)(param_1 + 8) + lVar10) = (char)uVar3;
        uVar2 = *(uint *)(puVar7 + uVar11 * 4) &
                (uint)(*(ulong *)*param_4 >> ((ulong)*(byte *)(param_4 + 1) & 0x3f));
        uVar12 = uVar11 + *(byte *)(param_4 + 1);
        uVar14 = uVar12 >> 5;
        *(byte *)(param_4 + 1) = (byte)uVar12 & 0x1f;
        *param_4 = *param_4 + uVar14 * 4;
        *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar14;
        *(char *)(*(long *)(param_1 + 8) + lVar10 + 1) = (char)uVar2;
        uVar2 = uVar2 & 0xff;
        if ((int)param_3 <= (int)uVar2) {
          return 0xffffffff;
        }
        uVar3 = uVar3 & 0xff;
        if ((int)param_3 <= (int)uVar3) {
          return 0xffffffff;
        }
        if (uVar3 == uVar2) {
          return 0xffffffff;
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 2;
      } while (lVar9 < param_1[6]);
    }
  }
  bVar6 = *(byte *)(param_4 + 1);
  uVar11 = (ulong)bVar6 + 2;
  uVar12 = *(ulong *)*param_4;
  uVar2 = *(uint *)(puVar7 + 8);
  *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
  uVar11 = uVar11 >> 5;
  *param_4 = *param_4 + uVar11 * 4;
  *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar11;
  if (0 < (int)(uVar2 & (uint)(uVar12 >> ((ulong)bVar6 & 0x3f)))) {
    return 0xffffffff;
  }
  iVar8 = *param_1;
  if (1 < iVar8) {
    if (param_3 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      uVar3 = param_3 + 3 & 0xfffffffc;
      uVar2 = *(int *)(param_5 + 0x50) + uVar3;
      if (*(uint *)(param_5 + 0x54) < uVar2) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(param_5 + 0x48);
        *(ulong *)(param_5 + 0x48) = lVar9 + (ulong)uVar3;
        *(uint *)(param_5 + 0x50) = uVar2;
      }
      *(long *)(param_1 + 2) = lVar9;
      if ((int)param_3 < 1) {
        iVar8 = *param_1;
      }
      else {
        uVar11 = 0;
        do {
          uVar14 = *(ulong *)*param_4;
          bVar6 = *(byte *)(param_4 + 1);
          uVar5 = *(undefined4 *)(puVar7 + 0x10);
          uVar12 = (ulong)bVar6 + 4;
          uVar13 = uVar12 >> 5;
          *(byte *)(param_4 + 1) = (byte)uVar12 & 0x1f;
          *param_4 = *param_4 + uVar13 * 4;
          *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar13;
          *(byte *)(*(long *)(param_1 + 2) + uVar11) =
               (byte)uVar5 & (byte)(uVar14 >> ((ulong)bVar6 & 0x3f));
          iVar8 = *param_1;
          if (iVar8 <= (int)(uint)*(byte *)(*(long *)(param_1 + 2) + uVar11)) {
            return 0xffffffff;
          }
          uVar11 = uVar11 + 1;
        } while (param_3 != uVar11);
      }
    }
  }
  if (iVar8 * 2 != 0) {
    uVar3 = iVar8 * 2 + 3U & 0xfffffffc;
    uVar2 = *(int *)(param_5 + 0x50) + uVar3;
    if (uVar2 <= *(uint *)(param_5 + 0x54)) {
      lVar9 = *(long *)(param_5 + 0x48);
      *(ulong *)(param_5 + 0x48) = lVar9 + (ulong)uVar3;
      *(uint *)(param_5 + 0x50) = uVar2;
      iVar8 = *param_1;
      goto LAB_0340badc;
    }
  }
  lVar9 = 0;
LAB_0340badc:
  *(long *)(param_1 + 4) = lVar9;
  if (0 < iVar8) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar11 = (ulong)*(byte *)(param_4 + 1) + 8;
      puVar1 = (ulong *)(*param_4 + (uVar11 >> 5) * 4);
      uVar2 = (uint)uVar11 & 0x1f;
      iVar8 = *(int *)((long)param_4 + 0xc) - (int)(uVar11 >> 5);
      *(char *)(param_4 + 1) = (char)uVar2;
      uVar2 = uVar2 + 8;
      *(int *)((long)param_4 + 0xc) = iVar8;
      *param_4 = (long)puVar1;
      uVar12 = *puVar1;
      uVar5 = *(undefined4 *)(puVar7 + 0x20);
      *(byte *)(param_4 + 1) = (byte)uVar2 & 0x1f;
      *(uint *)((long)param_4 + 0xc) = iVar8 - (uVar2 >> 5);
      *param_4 = (long)puVar1 + (ulong)(uVar2 >> 5) * 4;
      *(byte *)(*(long *)(param_1 + 4) + lVar10) = (byte)uVar5 & (byte)(uVar12 >> (uVar11 & 0x1f));
      if (*(int *)(param_2 + 0x10) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar10)) {
        return 0xffffffff;
      }
      uVar12 = *(ulong *)*param_4;
      bVar6 = *(byte *)(param_4 + 1);
      uVar5 = *(undefined4 *)(puVar7 + 0x20);
      uVar11 = (ulong)bVar6 + 8;
      uVar14 = uVar11 >> 5;
      *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
      *param_4 = *param_4 + uVar14 * 4;
      *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar14;
      *(byte *)(*(long *)(param_1 + 4) + lVar10 + 1) =
           (byte)uVar5 & (byte)(uVar12 >> ((ulong)bVar6 & 0x3f));
      if (*(int *)(param_2 + 0x14) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar10 + 1)) {
        return 0xffffffff;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 2;
    } while (lVar9 < *param_1);
  }
  return 0;
}


