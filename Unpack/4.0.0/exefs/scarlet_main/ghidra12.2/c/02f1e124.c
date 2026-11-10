/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1e124; name: FUN_02f1e124
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1e124(float *param_1,long param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [14];
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  int iVar7;
  double dVar8;
  int iVar10;
  int iVar11;
  undefined1 auVar9 [16];
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  fVar2 = *(float *)(param_3[1] + 4);
  fVar3 = *(float *)(param_3[1] + 8);
  dVar23 = (double)*(float *)*param_3;
  dVar8 = (double)*(float *)(param_2 + 0x10);
  dVar22 = (double)*(float *)(*param_3 + 4);
  dVar13 = (double)*(float *)(param_2 + 0x14);
  dVar4 = (double)*(float *)(param_2 + 0x18);
  dVar24 = (double)*(float *)(*param_3 + 8);
  dVar18 = (double)*(float *)(*param_3 + 0xc);
  dVar25 = dVar18 * dVar18 - *(double *)(PTR_DAT_047d1ce0 + 0x2a0);
  dVar26 = dVar4 * dVar24 + dVar8 * dVar23 + dVar13 * dVar22;
  dVar14 = (dVar4 * dVar22 - dVar13 * dVar24) * dVar18 + dVar25 * dVar8 + dVar26 * dVar23;
  dVar5 = (dVar8 * dVar24 - dVar4 * dVar23) * dVar18 + dVar25 * dVar13 + dVar26 * dVar22;
  dVar4 = (dVar13 * dVar23 - dVar8 * dVar22) * dVar18 + dVar25 * dVar4 + dVar26 * dVar24;
  *(double *)(param_1 + 4) = dVar14 + dVar14 + (double)*(float *)param_3[1];
  *(double *)(param_1 + 6) = dVar5 + dVar5 + (double)fVar2;
  *(double *)(param_1 + 8) = dVar4 + dVar4 + (double)fVar3;
  auVar9._8_8_ = _UNK_03caab28;
  auVar9._0_8_ = _DAT_03caab20;
  auVar15._8_8_ = _UNK_03caa778;
  auVar15._0_8_ = _DAT_03caa770;
  auVar16._8_8_ = _UNK_03caa6a8;
  auVar16._0_8_ = _DAT_03caa6a0;
  auVar19._8_8_ = _UNK_03caab38;
  auVar19._0_8_ = _DAT_03caab30;
  auVar9 = a64_TBL(ZEXT816(0),*param_3,auVar9);
  auVar6 = a64_TBL(ZEXT816(0),*param_3,auVar15);
  auVar17 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 0x30),auVar16);
  auVar15 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 0x30),auVar19);
  auVar16 = NEON_fmov(0x3f800000,4);
  auVar20._0_4_ = auVar6._0_4_ * auVar15._0_4_ - auVar9._0_4_ * auVar17._0_4_;
  auVar20._4_4_ = auVar6._4_4_ * auVar15._4_4_ - auVar9._4_4_ * auVar17._4_4_;
  auVar20._8_4_ = auVar6._8_4_ * auVar15._8_4_ - auVar9._8_4_ * auVar17._8_4_;
  auVar20._12_4_ = auVar6._12_4_ * auVar15._12_4_ - auVar9._12_4_ * auVar17._12_4_;
  auVar21._8_4_ = (int)_UNK_03cab148;
  auVar21._0_8_ = _DAT_03cab140;
  auVar21._12_4_ = (int)((ulong)_UNK_03cab148 >> 0x20);
  auVar21 = a64_TBL(ZEXT816(0),auVar20,auVar21);
  param_1[2] = -(auVar21._8_4_ - (auVar6._8_4_ * auVar17._8_4_ + auVar9._8_4_ * auVar15._8_4_));
  param_1[3] = auVar21._12_4_ - (auVar6._12_4_ * auVar17._12_4_ + auVar9._12_4_ * auVar15._12_4_);
  *param_1 = -(auVar21._0_4_ - (auVar6._0_4_ * auVar17._0_4_ + auVar9._0_4_ * auVar15._0_4_));
  param_1[1] = -(auVar21._4_4_ - (auVar6._4_4_ * auVar17._4_4_ + auVar9._4_4_ * auVar15._4_4_));
  iVar7 = -(uint)(*(float *)(param_2 + 0x20) == 0.0);
  iVar10 = -(uint)(*(float *)(param_2 + 0x24) == 0.0);
  iVar11 = -(uint)(*(float *)(param_2 + 0x28) == 0.0);
  iVar12 = -(uint)(*(float *)(param_2 + 4) == 0.0);
  auVar6._0_4_ = (auVar16._0_4_ / *(float *)(param_2 + 0x20)) * 1.0039062;
  auVar6._4_4_ = (auVar16._4_4_ / *(float *)(param_2 + 0x24)) * 1.0039062;
  auVar6._8_4_ = (auVar16._8_4_ / *(float *)(param_2 + 0x28)) * 1.0039062;
  auVar6._12_4_ = (auVar16._12_4_ / *(float *)(param_2 + 4)) * 1.0039062;
  auVar1._1_13_ = auVar6._3_13_;
  auVar1[0] = (byte)((uint)auVar6._0_4_ >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
  *(ulong *)(param_1 + 0x10) =
       CONCAT26(CONCAT11((byte)((uint)auVar6._12_4_ >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                         (byte)((uint)auVar6._12_4_ >> 0x10) & ~(byte)((uint)iVar12 >> 0x10)),
                CONCAT24(CONCAT11((byte)((uint)auVar6._8_4_ >> 0x18) & ~(byte)((uint)iVar11 >> 0x18)
                                  ,(byte)((uint)auVar6._8_4_ >> 0x10) &
                                   ~(byte)((uint)iVar11 >> 0x10)),
                         CONCAT22(CONCAT11((byte)((uint)auVar6._4_4_ >> 0x18) &
                                           ~(byte)((uint)iVar10 >> 0x18),
                                           (byte)((uint)auVar6._4_4_ >> 0x10) &
                                           ~(byte)((uint)iVar10 >> 0x10)),
                                  (short)(CONCAT13((byte)((uint)auVar6._0_4_ >> 0x18) &
                                                   ~(byte)((uint)iVar7 >> 0x18),auVar1._0_3_ << 0x10
                                                  ) >> 0x10))));
  return;
}


