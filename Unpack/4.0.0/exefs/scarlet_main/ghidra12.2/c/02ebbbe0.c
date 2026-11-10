/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ebbbe0; name: FUN_02ebbbe0
 */


void FUN_02ebbbe0(long *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
                 undefined4 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar13 = (int)param_1[1];
  if (1 < iVar13) {
    lVar12 = 1;
    do {
      if (param_2 < 0) {
        param_2 = param_2 + 1;
      }
      param_2 = param_2 >> 1;
      if (param_4 < 0) {
        param_4 = param_4 + 1;
      }
      if (param_3 < 0) {
        param_3 = param_3 + 1;
      }
      param_3 = param_3 >> 1;
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
      param_4 = param_4 >> 1;
      param_5 = param_5 >> 1;
      if (param_2 <= param_4) {
        plVar17 = (long *)((long)param_1 + lVar12 * 0x18 + *param_1);
        iVar13 = param_3;
        if (param_3 <= param_5) {
          iVar13 = param_5;
        }
        uVar16 = param_2 << 1 | 1;
        lVar14 = lVar12 + -1;
        iVar15 = param_2 << 1;
        iVar18 = param_2;
        do {
          if (param_3 <= param_5) {
            uVar1 = iVar18 << 1 | 1;
            iVar6 = iVar18 * 2;
            iVar19 = param_3 << 1;
            iVar20 = param_3;
            do {
              lVar22 = *param_1;
              uVar4 = *(ushort *)((long)param_1 + lVar14 * 0x18 + lVar22 + 0x10);
              if ((iVar6 < (int)(uint)uVar4) &&
                 (uVar5 = *(ushort *)((long)param_1 + lVar14 * 0x18 + lVar22 + 0x12),
                 iVar19 < (int)(uint)uVar5)) {
                plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                iVar7 = iVar19 + iVar15 * (uint)uVar5;
                uVar26 = *(uint *)((long)plVar25 + (long)(iVar7 * 4) * 4 + *plVar25);
                uVar23 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 4U) + *plVar25);
                uVar21 = uVar26 >> 0x10;
                if ((uVar26 & 0xffff) <= uVar26 >> 0x10) {
                  uVar21 = uVar26 & 0xffff;
                }
                uVar26 = uVar23 >> 0x10;
                if ((uVar23 & 0xffff) <= uVar23 >> 0x10) {
                  uVar26 = uVar23 & 0xffff;
                }
                if (uVar26 <= uVar21) {
                  uVar21 = uVar26;
                }
              }
              else {
                uVar21 = 0xffff;
              }
              if ((int)uVar1 < (int)(uint)uVar4) {
                uVar5 = *(ushort *)((long)param_1 + lVar14 * 0x18 + lVar22 + 0x12);
                uVar24 = (uint)uVar5;
                if (iVar19 < (int)(uint)uVar5) {
                  plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                  iVar7 = iVar19 + uVar16 * uVar24;
                  uVar26 = *(uint *)((long)plVar25 + (long)(iVar7 * 4) * 4 + *plVar25);
                  uVar27 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 4U) + *plVar25);
                  uVar23 = uVar26 >> 0x10;
                  if ((uVar26 & 0xffff) <= uVar26 >> 0x10) {
                    uVar23 = uVar26 & 0xffff;
                  }
                  uVar26 = uVar27 >> 0x10;
                  if ((uVar27 & 0xffff) <= uVar27 >> 0x10) {
                    uVar26 = uVar27 & 0xffff;
                  }
                  if (uVar26 <= uVar23) {
                    uVar23 = uVar26;
                  }
                }
                else {
                  uVar23 = 0xffff;
                }
                uVar26 = iVar19 + 1;
                if ((int)uVar24 <= (int)uVar26) goto LAB_02ebbe08;
                plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                iVar7 = iVar19 + uVar16 * uVar24 + 1;
                uVar27 = *(uint *)((long)plVar25 + (long)(iVar7 * 4) * 4 + *plVar25);
                uVar28 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 4U) + *plVar25);
                uVar24 = uVar27 >> 0x10;
                if ((uVar27 & 0xffff) <= uVar27 >> 0x10) {
                  uVar24 = uVar27 & 0xffff;
                }
                uVar27 = uVar28 >> 0x10;
                if ((uVar28 & 0xffff) <= uVar28 >> 0x10) {
                  uVar27 = uVar28 & 0xffff;
                }
                if (uVar27 <= uVar24) {
                  uVar24 = uVar27;
                }
              }
              else {
                uVar26 = iVar20 << 1 | 1;
                uVar23 = 0xffff;
LAB_02ebbe08:
                uVar24 = 0xffff;
              }
              if (iVar6 < (int)(uint)uVar4) {
                uVar5 = *(ushort *)((long)param_1 + lVar14 * 0x18 + lVar22 + 0x12);
                uVar28 = (uint)uVar5;
                if ((int)uVar26 < (int)(uint)uVar5) {
                  plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                  iVar7 = uVar26 + iVar6 * uVar28;
                  uVar29 = *(uint *)((long)plVar25 + (long)(iVar7 * 4) * 4 + *plVar25);
                  uVar30 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 4U) + *plVar25);
                  uVar27 = uVar29 >> 0x10;
                  if ((uVar29 & 0xffff) <= uVar29 >> 0x10) {
                    uVar27 = uVar29 & 0xffff;
                  }
                  uVar29 = uVar30 >> 0x10;
                  if ((uVar30 & 0xffff) <= uVar30 >> 0x10) {
                    uVar29 = uVar30 & 0xffff;
                  }
                  if (uVar29 <= uVar27) {
                    uVar27 = uVar29;
                  }
                }
                else {
                  uVar27 = 0xffff;
                }
                if (iVar19 < (int)uVar28) {
                  plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                  iVar7 = iVar19 + iVar15 * uVar28;
                  uVar29 = *(uint *)((long)plVar25 +
                                    (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar25);
                  uVar30 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 0xcU) + *plVar25);
                  uVar28 = uVar29 >> 0x10;
                  if (uVar29 >> 0x10 <= (uVar29 & 0xffff)) {
                    uVar28 = uVar29 & 0xffff;
                  }
                  uVar29 = uVar30 >> 0x10;
                  if (uVar30 >> 0x10 <= (uVar30 & 0xffff)) {
                    uVar29 = uVar30 & 0xffff;
                  }
                  if (uVar28 <= uVar29) {
                    uVar28 = uVar29;
                  }
                }
                else {
                  uVar28 = 0;
                }
              }
              else {
                uVar28 = 0;
                uVar27 = 0xffff;
              }
              if ((int)uVar1 < (int)(uint)uVar4) {
                uVar5 = *(ushort *)((long)param_1 + lVar14 * 0x18 + lVar22 + 0x12);
                uVar30 = (uint)uVar5;
                if (iVar19 < (int)(uint)uVar5) {
                  plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                  iVar7 = iVar19 + uVar16 * uVar30;
                  uVar2 = *(uint *)((long)plVar25 +
                                   (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar25);
                  uVar3 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 0xcU) + *plVar25);
                  uVar29 = uVar2 >> 0x10;
                  if (uVar2 >> 0x10 <= (uVar2 & 0xffff)) {
                    uVar29 = uVar2 & 0xffff;
                  }
                  uVar2 = uVar3 >> 0x10;
                  if (uVar3 >> 0x10 <= (uVar3 & 0xffff)) {
                    uVar2 = uVar3 & 0xffff;
                  }
                  if (uVar29 <= uVar2) {
                    uVar29 = uVar2;
                  }
                }
                else {
                  uVar29 = 0;
                }
                if ((int)uVar30 <= (int)uVar26) goto LAB_02ebbfec;
                plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                iVar7 = uVar26 + uVar1 * uVar30;
                uVar2 = *(uint *)((long)plVar25 +
                                 (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar25);
                uVar3 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 0xcU) + *plVar25);
                uVar30 = uVar2 >> 0x10;
                if (uVar2 >> 0x10 <= (uVar2 & 0xffff)) {
                  uVar30 = uVar2 & 0xffff;
                }
                uVar2 = uVar3 >> 0x10;
                if (uVar3 >> 0x10 <= (uVar3 & 0xffff)) {
                  uVar2 = uVar3 & 0xffff;
                }
                if (uVar30 <= uVar2) {
                  uVar30 = uVar2;
                }
              }
              else {
                uVar29 = 0;
LAB_02ebbfec:
                uVar30 = 0;
              }
              if ((iVar6 < (int)(uint)uVar4) &&
                 (uVar4 = *(ushort *)((long)param_1 + lVar14 * 0x18 + lVar22 + 0x12),
                 (int)uVar26 < (int)(uint)uVar4)) {
                plVar25 = (long *)((long)param_1 + lVar14 * 0x18 + lVar22);
                iVar7 = uVar26 + iVar6 * (uint)uVar4;
                uVar2 = *(uint *)((long)plVar25 +
                                 (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar25);
                uVar3 = *(uint *)((long)plVar25 + ((long)iVar7 << 4 | 0xcU) + *plVar25);
                uVar26 = uVar2 >> 0x10;
                if (uVar2 >> 0x10 <= (uVar2 & 0xffff)) {
                  uVar26 = uVar2 & 0xffff;
                }
                uVar2 = uVar3 >> 0x10;
                if (uVar3 >> 0x10 <= (uVar3 & 0xffff)) {
                  uVar2 = uVar3 & 0xffff;
                }
                if (uVar26 <= uVar2) {
                  uVar26 = uVar2;
                }
              }
              else {
                uVar26 = 0;
              }
              iVar8 = iVar20 + iVar18 * (uint)*(ushort *)((long)plVar17 + 0x12);
              iVar7 = iVar8 * 4;
              iVar20 = iVar20 + 1;
              *(uint *)((long)plVar17 + (long)iVar7 * 4 + *plVar17) = uVar21 | uVar23 << 0x10;
              uVar11 = (ulong)(long)iVar7 >> 2;
              iVar19 = iVar19 + 2;
              *(uint *)((long)plVar17 + ((long)iVar8 << 4 | 4U) + *plVar17) =
                   uVar24 | uVar27 << 0x10;
              *(uint *)((long)plVar17 + (uVar11 << 4 | 8) + *plVar17) = uVar28 | uVar29 << 0x10;
              *(uint *)((long)plVar17 + (uVar11 << 4 | 0xc) + *plVar17) = uVar30 | uVar26 << 0x10;
            } while (iVar13 + 1 != iVar20);
          }
          bVar10 = iVar18 != param_4;
          iVar18 = iVar18 + 1;
          uVar16 = uVar16 + 2;
          iVar15 = iVar15 + 2;
        } while (bVar10);
        iVar13 = (int)param_1[1];
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar13);
  }
  lVar14 = *param_1;
  lVar12 = (long)iVar13 + -1;
  auVar35 = ZEXT816(0);
  auVar36 = auVar35;
  if ((*(short *)((long)param_1 + lVar12 * 0x18 + lVar14 + 0x10) != 0) &&
     (*(short *)((long)param_1 + lVar12 * 0x18 + lVar14 + 0x12) != 0)) {
    plVar17 = (long *)((long)param_1 + lVar12 * 0x18 + lVar14);
    puVar9 = (ushort *)(*plVar17 + (long)plVar17);
    auVar34._2_2_ = 0;
    auVar34._0_2_ = *puVar9;
    auVar34._4_2_ = puVar9[1];
    auVar34._6_2_ = 0;
    auVar34._8_2_ = puVar9[2];
    auVar34._10_2_ = 0;
    auVar34._12_2_ = puVar9[3];
    auVar34._14_2_ = 0;
    auVar32._2_2_ = 0;
    auVar32._0_2_ = puVar9[4];
    auVar32._4_2_ = puVar9[5];
    auVar32._6_2_ = 0;
    auVar32._8_2_ = puVar9[6];
    auVar32._10_2_ = 0;
    auVar32._12_2_ = puVar9[7];
    auVar32._14_2_ = 0;
    auVar35 = NEON_ucvtf(auVar34,4);
    auVar32 = NEON_ucvtf(auVar32,4);
    fVar37 = *(float *)(param_1 + 4);
    fVar38 = (float)param_1[2];
    auVar36._0_4_ = fVar38 + auVar35._0_4_ * fVar37;
    fVar39 = (float)((ulong)param_1[2] >> 0x20);
    auVar36._4_4_ = fVar39 + auVar35._4_4_ * fVar37;
    fVar40 = (float)param_1[3];
    auVar36._8_4_ = fVar40 + auVar35._8_4_ * fVar37;
    fVar41 = (float)((ulong)param_1[3] >> 0x20);
    auVar36._12_4_ = fVar41 + auVar35._12_4_ * fVar37;
    auVar35._0_4_ = fVar38 + auVar32._0_4_ * fVar37;
    auVar35._4_4_ = fVar39 + auVar32._4_4_ * fVar37;
    auVar35._8_4_ = fVar40 + auVar32._8_4_ * fVar37;
    auVar35._12_4_ = fVar41 + auVar32._12_4_ * fVar37;
  }
  uVar33 = NEON_fminnmv(auVar36,4);
  uVar31 = NEON_fmaxnmv(auVar35,4);
  *param_6 = uVar33;
  *param_7 = uVar31;
  return;
}


