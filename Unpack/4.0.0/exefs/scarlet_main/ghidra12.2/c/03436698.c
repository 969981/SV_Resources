/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03436698; name: FUN_03436698
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_03436698(float *param_1)

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
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar11 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte bVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  byte bVar40;
  byte bVar41;
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
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  byte bVar69;
  byte bVar70;
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
  undefined1 auStack_40 [16];
  
  if (((DAT_048af6f0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_048af6f0), iVar10 != 0)) {
    auVar22._8_4_ = 0x6ce3ee;
    auVar22._0_8_ = 0x6ce3ee006ce3ee;
    auVar22._12_4_ = 0x6ce3ee;
    uRam00000000048af6e8 = auVar22._8_8_;
    _DAT_048af6e0 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(&DAT_048af6f0);
  }
  pauVar9 = (undefined1 (*) [16])(param_1 + 0x30);
  auVar22 = *pauVar9;
  fVar68 = param_1[0x34];
  fVar35 = param_1[0x35];
  fVar27 = param_1[0x36];
  fVar65 = *param_1 * fVar68 + (float)*(undefined8 *)(param_1 + 4) * fVar35 + param_1[8] * fVar27;
  fVar66 = param_1[1] * fVar68 + (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar35 +
           param_1[9] * fVar27;
  fVar67 = param_1[2] * fVar68 + (float)*(undefined8 *)(param_1 + 6) * fVar35 + param_1[10] * fVar27
  ;
  fVar68 = param_1[3] * fVar68 + (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * fVar35 +
           param_1[0xb] * fVar27;
  iVar10 = -(uint)(ABS(fVar65) < (float)_DAT_048af6e0);
  iVar12 = -(uint)(ABS(fVar66) < (float)((ulong)_DAT_048af6e0 >> 0x20));
  iVar13 = -(uint)(ABS(fVar67) < (float)uRam00000000048af6e8);
  iVar14 = -(uint)(ABS(fVar68) < (float)((ulong)uRam00000000048af6e8 >> 0x20));
  bVar24 = (byte)_DAT_03cab270;
  auVar64[0] = (byte)iVar10 & bVar24;
  bVar69 = (byte)((ulong)_DAT_03cab270 >> 8);
  auVar64[1] = (byte)((uint)iVar10 >> 8) & bVar69;
  bVar70 = (byte)((ulong)_DAT_03cab270 >> 0x10);
  auVar64[2] = (byte)((uint)iVar10 >> 0x10) & bVar70;
  bVar71 = (byte)((ulong)_DAT_03cab270 >> 0x18);
  auVar64[3] = (byte)((uint)iVar10 >> 0x18) & bVar71;
  bVar72 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  auVar64[4] = (byte)iVar12 & bVar72;
  bVar73 = (byte)((ulong)_DAT_03cab270 >> 0x28);
  auVar64[5] = (byte)((uint)iVar12 >> 8) & bVar73;
  bVar74 = (byte)((ulong)_DAT_03cab270 >> 0x30);
  auVar64[6] = (byte)((uint)iVar12 >> 0x10) & bVar74;
  bVar75 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  auVar64[7] = (byte)((uint)iVar12 >> 0x18) & bVar75;
  bVar76 = (byte)_UNK_03cab278;
  auVar64[8] = (byte)iVar13 & bVar76;
  bVar77 = (byte)((ulong)_UNK_03cab278 >> 8);
  auVar64[9] = (byte)((uint)iVar13 >> 8) & bVar77;
  bVar78 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar64[10] = (byte)((uint)iVar13 >> 0x10) & bVar78;
  bVar79 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar64[0xb] = (byte)((uint)iVar13 >> 0x18) & bVar79;
  bVar80 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar64[0xc] = (byte)iVar14 & bVar80;
  bVar81 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar64[0xd] = (byte)((uint)iVar14 >> 8) & bVar81;
  bVar82 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar64[0xe] = (byte)((uint)iVar14 >> 0x10) & bVar82;
  bVar83 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  auVar64[0xf] = (byte)((uint)iVar14 >> 0x18) & bVar83;
  auVar16 = NEON_ext(auVar64,auVar64,8,1);
  if (((DAT_048af710 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_048af710), iVar10 != 0)) {
    auVar11 = NEON_fmov(0xbf800000,4);
    uRam00000000048af708 = auVar11._8_8_;
    _DAT_048af700 = auVar11._0_8_;
    __cxa_guard_release(&DAT_048af710);
  }
  fVar27 = auVar22._0_4_;
  fVar36 = auVar22._8_4_;
  fVar35 = auVar22._4_4_;
  if (((DAT_048af730 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_048af730), iVar10 != 0)) {
    auVar22 = NEON_fmov(0x3f800000,4);
    uRam00000000048af728 = auVar22._8_8_;
    _DAT_048af720 = auVar22._0_8_;
    __cxa_guard_release(&DAT_048af730);
  }
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x3c] & 0x1f);
  fVar17 = (float)_DAT_048af720 * (float)*(undefined8 *)(param_1 + 0xc) +
           _DAT_048af700 * (*param_1 * fVar27 + fVar35 * param_1[4] + fVar36 * param_1[8]);
  fVar18 = (float)((ulong)_DAT_048af720 >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
           DAT_048af700_4 * (param_1[1] * fVar27 + fVar35 * param_1[5] + fVar36 * param_1[9]);
  fVar19 = (float)uRam00000000048af728 * (float)*(undefined8 *)(param_1 + 0xe) +
           (float)uRam00000000048af708 *
           (param_1[2] * fVar27 + fVar35 * param_1[6] + fVar36 * param_1[10]);
  fVar20 = (float)((ulong)uRam00000000048af728 >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           uRam00000000048af708._4_4_ *
           (param_1[3] * fVar27 + fVar35 * param_1[7] + fVar36 * param_1[0xb]);
  fVar15 = param_1[0x3e];
  bVar40 = (char)((byte)((uint)(-fVar17 + fVar65 * fVar15) >> 0x18) ^ (byte)((uint)fVar17 >> 0x18))
           >> 7;
  auVar11[0] = bVar40 & bVar24;
  auVar11[1] = bVar40 & bVar69;
  auVar11[2] = bVar40 & bVar70;
  auVar11[3] = bVar40 & bVar71;
  bVar40 = (char)((byte)((uint)(-fVar18 + fVar66 * fVar15) >> 0x18) ^ (byte)((uint)fVar18 >> 0x18))
           >> 7;
  auVar11[4] = bVar40 & bVar72;
  auVar11[5] = bVar40 & bVar73;
  auVar11[6] = bVar40 & bVar74;
  auVar11[7] = bVar40 & bVar75;
  bVar40 = (char)((byte)((uint)(-fVar19 + fVar67 * fVar15) >> 0x18) ^ (byte)((uint)fVar19 >> 0x18))
           >> 7;
  auVar11[8] = bVar40 & bVar76;
  auVar11[9] = bVar40 & bVar77;
  auVar11[10] = bVar40 & bVar78;
  auVar11[0xb] = bVar40 & bVar79;
  bVar40 = (char)((byte)((uint)(-fVar20 + fVar68 * fVar15) >> 0x18) ^ (byte)((uint)fVar20 >> 0x18))
           >> 7;
  auVar11[0xc] = bVar40 & bVar80;
  auVar11[0xd] = bVar40 & bVar81;
  auVar11[0xe] = bVar40 & bVar82;
  auVar11[0xf] = bVar40 & bVar83;
  auVar22 = NEON_ext(auVar11,auVar11,8,1);
  uVar2 = CONCAT13(auVar16[3] | auVar64[3] | auVar16[7] | auVar64[7],
                   CONCAT12(auVar16[2] | auVar64[2] | auVar16[6] | auVar64[6],
                            CONCAT11(auVar16[1] | auVar64[1] | auVar16[5] | auVar64[5],
                                     auVar16[0] | auVar64[0] | auVar16[4] | auVar64[4]))) |
          CONCAT13(auVar22[3] | auVar11[3] | auVar22[7] | auVar11[7],
                   CONCAT12(auVar22[2] | auVar11[2] | auVar22[6] | auVar11[6],
                            CONCAT11(auVar22[1] | auVar11[1] | auVar22[5] | auVar11[5],
                                     auVar22[0] | auVar11[0] | auVar22[4] | auVar11[4]))) & uVar1;
  if (uVar2 != uVar1) {
    auVar22 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar21 = auVar22._0_4_;
    fVar28 = fVar65 * fVar27 + fVar17 * fVar21;
    fVar29 = fVar66 * fVar27 + fVar18 * fVar21;
    fVar30 = fVar67 * fVar27 + fVar19 * fVar21;
    fVar31 = fVar68 * fVar27 + fVar20 * fVar21;
    fVar27 = auVar22._4_4_;
    fVar21 = fVar65 * fVar35 + fVar17 * fVar27;
    fVar25 = fVar66 * fVar35 + fVar18 * fVar27;
    fVar26 = fVar67 * fVar35 + fVar19 * fVar27;
    fVar27 = fVar68 * fVar35 + fVar20 * fVar27;
    fVar35 = auVar22._8_4_;
    fVar32 = fVar65 * fVar36 + fVar17 * fVar35;
    fVar33 = fVar66 * fVar36 + fVar18 * fVar35;
    fVar34 = fVar67 * fVar36 + fVar19 * fVar35;
    fVar35 = fVar68 * fVar36 + fVar20 * fVar35;
    fVar36 = fVar28 * (float)*(undefined8 *)(param_1 + 0x10) +
             (float)*(undefined8 *)(param_1 + 0x14) * fVar21 + param_1[0x18] * fVar32 +
             fVar65 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar37 = fVar29 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar25 +
             param_1[0x19] * fVar33 +
             fVar66 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar38 = fVar30 * (float)*(undefined8 *)(param_1 + 0x12) +
             (float)*(undefined8 *)(param_1 + 0x16) * fVar26 + param_1[0x1a] * fVar34 +
             fVar67 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar39 = fVar31 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar27 +
             param_1[0x1b] * fVar35 +
             fVar68 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar10 = -(uint)(fVar36 == 0.0);
    iVar12 = -(uint)(fVar37 == 0.0);
    iVar13 = -(uint)(fVar38 == 0.0);
    iVar14 = -(uint)(fVar39 == 0.0);
    bVar40 = (byte)iVar10 & bVar24;
    bVar41 = (byte)((uint)iVar10 >> 8) & bVar69;
    bVar42 = (byte)((uint)iVar10 >> 0x10) & bVar70;
    bVar43 = (byte)((uint)iVar10 >> 0x18) & bVar71;
    bVar44 = (byte)iVar12 & bVar72;
    bVar45 = (byte)((uint)iVar12 >> 8) & bVar73;
    bVar46 = (byte)((uint)iVar12 >> 0x10) & bVar74;
    bVar47 = (byte)((uint)iVar12 >> 0x18) & bVar75;
    bVar48 = (byte)iVar13 & bVar76;
    bVar50 = (byte)((uint)iVar13 >> 8) & bVar77;
    bVar52 = (byte)((uint)iVar13 >> 0x10) & bVar78;
    bVar54 = (byte)((uint)iVar13 >> 0x18) & bVar79;
    bVar56 = (byte)iVar14 & bVar80;
    bVar58 = (byte)((uint)iVar14 >> 8) & bVar81;
    bVar60 = (byte)((uint)iVar14 >> 0x10) & bVar82;
    bVar62 = (byte)((uint)iVar14 >> 0x18) & bVar83;
    auVar16[1] = bVar41;
    auVar16[0] = bVar40;
    auVar16[2] = bVar42;
    auVar16[3] = bVar43;
    auVar16[4] = bVar44;
    auVar16[5] = bVar45;
    auVar16[6] = bVar46;
    auVar16[7] = bVar47;
    auVar16[8] = bVar48;
    auVar16[9] = bVar50;
    auVar16[10] = bVar52;
    auVar16[0xb] = bVar54;
    auVar16[0xc] = bVar56;
    auVar16[0xd] = bVar58;
    auVar16[0xe] = bVar60;
    auVar16[0xf] = bVar62;
    auVar3[1] = bVar41;
    auVar3[0] = bVar40;
    auVar3[2] = bVar42;
    auVar3[3] = bVar43;
    auVar3[4] = bVar44;
    auVar3[5] = bVar45;
    auVar3[6] = bVar46;
    auVar3[7] = bVar47;
    auVar3[8] = bVar48;
    auVar3[9] = bVar50;
    auVar3[10] = bVar52;
    auVar3[0xb] = bVar54;
    auVar3[0xc] = bVar56;
    auVar3[0xd] = bVar58;
    auVar3[0xe] = bVar60;
    auVar3[0xf] = bVar62;
    auVar22 = NEON_ext(auVar16,auVar3,8,1);
    bVar54 = (byte)((uint)(fVar65 - fVar36) >> 0x18) ^ (byte)((uint)fVar36 >> 0x18);
    bVar62 = (byte)((uint)(fVar66 - fVar37) >> 0x18) ^ (byte)((uint)fVar37 >> 0x18);
    bVar55 = (byte)((uint)(fVar67 - fVar38) >> 0x18) ^ (byte)((uint)fVar38 >> 0x18);
    bVar63 = (byte)((uint)(fVar68 - fVar39) >> 0x18) ^ (byte)((uint)fVar39 >> 0x18);
    iVar10 = (int)(char)bVar54 >> 7;
    iVar12 = (int)(char)bVar62 >> 7;
    iVar13 = (int)(char)bVar55 >> 7;
    iVar14 = (int)(char)bVar63 >> 7;
    bVar48 = (byte)iVar10 & bVar24;
    bVar50 = (byte)((uint)iVar10 >> 8) & bVar69;
    bVar52 = (byte)((uint)iVar10 >> 0x10) & bVar70;
    bVar54 = (char)bVar54 >> 7 & bVar71;
    bVar56 = (byte)iVar12 & bVar72;
    bVar58 = (byte)((uint)iVar12 >> 8) & bVar73;
    bVar60 = (byte)((uint)iVar12 >> 0x10) & bVar74;
    bVar62 = (char)bVar62 >> 7 & bVar75;
    bVar49 = (byte)iVar13 & bVar76;
    bVar51 = (byte)((uint)iVar13 >> 8) & bVar77;
    bVar53 = (byte)((uint)iVar13 >> 0x10) & bVar78;
    bVar55 = (char)bVar55 >> 7 & bVar79;
    bVar57 = (byte)iVar14 & bVar80;
    bVar59 = (byte)((uint)iVar14 >> 8) & bVar81;
    bVar61 = (byte)((uint)iVar14 >> 0x10) & bVar82;
    bVar63 = (char)bVar63 >> 7 & bVar83;
    auVar4[1] = bVar50;
    auVar4[0] = bVar48;
    auVar4[2] = bVar52;
    auVar4[3] = bVar54;
    auVar4[4] = bVar56;
    auVar4[5] = bVar58;
    auVar4[6] = bVar60;
    auVar4[7] = bVar62;
    auVar4[8] = bVar49;
    auVar4[9] = bVar51;
    auVar4[10] = bVar53;
    auVar4[0xb] = bVar55;
    auVar4[0xc] = bVar57;
    auVar4[0xd] = bVar59;
    auVar4[0xe] = bVar61;
    auVar4[0xf] = bVar63;
    auVar5[1] = bVar50;
    auVar5[0] = bVar48;
    auVar5[2] = bVar52;
    auVar5[3] = bVar54;
    auVar5[4] = bVar56;
    auVar5[5] = bVar58;
    auVar5[6] = bVar60;
    auVar5[7] = bVar62;
    auVar5[8] = bVar49;
    auVar5[9] = bVar51;
    auVar5[10] = bVar53;
    auVar5[0xb] = bVar55;
    auVar5[0xc] = bVar57;
    auVar5[0xd] = bVar59;
    auVar5[0xe] = bVar61;
    auVar5[0xf] = bVar63;
    auVar64 = NEON_ext(auVar4,auVar5,8,1);
    uVar2 = uVar1 & (CONCAT13(auVar22[3] | bVar43 | auVar22[7] | bVar47,
                              CONCAT12(auVar22[2] | bVar42 | auVar22[6] | bVar46,
                                       CONCAT11(auVar22[1] | bVar41 | auVar22[5] | bVar45,
                                                auVar22[0] | bVar40 | auVar22[4] | bVar44))) ^
                    0xffffffff) &
            CONCAT13(auVar64[3] | bVar54 | auVar64[7] | bVar62,
                     CONCAT12(auVar64[2] | bVar52 | auVar64[6] | bVar60,
                              CONCAT11(auVar64[1] | bVar50 | auVar64[5] | bVar58,
                                       auVar64[0] | bVar48 | auVar64[4] | bVar56))) | uVar2;
    if (uVar2 != uVar1) {
      fVar21 = (float)*(undefined8 *)(param_1 + 0x20) * fVar28 + fVar21 * param_1[0x24] +
               fVar32 * (float)*(undefined8 *)(param_1 + 0x28) +
               fVar65 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar29 +
               fVar25 * param_1[0x25] +
               fVar33 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
               fVar66 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar26 = (float)*(undefined8 *)(param_1 + 0x22) * fVar30 + fVar26 * param_1[0x26] +
               fVar34 * (float)*(undefined8 *)(param_1 + 0x2a) +
               fVar67 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar31 +
               fVar27 * param_1[0x27] +
               fVar35 * (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
               fVar68 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar40 = (char)((byte)((uint)(fVar65 - (fVar36 + fVar21)) >> 0x18) ^
                     (byte)((uint)fVar21 >> 0x18)) >> 7;
      auVar23[0] = bVar40 & bVar24;
      auVar23[1] = bVar40 & bVar69;
      auVar23[2] = bVar40 & bVar70;
      auVar23[3] = bVar40 & bVar71;
      bVar24 = (char)((byte)((uint)(fVar66 - (fVar37 + fVar25)) >> 0x18) ^
                     (byte)((uint)fVar25 >> 0x18)) >> 7;
      auVar23[4] = bVar24 & bVar72;
      auVar23[5] = bVar24 & bVar73;
      auVar23[6] = bVar24 & bVar74;
      auVar23[7] = bVar24 & bVar75;
      bVar24 = (char)((byte)((uint)(fVar67 - (fVar38 + fVar26)) >> 0x18) ^
                     (byte)((uint)fVar26 >> 0x18)) >> 7;
      auVar23[8] = bVar24 & bVar76;
      auVar23[9] = bVar24 & bVar77;
      auVar23[10] = bVar24 & bVar78;
      auVar23[0xb] = bVar24 & bVar79;
      bVar24 = (char)((byte)((uint)(fVar68 - (fVar39 + fVar35)) >> 0x18) ^
                     (byte)((uint)fVar35 >> 0x18)) >> 7;
      auVar23[0xc] = bVar24 & bVar80;
      auVar23[0xd] = bVar24 & bVar81;
      auVar23[0xe] = bVar24 & bVar82;
      auVar23[0xf] = bVar24 & bVar83;
      auVar22 = NEON_ext(auVar23,auVar23,8,1);
      uVar2 = CONCAT13(auVar22[3] | auVar23[3] | auVar22[7] | auVar23[7],
                       CONCAT12(auVar22[2] | auVar23[2] | auVar22[6] | auVar23[6],
                                CONCAT11(auVar22[1] | auVar23[1] | auVar22[5] | auVar23[5],
                                         auVar22[0] | auVar23[0] | auVar22[4] | auVar23[4]))) &
              uVar1 | uVar2;
      if (uVar2 != uVar1) {
        auVar6._4_4_ = fVar66;
        auVar6._0_4_ = fVar65;
        auVar6._8_4_ = fVar67;
        auVar6._12_4_ = fVar68;
        auVar22 = NEON_frecpe(auVar6,4);
        uVar1 = uVar1 & (uVar2 ^ 0xffffffff);
        auVar7._4_4_ = fVar66;
        auVar7._0_4_ = fVar65;
        auVar7._8_4_ = fVar67;
        auVar7._12_4_ = fVar68;
        auVar64 = NEON_frecps(auVar7,auVar22,4);
        if ((uVar1 & 1) != 0) {
          if (*(long *)(param_1 + 0x42) != 0) {
            lVar8 = FUN_0341cbd0(*(long *)(*(long *)(param_1 + 0x42) + 0x38) + 0x20,pauVar9,
                                 auStack_40);
            if (lVar8 != 0) goto LAB_03436918;
            fVar15 = param_1[0x3e];
          }
          fVar68 = (float)NEON_fminnm(auVar22._0_4_ * fVar17 * auVar64._0_4_,0x7f7fffff);
          if (fVar68 < fVar15) {
            param_1[0x3e] = fVar68;
            *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x42);
            param_1[0x4e] = param_1[0x32] + (float)*(undefined8 *)(param_1 + 0x36) * fVar68;
            param_1[0x4f] =
                 param_1[0x33] + (float)((ulong)*(undefined8 *)(param_1 + 0x36) >> 0x20) * fVar68;
            param_1[0x4c] = param_1[0x30] + (float)*(undefined8 *)(param_1 + 0x34) * fVar68;
            param_1[0x4d] =
                 param_1[0x31] + (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar68;
          }
        }
LAB_03436918:
        if (((uVar1 >> 1 & 1) != 0) &&
           (((*(long *)(param_1 + 0x44) == 0 ||
             (lVar8 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),
                                   *(long *)(*(long *)(param_1 + 0x44) + 0x38) + 0x20,pauVar9,
                                   auStack_40), lVar8 == 0)) &&
            (fVar68 = (float)NEON_fminnm(auVar22._4_4_ * fVar18 * auVar64._4_4_,0x7f7fffff),
            fVar68 < param_1[0x3e])))) {
          param_1[0x3e] = fVar68;
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x44);
          param_1[0x4e] = param_1[0x32] + (float)*(undefined8 *)(param_1 + 0x36) * fVar68;
          param_1[0x4f] =
               param_1[0x33] + (float)((ulong)*(undefined8 *)(param_1 + 0x36) >> 0x20) * fVar68;
          param_1[0x4c] = param_1[0x30] + (float)*(undefined8 *)(param_1 + 0x34) * fVar68;
          param_1[0x4d] =
               param_1[0x31] + (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar68;
        }
        if ((((uVar1 >> 2 & 1) != 0) &&
            ((*(long *)(param_1 + 0x46) == 0 ||
             (lVar8 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),
                                   *(long *)(*(long *)(param_1 + 0x46) + 0x38) + 0x20,pauVar9,
                                   auStack_40), lVar8 == 0)))) &&
           (fVar68 = (float)NEON_fminnm(auVar22._8_4_ * fVar19 * auVar64._8_4_,0x7f7fffff),
           fVar68 < param_1[0x3e])) {
          param_1[0x3e] = fVar68;
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x46);
          param_1[0x4e] = param_1[0x32] + (float)*(undefined8 *)(param_1 + 0x36) * fVar68;
          param_1[0x4f] =
               param_1[0x33] + (float)((ulong)*(undefined8 *)(param_1 + 0x36) >> 0x20) * fVar68;
          param_1[0x4c] = param_1[0x30] + (float)*(undefined8 *)(param_1 + 0x34) * fVar68;
          param_1[0x4d] =
               param_1[0x31] + (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar68;
        }
        if ((((uVar1 >> 3 & 1) != 0) &&
            ((*(long *)(param_1 + 0x48) == 0 ||
             (lVar8 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),
                                   *(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x20,pauVar9,
                                   auStack_40), lVar8 == 0)))) &&
           (fVar68 = (float)NEON_fminnm(auVar22._12_4_ * fVar20 * auVar64._12_4_,0x7f7fffff),
           fVar68 < param_1[0x3e])) {
          param_1[0x3e] = fVar68;
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
          param_1[0x4e] = param_1[0x32] + (float)*(undefined8 *)(param_1 + 0x36) * fVar68;
          param_1[0x4f] =
               param_1[0x33] + (float)((ulong)*(undefined8 *)(param_1 + 0x36) >> 0x20) * fVar68;
          param_1[0x4c] = param_1[0x30] + (float)*(undefined8 *)(param_1 + 0x34) * fVar68;
          param_1[0x4d] =
               param_1[0x31] + (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar68;
        }
        return *(long *)(param_1 + 0x40) != 0;
      }
    }
  }
  return false;
}


