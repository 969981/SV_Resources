/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342f4b0; name: FUN_0342f4b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0342f4b0(float *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  float *pfVar7;
  int iVar8;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  byte bVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
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
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
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
  undefined1 auStack_40 [16];
  
  if (((DAT_048af5b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048af5b0), iVar8 != 0)) {
    auVar15._8_4_ = 0x6ce3ee;
    auVar15._0_8_ = 0x6ce3ee006ce3ee;
    auVar15._12_4_ = 0x6ce3ee;
    uRam00000000048af5a8 = auVar15._8_8_;
    _DAT_048af5a0 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(&DAT_048af5b0);
  }
  pfVar7 = param_1 + 0x30;
  uVar28 = *(undefined8 *)(param_1 + 0x32);
  uVar26 = *(undefined8 *)pfVar7;
  auVar15 = *(undefined1 (*) [16])(param_1 + 4);
  fVar65 = param_1[0x34];
  fVar29 = param_1[0x35];
  fVar21 = param_1[0x36];
  fVar62 = *param_1 * fVar65 + auVar15._0_4_ * fVar29 + param_1[8] * fVar21;
  fVar63 = param_1[1] * fVar65 + auVar15._4_4_ * fVar29 + param_1[9] * fVar21;
  fVar64 = param_1[2] * fVar65 + auVar15._8_4_ * fVar29 + param_1[10] * fVar21;
  fVar65 = param_1[3] * fVar65 + auVar15._12_4_ * fVar29 + param_1[0xb] * fVar21;
  iVar8 = -(uint)(ABS(fVar62) < (float)_DAT_048af5a0);
  iVar11 = -(uint)(ABS(fVar63) < (float)((ulong)_DAT_048af5a0 >> 0x20));
  iVar12 = -(uint)(ABS(fVar64) < (float)uRam00000000048af5a8);
  iVar13 = -(uint)(ABS(fVar65) < (float)((ulong)uRam00000000048af5a8 >> 0x20));
  bVar18 = (byte)_DAT_03cab270;
  auVar61[0] = (byte)iVar8 & bVar18;
  bVar66 = (byte)((ulong)_DAT_03cab270 >> 8);
  auVar61[1] = (byte)((uint)iVar8 >> 8) & bVar66;
  bVar67 = (byte)((ulong)_DAT_03cab270 >> 0x10);
  auVar61[2] = (byte)((uint)iVar8 >> 0x10) & bVar67;
  bVar68 = (byte)((ulong)_DAT_03cab270 >> 0x18);
  auVar61[3] = (byte)((uint)iVar8 >> 0x18) & bVar68;
  bVar69 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  auVar61[4] = (byte)iVar11 & bVar69;
  bVar70 = (byte)((ulong)_DAT_03cab270 >> 0x28);
  auVar61[5] = (byte)((uint)iVar11 >> 8) & bVar70;
  bVar71 = (byte)((ulong)_DAT_03cab270 >> 0x30);
  auVar61[6] = (byte)((uint)iVar11 >> 0x10) & bVar71;
  bVar72 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  auVar61[7] = (byte)((uint)iVar11 >> 0x18) & bVar72;
  bVar73 = (byte)_UNK_03cab278;
  auVar61[8] = (byte)iVar12 & bVar73;
  bVar74 = (byte)((ulong)_UNK_03cab278 >> 8);
  auVar61[9] = (byte)((uint)iVar12 >> 8) & bVar74;
  bVar75 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar61[10] = (byte)((uint)iVar12 >> 0x10) & bVar75;
  bVar76 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar61[0xb] = (byte)((uint)iVar12 >> 0x18) & bVar76;
  bVar77 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar61[0xc] = (byte)iVar13 & bVar77;
  bVar78 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar61[0xd] = (byte)((uint)iVar13 >> 8) & bVar78;
  bVar79 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar61[0xe] = (byte)((uint)iVar13 >> 0x10) & bVar79;
  bVar80 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  auVar61[0xf] = (byte)((uint)iVar13 >> 0x18) & bVar80;
  auVar15 = NEON_ext(auVar61,auVar61,8,1);
  if (((DAT_048af5d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048af5d0), iVar8 != 0)) {
    auVar9 = NEON_fmov(0xbf800000,4);
    uRam00000000048af5c8 = auVar9._8_8_;
    _DAT_048af5c0 = auVar9._0_8_;
    __cxa_guard_release(&DAT_048af5d0);
  }
  fVar29 = (float)uVar26;
  fVar21 = (float)((ulong)uVar26 >> 0x20);
  uVar27 = (undefined4)uVar28;
  auVar9._0_8_ = CONCAT44(uVar27,uVar27);
  auVar9._8_4_ = uVar27;
  auVar9._12_4_ = uVar27;
  if ((DAT_048af5f0 & 1) == 0) {
    uVar26 = auVar9._8_8_;
    iVar8 = __cxa_guard_acquire(&DAT_048af5f0);
    auVar9._8_8_ = uVar26;
    if (iVar8 != 0) {
      auVar10 = NEON_fmov(0x3f800000,4);
      uRam00000000048af5e8 = auVar10._8_8_;
      _DAT_048af5e0 = auVar10._0_8_;
      __cxa_guard_release(&DAT_048af5f0);
    }
  }
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x39] & 0x1f);
  fVar30 = (float)_DAT_048af5e0 * (float)*(undefined8 *)(param_1 + 0xc) +
           _DAT_048af5c0 *
           (*param_1 * fVar29 + fVar21 * param_1[4] +
           auVar9._0_4_ * (float)*(undefined8 *)(param_1 + 8));
  fVar31 = (float)((ulong)_DAT_048af5e0 >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
           DAT_048af5c0_4 *
           (param_1[1] * fVar29 + fVar21 * param_1[5] +
           auVar9._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar33 = (float)uRam00000000048af5e8 * (float)*(undefined8 *)(param_1 + 0xe) +
           (float)uRam00000000048af5c8 *
           (param_1[2] * fVar29 + fVar21 * param_1[6] +
           auVar9._8_4_ * (float)*(undefined8 *)(param_1 + 10));
  fVar35 = (float)((ulong)uRam00000000048af5e8 >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           uRam00000000048af5c8._4_4_ *
           (param_1[3] * fVar29 + fVar21 * param_1[7] +
           auVar9._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar37 = (char)((byte)((uint)(fVar62 - fVar30) >> 0x18) ^ (byte)((uint)fVar30 >> 0x18)) >> 7;
  auVar10[0] = bVar37 & bVar18;
  auVar10[1] = bVar37 & bVar66;
  auVar10[2] = bVar37 & bVar67;
  auVar10[3] = bVar37 & bVar68;
  bVar37 = (char)((byte)((uint)(fVar63 - fVar31) >> 0x18) ^ (byte)((uint)fVar31 >> 0x18)) >> 7;
  auVar10[4] = bVar37 & bVar69;
  auVar10[5] = bVar37 & bVar70;
  auVar10[6] = bVar37 & bVar71;
  auVar10[7] = bVar37 & bVar72;
  bVar37 = (char)((byte)((uint)(fVar64 - fVar33) >> 0x18) ^ (byte)((uint)fVar33 >> 0x18)) >> 7;
  auVar10[8] = bVar37 & bVar73;
  auVar10[9] = bVar37 & bVar74;
  auVar10[10] = bVar37 & bVar75;
  auVar10[0xb] = bVar37 & bVar76;
  bVar37 = (char)((byte)((uint)(fVar65 - fVar35) >> 0x18) ^ (byte)((uint)fVar35 >> 0x18)) >> 7;
  auVar10[0xc] = bVar37 & bVar77;
  auVar10[0xd] = bVar37 & bVar78;
  auVar10[0xe] = bVar37 & bVar79;
  auVar10[0xf] = bVar37 & bVar80;
  auVar16 = NEON_ext(auVar10,auVar10,8,1);
  uVar2 = CONCAT13(auVar15[3] | auVar61[3] | auVar15[7] | auVar61[7],
                   CONCAT12(auVar15[2] | auVar61[2] | auVar15[6] | auVar61[6],
                            CONCAT11(auVar15[1] | auVar61[1] | auVar15[5] | auVar61[5],
                                     auVar15[0] | auVar61[0] | auVar15[4] | auVar61[4]))) |
          CONCAT13(auVar16[3] | auVar10[3] | auVar16[7] | auVar10[7],
                   CONCAT12(auVar16[2] | auVar10[2] | auVar16[6] | auVar10[6],
                            CONCAT11(auVar16[1] | auVar10[1] | auVar16[5] | auVar10[5],
                                     auVar16[0] | auVar10[0] | auVar16[4] | auVar10[4]))) & uVar1;
  if (uVar2 != uVar1) {
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar14 = auVar15._0_4_;
    fVar22 = fVar62 * fVar29 + fVar30 * fVar14;
    fVar23 = fVar63 * fVar29 + fVar31 * fVar14;
    fVar24 = fVar64 * fVar29 + fVar33 * fVar14;
    fVar25 = fVar65 * fVar29 + fVar35 * fVar14;
    fVar29 = auVar15._4_4_;
    fVar14 = fVar62 * fVar21 + fVar30 * fVar29;
    fVar19 = fVar63 * fVar21 + fVar31 * fVar29;
    fVar20 = fVar64 * fVar21 + fVar33 * fVar29;
    fVar21 = fVar65 * fVar21 + fVar35 * fVar29;
    fVar29 = auVar15._8_4_;
    fVar30 = fVar62 * auVar9._0_4_ + fVar30 * fVar29;
    fVar31 = fVar63 * auVar9._4_4_ + fVar31 * fVar29;
    fVar33 = fVar64 * auVar9._8_4_ + fVar33 * fVar29;
    fVar29 = fVar65 * auVar9._12_4_ + fVar35 * fVar29;
    fVar35 = fVar22 * (float)*(undefined8 *)(param_1 + 0x10) +
             (float)*(undefined8 *)(param_1 + 0x14) * fVar14 + param_1[0x18] * fVar30 +
             fVar62 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar32 = fVar23 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar19 +
             param_1[0x19] * fVar31 +
             fVar63 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar34 = fVar24 * (float)*(undefined8 *)(param_1 + 0x12) +
             (float)*(undefined8 *)(param_1 + 0x16) * fVar20 + param_1[0x1a] * fVar33 +
             fVar64 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar36 = fVar25 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar21 +
             param_1[0x1b] * fVar29 +
             fVar65 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar8 = -(uint)(fVar35 == 0.0);
    iVar11 = -(uint)(fVar32 == 0.0);
    iVar12 = -(uint)(fVar34 == 0.0);
    iVar13 = -(uint)(fVar36 == 0.0);
    bVar37 = (byte)iVar8 & bVar18;
    bVar38 = (byte)((uint)iVar8 >> 8) & bVar66;
    bVar39 = (byte)((uint)iVar8 >> 0x10) & bVar67;
    bVar40 = (byte)((uint)iVar8 >> 0x18) & bVar68;
    bVar41 = (byte)iVar11 & bVar69;
    bVar42 = (byte)((uint)iVar11 >> 8) & bVar70;
    bVar43 = (byte)((uint)iVar11 >> 0x10) & bVar71;
    bVar44 = (byte)((uint)iVar11 >> 0x18) & bVar72;
    bVar45 = (byte)iVar12 & bVar73;
    bVar47 = (byte)((uint)iVar12 >> 8) & bVar74;
    bVar49 = (byte)((uint)iVar12 >> 0x10) & bVar75;
    bVar51 = (byte)((uint)iVar12 >> 0x18) & bVar76;
    bVar53 = (byte)iVar13 & bVar77;
    bVar55 = (byte)((uint)iVar13 >> 8) & bVar78;
    bVar57 = (byte)((uint)iVar13 >> 0x10) & bVar79;
    bVar59 = (byte)((uint)iVar13 >> 0x18) & bVar80;
    auVar16[1] = bVar38;
    auVar16[0] = bVar37;
    auVar16[2] = bVar39;
    auVar16[3] = bVar40;
    auVar16[4] = bVar41;
    auVar16[5] = bVar42;
    auVar16[6] = bVar43;
    auVar16[7] = bVar44;
    auVar16[8] = bVar45;
    auVar16[9] = bVar47;
    auVar16[10] = bVar49;
    auVar16[0xb] = bVar51;
    auVar16[0xc] = bVar53;
    auVar16[0xd] = bVar55;
    auVar16[0xe] = bVar57;
    auVar16[0xf] = bVar59;
    auVar3[1] = bVar38;
    auVar3[0] = bVar37;
    auVar3[2] = bVar39;
    auVar3[3] = bVar40;
    auVar3[4] = bVar41;
    auVar3[5] = bVar42;
    auVar3[6] = bVar43;
    auVar3[7] = bVar44;
    auVar3[8] = bVar45;
    auVar3[9] = bVar47;
    auVar3[10] = bVar49;
    auVar3[0xb] = bVar51;
    auVar3[0xc] = bVar53;
    auVar3[0xd] = bVar55;
    auVar3[0xe] = bVar57;
    auVar3[0xf] = bVar59;
    auVar15 = NEON_ext(auVar16,auVar3,8,1);
    bVar51 = (byte)((uint)(fVar62 - fVar35) >> 0x18) ^ (byte)((uint)fVar35 >> 0x18);
    bVar59 = (byte)((uint)(fVar63 - fVar32) >> 0x18) ^ (byte)((uint)fVar32 >> 0x18);
    bVar52 = (byte)((uint)(fVar64 - fVar34) >> 0x18) ^ (byte)((uint)fVar34 >> 0x18);
    bVar60 = (byte)((uint)(fVar65 - fVar36) >> 0x18) ^ (byte)((uint)fVar36 >> 0x18);
    iVar8 = (int)(char)bVar51 >> 7;
    iVar11 = (int)(char)bVar59 >> 7;
    iVar12 = (int)(char)bVar52 >> 7;
    iVar13 = (int)(char)bVar60 >> 7;
    bVar45 = (byte)iVar8 & bVar18;
    bVar47 = (byte)((uint)iVar8 >> 8) & bVar66;
    bVar49 = (byte)((uint)iVar8 >> 0x10) & bVar67;
    bVar51 = (char)bVar51 >> 7 & bVar68;
    bVar53 = (byte)iVar11 & bVar69;
    bVar55 = (byte)((uint)iVar11 >> 8) & bVar70;
    bVar57 = (byte)((uint)iVar11 >> 0x10) & bVar71;
    bVar59 = (char)bVar59 >> 7 & bVar72;
    bVar46 = (byte)iVar12 & bVar73;
    bVar48 = (byte)((uint)iVar12 >> 8) & bVar74;
    bVar50 = (byte)((uint)iVar12 >> 0x10) & bVar75;
    bVar52 = (char)bVar52 >> 7 & bVar76;
    bVar54 = (byte)iVar13 & bVar77;
    bVar56 = (byte)((uint)iVar13 >> 8) & bVar78;
    bVar58 = (byte)((uint)iVar13 >> 0x10) & bVar79;
    bVar60 = (char)bVar60 >> 7 & bVar80;
    auVar4[1] = bVar47;
    auVar4[0] = bVar45;
    auVar4[2] = bVar49;
    auVar4[3] = bVar51;
    auVar4[4] = bVar53;
    auVar4[5] = bVar55;
    auVar4[6] = bVar57;
    auVar4[7] = bVar59;
    auVar4[8] = bVar46;
    auVar4[9] = bVar48;
    auVar4[10] = bVar50;
    auVar4[0xb] = bVar52;
    auVar4[0xc] = bVar54;
    auVar4[0xd] = bVar56;
    auVar4[0xe] = bVar58;
    auVar4[0xf] = bVar60;
    auVar5[1] = bVar47;
    auVar5[0] = bVar45;
    auVar5[2] = bVar49;
    auVar5[3] = bVar51;
    auVar5[4] = bVar53;
    auVar5[5] = bVar55;
    auVar5[6] = bVar57;
    auVar5[7] = bVar59;
    auVar5[8] = bVar46;
    auVar5[9] = bVar48;
    auVar5[10] = bVar50;
    auVar5[0xb] = bVar52;
    auVar5[0xc] = bVar54;
    auVar5[0xd] = bVar56;
    auVar5[0xe] = bVar58;
    auVar5[0xf] = bVar60;
    auVar61 = NEON_ext(auVar4,auVar5,8,1);
    uVar2 = uVar1 & (CONCAT13(auVar15[3] | bVar40 | auVar15[7] | bVar44,
                              CONCAT12(auVar15[2] | bVar39 | auVar15[6] | bVar43,
                                       CONCAT11(auVar15[1] | bVar38 | auVar15[5] | bVar42,
                                                auVar15[0] | bVar37 | auVar15[4] | bVar41))) ^
                    0xffffffff) &
            CONCAT13(auVar61[3] | bVar51 | auVar61[7] | bVar59,
                     CONCAT12(auVar61[2] | bVar49 | auVar61[6] | bVar57,
                              CONCAT11(auVar61[1] | bVar47 | auVar61[5] | bVar55,
                                       auVar61[0] | bVar45 | auVar61[4] | bVar53))) | uVar2;
    if (uVar2 != uVar1) {
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x24);
      fVar30 = (float)*(undefined8 *)(param_1 + 0x20) * fVar22 + fVar14 * auVar15._0_4_ +
               fVar30 * (float)*(undefined8 *)(param_1 + 0x28) +
               fVar62 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar23 +
               fVar19 * auVar15._4_4_ +
               fVar31 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
               fVar63 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_1 + 0x22) * fVar24 + fVar20 * auVar15._8_4_ +
               fVar33 * (float)*(undefined8 *)(param_1 + 0x2a) +
               fVar64 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar25 +
               fVar21 * auVar15._12_4_ +
               fVar29 * (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
               fVar65 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar37 = (char)((byte)((uint)(fVar62 - (fVar35 + fVar30)) >> 0x18) ^
                     (byte)((uint)fVar30 >> 0x18)) >> 7;
      auVar17[0] = bVar37 & bVar18;
      auVar17[1] = bVar37 & bVar66;
      auVar17[2] = bVar37 & bVar67;
      auVar17[3] = bVar37 & bVar68;
      bVar18 = (char)((byte)((uint)(fVar63 - (fVar32 + fVar31)) >> 0x18) ^
                     (byte)((uint)fVar31 >> 0x18)) >> 7;
      auVar17[4] = bVar18 & bVar69;
      auVar17[5] = bVar18 & bVar70;
      auVar17[6] = bVar18 & bVar71;
      auVar17[7] = bVar18 & bVar72;
      bVar18 = (char)((byte)((uint)(fVar64 - (fVar34 + fVar33)) >> 0x18) ^
                     (byte)((uint)fVar33 >> 0x18)) >> 7;
      auVar17[8] = bVar18 & bVar73;
      auVar17[9] = bVar18 & bVar74;
      auVar17[10] = bVar18 & bVar75;
      auVar17[0xb] = bVar18 & bVar76;
      bVar18 = (char)((byte)((uint)(fVar65 - (fVar36 + fVar29)) >> 0x18) ^
                     (byte)((uint)fVar29 >> 0x18)) >> 7;
      auVar17[0xc] = bVar18 & bVar77;
      auVar17[0xd] = bVar18 & bVar78;
      auVar17[0xe] = bVar18 & bVar79;
      auVar17[0xf] = bVar18 & bVar80;
      auVar15 = NEON_ext(auVar17,auVar17,8,1);
      uVar2 = CONCAT13(auVar15[3] | auVar17[3] | auVar15[7] | auVar17[7],
                       CONCAT12(auVar15[2] | auVar17[2] | auVar15[6] | auVar17[6],
                                CONCAT11(auVar15[1] | auVar17[1] | auVar15[5] | auVar17[5],
                                         auVar15[0] | auVar17[0] | auVar15[4] | auVar17[4]))) &
              uVar1 | uVar2;
      if ((uVar2 != uVar1) &&
         (((((uVar1 = uVar1 & (uVar2 ^ 0xffffffff), (uVar1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x3a) == 0 ||
              (lVar6 = FUN_0341cbd0(*(long *)(param_1 + 0x3a),pfVar7,auStack_40), lVar6 == 0)))) ||
            (((uVar1 >> 1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x3c) == 0 ||
              (lVar6 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x3c)
                                    ,pfVar7,auStack_40), lVar6 == 0)))))) ||
           (((uVar1 >> 2 & 1) != 0 &&
            ((*(long *)(param_1 + 0x3e) == 0 ||
             (lVar6 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x3e),
                                   pfVar7,auStack_40), lVar6 == 0)))))) ||
          (((uVar1 >> 3 & 1) != 0 &&
           ((*(long *)(param_1 + 0x40) == 0 ||
            (lVar6 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x40),
                                  pfVar7,auStack_40), lVar6 == 0)))))))) {
        return 1;
      }
    }
  }
  return 0;
}


