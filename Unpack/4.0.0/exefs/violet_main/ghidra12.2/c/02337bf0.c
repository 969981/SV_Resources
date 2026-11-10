/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02337bf0; name: FUN_02337bf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02337bf0(undefined1 param_1 [16],undefined1 param_2 [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar26;
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  int iVar27;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  
  uVar4 = param_2._4_4_;
  fVar10 = param_1._12_4_;
  fVar9 = param_1._8_4_;
  fVar8 = param_1._4_4_;
  fVar7 = param_1._0_4_;
  auVar28._0_4_ = fVar7 * fVar7 + fVar8 * fVar8;
  auVar28._4_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar28._8_4_ = fVar7 * fVar7 + fVar8 * fVar8;
  auVar28._12_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar16 = NEON_ext(auVar28,auVar28,4,1);
  auVar32._4_4_ = uVar4;
  auVar32._0_4_ = uVar4;
  auVar32._8_4_ = uVar4;
  auVar32._12_4_ = uVar4;
  fVar1 = auVar16._0_4_ + auVar16._4_4_;
  fVar3 = auVar16._8_4_ + auVar16._12_4_;
  fVar5 = auVar16._0_4_ + auVar16._4_4_;
  fVar6 = auVar16._8_4_ + auVar16._12_4_;
  fVar2 = -fVar7 / fVar1;
  fVar8 = -fVar8 / fVar3;
  fVar9 = -fVar9 / fVar5;
  fVar10 = fVar10 / fVar6;
  iVar27 = -(uint)(fVar1 == 0.0);
  iVar29 = -(uint)(fVar3 == 0.0);
  iVar30 = -(uint)(fVar5 == 0.0);
  iVar31 = -(uint)(fVar6 == 0.0);
  auVar18._0_4_ =
       (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                       CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                         SUB41(fVar2,0) & ~(byte)iVar27)));
  auVar15._0_8_ =
       CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                         CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                  CONCAT14(SUB41(fVar8,0) & ~(byte)iVar29,auVar18._0_4_))));
  auVar15[8] = SUB41(fVar9,0) & ~(byte)iVar30;
  auVar15[9] = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar15[10] = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar15[0xb] = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar17[0xc] = SUB41(fVar10,0) & ~(byte)iVar31;
  auVar17._0_12_ = auVar15;
  auVar17[0xd] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar17[0xe] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar17[0xf] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  auVar20._12_4_ = auVar17._12_4_;
  uVar26 = auVar15._8_4_;
  auVar16[4] = uVar11;
  auVar16._0_4_ = param_2._8_4_;
  auVar16[5] = uVar12;
  auVar16[6] = uVar13;
  auVar16[7] = uVar14;
  auVar16[8] = uVar11;
  auVar16[9] = uVar12;
  auVar16[10] = uVar13;
  auVar16[0xb] = uVar14;
  auVar16[0xc] = uVar11;
  auVar16[0xd] = uVar12;
  auVar16[0xe] = uVar13;
  auVar16[0xf] = uVar14;
  auVar28 = NEON_ext(auVar16,param_2,0xc,1);
  auVar32 = NEON_ext(auVar32,auVar28,0xc,1);
  auVar18._4_12_ = auVar17._4_12_;
  uVar4 = (undefined4)((ulong)auVar15._0_8_ >> 0x20);
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = uVar4;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = uVar26;
  auVar19._0_4_ = auVar18._0_4_;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = uVar26;
  auVar16 = NEON_ext(auVar21,auVar21,8,1);
  fVar2 = auVar16._0_4_;
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = fVar2;
  auVar24._0_8_ = auVar22._0_8_;
  auVar24._8_4_ = auVar16._8_4_;
  auVar24._12_4_ = uVar26;
  auVar23._8_8_ = auVar24._8_8_;
  auVar23._4_4_ = auVar18._0_4_;
  auVar23._0_4_ = fVar2;
  auVar25._0_12_ = auVar23._0_12_;
  auVar25._12_4_ = uVar4;
  auVar16 = NEON_ext(auVar25,auVar16,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,0xc,1);
  FUN_02337538(fVar7,(auVar18._0_4_ * param_2._12_4_ +
                      auVar20._12_4_ * param_2._0_4_ * (float)_DAT_03cab640 +
                     auVar16._0_4_ * auVar32._0_4_ * (float)_DAT_03cab640) - auVar28._0_4_ * fVar2);
  return;
}


