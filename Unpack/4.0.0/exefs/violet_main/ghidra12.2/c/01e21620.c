/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21620; name: FUN_01e21620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e21620(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 long param_5,undefined8 param_6,undefined8 *param_7)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar26;
  undefined1 auVar27 [12];
  int iVar32;
  undefined1 auVar28 [16];
  int iVar33;
  int iVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar40 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  
  if (0.01 <= param_3) {
    fVar18 = *(float *)(param_4 + 0x10) - param_2._0_4_;
    fVar24 = *(float *)(param_4 + 0x18) - param_2._8_4_;
    fVar25 = *(float *)(param_4 + 0x1c) - param_2._12_4_;
    auVar12._0_4_ = fVar18 * fVar18 + 0.0;
    auVar12._4_4_ = fVar24 * fVar24 + fVar25 * fVar25;
    auVar12._8_4_ = fVar18 * fVar18 + 0.0;
    auVar12._12_4_ = fVar24 * fVar24 + fVar25 * fVar25;
    auVar28 = NEON_ext(auVar12,auVar12,4,1);
    auVar39._8_8_ = _UNK_03cabe68;
    auVar39._0_8_ = _DAT_03cabe60;
    auVar13._0_4_ = auVar28._0_4_ + auVar28._4_4_;
    auVar13._4_4_ = auVar28._8_4_ + auVar28._12_4_;
    auVar13._8_4_ = auVar28._0_4_ + auVar28._4_4_;
    auVar13._12_4_ = auVar28._8_4_ + auVar28._12_4_;
    auVar28 = NEON_frsqrte(auVar13,4);
    auVar53._0_4_ = auVar13._0_4_ * auVar28._0_4_;
    auVar53._4_4_ = auVar13._4_4_ * auVar28._4_4_;
    auVar53._8_4_ = auVar13._8_4_ * auVar28._8_4_;
    auVar53._12_4_ = auVar13._12_4_ * auVar28._12_4_;
    auVar54 = NEON_frsqrts(auVar28,auVar53,4);
    auVar44._0_4_ = auVar28._0_4_ * auVar54._0_4_;
    auVar44._4_4_ = auVar28._4_4_ * auVar54._4_4_;
    auVar44._8_4_ = auVar28._8_4_ * auVar54._8_4_;
    auVar44._12_4_ = auVar28._12_4_ * auVar54._12_4_;
    auVar55._0_4_ = auVar13._0_4_ * auVar44._0_4_;
    auVar55._4_4_ = auVar13._4_4_ * auVar44._4_4_;
    auVar55._8_4_ = auVar13._8_4_ * auVar44._8_4_;
    auVar55._12_4_ = auVar13._12_4_ * auVar44._12_4_;
    iVar26 = -(uint)(auVar13._0_4_ == 0.0);
    iVar32 = -(uint)(auVar13._4_4_ == 0.0);
    iVar33 = -(uint)(auVar13._8_4_ == 0.0);
    iVar34 = -(uint)(auVar13._12_4_ == 0.0);
    auVar28 = NEON_frsqrts(auVar44,auVar55,4);
    uVar60 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb56c8);
    fVar18 = fVar18 * auVar44._0_4_ * auVar28._0_4_;
    fVar23 = auVar44._4_4_ * auVar28._4_4_ * 0.0;
    fVar24 = fVar24 * auVar44._8_4_ * auVar28._8_4_;
    fVar25 = fVar25 * auVar44._12_4_ * auVar28._12_4_;
    fVar19 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT11((byte)((uint)fVar18 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               SUB41(fVar18,0) & ~(byte)iVar26)));
    auVar20._0_8_ =
         CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                  CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                           CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                    CONCAT14(SUB41(fVar23,0) & ~(byte)iVar32,fVar19))));
    auVar20[8] = SUB41(fVar24,0) & ~(byte)iVar33;
    auVar20[9] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar33 >> 8);
    auVar20[10] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
    auVar20[0xb] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
    auVar21[0xc] = SUB41(fVar25,0) & ~(byte)iVar34;
    auVar21._0_12_ = auVar20;
    auVar21[0xd] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar21[0xe] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar21[0xf] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    uVar52 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb54d8);
    uVar63 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb5488);
    uVar38 = a64_TBL(ZEXT816(0),auVar39,DAT_03cb54c0);
    uVar6 = a64_TBL(ZEXT816(0),auVar21,DAT_03cb56c8);
    fVar49 = (float)((ulong)uVar6 >> 0x20);
    uVar43 = a64_TBL(ZEXT816(0),auVar21,DAT_03cb5488);
    uVar5 = a64_TBL(ZEXT816(0),auVar21,DAT_03cb54c0);
    fVar37 = (float)((ulong)uVar5 >> 0x20);
    uVar66 = a64_TBL(ZEXT816(0),auVar21,DAT_03cb54d8);
    fVar50 = (float)((ulong)uVar66 >> 0x20);
    fVar42 = (float)((ulong)uVar43 >> 0x20);
    fVar18 = (float)uVar60 * (float)uVar43 - (float)uVar63 * (float)uVar6;
    fVar23 = (float)((ulong)uVar60 >> 0x20) * fVar42 - (float)((ulong)uVar63 >> 0x20) * fVar49;
    fVar25 = (float)uVar52 * (float)uVar5 - (float)uVar38 * (float)uVar66;
    fVar41 = (float)((ulong)uVar52 >> 0x20) * fVar37 - (float)((ulong)uVar38 >> 0x20) * fVar50;
    auVar14._0_4_ = fVar18 * fVar18 + fVar23 * fVar23;
    auVar14._4_4_ = fVar25 * fVar25 + fVar41 * fVar41;
    auVar14._8_4_ = fVar18 * fVar18 + fVar23 * fVar23;
    auVar14._12_4_ = fVar25 * fVar25 + fVar41 * fVar41;
    auVar28 = NEON_ext(auVar14,auVar14,4,1);
    auVar15._0_4_ = auVar28._0_4_ + auVar28._4_4_;
    auVar15._4_4_ = auVar28._8_4_ + auVar28._12_4_;
    auVar15._8_4_ = auVar28._0_4_ + auVar28._4_4_;
    auVar15._12_4_ = auVar28._8_4_ + auVar28._12_4_;
    auVar28 = NEON_frsqrte(auVar15,4);
    auVar61._0_4_ = auVar15._0_4_ * auVar28._0_4_;
    auVar61._4_4_ = auVar15._4_4_ * auVar28._4_4_;
    auVar61._8_4_ = auVar15._8_4_ * auVar28._8_4_;
    auVar61._12_4_ = auVar15._12_4_ * auVar28._12_4_;
    auVar54 = NEON_frsqrts(auVar28,auVar61,4);
    auVar56._0_4_ = auVar28._0_4_ * auVar54._0_4_;
    auVar56._4_4_ = auVar28._4_4_ * auVar54._4_4_;
    auVar56._8_4_ = auVar28._8_4_ * auVar54._8_4_;
    auVar56._12_4_ = auVar28._12_4_ * auVar54._12_4_;
    auVar62._0_4_ = auVar15._0_4_ * auVar56._0_4_;
    auVar62._4_4_ = auVar15._4_4_ * auVar56._4_4_;
    auVar62._8_4_ = auVar15._8_4_ * auVar56._8_4_;
    auVar62._12_4_ = auVar15._12_4_ * auVar56._12_4_;
    iVar26 = -(uint)(auVar15._0_4_ == 0.0);
    iVar32 = -(uint)(auVar15._4_4_ == 0.0);
    iVar33 = -(uint)(auVar15._8_4_ == 0.0);
    iVar34 = -(uint)(auVar15._12_4_ == 0.0);
    auVar28 = NEON_frsqrts(auVar56,auVar62,4);
    fVar18 = fVar18 * auVar56._0_4_ * auVar28._0_4_;
    fVar23 = fVar23 * auVar56._4_4_ * auVar28._4_4_;
    fVar25 = fVar25 * auVar56._8_4_ * auVar28._8_4_;
    fVar41 = fVar41 * auVar56._12_4_ * auVar28._12_4_;
    fVar24 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT11((byte)((uint)fVar18 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               SUB41(fVar18,0) & ~(byte)iVar26)));
    auVar27._0_8_ =
         CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                  CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                           CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                    CONCAT14(SUB41(fVar23,0) & ~(byte)iVar32,fVar24))));
    auVar27[8] = SUB41(fVar25,0) & ~(byte)iVar33;
    auVar27[9] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar33 >> 8);
    auVar27[10] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
    auVar27[0xb] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
    auVar29[0xc] = SUB41(fVar41,0) & ~(byte)iVar34;
    auVar29._0_12_ = auVar27;
    auVar29[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar29[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar29[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    uVar52 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb5488);
    uVar63 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54c0);
    uVar38 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb56c8);
    uVar60 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54d8);
    fVar23 = (float)((ulong)auVar20._0_8_ >> 0x20);
    fVar36 = (float)uVar6 * (float)uVar52 - (float)uVar43 * (float)uVar38;
    fVar42 = fVar49 * (float)((ulong)uVar52 >> 0x20) - fVar42 * (float)((ulong)uVar38 >> 0x20);
    fVar18 = (float)uVar66 * (float)uVar63 - (float)uVar5 * (float)uVar60;
    fVar41 = fVar50 * (float)((ulong)uVar63 >> 0x20) - fVar37 * (float)((ulong)uVar60 >> 0x20);
    auVar16._0_4_ = fVar36 * fVar36 + fVar42 * fVar42;
    auVar16._4_4_ = fVar18 * fVar18 + fVar41 * fVar41;
    auVar16._8_4_ = fVar36 * fVar36 + fVar42 * fVar42;
    auVar16._12_4_ = fVar18 * fVar18 + fVar41 * fVar41;
    auVar28 = NEON_ext(auVar16,auVar16,4,1);
    auVar17._0_4_ = auVar28._0_4_ + auVar28._4_4_;
    auVar17._4_4_ = auVar28._8_4_ + auVar28._12_4_;
    auVar17._8_4_ = auVar28._0_4_ + auVar28._4_4_;
    auVar17._12_4_ = auVar28._8_4_ + auVar28._12_4_;
    auVar28 = NEON_frsqrte(auVar17,4);
    auVar45._0_4_ = auVar17._0_4_ * auVar28._0_4_;
    auVar45._4_4_ = auVar17._4_4_ * auVar28._4_4_;
    auVar45._8_4_ = auVar17._8_4_ * auVar28._8_4_;
    auVar45._12_4_ = auVar17._12_4_ * auVar28._12_4_;
    auVar54 = NEON_frsqrts(auVar28,auVar45,4);
    auVar46._0_4_ = auVar28._0_4_ * auVar54._0_4_;
    auVar46._4_4_ = auVar28._4_4_ * auVar54._4_4_;
    auVar46._8_4_ = auVar28._8_4_ * auVar54._8_4_;
    auVar46._12_4_ = auVar28._12_4_ * auVar54._12_4_;
    auVar28 = NEON_fmov(0x3f800000,4);
    fVar25 = (float)((ulong)auVar27._0_8_ >> 0x20);
    auVar57._0_4_ = auVar17._0_4_ * auVar46._0_4_;
    auVar57._4_4_ = auVar17._4_4_ * auVar46._4_4_;
    auVar57._8_4_ = auVar17._8_4_ * auVar46._8_4_;
    auVar57._12_4_ = auVar17._12_4_ * auVar46._12_4_;
    iVar26 = -(uint)(auVar17._0_4_ == 0.0);
    iVar32 = -(uint)(auVar17._4_4_ == 0.0);
    iVar33 = -(uint)(auVar17._8_4_ == 0.0);
    iVar34 = -(uint)(auVar17._12_4_ == 0.0);
    auVar54 = NEON_frsqrts(auVar46,auVar57,4);
    fVar36 = fVar36 * auVar46._0_4_ * auVar54._0_4_;
    fVar42 = fVar42 * auVar46._4_4_ * auVar54._4_4_;
    fVar18 = fVar18 * auVar46._8_4_ * auVar54._8_4_;
    fVar41 = fVar41 * auVar46._12_4_ * auVar54._12_4_;
    auVar54 = NEON_ext(auVar29,auVar29,8,1);
    fVar37 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               ~(byte)((uint)iVar26 >> 8),
                                               SUB41(fVar36,0) & ~(byte)iVar26)));
    auVar40._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar32,fVar37))));
    auVar40[8] = SUB41(fVar18,0) & ~(byte)iVar33;
    auVar40[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar33 >> 8);
    auVar40[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
    auVar40[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
    auVar40[0xc] = SUB41(fVar41,0) & ~(byte)iVar34;
    auVar40[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar34 >> 8);
    auVar40[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    auVar40[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    fVar49 = (float)((ulong)auVar40._0_8_ >> 0x20);
    fVar18 = auVar20._8_4_;
    fVar41 = auVar28._0_4_ + (float)_DAT_03cab3a0 * fVar24 + (float)_DAT_03cac210 * fVar49 +
             (float)_DAT_03cabb00 * fVar18;
    fVar36 = auVar28._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar24 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar49 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar18;
    fVar42 = auVar28._8_4_ + (float)_UNK_03cab3a8 * fVar24 + (float)_UNK_03cac218 * fVar49 +
             (float)_UNK_03cabb08 * fVar18;
    fVar24 = auVar28._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar24 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar49 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar18;
    auVar28 = NEON_ext(auVar40,auVar40,8,1);
    fVar18 = auVar28._0_4_;
    auVar47._4_4_ = fVar36;
    auVar47._0_4_ = fVar36;
    auVar47._8_4_ = fVar36;
    auVar47._12_4_ = fVar36;
    auVar30._4_4_ = fVar41;
    auVar30._0_4_ = fVar41;
    auVar30._8_4_ = fVar41;
    auVar30._12_4_ = fVar41;
    auVar58._0_4_ = -(uint)(fVar41 <= fVar36);
    auVar58._4_4_ = -(uint)(fVar41 <= fVar36);
    auVar58._8_4_ = -(uint)(fVar41 <= fVar36);
    auVar58._12_4_ = -(uint)(fVar41 <= fVar36);
    auVar30 = auVar30 ^ (auVar30 ^ auVar47) & auVar58;
    auVar28 = NEON_fmov(0x40800000,4);
    fVar59 = SQRT(fVar41) * 0.5;
    auVar67._4_4_ = fVar42;
    auVar67._0_4_ = fVar42;
    auVar67._8_4_ = fVar42;
    auVar67._12_4_ = fVar42;
    auVar48._0_4_ = fVar59 * auVar28._0_4_;
    auVar48._4_4_ = SQRT(fVar36) * 0.5 * auVar28._4_4_;
    auVar48._8_4_ = SQRT(fVar42) * 0.5 * auVar28._8_4_;
    auVar48._12_4_ = SQRT(fVar24) * 0.5 * auVar28._12_4_;
    iVar26 = -(uint)(auVar30._0_4_ <= fVar42);
    iVar32 = -(uint)(auVar30._4_4_ <= fVar42);
    iVar33 = -(uint)(auVar30._8_4_ <= fVar42);
    iVar34 = -(uint)(auVar30._12_4_ <= fVar42);
    auVar7._4_4_ = iVar32;
    auVar7._0_4_ = iVar26;
    auVar7._8_4_ = iVar33;
    auVar7._12_4_ = iVar34;
    auVar30 = auVar30 ^ (auVar30 ^ auVar67) & auVar7;
    auVar69 = NEON_frecpe(auVar48,4);
    auVar31._0_4_ = -(uint)(auVar30._0_4_ <= fVar24);
    auVar31._4_4_ = -(uint)(auVar30._4_4_ <= fVar24);
    auVar31._8_4_ = -(uint)(auVar30._8_4_ <= fVar24);
    auVar31._12_4_ = -(uint)(auVar30._12_4_ <= fVar24);
    auVar28 = NEON_frecps(auVar69,auVar48,4);
    auVar68._0_4_ = auVar69._0_4_ * auVar28._0_4_;
    auVar68._4_4_ = auVar69._4_4_ * auVar28._4_4_;
    auVar68._8_4_ = auVar69._8_4_ * auVar28._8_4_;
    auVar68._12_4_ = auVar69._12_4_ * auVar28._12_4_;
    auVar28 = NEON_frecps(auVar68,auVar48,4);
    fVar41 = auVar68._0_4_ * auVar28._0_4_;
    fVar49 = auVar68._4_4_ * auVar28._4_4_;
    fVar50 = auVar68._8_4_ * auVar28._8_4_;
    fVar51 = auVar68._12_4_ * auVar28._12_4_;
    fVar64 = (fVar25 + fVar37) * fVar41;
    fVar65 = (fVar19 + auVar54._0_4_) * fVar41;
    fVar41 = (-fVar23 + fVar18) * fVar41;
    auVar22._0_4_ = (fVar19 + auVar54._0_4_) * fVar50;
    auVar22._4_4_ = (fVar23 + fVar18) * fVar50;
    auVar22._12_4_ = (fVar25 - fVar37) * fVar50;
    auVar35._0_4_ = (fVar18 - fVar23) * fVar51;
    auVar35._4_4_ = (fVar19 - auVar27._8_4_) * fVar51;
    auVar35._8_4_ = (fVar25 - fVar37) * fVar51;
    auVar22._8_4_ = SQRT(fVar42) * 0.5;
    auVar35._12_4_ = SQRT(fVar24) * 0.5;
    auVar28._4_4_ = fVar64;
    auVar28._0_4_ = fVar59;
    auVar28._8_4_ = fVar65;
    auVar28._12_4_ = fVar41;
    auVar69._4_4_ = SQRT(fVar36) * 0.5;
    auVar69._0_4_ = (fVar25 + fVar37) * fVar49;
    auVar69._8_4_ = (fVar23 + fVar18) * fVar49;
    auVar69._12_4_ = (-auVar27._8_4_ + fVar19) * fVar49;
    auVar54._4_4_ = fVar64;
    auVar54._0_4_ = fVar59;
    auVar54._8_4_ = fVar65;
    auVar54._12_4_ = fVar41;
    auVar8._4_4_ = iVar32;
    auVar8._0_4_ = iVar26;
    auVar8._8_4_ = iVar33;
    auVar8._12_4_ = iVar34;
    auVar22 = auVar22 ^ (auVar22 ^ auVar54 ^ (auVar28 ^ auVar69) & auVar58) & ~auVar8;
    FUN_01413048(auVar22 ^ (auVar22 ^ auVar35) & auVar31,*param_7);
  }
  lVar9 = *(long *)(param_5 + 0x20);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e21930;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e21930:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        FUN_01e21a0c(*param_7);
        lVar10 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e21a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


