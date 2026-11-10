/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c72bf0; name: FUN_00c72bf0
 */


undefined1  [16] FUN_00c72bf0(float param_1,undefined1 param_2 [16],int *param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar17 = param_2._8_8_;
  uVar16 = param_2._4_4_;
  fVar14 = param_2._0_4_;
  if (((param_3 == (int *)0x0) || (*(ushort *)((long)param_3 - (long)*param_3) < 5)) ||
     (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar10 == 0))
  goto LAB_00c72e98;
  puVar1 = (uint *)((long)param_3 + uVar10);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  iVar6 = *piVar2;
  if (iVar6 == 0) goto LAB_00c72e98;
  uVar9 = iVar6 - 1;
  puVar1 = (uint *)(piVar2 + 1);
  piVar2 = (int *)((long)(puVar1 + uVar9) + (ulong)puVar1[uVar9]);
  fVar18 = 0.0;
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 != 0)) {
    fVar18 = *(float *)((long)piVar2 + uVar10);
  }
  uVar12 = uVar9;
  if (fVar18 <= param_1) {
LAB_00c72d5c:
    if ((int)uVar12 < 0) {
      piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
      fVar14 = 0.0;
      uVar16 = 0;
      uVar17 = 0;
      if ((6 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar10 != 0)) {
        return ZEXT416(*(uint *)((long)piVar2 + uVar10));
      }
      goto LAB_00c72e98;
    }
  }
  else {
    if (1 < uVar9) {
      uVar8 = uVar9 >> 1;
      piVar2 = (int *)((long)(puVar1 + uVar8) + (ulong)puVar1[uVar8]);
      fVar18 = 0.0;
      if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 != 0)) {
        fVar18 = *(float *)((long)piVar2 + uVar10);
      }
      uVar4 = uVar8;
      uVar12 = 0;
      if (fVar18 <= param_1) {
        uVar4 = uVar9;
        uVar12 = uVar8;
      }
      if (1 < uVar4 - uVar12) {
        uVar8 = uVar12 + uVar4 >> 1;
        piVar2 = (int *)((long)(puVar1 + uVar8) + (ulong)puVar1[uVar8]);
        fVar18 = 0.0;
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 != 0)) {
          fVar18 = *(float *)((long)piVar2 + uVar10);
        }
        uVar5 = uVar8;
        if (fVar18 <= param_1) {
          uVar5 = uVar4;
          uVar12 = uVar8;
        }
        if (1 < uVar5 - uVar12) {
          uVar8 = uVar12 + uVar5 >> 1;
          piVar2 = (int *)((long)(puVar1 + uVar8) + (ulong)puVar1[uVar8]);
          fVar18 = 0.0;
          if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 != 0)) {
            fVar18 = *(float *)((long)piVar2 + uVar10);
          }
          uVar4 = uVar8;
          if (fVar18 <= param_1) {
            uVar4 = uVar5;
            uVar12 = uVar8;
          }
          uVar8 = uVar4 - uVar12;
          while (1 < uVar8) {
            uVar8 = uVar12 + uVar4 >> 1;
            piVar2 = (int *)((long)(puVar1 + uVar8) + (ulong)puVar1[uVar8]);
            fVar18 = 0.0;
            if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
              fVar18 = 0.0;
              if (uVar10 != 0) {
                fVar18 = *(float *)((long)piVar2 + uVar10);
              }
            }
            uVar5 = uVar8;
            if (fVar18 <= param_1) {
              uVar5 = uVar4;
              uVar12 = uVar8;
            }
            uVar4 = uVar5;
            uVar8 = uVar5 - uVar12;
          }
        }
      }
      goto LAB_00c72d5c;
    }
    uVar12 = 0;
  }
  piVar2 = (int *)((long)(puVar1 + uVar12) + (ulong)puVar1[uVar12]);
  puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar7 = *puVar13;
  if (uVar12 == uVar9) {
    fVar14 = 0.0;
    uVar16 = 0;
    uVar17 = 0;
    if ((6 < uVar7) && ((ulong)puVar13[3] != 0)) {
      return ZEXT416(*(uint *)((long)piVar2 + (ulong)puVar13[3]));
    }
    goto LAB_00c72e98;
  }
  if (uVar7 < 0xd) {
    if (uVar7 < 7) goto LAB_00c72f1c;
  }
  else if (((ulong)puVar13[6] != 0) &&
          (iVar6 = *(int *)((long)piVar2 + (ulong)puVar13[6]), iVar6 != 0)) {
    piVar3 = (int *)((long)(puVar1 + (uVar12 + 1)) + (ulong)puVar1[uVar12 + 1]);
    puVar11 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar7 = *puVar11;
    fVar18 = 0.0;
    if ((4 < uVar7) && ((ulong)puVar11[2] != 0)) {
      fVar18 = *(float *)((long)piVar3 + (ulong)puVar11[2]);
    }
    if ((ulong)puVar13[2] == 0) {
      if (fVar18 <= 0.0) goto LAB_00c72e98;
      fVar19 = 0.0;
    }
    else {
      fVar19 = *(float *)((long)piVar2 + (ulong)puVar13[2]);
      fVar18 = fVar18 - fVar19;
      if (fVar18 <= 0.0) goto LAB_00c72e98;
    }
    if ((ulong)puVar13[3] == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = *(float *)((long)piVar2 + (ulong)puVar13[3]);
    }
    fVar18 = (param_1 - fVar19) / fVar18;
    if (iVar6 == 1) {
      fVar19 = 0.0;
      if ((6 < uVar7) && ((ulong)puVar11[3] != 0)) {
        fVar19 = *(float *)((long)piVar3 + (ulong)puVar11[3]);
      }
      return ZEXT416((uint)(fVar14 + fVar18 * (fVar19 - fVar14)));
    }
    fVar19 = 0.0;
    fVar20 = 0.0;
    if ((ulong)puVar13[5] != 0) {
      fVar20 = *(float *)((long)piVar2 + (ulong)puVar13[5]);
    }
    fVar21 = 0.0;
    if (6 < uVar7) {
      fVar21 = 0.0;
      fVar19 = 0.0;
      if ((ulong)puVar11[3] != 0) {
        fVar19 = *(float *)((long)piVar3 + (ulong)puVar11[3]);
      }
      if ((8 < uVar7) && ((ulong)puVar11[4] != 0)) {
        fVar21 = *(float *)((long)piVar3 + (ulong)puVar11[4]);
      }
    }
    fVar22 = fVar18 * fVar18;
    fVar23 = fVar18 * fVar22;
    fVar14 = (fVar22 * 3.0 - (fVar23 + fVar23)) * fVar19 +
             (((fVar23 + fVar23) - fVar22 * 3.0) + 1.0) * fVar14 +
             (fVar18 + (fVar23 - (fVar22 + fVar22))) * fVar20 + (fVar23 - fVar22) * fVar21;
    uVar16 = 0;
    uVar17 = 0;
LAB_00c72e98:
    auVar15._4_4_ = uVar16;
    auVar15._0_4_ = fVar14;
    auVar15._8_8_ = uVar17;
    return auVar15;
  }
  if ((ulong)puVar13[3] != 0) {
    return ZEXT416(*(uint *)((long)piVar2 + (ulong)puVar13[3]));
  }
LAB_00c72f1c:
  return ZEXT816(0);
}


