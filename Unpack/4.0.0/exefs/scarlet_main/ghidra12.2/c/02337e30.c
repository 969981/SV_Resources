/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02337e30; name: FUN_02337e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02337e30(undefined1 param_1 [16],undefined1 param_2 [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar8;
  undefined4 uVar10;
  undefined1 auVar9 [12];
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  
  fVar7 = param_2._8_4_;
  fVar6 = param_2._4_4_;
  fVar3 = param_2._0_4_;
  uVar10 = param_1._8_4_;
  uVar8 = param_1._4_4_;
  fVar15 = param_2._12_4_ * param_2._12_4_;
  auVar4._0_4_ = fVar3 * fVar3 + fVar6 * fVar6;
  auVar4._4_4_ = fVar7 * fVar7 + fVar15;
  auVar4._8_4_ = fVar3 * fVar3 + fVar6 * fVar6;
  auVar4._12_4_ = fVar7 * fVar7 + fVar15;
  auVar4 = NEON_ext(auVar4,auVar4,4,1);
  auVar16._4_4_ = uVar8;
  auVar16._0_4_ = uVar8;
  auVar16._8_4_ = uVar8;
  auVar16._12_4_ = uVar8;
  fVar15 = auVar4._0_4_ + auVar4._4_4_;
  fVar1 = auVar4._8_4_ + auVar4._12_4_;
  fVar2 = auVar4._0_4_ + auVar4._4_4_;
  iVar12 = -(uint)(fVar15 == 0.0);
  iVar13 = -(uint)(fVar1 == 0.0);
  iVar14 = -(uint)(fVar2 == 0.0);
  fVar15 = -fVar3 / fVar15;
  fVar1 = -fVar6 / fVar1;
  fVar2 = -fVar7 / fVar2;
  uVar8 = CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                   CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                            CONCAT11((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                     SUB41(fVar15,0) & ~(byte)iVar12)));
  auVar9._0_8_ = CONCAT17((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT16((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT15((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            CONCAT14(SUB41(fVar1,0) & ~(byte)iVar13,uVar8))));
  auVar9[8] = SUB41(fVar2,0) & ~(byte)iVar14;
  auVar9[9] = (byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar14 >> 8);
  auVar9[10] = (byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
  auVar9[0xb] = (byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
  auVar5._4_4_ = uVar10;
  auVar5._0_4_ = uVar10;
  auVar5._8_4_ = uVar10;
  auVar5._12_4_ = uVar10;
  auVar4 = NEON_ext(auVar5,param_1,0xc,1);
  uVar11 = auVar9._8_4_;
  auVar17._4_4_ = uVar11;
  auVar17._0_4_ = uVar11;
  auVar17._8_4_ = uVar11;
  auVar17._12_4_ = uVar11;
  uVar10 = (undefined4)((ulong)auVar9._0_8_ >> 0x20);
  NEON_ext(auVar16,auVar4,0xc,1);
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = uVar8;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = uVar10;
  auVar20._12_4_ = uVar11;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = uVar11;
  auVar19._0_4_ = uVar8;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = uVar11;
  auVar4 = NEON_ext(auVar21,auVar21,8,1);
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = auVar4._0_4_;
  auVar24._0_8_ = auVar22._0_8_;
  auVar24._8_4_ = auVar4._8_4_;
  auVar24._12_4_ = uVar11;
  auVar23._8_8_ = auVar24._8_8_;
  auVar23._4_4_ = uVar8;
  auVar23._0_4_ = auVar4._0_4_;
  auVar25._0_12_ = auVar23._0_12_;
  auVar25._12_4_ = uVar10;
  auVar4 = NEON_ext(auVar25,auVar4,8,1);
  NEON_ext(auVar4,auVar4,0xc,1);
  FUN_023375d8();
  return;
}


