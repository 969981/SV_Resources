/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02337538; name: FUN_02337538
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02337538(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,
                 undefined1 param_4 [16])

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  undefined1 auVar12 [16];
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  
  uVar3 = param_1._4_4_;
  fVar2 = param_2._0_4_;
  fVar9 = param_2._4_4_;
  fVar10 = param_2._8_4_;
  fVar1 = param_2._12_4_;
  auVar20._0_4_ = fVar2 * fVar2 + fVar9 * fVar9;
  auVar20._4_4_ = fVar10 * fVar10 + fVar1 * fVar1;
  auVar20._8_4_ = fVar2 * fVar2 + fVar9 * fVar9;
  auVar20._12_4_ = fVar10 * fVar10 + fVar1 * fVar1;
  auVar12 = NEON_ext(auVar20,auVar20,4,1);
  auVar18._0_4_ = auVar12._0_4_ + auVar12._4_4_;
  auVar18._4_4_ = auVar12._8_4_ + auVar12._12_4_;
  auVar18._8_4_ = auVar12._0_4_ + auVar12._4_4_;
  auVar18._12_4_ = auVar12._8_4_ + auVar12._12_4_;
  auVar12 = NEON_frsqrte(auVar18,4);
  auVar19._0_4_ = auVar18._0_4_ * auVar12._0_4_;
  auVar19._4_4_ = auVar18._4_4_ * auVar12._4_4_;
  auVar19._8_4_ = auVar18._8_4_ * auVar12._8_4_;
  auVar19._12_4_ = auVar18._12_4_ * auVar12._12_4_;
  auVar20 = NEON_frsqrts(auVar12,auVar19,4);
  auVar16._0_4_ = auVar12._0_4_ * auVar20._0_4_;
  auVar16._4_4_ = auVar12._4_4_ * auVar20._4_4_;
  auVar16._8_4_ = auVar12._8_4_ * auVar20._8_4_;
  auVar16._12_4_ = auVar12._12_4_ * auVar20._12_4_;
  auVar21._0_4_ = auVar18._0_4_ * auVar16._0_4_;
  auVar21._4_4_ = auVar18._4_4_ * auVar16._4_4_;
  auVar21._8_4_ = auVar18._8_4_ * auVar16._8_4_;
  auVar21._12_4_ = auVar18._12_4_ * auVar16._12_4_;
  iVar11 = -(uint)(auVar18._0_4_ == 0.0);
  iVar13 = -(uint)(auVar18._4_4_ == 0.0);
  iVar14 = -(uint)(auVar18._8_4_ == 0.0);
  iVar15 = -(uint)(auVar18._12_4_ == 0.0);
  auVar12 = NEON_frsqrts(auVar16,auVar21,4);
  fVar2 = fVar2 * auVar16._0_4_ * auVar12._0_4_;
  fVar9 = fVar9 * auVar16._4_4_ * auVar12._4_4_;
  fVar10 = fVar10 * auVar16._8_4_ * auVar12._8_4_;
  fVar1 = fVar1 * auVar16._12_4_ * auVar12._12_4_;
  auVar17._4_4_ = uVar3;
  auVar17._0_4_ = uVar3;
  auVar17._8_4_ = uVar3;
  auVar17._12_4_ = uVar3;
  fVar8 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar11))) * param_3;
  fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar13))) * param_3;
  fVar10 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                           CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                    CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                             SUB41(fVar10,0) & ~(byte)iVar14))) * param_3;
  uVar4 = param_1[8];
  uVar5 = param_1[9];
  uVar6 = param_1[10];
  uVar7 = param_1[0xb];
  auVar12[4] = uVar4;
  auVar12._0_4_ = param_1._8_4_;
  auVar12[5] = uVar5;
  auVar12[6] = uVar6;
  auVar12[7] = uVar7;
  auVar12[8] = uVar4;
  auVar12[9] = uVar5;
  auVar12[10] = uVar6;
  auVar12[0xb] = uVar7;
  auVar12[0xc] = uVar4;
  auVar12[0xd] = uVar5;
  auVar12[0xe] = uVar6;
  auVar12[0xf] = uVar7;
  auVar20 = NEON_ext(auVar12,param_1,0xc,1);
  auVar22._4_4_ = fVar10;
  auVar22._0_4_ = fVar10;
  auVar22._8_4_ = fVar10;
  auVar22._12_4_ = fVar10;
  auVar18 = NEON_ext(auVar17,auVar20,0xc,1);
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = fVar8;
  auVar25._0_8_ = auVar23._0_8_;
  auVar25._8_4_ = fVar9;
  auVar25._12_4_ = fVar10;
  auVar24._8_8_ = auVar25._8_8_;
  auVar24._4_4_ = fVar10;
  auVar24._0_4_ = fVar8;
  auVar26._0_12_ = auVar24._0_12_;
  auVar26._12_4_ = fVar10;
  auVar12 = NEON_ext(auVar26,auVar26,8,1);
  fVar2 = auVar12._0_4_;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = fVar2;
  auVar29._0_8_ = auVar27._0_8_;
  auVar29._8_4_ = auVar12._8_4_;
  auVar29._12_4_ = fVar10;
  auVar28._8_8_ = auVar29._8_8_;
  auVar28._4_4_ = fVar8;
  auVar28._0_4_ = fVar2;
  auVar30._0_12_ = auVar28._0_12_;
  auVar30._12_4_ = fVar9;
  auVar12 = NEON_ext(auVar30,auVar12,8,1);
  auVar12 = NEON_ext(auVar12,auVar12,0xc,1);
  FUN_0199ae60(param_1._0_4_,
               SUB41((fVar8 * param_1._12_4_ +
                      (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                      CONCAT12((byte)((uint)fVar1 >> 0x10) &
                                               ~(byte)((uint)iVar15 >> 0x10),
                                               CONCAT11((byte)((uint)fVar1 >> 8) &
                                                        ~(byte)((uint)iVar15 >> 8),
                                                        SUB41(fVar1,0) & ~(byte)iVar15))) * param_3
                      * param_1._0_4_ * (float)_DAT_03cab640 +
                     auVar12._0_4_ * auVar18._0_4_ * (float)_DAT_03cab640) - auVar20._0_4_ * fVar2,0
                    ),param_4);
  return;
}


