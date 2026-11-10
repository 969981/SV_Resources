/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02501094; name: FUN_02501094
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02501094(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  int iVar27;
  int iVar30;
  undefined8 uVar28;
  int iVar31;
  undefined1 auVar29 [16];
  int iVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  fVar3 = param_1._0_4_ - param_2._0_4_;
  fVar4 = param_1._4_4_ - param_2._4_4_;
  fVar5 = param_1._8_4_ - param_2._8_4_;
  fVar6 = param_1._12_4_ - param_2._12_4_;
  auVar8._0_4_ = fVar3 * fVar3 + fVar4 * fVar4;
  auVar8._4_4_ = fVar5 * fVar5 + fVar6 * fVar6;
  auVar8._8_4_ = fVar3 * fVar3 + fVar4 * fVar4;
  auVar8._12_4_ = fVar5 * fVar5 + fVar6 * fVar6;
  auVar29 = NEON_ext(auVar8,auVar8,4,1);
  auVar9._0_4_ = auVar29._0_4_ + auVar29._4_4_;
  auVar9._4_4_ = auVar29._8_4_ + auVar29._12_4_;
  auVar9._8_4_ = auVar29._0_4_ + auVar29._4_4_;
  auVar9._12_4_ = auVar29._8_4_ + auVar29._12_4_;
  auVar29 = NEON_frsqrte(auVar9,4);
  auVar36._0_4_ = auVar9._0_4_ * auVar29._0_4_;
  auVar36._4_4_ = auVar9._4_4_ * auVar29._4_4_;
  auVar36._8_4_ = auVar9._8_4_ * auVar29._8_4_;
  auVar36._12_4_ = auVar9._12_4_ * auVar29._12_4_;
  auVar37 = NEON_frsqrts(auVar29,auVar36,4);
  auVar34._0_4_ = auVar29._0_4_ * auVar37._0_4_;
  auVar34._4_4_ = auVar29._4_4_ * auVar37._4_4_;
  auVar34._8_4_ = auVar29._8_4_ * auVar37._8_4_;
  auVar34._12_4_ = auVar29._12_4_ * auVar37._12_4_;
  auVar38._0_4_ = auVar9._0_4_ * auVar34._0_4_;
  auVar38._4_4_ = auVar9._4_4_ * auVar34._4_4_;
  auVar38._8_4_ = auVar9._8_4_ * auVar34._8_4_;
  auVar38._12_4_ = auVar9._12_4_ * auVar34._12_4_;
  iVar27 = -(uint)(auVar9._0_4_ == 0.0);
  iVar30 = -(uint)(auVar9._4_4_ == 0.0);
  iVar31 = -(uint)(auVar9._8_4_ == 0.0);
  iVar32 = -(uint)(auVar9._12_4_ == 0.0);
  auVar29 = NEON_frsqrts(auVar34,auVar38,4);
  fVar3 = fVar3 * auVar34._0_4_ * auVar29._0_4_;
  fVar4 = fVar4 * auVar34._4_4_ * auVar29._4_4_;
  fVar5 = fVar5 * auVar34._8_4_ * auVar29._8_4_;
  fVar6 = fVar6 * auVar34._12_4_ * auVar29._12_4_;
  bVar11 = SUB41(fVar3,0) & ~(byte)iVar27;
  bVar12 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar27 >> 8);
  bVar13 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  bVar14 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  bVar15 = SUB41(fVar4,0) & ~(byte)iVar30;
  bVar16 = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar30 >> 8);
  bVar17 = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  bVar18 = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  bVar19 = SUB41(fVar5,0) & ~(byte)iVar31;
  bVar20 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar21 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar22 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  bVar23 = SUB41(fVar6,0) & ~(byte)iVar32;
  bVar24 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar32 >> 8);
  bVar25 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  bVar26 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  uVar33 = a64_TBL(ZEXT816(0),param_3,DAT_03cb56c8);
  uVar28 = a64_TBL(ZEXT816(0),param_3,DAT_03cb54d8);
  auVar29[1] = bVar12;
  auVar29[0] = bVar11;
  auVar29[2] = bVar13;
  auVar29[3] = bVar14;
  auVar29[4] = bVar15;
  auVar29[5] = bVar16;
  auVar29[6] = bVar17;
  auVar29[7] = bVar18;
  auVar29[8] = bVar19;
  auVar29[9] = bVar20;
  auVar29[10] = bVar21;
  auVar29[0xb] = bVar22;
  auVar29[0xc] = bVar23;
  auVar29[0xd] = bVar24;
  auVar29[0xe] = bVar25;
  auVar29[0xf] = bVar26;
  uVar39 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb5488);
  uVar41 = a64_TBL(ZEXT816(0),param_3,DAT_03cb5488);
  uVar7 = a64_TBL(ZEXT816(0),param_3,DAT_03cb54c0);
  auVar37[1] = bVar12;
  auVar37[0] = bVar11;
  auVar37[2] = bVar13;
  auVar37[3] = bVar14;
  auVar37[4] = bVar15;
  auVar37[5] = bVar16;
  auVar37[6] = bVar17;
  auVar37[7] = bVar18;
  auVar37[8] = bVar19;
  auVar37[9] = bVar20;
  auVar37[10] = bVar21;
  auVar37[0xb] = bVar22;
  auVar37[0xc] = bVar23;
  auVar37[0xd] = bVar24;
  auVar37[0xe] = bVar25;
  auVar37[0xf] = bVar26;
  uVar40 = a64_TBL(ZEXT816(0),auVar37,DAT_03cb54c0);
  auVar1[1] = bVar12;
  auVar1[0] = bVar11;
  auVar1[2] = bVar13;
  auVar1[3] = bVar14;
  auVar1[4] = bVar15;
  auVar1[5] = bVar16;
  auVar1[6] = bVar17;
  auVar1[7] = bVar18;
  auVar1[8] = bVar19;
  auVar1[9] = bVar20;
  auVar1[10] = bVar21;
  auVar1[0xb] = bVar22;
  auVar1[0xc] = bVar23;
  auVar1[0xd] = bVar24;
  auVar1[0xe] = bVar25;
  auVar1[0xf] = bVar26;
  uVar42 = a64_TBL(ZEXT816(0),auVar1,DAT_03cb56c8);
  auVar2[1] = bVar12;
  auVar2[0] = bVar11;
  auVar2[2] = bVar13;
  auVar2[3] = bVar14;
  auVar2[4] = bVar15;
  auVar2[5] = bVar16;
  auVar2[6] = bVar17;
  auVar2[7] = bVar18;
  auVar2[8] = bVar19;
  auVar2[9] = bVar20;
  auVar2[10] = bVar21;
  auVar2[0xb] = bVar22;
  auVar2[0xc] = bVar23;
  auVar2[0xd] = bVar24;
  auVar2[0xe] = bVar25;
  auVar2[0xf] = bVar26;
  uVar43 = a64_TBL(ZEXT816(0),auVar2,DAT_03cb54d8);
  auVar35._0_4_ = (float)uVar33 * (float)uVar39 - (float)uVar41 * (float)uVar42;
  auVar35._4_4_ =
       (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar39 >> 0x20) -
       (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
  auVar35._12_4_ =
       (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar40 >> 0x20) -
       (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
  auVar35._8_4_ = (float)uVar28 * (float)uVar40 - (float)uVar7 * (float)uVar43;
  uVar7 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb5488);
  a64_TBL(ZEXT816(0),auVar35,DAT_03cb54c0);
  uVar28 = a64_TBL(ZEXT816(0),auVar35,DAT_03cb56c8);
  a64_TBL(ZEXT816(0),auVar35,DAT_03cb54d8);
  auVar10[9] = bVar12;
  auVar10[8] = bVar11;
  auVar10[10] = bVar13;
  auVar10[0xb] = bVar14;
  auVar10._4_4_ = (float)uVar42 * (float)uVar7 - (float)uVar39 * (float)uVar28;
  auVar10._0_4_ = auVar35._0_4_;
  auVar10._12_4_ = 0;
  return auVar10;
}


