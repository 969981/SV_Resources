/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215ca88; name: FUN_0215ca88
 */


void FUN_0215ca88(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar16;
  int iVar17;
  undefined1 auVar15 [16];
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  FUN_0215b59c(param_1,param_2,param_4);
  fVar5 = (float)*param_3;
  fVar9 = (float)*param_4 - fVar5;
  fVar6 = (float)((ulong)*param_3 >> 0x20);
  fVar10 = (float)((ulong)*param_4 >> 0x20) - fVar6;
  fVar7 = (float)param_3[1];
  fVar11 = (float)param_4[1] - fVar7;
  fVar8 = (float)((ulong)param_3[1] >> 0x20);
  fVar12 = (float)((ulong)param_4[1] >> 0x20) - fVar8;
  auVar15._0_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar15._4_4_ = fVar11 * fVar11 + fVar12 * fVar12;
  auVar15._8_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar15._12_4_ = fVar11 * fVar11 + fVar12 * fVar12;
  auVar15 = NEON_ext(auVar15,auVar15,4,1);
  auVar4._0_4_ = auVar15._0_4_ + auVar15._4_4_;
  auVar4._4_4_ = auVar15._8_4_ + auVar15._12_4_;
  auVar4._8_4_ = auVar15._0_4_ + auVar15._4_4_;
  auVar4._12_4_ = auVar15._8_4_ + auVar15._12_4_;
  auVar15 = NEON_frsqrte(auVar4,4);
  auVar20._0_4_ = auVar4._0_4_ * auVar15._0_4_;
  auVar20._4_4_ = auVar4._4_4_ * auVar15._4_4_;
  auVar20._8_4_ = auVar4._8_4_ * auVar15._8_4_;
  auVar20._12_4_ = auVar4._12_4_ * auVar15._12_4_;
  auVar20 = NEON_frsqrts(auVar15,auVar20,4);
  auVar19._0_4_ = auVar15._0_4_ * auVar20._0_4_;
  auVar19._4_4_ = auVar15._4_4_ * auVar20._4_4_;
  auVar19._8_4_ = auVar15._8_4_ * auVar20._8_4_;
  auVar19._12_4_ = auVar15._12_4_ * auVar20._12_4_;
  auVar21._0_4_ = auVar4._0_4_ * auVar19._0_4_;
  auVar21._4_4_ = auVar4._4_4_ * auVar19._4_4_;
  auVar21._8_4_ = auVar4._8_4_ * auVar19._8_4_;
  auVar21._12_4_ = auVar4._12_4_ * auVar19._12_4_;
  iVar13 = -(uint)(auVar4._0_4_ == 0.0);
  iVar16 = -(uint)(auVar4._4_4_ == 0.0);
  iVar17 = -(uint)(auVar4._8_4_ == 0.0);
  iVar18 = -(uint)(auVar4._12_4_ == 0.0);
  auVar15 = NEON_frsqrts(auVar19,auVar21,4);
  fVar9 = fVar9 * auVar19._0_4_ * auVar15._0_4_;
  fVar10 = fVar10 * auVar19._4_4_ * auVar15._4_4_;
  fVar11 = fVar11 * auVar19._8_4_ * auVar15._8_4_;
  fVar12 = fVar12 * auVar19._12_4_ * auVar15._12_4_;
  fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar13)));
  fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                           CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                    CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                             SUB41(fVar11,0) & ~(byte)iVar17)));
  fVar10 = (float)(CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                            CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                     CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar16 >> 8)
                                              ,CONCAT14(SUB41(fVar10,0) & ~(byte)iVar16,fVar9)))) >>
                  0x20);
  fVar14 = (*(float *)(param_1 + 0x7c0) + *(float *)(*(long *)(param_1 + 0x8a0) + 0x14) * 0.5) /
           ABS(fVar10);
  param_5[1] = CONCAT44(fVar8 + (float)(CONCAT17((byte)((uint)fVar12 >> 0x18) &
                                                 ~(byte)((uint)iVar18 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar12 >> 0x10) &
                                                          ~(byte)((uint)iVar18 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar12 >> 8) &
                                                                   ~(byte)((uint)iVar18 >> 8),
                                                                   CONCAT14(SUB41(fVar12,0) &
                                                                            ~(byte)iVar18,fVar11))))
                                       >> 0x20) * fVar14,fVar7 + fVar11 * fVar14);
  *param_5 = CONCAT44(fVar6 + fVar10 * fVar14,fVar5 + fVar9 * fVar14);
  lVar3 = **(long **)(param_1 + 0x8c0);
  lVar1 = (*(long **)(param_1 + 0x8c0))[1];
  if ((lVar3 != lVar1) && ((*(char *)(lVar3 + 0x20) != '\0' || (*(int *)(lVar3 + 0x24) != param_2)))
     ) {
    lVar2 = lVar3 + 0x30;
    do {
      lVar3 = lVar2;
      if (lVar1 == lVar3) {
        lVar3 = lVar1;
        goto LAB_0215cb80;
      }
      lVar2 = lVar3 + 0x30;
    } while ((*(char *)(lVar3 + 0x20) != '\0') || (*(int *)(lVar3 + 0x24) != param_2));
  }
LAB_0215cb80:
  if ((lVar3 != 0) && (lVar1 != lVar3)) {
    param_5[1] = param_4[1];
    *param_5 = *param_4;
  }
  return;
}


