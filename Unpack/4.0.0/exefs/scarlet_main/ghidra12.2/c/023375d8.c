/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023375d8; name: FUN_023375d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023375d8(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar17;
  undefined1 auVar6 [12];
  float fVar16;
  float fVar18;
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar22;
  int iVar23;
  undefined1 auVar21 [16];
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  
  fVar18 = param_2._12_4_;
  fVar17 = param_2._8_4_;
  fVar16 = param_2._4_4_;
  fVar5 = param_2._0_4_;
  fVar4 = param_1._12_4_;
  fVar3 = param_1._8_4_;
  fVar2 = param_1._4_4_;
  fVar1 = param_1._0_4_;
  auVar21._0_4_ = fVar5 * fVar5 + fVar16 * fVar16;
  auVar21._4_4_ = fVar17 * fVar17 + fVar18 * fVar18;
  auVar21._8_4_ = fVar5 * fVar5 + fVar16 * fVar16;
  auVar21._12_4_ = fVar17 * fVar17 + fVar18 * fVar18;
  auVar21 = NEON_ext(auVar21,auVar21,4,1);
  auVar19._4_4_ = fVar3;
  auVar19._0_4_ = fVar3;
  auVar19._8_4_ = fVar3;
  auVar19._12_4_ = fVar3;
  auVar30._0_4_ = auVar21._0_4_ + auVar21._4_4_;
  auVar30._4_4_ = auVar21._8_4_ + auVar21._12_4_;
  auVar30._8_4_ = auVar21._0_4_ + auVar21._4_4_;
  auVar30._12_4_ = auVar21._8_4_ + auVar21._12_4_;
  auVar21 = NEON_frsqrte(auVar30,4);
  auVar19 = NEON_ext(auVar19,param_1,0xc,1);
  auVar26._0_4_ = auVar30._0_4_ * auVar21._0_4_;
  auVar26._4_4_ = auVar30._4_4_ * auVar21._4_4_;
  auVar26._8_4_ = auVar30._8_4_ * auVar21._8_4_;
  auVar26._12_4_ = auVar30._12_4_ * auVar21._12_4_;
  auVar27 = NEON_frsqrts(auVar21,auVar26,4);
  auVar25._0_4_ = auVar21._0_4_ * auVar27._0_4_;
  auVar25._4_4_ = auVar21._4_4_ * auVar27._4_4_;
  auVar25._8_4_ = auVar21._8_4_ * auVar27._8_4_;
  auVar25._12_4_ = auVar21._12_4_ * auVar27._12_4_;
  auVar28._0_4_ = auVar30._0_4_ * auVar25._0_4_;
  auVar28._4_4_ = auVar30._4_4_ * auVar25._4_4_;
  auVar28._8_4_ = auVar30._8_4_ * auVar25._8_4_;
  auVar28._12_4_ = auVar30._12_4_ * auVar25._12_4_;
  iVar20 = -(uint)(auVar30._0_4_ == 0.0);
  iVar22 = -(uint)(auVar30._4_4_ == 0.0);
  iVar23 = -(uint)(auVar30._8_4_ == 0.0);
  iVar24 = -(uint)(auVar30._12_4_ == 0.0);
  auVar21 = NEON_frsqrts(auVar25,auVar28,4);
  auVar29._4_4_ = fVar2;
  auVar29._0_4_ = fVar2;
  auVar29._8_4_ = fVar2;
  auVar29._12_4_ = fVar2;
  auVar30 = NEON_ext(auVar29,auVar19,0xc,1);
  fVar5 = fVar5 * auVar25._0_4_ * auVar21._0_4_;
  fVar16 = fVar16 * auVar25._4_4_ * auVar21._4_4_;
  fVar17 = fVar17 * auVar25._8_4_ * auVar21._8_4_;
  fVar18 = fVar18 * auVar25._12_4_ * auVar21._12_4_;
  auVar7._0_4_ = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT12((byte)((uint)fVar5 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT11((byte)((uint)fVar5 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   SUB41(fVar5,0) & ~(byte)iVar20)));
  auVar6._0_8_ = CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                          CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                   CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                            CONCAT14(SUB41(fVar16,0) & ~(byte)iVar22,auVar7._0_4_)))
                         );
  auVar6[8] = SUB41(fVar17,0) & ~(byte)iVar23;
  auVar6[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar6[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar6[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  auVar27[0xc] = SUB41(fVar18,0) & ~(byte)iVar24;
  auVar27._0_12_ = auVar6;
  auVar27[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar27[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar27[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar9._12_4_ = auVar27._12_4_;
  fVar17 = auVar6._8_4_;
  fVar16 = (float)((ulong)auVar6._0_8_ >> 0x20);
  auVar7._4_12_ = auVar27._4_12_;
  auVar9._0_8_ = auVar7._0_8_;
  auVar9._8_4_ = fVar16;
  auVar8._8_8_ = auVar9._8_8_;
  auVar8._4_4_ = fVar17;
  auVar8._0_4_ = auVar7._0_4_;
  auVar10._0_12_ = auVar8._0_12_;
  auVar10._12_4_ = fVar17;
  auVar27 = NEON_ext(auVar10,auVar10,8,1);
  fVar18 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar31 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar5 = auVar27._0_4_;
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = fVar5;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_4_ = auVar27._8_4_;
  auVar13._12_4_ = fVar17;
  auVar12._8_8_ = auVar13._8_8_;
  auVar12._4_4_ = auVar7._0_4_;
  auVar12._0_4_ = fVar5;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_4_ = fVar16;
  auVar21 = NEON_ext(auVar14,auVar27,8,1);
  auVar21 = NEON_ext(auVar21,auVar21,0xc,1);
  auVar15._0_4_ =
       ((auVar7._0_4_ * fVar4 + auVar9._12_4_ * fVar1 * (float)_DAT_03cab640 +
        auVar21._0_4_ * auVar30._0_4_ * (float)_DAT_03cab640) - auVar19._0_4_ * fVar5) * param_3;
  auVar15._4_4_ =
       ((fVar16 * fVar4 + auVar9._12_4_ * fVar2 * fVar18 + auVar21._4_4_ * auVar30._4_4_ * fVar18) -
       auVar19._4_4_ * auVar27._4_4_) * param_3;
  auVar15._8_4_ =
       ((fVar17 * fVar4 + auVar9._12_4_ * fVar3 * (float)_UNK_03cab648 +
        auVar21._8_4_ * auVar30._8_4_ * (float)_UNK_03cab648) - auVar19._8_4_ * auVar27._8_4_) *
       param_3;
  auVar15._12_4_ =
       ((auVar9._12_4_ * fVar4 + auVar7._0_4_ * fVar1 * fVar31 +
        auVar21._12_4_ * auVar30._12_4_ * fVar31) - auVar19._12_4_ * auVar27._12_4_) * param_3;
  FUN_0199beb4(fVar1,auVar15,param_4);
  return;
}


