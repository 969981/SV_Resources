/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233b768; name: FUN_0233b768
 */


void FUN_0233b768(float param_1,undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  int iVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar2 = param_2._0_4_;
  fVar5 = param_2._4_4_ * param_2._4_4_;
  fVar6 = param_2._8_4_ * param_2._8_4_;
  fVar7 = param_2._12_4_ * param_2._12_4_;
  auVar4._0_4_ = fVar2 * fVar2 + fVar5;
  auVar4._4_4_ = fVar6 + fVar7;
  auVar4._8_4_ = fVar2 * fVar2 + fVar5;
  auVar4._12_4_ = fVar6 + fVar7;
  auVar4 = NEON_ext(auVar4,auVar4,4,1);
  auVar1._0_4_ = auVar4._0_4_ + auVar4._4_4_;
  auVar1._4_4_ = auVar4._8_4_ + auVar4._12_4_;
  auVar1._8_4_ = auVar4._0_4_ + auVar4._4_4_;
  auVar1._12_4_ = auVar4._8_4_ + auVar4._12_4_;
  auVar4 = NEON_frsqrte(auVar1,4);
  auVar9._0_4_ = auVar1._0_4_ * auVar4._0_4_;
  auVar9._4_4_ = auVar1._4_4_ * auVar4._4_4_;
  auVar9._8_4_ = auVar1._8_4_ * auVar4._8_4_;
  auVar9._12_4_ = auVar1._12_4_ * auVar4._12_4_;
  auVar9 = NEON_frsqrts(auVar4,auVar9,4);
  auVar8._0_4_ = auVar4._0_4_ * auVar9._0_4_;
  auVar8._4_4_ = auVar4._4_4_ * auVar9._4_4_;
  auVar8._8_4_ = auVar4._8_4_ * auVar9._8_4_;
  auVar8._12_4_ = auVar4._12_4_ * auVar9._12_4_;
  auVar10._0_4_ = auVar1._0_4_ * auVar8._0_4_;
  auVar10._4_4_ = auVar1._4_4_ * auVar8._4_4_;
  auVar10._8_4_ = auVar1._8_4_ * auVar8._8_4_;
  auVar10._12_4_ = auVar1._12_4_ * auVar8._12_4_;
  iVar3 = -(uint)(auVar1._0_4_ == 0.0);
  auVar4 = NEON_frsqrts(auVar8,auVar10,4);
  fVar2 = fVar2 * auVar8._0_4_ * auVar4._0_4_;
  FUN_017c594c(param_1,param_1 + (float)CONCAT13((byte)((uint)fVar2 >> 0x18) &
                                                 ~(byte)((uint)iVar3 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                                          ~(byte)((uint)iVar3 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar2 >> 8) &
                                                                   ~(byte)((uint)iVar3 >> 8),
                                                                   SUB41(fVar2,0) & ~(byte)iVar3)))
                                 * param_3,param_4);
  return;
}


