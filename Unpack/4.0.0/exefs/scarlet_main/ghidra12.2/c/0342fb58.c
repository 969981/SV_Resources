/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342fb58; name: FUN_0342fb58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0342fb58(float *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  int iVar11;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  byte bVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  undefined1 auVar24 [16];
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
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
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  undefined1 auStack_40 [16];
  
  if (((DAT_048af630 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_048af630), iVar11 != 0)) {
    auVar23._8_4_ = 0x6ce3ee;
    auVar23._0_8_ = 0x6ce3ee006ce3ee;
    auVar23._12_4_ = 0x6ce3ee;
    uRam00000000048af628 = auVar23._8_8_;
    _DAT_048af620 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(&DAT_048af630);
  }
  pauVar9 = (undefined1 (*) [16])(param_1 + 0x30);
  auVar23 = *pauVar9;
  auVar66 = *(undefined1 (*) [16])(param_1 + 4);
  fVar70 = param_1[0x34];
  fVar37 = param_1[0x35];
  fVar38 = param_1[0x36];
  fVar67 = *param_1 * fVar70 + auVar66._0_4_ * fVar37 + param_1[8] * fVar38;
  fVar68 = param_1[1] * fVar70 + auVar66._4_4_ * fVar37 + param_1[9] * fVar38;
  fVar69 = param_1[2] * fVar70 + auVar66._8_4_ * fVar37 + param_1[10] * fVar38;
  fVar70 = param_1[3] * fVar70 + auVar66._12_4_ * fVar37 + param_1[0xb] * fVar38;
  iVar11 = -(uint)(ABS(fVar67) < (float)_DAT_048af620);
  iVar14 = -(uint)(ABS(fVar68) < (float)((ulong)_DAT_048af620 >> 0x20));
  iVar15 = -(uint)(ABS(fVar69) < (float)uRam00000000048af628);
  iVar16 = -(uint)(ABS(fVar70) < (float)((ulong)uRam00000000048af628 >> 0x20));
  bVar25 = (byte)_DAT_03cab270;
  auVar66[0] = (byte)iVar11 & bVar25;
  bVar71 = (byte)((ulong)_DAT_03cab270 >> 8);
  auVar66[1] = (byte)((uint)iVar11 >> 8) & bVar71;
  bVar72 = (byte)((ulong)_DAT_03cab270 >> 0x10);
  auVar66[2] = (byte)((uint)iVar11 >> 0x10) & bVar72;
  bVar73 = (byte)((ulong)_DAT_03cab270 >> 0x18);
  auVar66[3] = (byte)((uint)iVar11 >> 0x18) & bVar73;
  bVar74 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  auVar66[4] = (byte)iVar14 & bVar74;
  bVar75 = (byte)((ulong)_DAT_03cab270 >> 0x28);
  auVar66[5] = (byte)((uint)iVar14 >> 8) & bVar75;
  bVar76 = (byte)((ulong)_DAT_03cab270 >> 0x30);
  auVar66[6] = (byte)((uint)iVar14 >> 0x10) & bVar76;
  bVar77 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  auVar66[7] = (byte)((uint)iVar14 >> 0x18) & bVar77;
  bVar78 = (byte)_UNK_03cab278;
  auVar66[8] = (byte)iVar15 & bVar78;
  bVar79 = (byte)((ulong)_UNK_03cab278 >> 8);
  auVar66[9] = (byte)((uint)iVar15 >> 8) & bVar79;
  bVar80 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar66[10] = (byte)((uint)iVar15 >> 0x10) & bVar80;
  bVar81 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar66[0xb] = (byte)((uint)iVar15 >> 0x18) & bVar81;
  bVar82 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar66[0xc] = (byte)iVar16 & bVar82;
  bVar83 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar66[0xd] = (byte)((uint)iVar16 >> 8) & bVar83;
  bVar84 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar66[0xe] = (byte)((uint)iVar16 >> 0x10) & bVar84;
  bVar85 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  auVar66[0xf] = (byte)((uint)iVar16 >> 0x18) & bVar85;
  auVar18 = NEON_ext(auVar66,auVar66,8,1);
  if (((DAT_048af650 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_048af650), iVar11 != 0)) {
    auVar13 = NEON_fmov(0xbf800000,4);
    uRam00000000048af648 = auVar13._8_8_;
    _DAT_048af640 = auVar13._0_8_;
    __cxa_guard_release(&DAT_048af650);
  }
  fVar38 = auVar23._0_4_;
  uVar30 = auVar23._4_4_;
  auVar13._0_8_ = CONCAT44(uVar30,uVar30);
  auVar13._8_4_ = uVar30;
  auVar13._12_4_ = uVar30;
  fVar37 = auVar23._8_4_;
  if ((DAT_048af670 & 1) == 0) {
    uVar10 = auVar13._8_8_;
    iVar11 = __cxa_guard_acquire(&DAT_048af670);
    auVar13._8_8_ = uVar10;
    if (iVar11 != 0) {
      auVar23 = NEON_fmov(0x3f800000,4);
      uRam00000000048af668 = auVar23._8_8_;
      _DAT_048af660 = auVar23._0_8_;
      __cxa_guard_release(&DAT_048af670);
    }
  }
  fVar22 = (float)((ulong)_DAT_048af660 >> 0x20);
  fVar26 = (float)((ulong)uRam00000000048af668 >> 0x20);
  fVar17 = (float)_DAT_048af660 * param_1[0xc] +
           (float)_DAT_048af640 *
           (*param_1 * fVar38 + auVar13._0_4_ * param_1[4] +
           fVar37 * (float)*(undefined8 *)(param_1 + 8));
  fVar19 = fVar22 * param_1[0xd] +
           (float)((ulong)_DAT_048af640 >> 0x20) *
           (param_1[1] * fVar38 + auVar13._4_4_ * param_1[5] +
           fVar37 * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar20 = (float)uRam00000000048af668 * param_1[0xe] +
           (float)uRam00000000048af648 *
           (param_1[2] * fVar38 + auVar13._8_4_ * param_1[6] +
           fVar37 * (float)*(undefined8 *)(param_1 + 10));
  fVar21 = fVar26 * param_1[0xf] +
           (float)((ulong)uRam00000000048af648 >> 0x20) *
           (param_1[3] * fVar38 + auVar13._12_4_ * param_1[7] +
           fVar37 * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar42 = (char)((byte)((uint)(-fVar17 + fVar67 * (float)_DAT_048af660) >> 0x18) ^
                 (byte)((uint)fVar17 >> 0x18)) >> 7;
  auVar12[0] = bVar42 & bVar25;
  auVar12[1] = bVar42 & bVar71;
  auVar12[2] = bVar42 & bVar72;
  auVar12[3] = bVar42 & bVar73;
  bVar42 = (char)((byte)((uint)(-fVar19 + fVar68 * fVar22) >> 0x18) ^ (byte)((uint)fVar19 >> 0x18))
           >> 7;
  auVar12[4] = bVar42 & bVar74;
  auVar12[5] = bVar42 & bVar75;
  auVar12[6] = bVar42 & bVar76;
  auVar12[7] = bVar42 & bVar77;
  bVar42 = (char)((byte)((uint)(-fVar20 + fVar69 * (float)uRam00000000048af668) >> 0x18) ^
                 (byte)((uint)fVar20 >> 0x18)) >> 7;
  auVar12[8] = bVar42 & bVar78;
  auVar12[9] = bVar42 & bVar79;
  auVar12[10] = bVar42 & bVar80;
  auVar12[0xb] = bVar42 & bVar81;
  bVar42 = (char)((byte)((uint)(-fVar21 + fVar70 * fVar26) >> 0x18) ^ (byte)((uint)fVar21 >> 0x18))
           >> 7;
  auVar12[0xc] = bVar42 & bVar82;
  auVar12[0xd] = bVar42 & bVar83;
  auVar12[0xe] = bVar42 & bVar84;
  auVar12[0xf] = bVar42 & bVar85;
  auVar23 = NEON_ext(auVar12,auVar12,8,1);
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x3c] & 0x1f);
  uVar2 = CONCAT13(auVar18[3] | auVar66[3] | auVar18[7] | auVar66[7],
                   CONCAT12(auVar18[2] | auVar66[2] | auVar18[6] | auVar66[6],
                            CONCAT11(auVar18[1] | auVar66[1] | auVar18[5] | auVar66[5],
                                     auVar18[0] | auVar66[0] | auVar18[4] | auVar66[4]))) |
          CONCAT13(auVar23[3] | auVar12[3] | auVar23[7] | auVar12[7],
                   CONCAT12(auVar23[2] | auVar12[2] | auVar23[6] | auVar12[6],
                            CONCAT11(auVar23[1] | auVar12[1] | auVar23[5] | auVar12[5],
                                     auVar23[0] | auVar12[0] | auVar23[4] | auVar12[4]))) & uVar1;
  if (uVar2 != uVar1) {
    auVar23 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar22 = auVar23._0_4_;
    fVar29 = fVar67 * fVar38 + fVar17 * fVar22;
    fVar31 = fVar68 * fVar38 + fVar19 * fVar22;
    fVar32 = fVar69 * fVar38 + fVar20 * fVar22;
    fVar33 = fVar70 * fVar38 + fVar21 * fVar22;
    fVar38 = auVar23._4_4_;
    fVar22 = fVar67 * auVar13._0_4_ + fVar17 * fVar38;
    fVar26 = fVar68 * auVar13._4_4_ + fVar19 * fVar38;
    fVar27 = fVar69 * auVar13._8_4_ + fVar20 * fVar38;
    fVar28 = fVar70 * auVar13._12_4_ + fVar21 * fVar38;
    fVar38 = auVar23._8_4_;
    fVar34 = fVar67 * fVar37 + fVar17 * fVar38;
    fVar35 = fVar68 * fVar37 + fVar19 * fVar38;
    fVar36 = fVar69 * fVar37 + fVar20 * fVar38;
    fVar37 = fVar70 * fVar37 + fVar21 * fVar38;
    fVar38 = fVar29 * (float)*(undefined8 *)(param_1 + 0x10) +
             (float)*(undefined8 *)(param_1 + 0x14) * fVar22 + param_1[0x18] * fVar34 +
             fVar67 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar39 = fVar31 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar26 +
             param_1[0x19] * fVar35 +
             fVar68 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar40 = fVar32 * (float)*(undefined8 *)(param_1 + 0x12) +
             (float)*(undefined8 *)(param_1 + 0x16) * fVar27 + param_1[0x1a] * fVar36 +
             fVar69 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar41 = fVar33 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar28 +
             param_1[0x1b] * fVar37 +
             fVar70 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar11 = -(uint)(fVar38 == 0.0);
    iVar14 = -(uint)(fVar39 == 0.0);
    iVar15 = -(uint)(fVar40 == 0.0);
    iVar16 = -(uint)(fVar41 == 0.0);
    bVar42 = (byte)iVar11 & bVar25;
    bVar43 = (byte)((uint)iVar11 >> 8) & bVar71;
    bVar44 = (byte)((uint)iVar11 >> 0x10) & bVar72;
    bVar45 = (byte)((uint)iVar11 >> 0x18) & bVar73;
    bVar46 = (byte)iVar14 & bVar74;
    bVar47 = (byte)((uint)iVar14 >> 8) & bVar75;
    bVar48 = (byte)((uint)iVar14 >> 0x10) & bVar76;
    bVar49 = (byte)((uint)iVar14 >> 0x18) & bVar77;
    bVar50 = (byte)iVar15 & bVar78;
    bVar52 = (byte)((uint)iVar15 >> 8) & bVar79;
    bVar54 = (byte)((uint)iVar15 >> 0x10) & bVar80;
    bVar56 = (byte)((uint)iVar15 >> 0x18) & bVar81;
    bVar58 = (byte)iVar16 & bVar82;
    bVar60 = (byte)((uint)iVar16 >> 8) & bVar83;
    bVar62 = (byte)((uint)iVar16 >> 0x10) & bVar84;
    bVar64 = (byte)((uint)iVar16 >> 0x18) & bVar85;
    auVar18[1] = bVar43;
    auVar18[0] = bVar42;
    auVar18[2] = bVar44;
    auVar18[3] = bVar45;
    auVar18[4] = bVar46;
    auVar18[5] = bVar47;
    auVar18[6] = bVar48;
    auVar18[7] = bVar49;
    auVar18[8] = bVar50;
    auVar18[9] = bVar52;
    auVar18[10] = bVar54;
    auVar18[0xb] = bVar56;
    auVar18[0xc] = bVar58;
    auVar18[0xd] = bVar60;
    auVar18[0xe] = bVar62;
    auVar18[0xf] = bVar64;
    auVar3[1] = bVar43;
    auVar3[0] = bVar42;
    auVar3[2] = bVar44;
    auVar3[3] = bVar45;
    auVar3[4] = bVar46;
    auVar3[5] = bVar47;
    auVar3[6] = bVar48;
    auVar3[7] = bVar49;
    auVar3[8] = bVar50;
    auVar3[9] = bVar52;
    auVar3[10] = bVar54;
    auVar3[0xb] = bVar56;
    auVar3[0xc] = bVar58;
    auVar3[0xd] = bVar60;
    auVar3[0xe] = bVar62;
    auVar3[0xf] = bVar64;
    auVar23 = NEON_ext(auVar18,auVar3,8,1);
    bVar56 = (byte)((uint)(fVar67 - fVar38) >> 0x18) ^ (byte)((uint)fVar38 >> 0x18);
    bVar64 = (byte)((uint)(fVar68 - fVar39) >> 0x18) ^ (byte)((uint)fVar39 >> 0x18);
    bVar57 = (byte)((uint)(fVar69 - fVar40) >> 0x18) ^ (byte)((uint)fVar40 >> 0x18);
    bVar65 = (byte)((uint)(fVar70 - fVar41) >> 0x18) ^ (byte)((uint)fVar41 >> 0x18);
    iVar11 = (int)(char)bVar56 >> 7;
    iVar14 = (int)(char)bVar64 >> 7;
    iVar15 = (int)(char)bVar57 >> 7;
    iVar16 = (int)(char)bVar65 >> 7;
    bVar50 = (byte)iVar11 & bVar25;
    bVar52 = (byte)((uint)iVar11 >> 8) & bVar71;
    bVar54 = (byte)((uint)iVar11 >> 0x10) & bVar72;
    bVar56 = (char)bVar56 >> 7 & bVar73;
    bVar58 = (byte)iVar14 & bVar74;
    bVar60 = (byte)((uint)iVar14 >> 8) & bVar75;
    bVar62 = (byte)((uint)iVar14 >> 0x10) & bVar76;
    bVar64 = (char)bVar64 >> 7 & bVar77;
    bVar51 = (byte)iVar15 & bVar78;
    bVar53 = (byte)((uint)iVar15 >> 8) & bVar79;
    bVar55 = (byte)((uint)iVar15 >> 0x10) & bVar80;
    bVar57 = (char)bVar57 >> 7 & bVar81;
    bVar59 = (byte)iVar16 & bVar82;
    bVar61 = (byte)((uint)iVar16 >> 8) & bVar83;
    bVar63 = (byte)((uint)iVar16 >> 0x10) & bVar84;
    bVar65 = (char)bVar65 >> 7 & bVar85;
    auVar4[1] = bVar52;
    auVar4[0] = bVar50;
    auVar4[2] = bVar54;
    auVar4[3] = bVar56;
    auVar4[4] = bVar58;
    auVar4[5] = bVar60;
    auVar4[6] = bVar62;
    auVar4[7] = bVar64;
    auVar4[8] = bVar51;
    auVar4[9] = bVar53;
    auVar4[10] = bVar55;
    auVar4[0xb] = bVar57;
    auVar4[0xc] = bVar59;
    auVar4[0xd] = bVar61;
    auVar4[0xe] = bVar63;
    auVar4[0xf] = bVar65;
    auVar5[1] = bVar52;
    auVar5[0] = bVar50;
    auVar5[2] = bVar54;
    auVar5[3] = bVar56;
    auVar5[4] = bVar58;
    auVar5[5] = bVar60;
    auVar5[6] = bVar62;
    auVar5[7] = bVar64;
    auVar5[8] = bVar51;
    auVar5[9] = bVar53;
    auVar5[10] = bVar55;
    auVar5[0xb] = bVar57;
    auVar5[0xc] = bVar59;
    auVar5[0xd] = bVar61;
    auVar5[0xe] = bVar63;
    auVar5[0xf] = bVar65;
    auVar66 = NEON_ext(auVar4,auVar5,8,1);
    uVar2 = uVar1 & (CONCAT13(auVar23[3] | bVar45 | auVar23[7] | bVar49,
                              CONCAT12(auVar23[2] | bVar44 | auVar23[6] | bVar48,
                                       CONCAT11(auVar23[1] | bVar43 | auVar23[5] | bVar47,
                                                auVar23[0] | bVar42 | auVar23[4] | bVar46))) ^
                    0xffffffff) &
            CONCAT13(auVar66[3] | bVar56 | auVar66[7] | bVar64,
                     CONCAT12(auVar66[2] | bVar54 | auVar66[6] | bVar62,
                              CONCAT11(auVar66[1] | bVar52 | auVar66[5] | bVar60,
                                       auVar66[0] | bVar50 | auVar66[4] | bVar58))) | uVar2;
    if (uVar2 != uVar1) {
      auVar23 = *(undefined1 (*) [16])(param_1 + 0x24);
      fVar22 = (float)*(undefined8 *)(param_1 + 0x20) * fVar29 + fVar22 * auVar23._0_4_ +
               fVar34 * (float)*(undefined8 *)(param_1 + 0x28) +
               fVar67 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar31 +
               fVar26 * auVar23._4_4_ +
               fVar35 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
               fVar68 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar27 = (float)*(undefined8 *)(param_1 + 0x22) * fVar32 + fVar27 * auVar23._8_4_ +
               fVar36 * (float)*(undefined8 *)(param_1 + 0x2a) +
               fVar69 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar33 +
               fVar28 * auVar23._12_4_ +
               fVar37 * (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
               fVar70 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar42 = (char)((byte)((uint)(fVar67 - (fVar38 + fVar22)) >> 0x18) ^
                     (byte)((uint)fVar22 >> 0x18)) >> 7;
      auVar24[0] = bVar42 & bVar25;
      auVar24[1] = bVar42 & bVar71;
      auVar24[2] = bVar42 & bVar72;
      auVar24[3] = bVar42 & bVar73;
      bVar25 = (char)((byte)((uint)(fVar68 - (fVar39 + fVar26)) >> 0x18) ^
                     (byte)((uint)fVar26 >> 0x18)) >> 7;
      auVar24[4] = bVar25 & bVar74;
      auVar24[5] = bVar25 & bVar75;
      auVar24[6] = bVar25 & bVar76;
      auVar24[7] = bVar25 & bVar77;
      bVar25 = (char)((byte)((uint)(fVar69 - (fVar40 + fVar27)) >> 0x18) ^
                     (byte)((uint)fVar27 >> 0x18)) >> 7;
      auVar24[8] = bVar25 & bVar78;
      auVar24[9] = bVar25 & bVar79;
      auVar24[10] = bVar25 & bVar80;
      auVar24[0xb] = bVar25 & bVar81;
      bVar25 = (char)((byte)((uint)(fVar70 - (fVar41 + fVar37)) >> 0x18) ^
                     (byte)((uint)fVar37 >> 0x18)) >> 7;
      auVar24[0xc] = bVar25 & bVar82;
      auVar24[0xd] = bVar25 & bVar83;
      auVar24[0xe] = bVar25 & bVar84;
      auVar24[0xf] = bVar25 & bVar85;
      auVar23 = NEON_ext(auVar24,auVar24,8,1);
      uVar2 = CONCAT13(auVar23[3] | auVar24[3] | auVar23[7] | auVar24[7],
                       CONCAT12(auVar23[2] | auVar24[2] | auVar23[6] | auVar24[6],
                                CONCAT11(auVar23[1] | auVar24[1] | auVar23[5] | auVar24[5],
                                         auVar23[0] | auVar24[0] | auVar23[4] | auVar24[4]))) &
              uVar1 | uVar2;
      if (uVar2 != uVar1) {
        auVar6._4_4_ = fVar68;
        auVar6._0_4_ = fVar67;
        auVar6._8_4_ = fVar69;
        auVar6._12_4_ = fVar70;
        auVar23 = NEON_frecpe(auVar6,4);
        uVar1 = uVar1 & (uVar2 ^ 0xffffffff);
        auVar7._4_4_ = fVar68;
        auVar7._0_4_ = fVar67;
        auVar7._8_4_ = fVar69;
        auVar7._12_4_ = fVar70;
        auVar66 = NEON_frecps(auVar7,auVar23,4);
        if (((uVar1 & 1) == 0) ||
           ((*(long *)(param_1 + 0x3e) != 0 &&
            (lVar8 = FUN_0341cbd0(*(long *)(param_1 + 0x3e),pauVar9,auStack_40), lVar8 != 0)))) {
          uVar10 = 0;
        }
        else {
          if (param_1[0x4a] < param_1[0x46]) {
            param_1[0x4a] = param_1[0x46];
            fVar70 = (float)NEON_fminnm(auVar23._0_4_ * fVar17 * auVar66._0_4_,0x7f7fffff);
            param_1[0x3a] = param_1[0x32] + param_1[0x36] * fVar70;
            param_1[0x3b] = param_1[0x33] + param_1[0x37] * fVar70;
            param_1[0x38] = param_1[0x30] + param_1[0x34] * fVar70;
            param_1[0x39] = param_1[0x31] + param_1[0x35] * fVar70;
          }
          uVar10 = 1;
        }
        if (((uVar1 >> 1 & 1) != 0) &&
           ((*(long *)(param_1 + 0x40) == 0 ||
            (lVar8 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x40),
                                  pauVar9,auStack_40), lVar8 == 0)))) {
          if (param_1[0x4a] < param_1[0x47]) {
            param_1[0x4a] = param_1[0x47];
            fVar70 = (float)NEON_fminnm(auVar23._4_4_ * fVar19 * auVar66._4_4_,0x7f7fffff);
            param_1[0x3a] = param_1[0x32] + param_1[0x36] * fVar70;
            param_1[0x3b] = param_1[0x33] + param_1[0x37] * fVar70;
            param_1[0x38] = param_1[0x30] + param_1[0x34] * fVar70;
            param_1[0x39] = param_1[0x31] + param_1[0x35] * fVar70;
          }
          uVar10 = 1;
        }
        if (((uVar1 >> 2 & 1) != 0) &&
           ((*(long *)(param_1 + 0x42) == 0 ||
            (lVar8 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x42),
                                  pauVar9,auStack_40), lVar8 == 0)))) {
          if (param_1[0x4a] < param_1[0x48]) {
            param_1[0x4a] = param_1[0x48];
            fVar70 = (float)NEON_fminnm(auVar23._8_4_ * fVar20 * auVar66._8_4_,0x7f7fffff);
            param_1[0x3a] = param_1[0x32] + param_1[0x36] * fVar70;
            param_1[0x3b] = param_1[0x33] + param_1[0x37] * fVar70;
            param_1[0x38] = param_1[0x30] + param_1[0x34] * fVar70;
            param_1[0x39] = param_1[0x31] + param_1[0x35] * fVar70;
          }
          uVar10 = 1;
        }
        if ((uVar1 >> 3 & 1) == 0) {
          return uVar10;
        }
        if ((*(long *)(param_1 + 0x44) != 0) &&
           (lVar8 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x44),
                                 pauVar9,auStack_40), lVar8 != 0)) {
          return uVar10;
        }
        if (param_1[0x4a] < param_1[0x49]) {
          param_1[0x4a] = param_1[0x49];
          fVar70 = (float)NEON_fminnm(auVar23._12_4_ * fVar21 * auVar66._12_4_,0x7f7fffff);
          param_1[0x3a] = param_1[0x32] + param_1[0x36] * fVar70;
          param_1[0x3b] = param_1[0x33] + param_1[0x37] * fVar70;
          param_1[0x38] = param_1[0x30] + param_1[0x34] * fVar70;
          param_1[0x39] = param_1[0x31] + param_1[0x35] * fVar70;
        }
        return 1;
      }
    }
  }
  return 0;
}


