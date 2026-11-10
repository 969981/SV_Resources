/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c42a5c; name: FUN_00c42a5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c42a5c(undefined1 param_1 [16],long param_2)

{
  undefined1 auVar1 [16];
  float fVar5;
  undefined1 auVar2 [12];
  float fVar4;
  float fVar6;
  undefined1 auVar3 [16];
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar15;
  undefined1 auVar10 [16];
  float fVar13;
  undefined1 auVar11 [16];
  int iVar14;
  undefined1 auVar12 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (*(char *)(param_2 + 0x20) == '\0') {
    return;
  }
  auVar20._8_8_ = _UNK_03caa5b8;
  auVar20._0_8_ = _DAT_03caa5b0;
  auVar10._0_4_ = -param_1._0_4_;
  auVar10._4_4_ = -param_1._4_4_;
  auVar10._8_4_ = -param_1._8_4_;
  auVar10._12_4_ = -param_1._12_4_;
  uVar23 = a64_TBL(ZEXT816(0),auVar20,DAT_03cb56c8);
  uVar17 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb56c8);
  uVar27 = a64_TBL(ZEXT816(0),auVar20,DAT_03cb54d8);
  uVar29 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb5488);
  uVar28 = a64_TBL(ZEXT816(0),auVar20,DAT_03cb5488);
  uVar30 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54c0);
  uVar19 = a64_TBL(ZEXT816(0),auVar20,DAT_03cb54c0);
  uVar9 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54d8);
  fVar16 = (float)uVar23 * (float)uVar29 - (float)uVar28 * (float)uVar17;
  fVar18 = (float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar29 >> 0x20) -
           (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar17 >> 0x20);
  fVar7 = (float)uVar27 * (float)uVar30 - (float)uVar19 * (float)uVar9;
  fVar13 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar30 >> 0x20) -
           (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar9 >> 0x20);
  fVar13 = fVar13 * fVar13;
  auVar11._0_4_ = fVar16 * fVar16 + fVar18 * fVar18;
  auVar11._4_4_ = fVar7 * fVar7 + fVar13;
  auVar11._8_4_ = fVar16 * fVar16 + fVar18 * fVar18;
  auVar11._12_4_ = fVar7 * fVar7 + fVar13;
  auVar11 = NEON_ext(auVar11,auVar11,4,1);
  auVar22._0_4_ = auVar11._0_4_ + auVar11._4_4_;
  auVar22._4_4_ = auVar11._8_4_ + auVar11._12_4_;
  auVar22._8_4_ = auVar11._0_4_ + auVar11._4_4_;
  auVar22._12_4_ = auVar11._8_4_ + auVar11._12_4_;
  auVar11 = NEON_frsqrte(auVar22,4);
  auVar24._0_4_ = auVar22._0_4_ * auVar11._0_4_;
  auVar24._4_4_ = auVar22._4_4_ * auVar11._4_4_;
  auVar24._8_4_ = auVar22._8_4_ * auVar11._8_4_;
  auVar24._12_4_ = auVar22._12_4_ * auVar11._12_4_;
  auVar25 = NEON_frsqrts(auVar11,auVar24,4);
  auVar21._0_4_ = auVar11._0_4_ * auVar25._0_4_;
  auVar21._4_4_ = auVar11._4_4_ * auVar25._4_4_;
  auVar21._8_4_ = auVar11._8_4_ * auVar25._8_4_;
  auVar21._12_4_ = auVar11._12_4_ * auVar25._12_4_;
  auVar26._0_4_ = auVar22._0_4_ * auVar21._0_4_;
  auVar26._4_4_ = auVar22._4_4_ * auVar21._4_4_;
  auVar26._8_4_ = auVar22._8_4_ * auVar21._8_4_;
  auVar26._12_4_ = auVar22._12_4_ * auVar21._12_4_;
  iVar8 = -(uint)(auVar22._0_4_ == 0.0);
  iVar14 = -(uint)(auVar22._4_4_ == 0.0);
  iVar15 = -(uint)(auVar22._8_4_ == 0.0);
  auVar11 = NEON_frsqrts(auVar21,auVar26,4);
  fVar16 = fVar16 * auVar21._0_4_ * auVar11._0_4_;
  fVar18 = fVar18 * auVar21._4_4_ * auVar11._4_4_;
  fVar7 = fVar7 * auVar21._8_4_ * auVar11._8_4_;
  fVar13 = param_1._0_4_ * (float)_DAT_03cac220;
  fVar4 = param_1._4_4_ * (float)((ulong)_DAT_03cac220 >> 0x20);
  fVar5 = param_1._8_4_ * (float)_UNK_03cac228;
  fVar6 = param_1._12_4_ * (float)((ulong)_UNK_03cac228 >> 0x20);
  auVar22 = NEON_fmov(0xbf800000,4);
  auVar25._0_4_ = fVar13 + fVar4;
  auVar25._4_4_ = fVar5 + fVar6;
  auVar25._8_4_ = fVar13 + fVar4;
  auVar25._12_4_ = fVar5 + fVar6;
  auVar11 = NEON_ext(auVar25,auVar25,4,1);
  auVar1._0_4_ = auVar11._0_4_ + auVar11._4_4_;
  auVar1._4_4_ = auVar11._8_4_ + auVar11._12_4_;
  auVar1._8_4_ = auVar11._0_4_ + auVar11._4_4_;
  auVar1._12_4_ = auVar11._8_4_ + auVar11._12_4_;
  auVar11 = NEON_fmax(auVar1,auVar22,4);
  auVar22 = NEON_fmov(0x3f800000,4);
  auVar11 = NEON_fmin(auVar11,auVar22,4);
  fVar13 = (auVar11._0_4_ + auVar22._0_4_) * 0.5;
  fVar4 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                          CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                   CONCAT11((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                            SUB41(fVar16,0) & ~(byte)iVar8)));
  auVar2._0_8_ = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            CONCAT14(SUB41(fVar18,0) & ~(byte)iVar14,fVar4))));
  auVar2[8] = SUB41(fVar7,0) & ~(byte)iVar15;
  auVar2[9] = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar15 >> 8);
  auVar2[10] = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
  auVar2[0xb] = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
  auVar12._0_4_ = SQRT(auVar22._0_4_ - fVar13);
  auVar12._4_4_ = SQRT(auVar22._4_4_ - (auVar11._4_4_ + auVar22._4_4_) * 0.5);
  auVar12._8_4_ = SQRT(auVar22._8_4_ - (auVar11._8_4_ + auVar22._8_4_) * 0.5);
  auVar12._12_4_ = SQRT(fVar13);
  auVar3._0_4_ = fVar4 * auVar12._0_4_;
  auVar3._4_4_ = (float)((ulong)auVar2._0_8_ >> 0x20) * auVar12._4_4_;
  auVar3._8_4_ = auVar2._8_4_ * auVar12._8_4_;
  auVar3._12_4_ = auVar12._12_4_;
  FUN_00c42c18(auVar3,auVar12,CONCAT44(fVar18,fVar16),DAT_0485a0e8,param_2 + 0x24);
  return;
}


