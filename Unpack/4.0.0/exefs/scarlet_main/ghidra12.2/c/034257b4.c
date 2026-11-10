/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034257b4; name: FUN_034257b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034257b4(float *param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar18;
  float fVar19;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  float fVar33;
  float fVar34;
  byte bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar35 [16];
  float fVar43;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  
  if (((DAT_048af510 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048af510), iVar8 != 0)) {
    auVar27._8_4_ = 0x6ce3ee;
    auVar27._0_8_ = 0x6ce3ee006ce3ee;
    auVar27._12_4_ = 0x6ce3ee;
    uRam00000000048af508 = auVar27._8_8_;
    _DAT_048af500 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(&DAT_048af510);
  }
  fVar52 = param_1[0x34];
  fVar25 = param_1[0x35];
  fVar32 = param_1[0x36];
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x30);
  fVar49 = *param_1 * fVar52 + param_1[4] * fVar25 + param_1[8] * fVar32;
  fVar50 = param_1[1] * fVar52 + param_1[5] * fVar25 + param_1[9] * fVar32;
  fVar51 = param_1[2] * fVar52 + param_1[6] * fVar25 + param_1[10] * fVar32;
  fVar52 = param_1[3] * fVar52 + param_1[7] * fVar25 + param_1[0xb] * fVar32;
  iVar8 = -(uint)(ABS(fVar49) < (float)_DAT_048af500);
  iVar12 = -(uint)(ABS(fVar50) < (float)((ulong)_DAT_048af500 >> 0x20));
  iVar14 = -(uint)(ABS(fVar51) < (float)uRam00000000048af508);
  iVar16 = -(uint)(ABS(fVar52) < (float)((ulong)uRam00000000048af508 >> 0x20));
  bVar36 = (byte)_DAT_03cab270;
  auVar48[0] = (byte)iVar8 & bVar36;
  bVar53 = (byte)((ulong)_DAT_03cab270 >> 8);
  auVar48[1] = (byte)((uint)iVar8 >> 8) & bVar53;
  bVar54 = (byte)((ulong)_DAT_03cab270 >> 0x10);
  auVar48[2] = (byte)((uint)iVar8 >> 0x10) & bVar54;
  bVar55 = (byte)((ulong)_DAT_03cab270 >> 0x18);
  auVar48[3] = (byte)((uint)iVar8 >> 0x18) & bVar55;
  bVar56 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  auVar48[4] = (byte)iVar12 & bVar56;
  bVar57 = (byte)((ulong)_DAT_03cab270 >> 0x28);
  auVar48[5] = (byte)((uint)iVar12 >> 8) & bVar57;
  bVar58 = (byte)((ulong)_DAT_03cab270 >> 0x30);
  auVar48[6] = (byte)((uint)iVar12 >> 0x10) & bVar58;
  bVar59 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  auVar48[7] = (byte)((uint)iVar12 >> 0x18) & bVar59;
  bVar60 = (byte)_UNK_03cab278;
  auVar48[8] = (byte)iVar14 & bVar60;
  bVar61 = (byte)((ulong)_UNK_03cab278 >> 8);
  auVar48[9] = (byte)((uint)iVar14 >> 8) & bVar61;
  bVar62 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar48[10] = (byte)((uint)iVar14 >> 0x10) & bVar62;
  bVar63 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar48[0xb] = (byte)((uint)iVar14 >> 0x18) & bVar63;
  bVar64 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar48[0xc] = (byte)iVar16 & bVar64;
  bVar65 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar48[0xd] = (byte)((uint)iVar16 >> 8) & bVar65;
  bVar66 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar48[0xe] = (byte)((uint)iVar16 >> 0x10) & bVar66;
  bVar67 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  auVar48[0xf] = (byte)((uint)iVar16 >> 0x18) & bVar67;
  auVar20 = NEON_ext(auVar48,auVar48,8,1);
  if (((DAT_048af530 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048af530), iVar8 != 0)) {
    auVar11 = NEON_fmov(0xbf800000,4);
    uRam00000000048af528 = auVar11._8_8_;
    _DAT_048af520 = auVar11._0_8_;
    __cxa_guard_release(&DAT_048af530);
  }
  fVar25 = auVar27._0_4_;
  fVar32 = auVar27._4_4_;
  uVar30 = auVar27._8_4_;
  auVar11._0_8_ = CONCAT44(uVar30,uVar30);
  auVar11._8_4_ = uVar30;
  auVar11._12_4_ = uVar30;
  if ((DAT_048af550 & 1) == 0) {
    uVar6 = auVar11._8_8_;
    iVar8 = __cxa_guard_acquire(&DAT_048af550);
    auVar11._8_8_ = uVar6;
    if (iVar8 != 0) {
      auVar27 = NEON_fmov(0x3f800000,4);
      uRam00000000048af548 = auVar27._8_8_;
      _DAT_048af540 = auVar27._0_8_;
      __cxa_guard_release(&DAT_048af550);
    }
  }
  fVar9 = (float)_DAT_048af540;
  fVar13 = (float)((ulong)_DAT_048af540 >> 0x20);
  fVar15 = (float)uRam00000000048af548;
  fVar17 = (float)((ulong)uRam00000000048af548 >> 0x20);
  fVar33 = fVar9 * param_1[0xc] +
           (float)_DAT_048af520 *
           (*param_1 * fVar25 + fVar32 * param_1[4] + auVar11._0_4_ * param_1[8]);
  fVar37 = fVar13 * param_1[0xd] +
           (float)((ulong)_DAT_048af520 >> 0x20) *
           (param_1[1] * fVar25 + fVar32 * param_1[5] + auVar11._4_4_ * param_1[9]);
  fVar39 = fVar15 * param_1[0xe] +
           (float)uRam00000000048af528 *
           (param_1[2] * fVar25 + fVar32 * param_1[6] + auVar11._8_4_ * param_1[10]);
  fVar41 = fVar17 * param_1[0xf] +
           (float)((ulong)uRam00000000048af528 >> 0x20) *
           (param_1[3] * fVar25 + fVar32 * param_1[7] + auVar11._12_4_ * param_1[0xb]);
  bVar18 = (char)((byte)((uint)(-fVar33 + fVar49 * fVar9) >> 0x18) ^ (byte)((uint)fVar33 >> 0x18))
           >> 7;
  auVar21[0] = bVar18 & bVar36;
  auVar21[1] = bVar18 & bVar53;
  auVar21[2] = bVar18 & bVar54;
  auVar21[3] = bVar18 & bVar55;
  bVar18 = (char)((byte)((uint)(-fVar37 + fVar50 * fVar13) >> 0x18) ^ (byte)((uint)fVar37 >> 0x18))
           >> 7;
  auVar21[4] = bVar18 & bVar56;
  auVar21[5] = bVar18 & bVar57;
  auVar21[6] = bVar18 & bVar58;
  auVar21[7] = bVar18 & bVar59;
  bVar18 = (char)((byte)((uint)(-fVar39 + fVar51 * fVar15) >> 0x18) ^ (byte)((uint)fVar39 >> 0x18))
           >> 7;
  auVar21[8] = bVar18 & bVar60;
  auVar21[9] = bVar18 & bVar61;
  auVar21[10] = bVar18 & bVar62;
  auVar21[0xb] = bVar18 & bVar63;
  bVar18 = (char)((byte)((uint)(-fVar41 + fVar52 * fVar17) >> 0x18) ^ (byte)((uint)fVar41 >> 0x18))
           >> 7;
  auVar21[0xc] = bVar18 & bVar64;
  auVar21[0xd] = bVar18 & bVar65;
  auVar21[0xe] = bVar18 & bVar66;
  auVar21[0xf] = bVar18 & bVar67;
  auVar27 = NEON_ext(auVar21,auVar21,8,1);
  uVar2 = 0xf >> (ulong)(4U - (int)param_1[0x48] & 0x1f);
  uVar3 = CONCAT13(auVar20[3] | auVar48[3] | auVar20[7] | auVar48[7],
                   CONCAT12(auVar20[2] | auVar48[2] | auVar20[6] | auVar48[6],
                            CONCAT11(auVar20[1] | auVar48[1] | auVar20[5] | auVar48[5],
                                     auVar20[0] | auVar48[0] | auVar20[4] | auVar48[4]))) |
          CONCAT13(auVar27[3] | auVar21[3] | auVar27[7] | auVar21[7],
                   CONCAT12(auVar27[2] | auVar21[2] | auVar27[6] | auVar21[6],
                            CONCAT11(auVar27[1] | auVar21[1] | auVar27[5] | auVar21[5],
                                     auVar27[0] | auVar21[0] | auVar27[4] | auVar21[4]))) & uVar2;
  if (uVar3 != uVar2) {
    fVar26 = param_1[0x34];
    fVar34 = param_1[0x35];
    fVar38 = param_1[0x36];
    fVar19 = fVar49 * fVar25 + fVar33 * fVar26;
    fVar23 = fVar50 * fVar25 + fVar37 * fVar26;
    fVar24 = fVar51 * fVar25 + fVar39 * fVar26;
    fVar25 = fVar52 * fVar25 + fVar41 * fVar26;
    fVar26 = fVar49 * fVar32 + fVar33 * fVar34;
    fVar29 = fVar50 * fVar32 + fVar37 * fVar34;
    fVar31 = fVar51 * fVar32 + fVar39 * fVar34;
    fVar32 = fVar52 * fVar32 + fVar41 * fVar34;
    fVar33 = fVar49 * auVar11._0_4_ + fVar33 * fVar38;
    fVar37 = fVar50 * auVar11._4_4_ + fVar37 * fVar38;
    fVar39 = fVar51 * auVar11._8_4_ + fVar39 * fVar38;
    fVar41 = fVar52 * auVar11._12_4_ + fVar41 * fVar38;
    fVar34 = fVar19 * param_1[0x10] + param_1[0x14] * fVar26 + param_1[0x18] * fVar33 +
             fVar49 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar38 = fVar23 * param_1[0x11] + param_1[0x15] * fVar29 + param_1[0x19] * fVar37 +
             fVar50 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar40 = fVar24 * param_1[0x12] + param_1[0x16] * fVar31 + param_1[0x1a] * fVar39 +
             fVar51 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar42 = fVar25 * param_1[0x13] + param_1[0x17] * fVar32 + param_1[0x1b] * fVar41 +
             fVar52 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar8 = -(uint)(fVar34 == 0.0);
    iVar12 = -(uint)(fVar38 == 0.0);
    iVar14 = -(uint)(fVar40 == 0.0);
    iVar16 = -(uint)(fVar42 == 0.0);
    auVar20[0] = (byte)iVar8 & bVar36;
    auVar20[1] = (byte)((uint)iVar8 >> 8) & bVar53;
    auVar20[2] = (byte)((uint)iVar8 >> 0x10) & bVar54;
    auVar20[3] = (byte)((uint)iVar8 >> 0x18) & bVar55;
    auVar20[4] = (byte)iVar12 & bVar56;
    auVar20[5] = (byte)((uint)iVar12 >> 8) & bVar57;
    auVar20[6] = (byte)((uint)iVar12 >> 0x10) & bVar58;
    auVar20[7] = (byte)((uint)iVar12 >> 0x18) & bVar59;
    auVar20[8] = (byte)iVar14 & bVar60;
    auVar20[9] = (byte)((uint)iVar14 >> 8) & bVar61;
    auVar20[10] = (byte)((uint)iVar14 >> 0x10) & bVar62;
    auVar20[0xb] = (byte)((uint)iVar14 >> 0x18) & bVar63;
    auVar20[0xc] = (byte)iVar16 & bVar64;
    auVar20[0xd] = (byte)((uint)iVar16 >> 8) & bVar65;
    auVar20[0xe] = (byte)((uint)iVar16 >> 0x10) & bVar66;
    auVar20[0xf] = (byte)((uint)iVar16 >> 0x18) & bVar67;
    auVar27 = NEON_ext(auVar20,auVar20,8,1);
    bVar18 = (char)((byte)((uint)(fVar49 - fVar34) >> 0x18) ^ (byte)((uint)fVar34 >> 0x18)) >> 7;
    auVar44[0] = bVar18 & bVar36;
    auVar44[1] = bVar18 & bVar53;
    auVar44[2] = bVar18 & bVar54;
    auVar44[3] = bVar18 & bVar55;
    bVar18 = (char)((byte)((uint)(fVar50 - fVar38) >> 0x18) ^ (byte)((uint)fVar38 >> 0x18)) >> 7;
    auVar44[4] = bVar18 & bVar56;
    auVar44[5] = bVar18 & bVar57;
    auVar44[6] = bVar18 & bVar58;
    auVar44[7] = bVar18 & bVar59;
    bVar18 = (char)((byte)((uint)(fVar51 - fVar40) >> 0x18) ^ (byte)((uint)fVar40 >> 0x18)) >> 7;
    auVar44[8] = bVar18 & bVar60;
    auVar44[9] = bVar18 & bVar61;
    auVar44[10] = bVar18 & bVar62;
    auVar44[0xb] = bVar18 & bVar63;
    bVar18 = (char)((byte)((uint)(fVar52 - fVar42) >> 0x18) ^ (byte)((uint)fVar42 >> 0x18)) >> 7;
    auVar44[0xc] = bVar18 & bVar64;
    auVar44[0xd] = bVar18 & bVar65;
    auVar44[0xe] = bVar18 & bVar66;
    auVar44[0xf] = bVar18 & bVar67;
    auVar48 = NEON_ext(auVar44,auVar44,8,1);
    uVar3 = uVar2 & (CONCAT13(auVar27[3] | auVar20[3] | auVar27[7] | auVar20[7],
                              CONCAT12(auVar27[2] | auVar20[2] | auVar27[6] | auVar20[6],
                                       CONCAT11(auVar27[1] | auVar20[1] | auVar27[5] | auVar20[5],
                                                auVar27[0] | auVar20[0] | auVar27[4] | auVar20[4])))
                    ^ 0xffffffff) &
            CONCAT13(auVar48[3] | auVar44[3] | auVar48[7] | auVar44[7],
                     CONCAT12(auVar48[2] | auVar44[2] | auVar48[6] | auVar44[6],
                              CONCAT11(auVar48[1] | auVar44[1] | auVar48[5] | auVar44[5],
                                       auVar48[0] | auVar44[0] | auVar48[4] | auVar44[4]))) | uVar3;
    if (uVar3 != uVar2) {
      fVar43 = param_1[0x20] * fVar19 + fVar26 * param_1[0x24] +
               fVar33 * (float)*(undefined8 *)(param_1 + 0x28) +
               fVar49 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar45 = param_1[0x21] * fVar23 + fVar29 * param_1[0x25] +
               fVar37 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
               fVar50 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar46 = param_1[0x22] * fVar24 + fVar31 * param_1[0x26] +
               fVar39 * (float)*(undefined8 *)(param_1 + 0x2a) +
               fVar51 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar47 = param_1[0x23] * fVar25 + fVar32 * param_1[0x27] +
               fVar41 * (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
               fVar52 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar18 = (char)((byte)((uint)(fVar49 - (fVar34 + fVar43)) >> 0x18) ^
                     (byte)((uint)fVar43 >> 0x18)) >> 7;
      auVar35[0] = bVar18 & bVar36;
      auVar35[1] = bVar18 & bVar53;
      auVar35[2] = bVar18 & bVar54;
      auVar35[3] = bVar18 & bVar55;
      bVar36 = (char)((byte)((uint)(fVar50 - (fVar38 + fVar45)) >> 0x18) ^
                     (byte)((uint)fVar45 >> 0x18)) >> 7;
      auVar35[4] = bVar36 & bVar56;
      auVar35[5] = bVar36 & bVar57;
      auVar35[6] = bVar36 & bVar58;
      auVar35[7] = bVar36 & bVar59;
      bVar36 = (char)((byte)((uint)(fVar51 - (fVar40 + fVar46)) >> 0x18) ^
                     (byte)((uint)fVar46 >> 0x18)) >> 7;
      auVar35[8] = bVar36 & bVar60;
      auVar35[9] = bVar36 & bVar61;
      auVar35[10] = bVar36 & bVar62;
      auVar35[0xb] = bVar36 & bVar63;
      bVar36 = (char)((byte)((uint)(fVar52 - (fVar42 + fVar47)) >> 0x18) ^
                     (byte)((uint)fVar47 >> 0x18)) >> 7;
      auVar35[0xc] = bVar36 & bVar64;
      auVar35[0xd] = bVar36 & bVar65;
      auVar35[0xe] = bVar36 & bVar66;
      auVar35[0xf] = bVar36 & bVar67;
      auVar27 = NEON_ext(auVar35,auVar35,8,1);
      uVar3 = CONCAT13(auVar27[3] | auVar35[3] | auVar27[7] | auVar35[7],
                       CONCAT12(auVar27[2] | auVar35[2] | auVar27[6] | auVar35[6],
                                CONCAT11(auVar27[1] | auVar35[1] | auVar27[5] | auVar35[5],
                                         auVar27[0] | auVar35[0] | auVar27[4] | auVar35[4]))) &
              uVar2 | uVar3;
      if (uVar3 != uVar2) {
        auVar4._4_4_ = fVar50;
        auVar4._0_4_ = fVar49;
        auVar4._8_4_ = fVar51;
        auVar4._12_4_ = fVar52;
        auVar27 = NEON_frecpe(auVar4,4);
        uVar2 = uVar2 & (uVar3 ^ 0xffffffff);
        auVar5._4_4_ = fVar50;
        auVar5._0_4_ = fVar49;
        auVar5._8_4_ = fVar51;
        auVar5._12_4_ = fVar52;
        auVar48 = NEON_frecps(auVar5,auVar27,4);
        pfVar1 = param_1 + 0x38;
        fVar52 = auVar27._0_4_ * fVar9 * auVar48._0_4_;
        fVar49 = auVar27._4_4_ * fVar13 * auVar48._4_4_;
        fVar50 = auVar27._8_4_ * fVar15 * auVar48._8_4_;
        fVar51 = auVar27._12_4_ * fVar17 * auVar48._12_4_;
        auVar10._0_4_ = fVar52 * fVar19;
        auVar10._4_4_ = fVar49 * fVar23;
        auVar10._8_4_ = fVar50 * fVar24;
        auVar10._12_4_ = fVar51 * fVar25;
        auVar22._0_4_ = fVar52 * fVar26;
        auVar22._4_4_ = fVar49 * fVar29;
        auVar22._8_4_ = fVar50 * fVar31;
        auVar22._12_4_ = fVar51 * fVar32;
        auVar28._0_4_ = fVar52 * fVar33;
        auVar28._4_4_ = fVar49 * fVar37;
        auVar28._8_4_ = fVar50 * fVar39;
        auVar28._12_4_ = fVar51 * fVar41;
        while( true ) {
          if ((uVar2 & 1) != 0) {
            pfVar7 = *(float **)(param_1 + 0x40);
            uVar6 = *(undefined8 *)pfVar1;
            fVar52 = pfVar7[9] * (auVar10._0_4_ - *pfVar7) +
                     (auVar22._0_4_ - pfVar7[1]) * pfVar7[10] +
                     (auVar28._0_4_ - pfVar7[2]) * pfVar7[0xb];
            if (param_1[0x46] < fVar52) {
              param_1[0x46] = fVar52;
              *(undefined8 *)(param_1 + 0x42) = uVar6;
            }
            if (fVar52 < param_1[0x47]) {
              param_1[0x47] = fVar52;
              *(undefined8 *)(param_1 + 0x44) = uVar6;
            }
          }
          uVar2 = uVar2 >> 1;
          if (uVar2 == 0) break;
          auVar10 = NEON_ext(auVar10,auVar10,4,1);
          auVar22 = NEON_ext(auVar22,auVar22,4,1);
          pfVar1 = pfVar1 + 2;
          auVar28 = NEON_ext(auVar28,auVar28,4,1);
        }
      }
    }
  }
  return;
}


