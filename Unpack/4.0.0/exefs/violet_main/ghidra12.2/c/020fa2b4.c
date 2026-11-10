/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fa2b4; name: FUN_020fa2b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020fa2b4(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  uint uVar7;
  undefined1 auVar8 [12];
  float fVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar9 [16];
  uint uVar15;
  int iVar16;
  float fVar17;
  int iVar19;
  int iVar20;
  undefined1 auVar18 [16];
  int iVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  undefined8 uVar29;
  float fVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined8 uVar51;
  undefined1 auVar52 [16];
  uint uVar53;
  undefined8 uVar54;
  uint uVar58;
  uint uVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  
  lVar2 = *(long *)(param_1 + 0x140);
  lVar1 = *(long *)(param_1 + 0x148);
  fVar6 = *(float *)(lVar2 + 0xe0);
  fVar10 = *(float *)(lVar2 + 0xe4);
  fVar12 = *(float *)(lVar2 + 0xe8);
  fVar14 = *(float *)(lVar2 + 0xec);
  fVar35 = *(float *)(lVar1 + 0xe0);
  fVar17 = *(float *)(lVar1 + 0xe4);
  fVar23 = *(float *)(lVar1 + 0xe8);
  fVar27 = *(float *)(lVar1 + 0xec);
  lVar2 = *param_2;
  if ((param_3 & 1) == 0) {
    fVar22 = *(float *)(param_1 + 0x160);
    fVar28 = *(float *)(param_1 + 0x184);
  }
  else {
    fVar6 = fVar6 + (*(float *)(lVar2 + 0x280) - *(float *)(param_1 + 0x170));
    fVar10 = fVar10 + (*(float *)(lVar2 + 0x284) - *(float *)(param_1 + 0x174));
    fVar12 = fVar12 + (*(float *)(lVar2 + 0x288) - *(float *)(param_1 + 0x178));
    fVar14 = fVar14 + (*(float *)(lVar2 + 0x28c) - *(float *)(param_1 + 0x17c));
    fVar22 = *(float *)(lVar2 + 0x18c) - *(float *)(param_1 + 0x180);
    fVar28 = *(float *)(param_1 + 0x160);
    *(float *)(param_1 + 0x184) = fVar22;
    lVar2 = *param_2;
  }
  *(float *)(lVar2 + 0x18c) = fVar22 + fVar28;
  lVar2 = *param_2;
  *(float *)(lVar2 + 0x288) = fVar12;
  *(float *)(lVar2 + 0x28c) = fVar14;
  *(float *)(lVar2 + 0x280) = fVar6;
  *(float *)(lVar2 + 0x284) = fVar10;
  fVar6 = fVar6 - fVar35;
  fVar10 = fVar10 - fVar17;
  fVar12 = fVar12 - fVar23;
  fVar14 = fVar14 - fVar27;
  auVar18._0_4_ = fVar6 * fVar6 + fVar10 * fVar10;
  auVar18._4_4_ = fVar12 * fVar12 + fVar14 * fVar14;
  auVar18._8_4_ = fVar6 * fVar6 + fVar10 * fVar10;
  auVar18._12_4_ = fVar12 * fVar12 + fVar14 * fVar14;
  auVar18 = NEON_ext(auVar18,auVar18,4,1);
  auVar56._0_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar56._4_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar56._8_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar56._12_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar18 = NEON_frsqrte(auVar56,4);
  auVar30._0_4_ = auVar56._0_4_ * auVar18._0_4_;
  auVar30._4_4_ = auVar56._4_4_ * auVar18._4_4_;
  auVar30._8_4_ = auVar56._8_4_ * auVar18._8_4_;
  auVar30._12_4_ = auVar56._12_4_ * auVar18._12_4_;
  auVar31 = NEON_frsqrts(auVar18,auVar30,4);
  auVar25._0_4_ = auVar18._0_4_ * auVar31._0_4_;
  auVar25._4_4_ = auVar18._4_4_ * auVar31._4_4_;
  auVar25._8_4_ = auVar18._8_4_ * auVar31._8_4_;
  auVar25._12_4_ = auVar18._12_4_ * auVar31._12_4_;
  auVar32._0_4_ = auVar56._0_4_ * auVar25._0_4_;
  auVar32._4_4_ = auVar56._4_4_ * auVar25._4_4_;
  auVar32._8_4_ = auVar56._8_4_ * auVar25._8_4_;
  auVar32._12_4_ = auVar56._12_4_ * auVar25._12_4_;
  iVar16 = -(uint)(auVar56._0_4_ == 0.0);
  iVar19 = -(uint)(auVar56._4_4_ == 0.0);
  iVar20 = -(uint)(auVar56._8_4_ == 0.0);
  iVar21 = -(uint)(auVar56._12_4_ == 0.0);
  auVar18 = NEON_frsqrts(auVar25,auVar32,4);
  fVar6 = fVar6 * auVar25._0_4_ * auVar18._0_4_;
  fVar10 = fVar10 * auVar25._4_4_ * auVar18._4_4_;
  fVar12 = fVar12 * auVar25._8_4_ * auVar18._8_4_;
  fVar14 = fVar14 * auVar25._12_4_ * auVar18._12_4_;
  auVar18 = *(undefined1 (*) [16])(param_1 + 0x150);
  fVar6 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar16)));
  auVar8._0_8_ = CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                          CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                   CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                            CONCAT14(SUB41(fVar10,0) & ~(byte)iVar19,fVar6))));
  auVar8[8] = SUB41(fVar12,0) & ~(byte)iVar20;
  auVar8[9] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar20 >> 8);
  auVar8[10] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  auVar8[0xb] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  auVar9[0xc] = SUB41(fVar14,0) & ~(byte)iVar21;
  auVar9._0_12_ = auVar8;
  auVar9[0xd] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar9[0xe] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar9[0xf] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  uVar29 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb56c8);
  uVar43 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb54d8);
  uVar51 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb5488);
  uVar54 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb5488);
  uVar24 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb54c0);
  uVar42 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb54c0);
  uVar62 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb56c8);
  uVar66 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb54d8);
  fVar23 = (float)((ulong)uVar51 >> 0x20);
  fVar27 = (float)((ulong)uVar62 >> 0x20);
  fVar14 = (float)uVar29 * (float)uVar51 - (float)uVar54 * (float)uVar62;
  fVar35 = (float)((ulong)uVar29 >> 0x20) * fVar23 - (float)((ulong)uVar54 >> 0x20) * fVar27;
  fVar10 = (float)uVar43 * (float)uVar42 - (float)uVar24 * (float)uVar66;
  fVar12 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar42 >> 0x20) -
           (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar66 >> 0x20);
  auVar31._0_4_ = fVar14 * fVar14 + fVar35 * fVar35;
  auVar31._4_4_ = fVar10 * fVar10 + fVar12 * fVar12;
  auVar31._8_4_ = fVar14 * fVar14 + fVar35 * fVar35;
  auVar31._12_4_ = fVar10 * fVar10 + fVar12 * fVar12;
  auVar18 = NEON_ext(auVar31,auVar31,4,1);
  auVar3._0_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar3._4_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar3._8_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar3._12_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar18 = NEON_frsqrte(auVar3,4);
  auVar55._0_4_ = auVar3._0_4_ * auVar18._0_4_;
  auVar55._4_4_ = auVar3._4_4_ * auVar18._4_4_;
  auVar55._8_4_ = auVar3._8_4_ * auVar18._8_4_;
  auVar55._12_4_ = auVar3._12_4_ * auVar18._12_4_;
  auVar56 = NEON_frsqrts(auVar18,auVar55,4);
  auVar45._0_4_ = auVar18._0_4_ * auVar56._0_4_;
  auVar45._4_4_ = auVar18._4_4_ * auVar56._4_4_;
  auVar45._8_4_ = auVar18._8_4_ * auVar56._8_4_;
  auVar45._12_4_ = auVar18._12_4_ * auVar56._12_4_;
  auVar57._0_4_ = auVar3._0_4_ * auVar45._0_4_;
  auVar57._4_4_ = auVar3._4_4_ * auVar45._4_4_;
  auVar57._8_4_ = auVar3._8_4_ * auVar45._8_4_;
  auVar57._12_4_ = auVar3._12_4_ * auVar45._12_4_;
  iVar16 = -(uint)(auVar3._0_4_ == 0.0);
  iVar19 = -(uint)(auVar3._4_4_ == 0.0);
  iVar20 = -(uint)(auVar3._8_4_ == 0.0);
  iVar21 = -(uint)(auVar3._12_4_ == 0.0);
  auVar18 = NEON_frsqrts(auVar45,auVar57,4);
  fVar14 = fVar14 * auVar45._0_4_ * auVar18._0_4_;
  fVar35 = fVar35 * auVar45._4_4_ * auVar18._4_4_;
  fVar10 = fVar10 * auVar45._8_4_ * auVar18._8_4_;
  fVar12 = fVar12 * auVar45._12_4_ * auVar18._12_4_;
  fVar14 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar14,0) & ~(byte)iVar16)));
  auVar44._0_8_ =
       CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                         CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                  CONCAT14(SUB41(fVar35,0) & ~(byte)iVar19,fVar14))));
  auVar44[8] = SUB41(fVar10,0) & ~(byte)iVar20;
  auVar44[9] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar20 >> 8);
  auVar44[10] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  auVar44[0xb] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  auVar46[0xc] = SUB41(fVar12,0) & ~(byte)iVar21;
  auVar46._0_12_ = auVar44;
  auVar46[0xd] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar21 >> 8);
  auVar46[0xe] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  auVar46[0xf] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  uVar29 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb5488);
  uVar24 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb56c8);
  auVar31 = NEON_ext(auVar46,auVar46,8,1);
  fVar17 = (float)uVar62 * (float)uVar29 - (float)uVar51 * (float)uVar24;
  fVar12 = fVar27 * (float)((ulong)uVar29 >> 0x20) - fVar23 * (float)((ulong)uVar24 >> 0x20);
  auVar18 = NEON_fmov(0x3f800000,4);
  lVar2 = *param_2;
  fVar10 = auVar8._8_4_;
  fVar23 = auVar18._0_4_ + (float)_DAT_03cab3a0 * fVar14 + (float)_DAT_03cac210 * fVar12 +
           (float)_DAT_03cabb00 * fVar10;
  fVar27 = auVar18._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar14 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar12 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar10;
  fVar22 = auVar18._8_4_ + (float)_UNK_03cab3a8 * fVar14 + (float)_UNK_03cac218 * fVar12 +
           (float)_UNK_03cabb08 * fVar10;
  fVar28 = auVar18._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar14 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar12 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar10;
  fVar36 = SQRT(fVar27) * 0.5;
  fVar37 = SQRT(fVar22) * 0.5;
  auVar18 = NEON_fmov(0x40800000,4);
  auVar50._0_4_ = SQRT(fVar23) * 0.5 * auVar18._0_4_;
  auVar50._4_4_ = fVar36 * auVar18._4_4_;
  auVar50._8_4_ = fVar37 * auVar18._8_4_;
  auVar50._12_4_ = SQRT(fVar28) * 0.5 * auVar18._12_4_;
  auVar18 = NEON_frecpe(auVar50,4);
  uVar24 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb54c0);
  auVar56 = NEON_frecps(auVar18,auVar50,4);
  auVar52._0_4_ = auVar18._0_4_ * auVar56._0_4_;
  auVar52._4_4_ = auVar18._4_4_ * auVar56._4_4_;
  auVar52._8_4_ = auVar18._8_4_ * auVar56._8_4_;
  auVar52._12_4_ = auVar18._12_4_ * auVar56._12_4_;
  uVar29 = a64_TBL(ZEXT816(0),auVar46,DAT_03cb54d8);
  auVar18 = NEON_frecps(auVar52,auVar50,4);
  fVar41 = (float)uVar66 * (float)uVar24 - (float)uVar42 * (float)uVar29;
  fVar12 = (float)((ulong)auVar8._0_8_ >> 0x20);
  fVar38 = auVar52._0_4_ * auVar18._0_4_;
  fVar39 = auVar52._4_4_ * auVar18._4_4_;
  fVar35 = auVar52._8_4_ * auVar18._8_4_;
  fVar40 = auVar52._12_4_ * auVar18._12_4_;
  fVar47 = (float)((ulong)auVar44._0_8_ >> 0x20);
  fVar61 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
  fVar63 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
  fVar64 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
  fVar65 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)fVar27) & -(uint)(fVar23 <= fVar27));
  fVar48 = (fVar47 + fVar17) * fVar39;
  fVar49 = (fVar12 + fVar41) * fVar39;
  fVar39 = (-auVar44._8_4_ + fVar6) * fVar39;
  fVar10 = (fVar6 + auVar31._0_4_) * fVar35;
  fVar14 = (fVar12 + fVar41) * fVar35;
  fVar35 = (fVar47 - fVar17) * fVar35;
  uVar53 = -(uint)(fVar61 <= fVar22);
  uVar58 = -(uint)(fVar63 <= fVar22);
  uVar59 = -(uint)(fVar64 <= fVar22);
  uVar60 = -(uint)(fVar65 <= fVar22);
  uVar7 = (uint)fVar10 ^
          ((uint)fVar10 ^
          (uint)fVar48 ^ ((uint)fVar48 ^ (uint)(SQRT(fVar23) * 0.5)) & ~-(uint)(fVar23 <= fVar27)) &
          ~uVar53;
  uVar11 = (uint)fVar14 ^
           ((uint)fVar14 ^
           (uint)fVar36 ^
           ((uint)fVar36 ^ (uint)((fVar47 + fVar17) * fVar38)) & ~-(uint)(fVar23 <= fVar27)) &
           ~uVar58;
  uVar13 = (uint)fVar37 ^
           ((uint)fVar37 ^
           (uint)fVar49 ^
           ((uint)fVar49 ^ (uint)((fVar6 + auVar31._0_4_) * fVar38)) & ~-(uint)(fVar23 <= fVar27)) &
           ~uVar59;
  uVar15 = (uint)fVar35 ^
           ((uint)fVar35 ^
           (uint)fVar39 ^
           ((uint)fVar39 ^ (uint)((-fVar12 + fVar41) * fVar38)) & ~-(uint)(fVar23 <= fVar27)) &
           ~uVar60;
  fVar10 = (float)(uVar7 ^ (uVar7 ^ (uint)((fVar41 - fVar12) * fVar40)) &
                           -(uint)((float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar61) & ~uVar53)
                                  <= fVar28));
  fVar6 = (float)(uVar11 ^ (uVar11 ^ (uint)((fVar6 - auVar44._8_4_) * fVar40)) &
                           -(uint)((float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar63) & ~uVar58)
                                  <= fVar28));
  fVar12 = (float)(uVar13 ^ (uVar13 ^ (uint)((fVar47 - fVar17) * fVar40)) &
                            -(uint)((float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar64) & ~uVar59)
                                   <= fVar28));
  fVar14 = (float)(uVar15 ^ (uVar15 ^ (uint)(SQRT(fVar28) * 0.5)) &
                            -(uint)((float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar65) & ~uVar60)
                                   <= fVar28));
  auVar4._0_4_ = fVar10 * fVar10 + fVar6 * fVar6;
  auVar4._4_4_ = fVar12 * fVar12 + fVar14 * fVar14;
  auVar4._8_4_ = fVar10 * fVar10 + fVar6 * fVar6;
  auVar4._12_4_ = fVar12 * fVar12 + fVar14 * fVar14;
  auVar18 = NEON_ext(auVar4,auVar4,4,1);
  auVar5._0_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar5._4_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar5._8_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar5._12_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar18 = NEON_frsqrte(auVar5,4);
  auVar33._0_4_ = auVar5._0_4_ * auVar18._0_4_;
  auVar33._4_4_ = auVar5._4_4_ * auVar18._4_4_;
  auVar33._8_4_ = auVar5._8_4_ * auVar18._8_4_;
  auVar33._12_4_ = auVar5._12_4_ * auVar18._12_4_;
  auVar56 = NEON_frsqrts(auVar18,auVar33,4);
  auVar26._0_4_ = auVar18._0_4_ * auVar56._0_4_;
  auVar26._4_4_ = auVar18._4_4_ * auVar56._4_4_;
  auVar26._8_4_ = auVar18._8_4_ * auVar56._8_4_;
  auVar26._12_4_ = auVar18._12_4_ * auVar56._12_4_;
  auVar34._0_4_ = auVar5._0_4_ * auVar26._0_4_;
  auVar34._4_4_ = auVar5._4_4_ * auVar26._4_4_;
  auVar34._8_4_ = auVar5._8_4_ * auVar26._8_4_;
  auVar34._12_4_ = auVar5._12_4_ * auVar26._12_4_;
  iVar16 = -(uint)(auVar5._0_4_ == 0.0);
  iVar19 = -(uint)(auVar5._4_4_ == 0.0);
  iVar20 = -(uint)(auVar5._8_4_ == 0.0);
  iVar21 = -(uint)(auVar5._12_4_ == 0.0);
  auVar18 = NEON_frsqrts(auVar26,auVar34,4);
  fVar10 = auVar26._0_4_ * auVar18._0_4_ * fVar10;
  fVar6 = auVar26._4_4_ * auVar18._4_4_ * fVar6;
  fVar12 = auVar26._8_4_ * auVar18._8_4_ * fVar12;
  fVar14 = auVar26._12_4_ * auVar18._12_4_ * fVar14;
  *(byte *)(lVar2 + 0x2a8) = SUB41(fVar12,0) & ~(byte)iVar20;
  *(byte *)(lVar2 + 0x2a9) = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar20 >> 8);
  *(byte *)(lVar2 + 0x2aa) = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
  *(byte *)(lVar2 + 0x2ab) = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
  *(byte *)(lVar2 + 0x2ac) = SUB41(fVar14,0) & ~(byte)iVar21;
  *(byte *)(lVar2 + 0x2ad) = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar21 >> 8);
  *(byte *)(lVar2 + 0x2ae) = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  *(byte *)(lVar2 + 0x2af) = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  *(byte *)(lVar2 + 0x2a0) = SUB41(fVar10,0) & ~(byte)iVar16;
  *(byte *)(lVar2 + 0x2a1) = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar16 >> 8);
  *(byte *)(lVar2 + 0x2a2) = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
  *(byte *)(lVar2 + 0x2a3) = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
  *(byte *)(lVar2 + 0x2a4) = SUB41(fVar6,0) & ~(byte)iVar19;
  *(byte *)(lVar2 + 0x2a5) = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar19 >> 8);
  *(byte *)(lVar2 + 0x2a6) = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
  *(byte *)(lVar2 + 0x2a7) = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
  if (*(char *)(param_1 + 0x164) == '\0') {
    return;
  }
  *(undefined4 *)(*param_2 + 0x184) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(*param_2 + 0x188) = *(undefined4 *)(param_1 + 0x16c);
  return;
}


