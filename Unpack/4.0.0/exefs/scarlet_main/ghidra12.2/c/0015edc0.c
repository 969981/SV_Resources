/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015edc0; name: FUN_0015edc0
 */


void FUN_0015edc0(uint *param_1,ulong param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int local_1050 [2];
  undefined8 auStack_1048 [127];
  undefined8 local_c50 [128];
  undefined8 local_850 [128];
  undefined8 local_450 [128];
  
  piVar16 = local_1050;
  piVar15 = local_1050;
  uVar19 = (ulong)param_4;
  if ((long)param_2 < 0xc0) {
    if ((param_5 & 1) == 0) {
      memset(param_3,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2);
    }
    puVar20 = (uint *)((long)param_1 + (param_2 & 0xfffffffffffffffc));
    puVar4 = (uint *)((long)param_1 + param_2);
    for (; param_1 < puVar20; param_1 = param_1 + 1) {
      uVar7 = *param_1;
      lVar17 = ((ulong)uVar7 & 0xff) * 4;
      *(int *)((long)param_3 + lVar17) = *(int *)((long)param_3 + lVar17) + 1;
      lVar17 = ((ulong)(uVar7 >> 8) & 0xff) * 4;
      *(int *)((long)param_3 + lVar17) = *(int *)((long)param_3 + lVar17) + 1;
      lVar17 = ((ulong)(uVar7 >> 0x10) & 0xff) * 4;
      *(int *)((long)param_3 + lVar17) = *(int *)((long)param_3 + lVar17) + 1;
      uVar19 = (ulong)(uVar7 >> 0x16) & 0x3fc;
      *(int *)((long)param_3 + uVar19) = *(int *)((long)param_3 + uVar19) + 1;
    }
    if (puVar4 <= param_1) {
      return;
    }
    do {
      puVar20 = (uint *)((long)param_1 + 1);
      lVar17 = (ulong)(byte)*param_1 * 4;
      *(int *)((long)param_3 + lVar17) = *(int *)((long)param_3 + lVar17) + 1;
      param_1 = puVar20;
    } while (puVar4 != puVar20);
    return;
  }
  memset(local_1050,0,0x1000);
  pbVar5 = (byte *)((long)param_1 + param_2);
  for (; ((ulong)param_1 & 7) != 0; param_1 = (uint *)((long)param_1 + 1)) {
    local_1050[(byte)*param_1] = local_1050[(byte)*param_1] + 1;
  }
  pbVar12 = (byte *)FUN_00160080(param_1,(long)pbVar5 - (long)param_1,local_1050);
  if (pbVar12 < pbVar5) {
    do {
      pbVar13 = pbVar12 + 1;
      local_1050[*pbVar12] = local_1050[*pbVar12] + 1;
      pbVar12 = pbVar13;
    } while (pbVar5 != pbVar13);
  }
  uVar7 = param_4 & 0xfffffffc;
  if ((param_5 & 1) == 0) {
    if ((int)uVar7 < 1) {
      uVar14 = 0;
      if ((int)param_4 < 1) {
        return;
      }
    }
    else {
      uVar14 = 0;
      puVar18 = param_3;
      do {
        puVar8 = (undefined8 *)((long)piVar15 + 8);
        uVar21 = *(undefined8 *)piVar15;
        uVar14 = uVar14 + 4;
        puVar9 = (undefined8 *)((long)piVar15 + 0x408);
        uVar22 = *(undefined8 *)((long)piVar15 + 0x400);
        puVar10 = (undefined8 *)((long)piVar15 + 0x808);
        uVar23 = *(undefined8 *)((long)piVar15 + 0x800);
        puVar11 = (undefined8 *)((long)piVar15 + 0xc08);
        uVar24 = *(undefined8 *)((long)piVar15 + 0xc00);
        piVar15 = (int *)((long)piVar15 + 0x10);
        puVar18[1] = CONCAT44((int)((ulong)*puVar9 >> 0x20) + (int)((ulong)*puVar8 >> 0x20) +
                              (int)((ulong)*puVar10 >> 0x20) + (int)((ulong)*puVar11 >> 0x20),
                              (int)*puVar9 + (int)*puVar8 + (int)*puVar10 + (int)*puVar11);
        *puVar18 = CONCAT44((int)((ulong)uVar22 >> 0x20) + (int)((ulong)uVar21 >> 0x20) +
                            (int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar24 >> 0x20),
                            (int)uVar22 + (int)uVar21 + (int)uVar23 + (int)uVar24);
        puVar18 = puVar18 + 2;
      } while ((long)uVar14 < (long)(int)uVar7);
      if ((int)param_4 <= (int)uVar14) {
        return;
      }
    }
    uVar14 = uVar14 & 0xffffffff;
    piVar16 = local_1050 + uVar14;
    lVar17 = uVar19 - uVar14;
    piVar15 = (int *)((long)param_3 + uVar14 * 4);
    do {
      iVar6 = *piVar16;
      lVar17 = lVar17 + -1;
      piVar1 = piVar16 + 0x100;
      piVar2 = piVar16 + 0x200;
      piVar3 = piVar16 + 0x300;
      piVar16 = piVar16 + 1;
      *piVar15 = *piVar1 + iVar6 + *piVar2 + *piVar3;
      piVar15 = piVar15 + 1;
    } while (lVar17 != 0);
  }
  else {
    if ((int)uVar7 < 1) {
      uVar14 = 0;
      if ((int)param_4 < 1) {
        return;
      }
    }
    else {
      uVar14 = 0;
      puVar18 = param_3;
      do {
        uVar14 = uVar14 + 4;
        puVar8 = (undefined8 *)((long)piVar16 + 8);
        uVar21 = *(undefined8 *)piVar16;
        puVar9 = (undefined8 *)((long)piVar16 + 0x408);
        uVar22 = *(undefined8 *)((long)piVar16 + 0x400);
        puVar10 = (undefined8 *)((long)piVar16 + 0x808);
        uVar23 = *(undefined8 *)((long)piVar16 + 0x800);
        puVar11 = (undefined8 *)((long)piVar16 + 0xc08);
        uVar24 = *(undefined8 *)((long)piVar16 + 0xc00);
        piVar16 = (int *)((long)piVar16 + 0x10);
        puVar18[1] = CONCAT44((int)((ulong)*puVar8 >> 0x20) + (int)((ulong)puVar18[1] >> 0x20) +
                              (int)((ulong)*puVar9 >> 0x20) + (int)((ulong)*puVar10 >> 0x20) +
                              (int)((ulong)*puVar11 >> 0x20),
                              (int)*puVar8 + (int)puVar18[1] + (int)*puVar9 + (int)*puVar10 +
                              (int)*puVar11);
        *puVar18 = CONCAT44((int)((ulong)uVar21 >> 0x20) + (int)((ulong)*puVar18 >> 0x20) +
                            (int)((ulong)uVar22 >> 0x20) + (int)((ulong)uVar23 >> 0x20) +
                            (int)((ulong)uVar24 >> 0x20),
                            (int)uVar21 + (int)*puVar18 + (int)uVar22 + (int)uVar23 + (int)uVar24);
        puVar18 = puVar18 + 2;
      } while ((long)uVar14 < (long)(int)uVar7);
      if ((int)param_4 <= (int)uVar14) {
        return;
      }
    }
    uVar14 = uVar14 & 0xffffffff;
    piVar16 = local_1050 + uVar14;
    lVar17 = uVar19 - uVar14;
    piVar15 = (int *)((long)param_3 + uVar14 * 4);
    do {
      lVar17 = lVar17 + -1;
      iVar6 = *piVar16;
      piVar1 = piVar16 + 0x100;
      piVar2 = piVar16 + 0x200;
      piVar3 = piVar16 + 0x300;
      piVar16 = piVar16 + 1;
      *piVar15 = iVar6 + *piVar15 + *piVar1 + *piVar2 + *piVar3;
      piVar15 = piVar15 + 1;
    } while (lVar17 != 0);
  }
  return;
}


