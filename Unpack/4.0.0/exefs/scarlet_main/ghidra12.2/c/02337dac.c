/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02337dac; name: FUN_02337dac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02337dac(undefined1 param_1 [16],undefined1 param_2 [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar11 [12];
  undefined4 uVar21;
  undefined1 auVar12 [16];
  undefined4 uVar22;
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  
  fVar10 = param_2._12_4_;
  fVar9 = param_2._8_4_;
  fVar8 = param_2._4_4_;
  fVar5 = param_2._0_4_;
  uVar22 = param_1._8_4_;
  uVar21 = param_1._4_4_;
  auVar6._0_4_ = fVar5 * fVar5 + fVar8 * fVar8;
  auVar6._4_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar6._8_4_ = fVar5 * fVar5 + fVar8 * fVar8;
  auVar6._12_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar6 = NEON_ext(auVar6,auVar6,4,1);
  auVar27._4_4_ = uVar21;
  auVar27._0_4_ = uVar21;
  auVar27._8_4_ = uVar21;
  auVar27._12_4_ = uVar21;
  fVar1 = auVar6._0_4_ + auVar6._4_4_;
  fVar2 = auVar6._8_4_ + auVar6._12_4_;
  fVar3 = auVar6._0_4_ + auVar6._4_4_;
  fVar4 = auVar6._8_4_ + auVar6._12_4_;
  iVar23 = -(uint)(fVar1 == 0.0);
  iVar24 = -(uint)(fVar2 == 0.0);
  iVar25 = -(uint)(fVar3 == 0.0);
  iVar26 = -(uint)(fVar4 == 0.0);
  fVar1 = -fVar5 / fVar1;
  fVar2 = -fVar8 / fVar2;
  fVar3 = -fVar9 / fVar3;
  fVar10 = fVar10 / fVar4;
  auVar13._0_4_ =
       CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                         CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                  SUB41(fVar1,0) & ~(byte)iVar23)));
  auVar11._0_8_ =
       CONCAT17((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                CONCAT16((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                         CONCAT15((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                  CONCAT14(SUB41(fVar2,0) & ~(byte)iVar24,auVar13._0_4_))));
  auVar11[8] = SUB41(fVar3,0) & ~(byte)iVar25;
  auVar11[9] = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar25 >> 8);
  auVar11[10] = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  auVar11[0xb] = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  auVar12[0xc] = SUB41(fVar10,0) & ~(byte)iVar26;
  auVar12._0_12_ = auVar11;
  auVar12[0xd] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar26 >> 8);
  auVar12[0xe] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
  auVar12[0xf] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
  auVar7._4_4_ = uVar22;
  auVar7._0_4_ = uVar22;
  auVar7._8_4_ = uVar22;
  auVar7._12_4_ = uVar22;
  auVar6 = NEON_ext(auVar7,param_1,0xc,1);
  auVar15._12_4_ = auVar12._12_4_;
  uVar22 = auVar11._8_4_;
  uVar21 = (undefined4)((ulong)auVar11._0_8_ >> 0x20);
  NEON_ext(auVar27,auVar6,0xc,1);
  auVar13._4_12_ = auVar12._4_12_;
  auVar15._0_8_ = auVar13._0_8_;
  auVar15._8_4_ = uVar21;
  auVar14._8_8_ = auVar15._8_8_;
  auVar14._4_4_ = uVar22;
  auVar14._0_4_ = auVar13._0_4_;
  auVar16._0_12_ = auVar14._0_12_;
  auVar16._12_4_ = uVar22;
  auVar6 = NEON_ext(auVar16,auVar16,8,1);
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = auVar6._0_4_;
  auVar19._0_8_ = auVar17._0_8_;
  auVar19._8_4_ = auVar6._8_4_;
  auVar19._12_4_ = uVar22;
  auVar18._8_8_ = auVar19._8_8_;
  auVar18._4_4_ = auVar13._0_4_;
  auVar18._0_4_ = auVar6._0_4_;
  auVar20._0_12_ = auVar18._0_12_;
  auVar20._12_4_ = uVar21;
  auVar6 = NEON_ext(auVar20,auVar6,8,1);
  NEON_ext(auVar6,auVar6,0xc,1);
  FUN_02337538();
  return;
}


