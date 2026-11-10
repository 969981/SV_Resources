/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c430b0; name: FUN_00c430b0
 */


undefined1  [16] FUN_00c430b0(float param_1,undefined1 param_2 [16],int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar16 = param_2._8_8_;
  uVar15 = param_2._4_4_;
  fVar13 = param_2._0_4_;
  if (param_3 == (int *)0x0) goto LAB_00c433f8;
  uVar6 = ((ushort *)((long)param_3 - (long)*param_3))[2];
  uVar9 = (ulong)uVar6;
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
LAB_00c43434:
    piVar8 = (int *)0x0;
  }
  else {
    if (uVar6 == 0) {
      uVar9 = 0;
      goto LAB_00c43434;
    }
    piVar8 = (int *)((long)((long)param_3 + uVar9) + (ulong)*(uint *)((long)param_3 + uVar9));
  }
  piVar1 = (int *)((long)((long)param_3 + uVar9) + (ulong)*(uint *)((long)param_3 + uVar9));
  uVar10 = *piVar1 - 1;
  piVar2 = (int *)((long)(piVar1 + (ulong)uVar10 + 1) + (ulong)(uint)piVar1[(ulong)uVar10 + 1]);
  fVar17 = 0.0;
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 != 0)) {
    fVar17 = *(float *)((long)piVar2 + uVar9);
  }
  if (fVar17 <= param_1) {
LAB_00c43184:
    if ((int)uVar10 < 0) {
      piVar8 = (int *)((long)(piVar8 + 1) + (ulong)(uint)piVar8[1]);
      fVar13 = 0.0;
      uVar15 = 0;
      uVar16 = 0;
      if ((6 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
         (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar9 != 0)) {
        return ZEXT416(*(uint *)((long)piVar8 + uVar9));
      }
      goto LAB_00c433f8;
    }
  }
  else {
    if (1 < uVar10) {
      uVar7 = uVar10 >> 1;
      piVar2 = (int *)((long)(piVar1 + (ulong)uVar7 + 1) + (ulong)(uint)piVar1[(ulong)uVar7 + 1]);
      fVar17 = 0.0;
      if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 != 0)) {
        fVar17 = *(float *)((long)piVar2 + uVar9);
      }
      uVar4 = uVar7;
      uVar3 = 0;
      if (fVar17 <= param_1) {
        uVar4 = uVar10;
        uVar3 = uVar7;
      }
      uVar10 = uVar3;
      if (1 < uVar4 - uVar10) {
        uVar7 = uVar10 + uVar4 >> 1;
        piVar2 = (int *)((long)(piVar1 + (ulong)uVar7 + 1) + (ulong)(uint)piVar1[(ulong)uVar7 + 1]);
        fVar17 = 0.0;
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 != 0)) {
          fVar17 = *(float *)((long)piVar2 + uVar9);
        }
        uVar3 = uVar7;
        if (fVar17 <= param_1) {
          uVar3 = uVar4;
          uVar10 = uVar7;
        }
        uVar7 = uVar3 - uVar10;
        while (1 < uVar7) {
          uVar7 = uVar10 + uVar3 >> 1;
          piVar2 = (int *)((long)(piVar1 + (ulong)uVar7 + 1) + (ulong)(uint)piVar1[(ulong)uVar7 + 1]
                          );
          fVar17 = 0.0;
          if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
            fVar17 = 0.0;
            if (uVar9 != 0) {
              fVar17 = *(float *)((long)piVar2 + uVar9);
            }
          }
          uVar4 = uVar7;
          if (fVar17 <= param_1) {
            uVar4 = uVar3;
            uVar10 = uVar7;
          }
          uVar3 = uVar4;
          uVar7 = uVar4 - uVar10;
        }
      }
      goto LAB_00c43184;
    }
    uVar10 = 0;
  }
  piVar1 = (int *)((long)(piVar8 + (ulong)uVar10 + 1) + (ulong)(uint)piVar8[(ulong)uVar10 + 1]);
  puVar12 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar6 = *puVar12;
  if (uVar10 == *piVar8 - 1U) {
    fVar13 = 0.0;
    uVar15 = 0;
    uVar16 = 0;
    if ((6 < uVar6) && ((ulong)puVar12[3] != 0)) {
      return ZEXT416(*(uint *)((long)piVar1 + (ulong)puVar12[3]));
    }
    goto LAB_00c433f8;
  }
  if (uVar6 < 0xd) {
    if (uVar6 < 7) goto LAB_00c43358;
  }
  else if (((ulong)puVar12[6] != 0) &&
          (iVar5 = *(int *)((long)piVar1 + (ulong)puVar12[6]), iVar5 != 0)) {
    piVar8 = (int *)((long)(piVar8 + (ulong)(uVar10 + 1) + 1) +
                    (ulong)(uint)piVar8[(ulong)(uVar10 + 1) + 1]);
    puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
    uVar6 = *puVar11;
    fVar17 = 0.0;
    if ((4 < uVar6) && ((ulong)puVar11[2] != 0)) {
      fVar17 = *(float *)((long)piVar8 + (ulong)puVar11[2]);
    }
    if ((ulong)puVar12[2] == 0) {
      if (fVar17 <= 0.0) goto LAB_00c433f8;
      fVar18 = 0.0;
    }
    else {
      fVar18 = *(float *)((long)piVar1 + (ulong)puVar12[2]);
      fVar17 = fVar17 - fVar18;
      if (fVar17 <= 0.0) goto LAB_00c433f8;
    }
    if ((ulong)puVar12[3] == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)((long)piVar1 + (ulong)puVar12[3]);
    }
    fVar17 = (param_1 - fVar18) / fVar17;
    if (iVar5 == 1) {
      fVar18 = 0.0;
      if ((6 < uVar6) && ((ulong)puVar11[3] != 0)) {
        fVar18 = *(float *)((long)piVar8 + (ulong)puVar11[3]);
      }
      return ZEXT416((uint)(fVar13 + fVar17 * (fVar18 - fVar13)));
    }
    fVar18 = 0.0;
    fVar19 = 0.0;
    if ((ulong)puVar12[5] != 0) {
      fVar19 = *(float *)((long)piVar1 + (ulong)puVar12[5]);
    }
    fVar20 = 0.0;
    if (6 < uVar6) {
      fVar20 = 0.0;
      fVar18 = 0.0;
      if ((ulong)puVar11[3] != 0) {
        fVar18 = *(float *)((long)piVar8 + (ulong)puVar11[3]);
      }
      if ((8 < uVar6) && ((ulong)puVar11[4] != 0)) {
        fVar20 = *(float *)((long)piVar8 + (ulong)puVar11[4]);
      }
    }
    fVar21 = fVar17 * fVar17;
    fVar22 = fVar17 * fVar21;
    fVar13 = (fVar21 * 3.0 - (fVar22 + fVar22)) * fVar18 +
             (((fVar22 + fVar22) - fVar21 * 3.0) + 1.0) * fVar13 +
             (fVar17 + (fVar22 - (fVar21 + fVar21))) * fVar19 + (fVar22 - fVar21) * fVar20;
    uVar15 = 0;
    uVar16 = 0;
LAB_00c433f8:
    auVar14._4_4_ = uVar15;
    auVar14._0_4_ = fVar13;
    auVar14._8_8_ = uVar16;
    return auVar14;
  }
  if ((ulong)puVar12[3] != 0) {
    return ZEXT416(*(uint *)((long)piVar1 + (ulong)puVar12[3]));
  }
LAB_00c43358:
  return ZEXT816(0);
}


