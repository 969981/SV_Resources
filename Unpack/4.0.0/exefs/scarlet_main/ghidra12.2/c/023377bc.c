/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023377bc; name: FUN_023377bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023377bc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,
                 undefined1 param_4 [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar2 = param_2._0_4_;
  param_3 = param_3 * 0.5;
  fVar14 = param_2._4_4_ * param_2._4_4_;
  fVar15 = param_2._8_4_ * param_2._8_4_;
  fVar16 = param_2._12_4_ * param_2._12_4_;
  fVar4 = param_3 + (float)_DAT_03caa8d0;
  fVar6 = param_3 + (float)((ulong)_DAT_03caa8d0 >> 0x20);
  fVar7 = param_3 + (float)_UNK_03caa8d8;
  fVar8 = param_3 + (float)((ulong)_UNK_03caa8d8 >> 0x20);
  auVar13._0_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar4) & 0x80000000 ^ 0x3f000000) + fVar4 * 0.15915494);
  auVar13._4_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar6) & 0x80000000 ^ 0x3f000000) + fVar6 * 0.15915494);
  auVar13._8_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar7) & 0x80000000 ^ 0x3f000000) + fVar7 * 0.15915494);
  auVar13._12_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar8) & 0x80000000 ^ 0x3f000000) + fVar8 * 0.15915494);
  auVar9 = NEON_scvtf(auVar13,4);
  fVar4 = fVar4 + auVar9._0_4_ * -6.2831855;
  iVar3 = -(uint)(ABS(param_3) == INFINITY);
  fVar4 = (float)((uint)fVar4 ^
                 ((uint)fVar4 ^ (uint)(-3.1415927 - fVar4)) & -(uint)(fVar4 < -1.5707964));
  auVar9._0_4_ = fVar2 * fVar2 + fVar14;
  auVar9._4_4_ = fVar15 + fVar16;
  auVar9._8_4_ = fVar2 * fVar2 + fVar14;
  auVar9._12_4_ = fVar15 + fVar16;
  auVar9 = NEON_ext(auVar9,auVar9,4,1);
  fVar4 = (float)((uint)fVar4 ^
                 ((uint)fVar4 ^ (uint)(3.1415927 - fVar4)) & -(uint)(1.5707964 < fVar4));
  fVar6 = fVar4 * fVar4;
  auVar1._0_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar1._4_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar1._8_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar1._12_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar9 = NEON_frsqrte(auVar1,4);
  auVar11._0_4_ = auVar1._0_4_ * auVar9._0_4_;
  auVar11._4_4_ = auVar1._4_4_ * auVar9._4_4_;
  auVar11._8_4_ = auVar1._8_4_ * auVar9._8_4_;
  auVar11._12_4_ = auVar1._12_4_ * auVar9._12_4_;
  auVar12 = NEON_frsqrts(auVar9,auVar11,4);
  auVar10._0_4_ = auVar9._0_4_ * auVar12._0_4_;
  auVar10._4_4_ = auVar9._4_4_ * auVar12._4_4_;
  auVar10._8_4_ = auVar9._8_4_ * auVar12._8_4_;
  auVar10._12_4_ = auVar9._12_4_ * auVar12._12_4_;
  auVar13 = NEON_fmov(0x3f800000,4);
  auVar12._0_4_ = auVar1._0_4_ * auVar10._0_4_;
  auVar12._4_4_ = auVar1._4_4_ * auVar10._4_4_;
  auVar12._8_4_ = auVar1._8_4_ * auVar10._8_4_;
  auVar12._12_4_ = auVar1._12_4_ * auVar10._12_4_;
  auVar9 = NEON_frsqrts(auVar10,auVar12,4);
  fVar2 = fVar2 * auVar10._0_4_ * auVar9._0_4_;
  iVar5 = -(uint)(auVar1._0_4_ == 0.0);
  FUN_0199ae60(param_1,(float)(((uint)(fVar4 * (auVar13._0_4_ +
                                               fVar6 * (fVar6 * (fVar6 * (fVar6 * (fVar6 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667))) ^ 0x7fc00000) &
                               CONCAT13(~(byte)((uint)iVar3 >> 0x18),
                                        CONCAT12(~(byte)((uint)iVar3 >> 0x10),
                                                 CONCAT11(~(byte)((uint)iVar3 >> 8),~(byte)iVar3)))
                              ^ 0x7fc00000) *
                       (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                       CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                                ~(byte)((uint)iVar5 >> 0x10),
                                                CONCAT11((byte)((uint)fVar2 >> 8) &
                                                         ~(byte)((uint)iVar5 >> 8),
                                                         SUB41(fVar2,0) & ~(byte)iVar5))),param_4);
  return;
}


