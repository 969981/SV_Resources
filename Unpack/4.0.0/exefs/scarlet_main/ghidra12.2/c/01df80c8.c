/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df80c8; name: FUN_01df80c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df80c8(undefined1 param_1 [16],long *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [12];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  float fVar25;
  float fVar29;
  int iVar30;
  undefined1 auVar26 [16];
  float fVar31;
  int iVar32;
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar46;
  undefined1 auVar47 [12];
  float fVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar58;
  undefined1 auVar57 [16];
  float fVar59;
  undefined8 uVar60;
  float fVar62;
  undefined1 auVar61 [16];
  undefined8 uVar63;
  undefined8 uVar64;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((long *)*param_2 != (long *)0x0) {
    lVar3 = (**(code **)(*(long *)*param_2 + 0x68))();
    local_30 = param_1._0_4_;
    fStack_2c = param_1._4_4_;
    fStack_28 = param_1._8_4_;
    fStack_24 = param_1._12_4_;
    local_30 = local_30 - *(float *)(lVar3 + 0x30);
    fStack_2c = fStack_2c - *(float *)(lVar3 + 0x34);
    fStack_28 = fStack_28 - *(float *)(lVar3 + 0x38);
    fStack_24 = fStack_24 - 0.0;
    param_2 = (long *)*param_2;
    fStack_2c = fStack_2c * fStack_2c;
    auVar4._0_4_ = local_30 * local_30 + fStack_2c;
    auVar4._4_4_ = fStack_28 * fStack_28 + fStack_24 * fStack_24;
    auVar4._8_4_ = local_30 * local_30 + fStack_2c;
    auVar4._12_4_ = fStack_28 * fStack_28 + fStack_24 * fStack_24;
    auVar26 = NEON_ext(auVar4,auVar4,4,1);
    auVar5._0_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar5._4_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar5._8_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar5._12_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar26 = NEON_frsqrte(auVar5,4);
    auVar39._0_4_ = auVar5._0_4_ * auVar26._0_4_;
    auVar39._4_4_ = auVar5._4_4_ * auVar26._4_4_;
    auVar39._8_4_ = auVar5._8_4_ * auVar26._8_4_;
    auVar39._12_4_ = auVar5._12_4_ * auVar26._12_4_;
    auVar40 = NEON_frsqrts(auVar26,auVar39,4);
    auVar35._0_4_ = auVar26._0_4_ * auVar40._0_4_;
    auVar35._4_4_ = auVar26._4_4_ * auVar40._4_4_;
    auVar35._8_4_ = auVar26._8_4_ * auVar40._8_4_;
    auVar35._12_4_ = auVar26._12_4_ * auVar40._12_4_;
    auVar41._0_4_ = auVar5._0_4_ * auVar35._0_4_;
    auVar41._4_4_ = auVar5._4_4_ * auVar35._4_4_;
    auVar41._8_4_ = auVar5._8_4_ * auVar35._8_4_;
    auVar41._12_4_ = auVar5._12_4_ * auVar35._12_4_;
    iVar24 = -(uint)(auVar5._0_4_ == 0.0);
    iVar30 = -(uint)(auVar5._8_4_ == 0.0);
    iVar32 = -(uint)(auVar5._12_4_ == 0.0);
    auVar26 = NEON_frsqrts(auVar35,auVar41,4);
    local_30 = local_30 * auVar35._0_4_ * auVar26._0_4_;
    fStack_28 = fStack_28 * auVar35._8_4_ * auVar26._8_4_;
    fStack_24 = fStack_24 * auVar35._12_4_ * auVar26._12_4_;
    fVar10 = (float)CONCAT13((byte)((uint)local_30 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)local_30 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                      ,CONCAT11((byte)((uint)local_30 >> 8) &
                                                ~(byte)((uint)iVar24 >> 8),
                                                SUB41(local_30,0) & ~(byte)iVar24)));
    fVar16 = (float)CONCAT13((byte)((uint)fStack_28 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                             CONCAT12((byte)((uint)fStack_28 >> 0x10) &
                                      ~(byte)((uint)iVar30 >> 0x10),
                                      CONCAT11((byte)((uint)fStack_28 >> 8) &
                                               ~(byte)((uint)iVar30 >> 8),
                                               SUB41(fStack_28,0) & ~(byte)iVar30)));
    auVar36._8_8_ = _UNK_03cabe68;
    auVar36._0_8_ = _DAT_03cabe60;
    uVar60 = a64_TBL(ZEXT816(0),auVar36,DAT_03cb56c8);
    fVar17 = (float)(CONCAT17((byte)((uint)fStack_24 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                              CONCAT16((byte)((uint)fStack_24 >> 0x10) &
                                       ~(byte)((uint)iVar32 >> 0x10),
                                       CONCAT15((byte)((uint)fStack_24 >> 8) &
                                                ~(byte)((uint)iVar32 >> 8),
                                                CONCAT14(SUB41(fStack_24,0) & ~(byte)iVar32,fVar16))
                                      )) >> 0x20);
    auVar6._0_4_ = fVar10 * fVar10 + 0.0;
    auVar6._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
    auVar6._8_4_ = fVar10 * fVar10 + 0.0;
    auVar6._12_4_ = fVar16 * fVar16 + fVar17 * fVar17;
    auVar26 = NEON_ext(auVar6,auVar6,4,1);
    auVar7._0_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar7._4_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar7._8_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar7._12_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar40 = NEON_frsqrte(auVar7,4);
    auVar26._4_4_ = auVar7._4_4_ * auVar40._4_4_;
    auVar26._0_4_ = auVar7._0_4_ * auVar40._0_4_;
    auVar26._8_4_ = auVar7._8_4_ * auVar40._8_4_;
    auVar26._12_4_ = auVar7._12_4_ * auVar40._12_4_;
    auVar26 = NEON_frsqrts(auVar40,auVar26,4);
    auVar48._0_4_ = auVar40._0_4_ * auVar26._0_4_;
    auVar48._4_4_ = auVar40._4_4_ * auVar26._4_4_;
    auVar48._8_4_ = auVar40._8_4_ * auVar26._8_4_;
    auVar48._12_4_ = auVar40._12_4_ * auVar26._12_4_;
    auVar52._0_4_ = auVar7._0_4_ * auVar48._0_4_;
    auVar52._4_4_ = auVar7._4_4_ * auVar48._4_4_;
    auVar52._8_4_ = auVar7._8_4_ * auVar48._8_4_;
    auVar52._12_4_ = auVar7._12_4_ * auVar48._12_4_;
    iVar24 = -(uint)(auVar7._0_4_ == 0.0);
    iVar30 = -(uint)(auVar7._4_4_ == 0.0);
    iVar32 = -(uint)(auVar7._8_4_ == 0.0);
    iVar45 = -(uint)(auVar7._12_4_ == 0.0);
    uVar20 = a64_TBL(ZEXT816(0),auVar36,DAT_03cb5488);
    auVar26 = NEON_frsqrts(auVar48,auVar52,4);
    uVar51 = a64_TBL(ZEXT816(0),auVar36,DAT_03cb54d8);
    fVar10 = fVar10 * auVar48._0_4_ * auVar26._0_4_;
    fVar15 = auVar48._4_4_ * auVar26._4_4_ * 0.0;
    fVar16 = fVar16 * auVar48._8_4_ * auVar26._8_4_;
    fVar17 = fVar17 * auVar48._12_4_ * auVar26._12_4_;
    uVar46 = a64_TBL(ZEXT816(0),auVar36,DAT_03cb54c0);
    fVar10 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar10 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar10,0) & ~(byte)iVar24)));
    auVar11._0_8_ =
         CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                  CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                           CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                    CONCAT14(SUB41(fVar15,0) & ~(byte)iVar30,fVar10))));
    auVar11[8] = SUB41(fVar16,0) & ~(byte)iVar32;
    auVar11[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar32 >> 8);
    auVar11[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
    auVar11[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
    auVar12[0xc] = SUB41(fVar17,0) & ~(byte)iVar45;
    auVar12._0_12_ = auVar11;
    auVar12[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar12[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar12[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    uVar63 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb5488);
    uVar34 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb54c0);
    uVar1 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb56c8);
    fVar19 = (float)((ulong)uVar1 >> 0x20);
    uVar64 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb54d8);
    fVar18 = (float)((ulong)uVar63 >> 0x20);
    fVar59 = (float)uVar60 * (float)uVar63 - (float)uVar20 * (float)uVar1;
    fVar62 = (float)((ulong)uVar60 >> 0x20) * fVar18 - (float)((ulong)uVar20 >> 0x20) * fVar19;
    fVar16 = (float)uVar51 * (float)uVar34 - (float)uVar46 * (float)uVar64;
    fVar15 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar34 >> 0x20) -
             (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar64 >> 0x20);
    auVar8._0_4_ = fVar59 * fVar59 + fVar62 * fVar62;
    auVar8._4_4_ = fVar16 * fVar16 + fVar15 * fVar15;
    auVar8._8_4_ = fVar59 * fVar59 + fVar62 * fVar62;
    auVar8._12_4_ = fVar16 * fVar16 + fVar15 * fVar15;
    auVar26 = NEON_ext(auVar8,auVar8,4,1);
    fVar17 = (float)((ulong)auVar11._0_8_ >> 0x20);
    auVar9._0_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar9._4_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar9._8_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar9._12_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar26 = NEON_frsqrte(auVar9,4);
    auVar53._0_4_ = auVar9._0_4_ * auVar26._0_4_;
    auVar53._4_4_ = auVar9._4_4_ * auVar26._4_4_;
    auVar53._8_4_ = auVar9._8_4_ * auVar26._8_4_;
    auVar53._12_4_ = auVar9._12_4_ * auVar26._12_4_;
    auVar40 = NEON_frsqrts(auVar26,auVar53,4);
    auVar42._0_4_ = auVar26._0_4_ * auVar40._0_4_;
    auVar42._4_4_ = auVar26._4_4_ * auVar40._4_4_;
    auVar42._8_4_ = auVar26._8_4_ * auVar40._8_4_;
    auVar42._12_4_ = auVar26._12_4_ * auVar40._12_4_;
    auVar54._0_4_ = auVar9._0_4_ * auVar42._0_4_;
    auVar54._4_4_ = auVar9._4_4_ * auVar42._4_4_;
    auVar54._8_4_ = auVar9._8_4_ * auVar42._8_4_;
    auVar54._12_4_ = auVar9._12_4_ * auVar42._12_4_;
    iVar24 = -(uint)(auVar9._0_4_ == 0.0);
    iVar30 = -(uint)(auVar9._4_4_ == 0.0);
    iVar32 = -(uint)(auVar9._8_4_ == 0.0);
    iVar45 = -(uint)(auVar9._12_4_ == 0.0);
    auVar26 = NEON_frsqrts(auVar42,auVar54,4);
    auVar40 = NEON_fmov(0x40800000,4);
    fVar59 = fVar59 * auVar42._0_4_ * auVar26._0_4_;
    fVar62 = fVar62 * auVar42._4_4_ * auVar26._4_4_;
    fVar16 = fVar16 * auVar42._8_4_ * auVar26._8_4_;
    fVar15 = fVar15 * auVar42._12_4_ * auVar26._12_4_;
    fVar59 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar59 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar59,0) & ~(byte)iVar24)));
    auVar47._0_8_ =
         CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                  CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                           CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                    CONCAT14(SUB41(fVar62,0) & ~(byte)iVar30,fVar59))));
    auVar47[8] = SUB41(fVar16,0) & ~(byte)iVar32;
    auVar47[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar32 >> 8);
    auVar47[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
    auVar49[0xc] = SUB41(fVar15,0) & ~(byte)iVar45;
    auVar49._0_12_ = auVar47;
    auVar49[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar49[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar49[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    uVar46 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb56c8);
    uVar20 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb5488);
    uVar51 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb54c0);
    auVar26 = NEON_fmov(0x3f800000,4);
    fVar56 = (float)uVar1 * (float)uVar20 - (float)uVar63 * (float)uVar46;
    fVar58 = fVar19 * (float)((ulong)uVar20 >> 0x20) - fVar18 * (float)((ulong)uVar46 >> 0x20);
    fVar16 = auVar11._8_4_;
    fVar25 = auVar26._0_4_ + (float)_DAT_03cab3a0 * fVar59 + (float)_DAT_03cac210 * fVar58 +
             (float)_DAT_03cabb00 * fVar16;
    fVar29 = auVar26._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar59 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar58 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar16;
    fVar31 = auVar26._8_4_ + (float)_UNK_03cab3a8 * fVar59 + (float)_UNK_03cac218 * fVar58 +
             (float)_UNK_03cabb08 * fVar16;
    fVar33 = auVar26._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar59 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar58 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar16;
    uVar20 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb54d8);
    fVar19 = (float)uVar64 * (float)uVar51 - (float)uVar34 * (float)uVar20;
    auVar61 = NEON_ext(auVar49,auVar49,8,1);
    fVar50 = (float)((ulong)auVar47._0_8_ >> 0x20);
    auVar43._0_4_ = SQRT(fVar25) * 0.5 * auVar40._0_4_;
    auVar43._4_4_ = SQRT(fVar29) * 0.5 * auVar40._4_4_;
    auVar43._8_4_ = SQRT(fVar31) * 0.5 * auVar40._8_4_;
    auVar43._12_4_ = SQRT(fVar33) * 0.5 * auVar40._12_4_;
    fVar16 = fVar10 + auVar61._0_4_;
    auVar2._8_4_ = -fVar17 + fVar19;
    auVar2._4_4_ = fVar16;
    auVar40 = NEON_frecpe(auVar43,4);
    auVar26 = NEON_frecps(auVar40,auVar43,4);
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_4_ = fVar25;
    auVar22._12_4_ = fVar25;
    auVar21._12_4_ = -(uint)(fVar25 <= fVar29);
    auVar21._8_4_ = -(uint)(fVar25 <= fVar29);
    auVar21._4_4_ = -(uint)(fVar25 <= fVar29);
    auVar21._0_4_ = -(uint)(fVar25 <= fVar29);
    auVar13._0_4_ = auVar40._0_4_ * auVar26._0_4_;
    auVar13._4_4_ = auVar40._4_4_ * auVar26._4_4_;
    auVar13._8_4_ = auVar40._8_4_ * auVar26._8_4_;
    auVar13._12_4_ = auVar40._12_4_ * auVar26._12_4_;
    auVar40._4_4_ = fVar29;
    auVar40._0_4_ = fVar29;
    auVar40._8_4_ = fVar29;
    auVar40._12_4_ = fVar29;
    auVar22 = auVar22 ^ (auVar22 ^ auVar40) & auVar21;
    auVar55._4_4_ = fVar31;
    auVar55._0_4_ = fVar31;
    auVar55._8_4_ = fVar31;
    auVar55._12_4_ = fVar31;
    auVar26 = NEON_frecps(auVar13,auVar43,4);
    auVar57._0_4_ = -(uint)(auVar22._0_4_ <= fVar31);
    auVar57._4_4_ = -(uint)(auVar22._4_4_ <= fVar31);
    auVar57._8_4_ = -(uint)(auVar22._8_4_ <= fVar31);
    auVar57._12_4_ = -(uint)(auVar22._12_4_ <= fVar31);
    auVar22 = auVar22 ^ (auVar22 ^ auVar55) & auVar57;
    fVar15 = auVar13._0_4_ * auVar26._0_4_;
    fVar59 = auVar13._4_4_ * auVar26._4_4_;
    fVar62 = auVar13._8_4_ * auVar26._8_4_;
    fVar18 = auVar13._12_4_ * auVar26._12_4_;
    auVar23._0_4_ = -(uint)(auVar22._0_4_ <= fVar33);
    auVar23._4_4_ = -(uint)(auVar22._4_4_ <= fVar33);
    auVar23._8_4_ = -(uint)(auVar22._8_4_ <= fVar33);
    auVar23._12_4_ = -(uint)(auVar22._12_4_ <= fVar33);
    auVar27._0_4_ = (fVar50 + fVar56) * fVar59;
    auVar27._4_4_ = (fVar50 + fVar58) * fVar59;
    auVar27._8_4_ = (fVar17 + fVar19) * fVar59;
    auVar27._12_4_ = (-auVar47._8_4_ + fVar10) * fVar59;
    auVar2._0_4_ = (fVar50 + fVar56) * fVar15;
    auVar37._0_8_ = auVar2._0_8_ << 0x20;
    auVar37._8_4_ = fVar16 * fVar15;
    auVar37._12_4_ = (-fVar17 + fVar19) * fVar15;
    auVar44._0_4_ = (fVar10 + auVar61._0_4_) * fVar62;
    auVar44._4_4_ = (fVar17 + fVar19) * fVar62;
    auVar44._12_4_ = (fVar50 - fVar56) * fVar62;
    auVar14._0_4_ = (fVar19 - fVar17) * fVar18;
    auVar14._4_4_ = (fVar10 - auVar47._8_4_) * fVar18;
    auVar14._8_4_ = (fVar50 - fVar56) * fVar18;
    auVar38._4_12_ = auVar37._4_12_;
    auVar38._0_4_ = SQRT(fVar25) * 0.5;
    auVar28._8_8_ = auVar27._8_8_;
    auVar28._4_4_ = SQRT(fVar29) * 0.5;
    auVar28._0_4_ = auVar27._0_4_;
    auVar44._8_4_ = SQRT(fVar31) * 0.5;
    auVar14._12_4_ = SQRT(fVar33) * 0.5;
    auVar61._4_4_ = -(uint)(fVar25 <= fVar29);
    auVar61._0_4_ = -(uint)(fVar25 <= fVar29);
    auVar61._8_4_ = -(uint)(fVar25 <= fVar29);
    auVar61._12_4_ = -(uint)(fVar25 <= fVar29);
    auVar28 = auVar28 ^ (auVar28 ^ auVar38) & ~auVar61;
    auVar14 = auVar14 ^ (auVar14 ^ auVar28 ^ (auVar28 ^ auVar44) & auVar57) & ~auVar23;
    param_2[0x1b] = auVar14._8_8_;
    param_2[0x1a] = auVar14._0_8_;
    if (*(char *)((long)param_2 + 0xf4) == '\0') {
      *(undefined1 *)((long)param_2 + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x01df838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x78))();
      return;
    }
  }
  return;
}


