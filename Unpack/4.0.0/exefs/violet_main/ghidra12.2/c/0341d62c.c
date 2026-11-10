/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341d62c; name: FUN_0341d62c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0341d62c(float *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  byte bVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar23;
  undefined1 auVar19 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
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
  byte bVar61;
  byte bVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
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
  byte bVar81;
  byte bVar82;
  undefined1 auStack_40 [16];
  
  puVar6 = PTR_DAT_047e6e18;
  if (((*PTR_DAT_047e6e10 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047e6e10), iVar10 != 0)) {
    auVar17._8_4_ = 0x6ce3ee;
    auVar17._0_8_ = 0x6ce3ee006ce3ee;
    auVar17._12_4_ = 0x6ce3ee;
    *(long *)(puVar6 + 8) = auVar17._8_8_;
    *(undefined8 *)puVar6 = 0x6ce3ee006ce3ee;
    __cxa_guard_release(PTR_DAT_047e6e10);
  }
  pfVar8 = (float *)PTR_DAT_047e6e28;
  pfVar9 = param_1 + 0x30;
  uVar30 = *(undefined8 *)(param_1 + 0x32);
  uVar28 = *(undefined8 *)pfVar9;
  auVar17 = *(undefined1 (*) [16])(param_1 + 4);
  fVar67 = param_1[0x34];
  fVar31 = param_1[0x35];
  fVar23 = param_1[0x36];
  fVar64 = *param_1 * fVar67 + auVar17._0_4_ * fVar31 + param_1[8] * fVar23;
  fVar65 = param_1[1] * fVar67 + auVar17._4_4_ * fVar31 + param_1[9] * fVar23;
  fVar66 = param_1[2] * fVar67 + auVar17._8_4_ * fVar31 + param_1[10] * fVar23;
  fVar67 = param_1[3] * fVar67 + auVar17._12_4_ * fVar31 + param_1[0xb] * fVar23;
  iVar10 = -(uint)(ABS(fVar64) < *(float *)puVar6);
  iVar13 = -(uint)(ABS(fVar65) < *(float *)(puVar6 + 4));
  iVar14 = -(uint)(ABS(fVar66) < *(float *)(puVar6 + 8));
  iVar15 = -(uint)(ABS(fVar67) < *(float *)(puVar6 + 0xc));
  bVar20 = (byte)_DAT_03cab270;
  auVar63[0] = (byte)iVar10 & bVar20;
  bVar68 = (byte)((ulong)_DAT_03cab270 >> 8);
  auVar63[1] = (byte)((uint)iVar10 >> 8) & bVar68;
  bVar69 = (byte)((ulong)_DAT_03cab270 >> 0x10);
  auVar63[2] = (byte)((uint)iVar10 >> 0x10) & bVar69;
  bVar70 = (byte)((ulong)_DAT_03cab270 >> 0x18);
  auVar63[3] = (byte)((uint)iVar10 >> 0x18) & bVar70;
  bVar71 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  auVar63[4] = (byte)iVar13 & bVar71;
  bVar72 = (byte)((ulong)_DAT_03cab270 >> 0x28);
  auVar63[5] = (byte)((uint)iVar13 >> 8) & bVar72;
  bVar73 = (byte)((ulong)_DAT_03cab270 >> 0x30);
  auVar63[6] = (byte)((uint)iVar13 >> 0x10) & bVar73;
  bVar74 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  auVar63[7] = (byte)((uint)iVar13 >> 0x18) & bVar74;
  bVar75 = (byte)_UNK_03cab278;
  auVar63[8] = (byte)iVar14 & bVar75;
  bVar76 = (byte)((ulong)_UNK_03cab278 >> 8);
  auVar63[9] = (byte)((uint)iVar14 >> 8) & bVar76;
  bVar77 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar63[10] = (byte)((uint)iVar14 >> 0x10) & bVar77;
  bVar78 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar63[0xb] = (byte)((uint)iVar14 >> 0x18) & bVar78;
  bVar79 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar63[0xc] = (byte)iVar15 & bVar79;
  bVar80 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar63[0xd] = (byte)((uint)iVar15 >> 8) & bVar80;
  bVar81 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar63[0xe] = (byte)((uint)iVar15 >> 0x10) & bVar81;
  bVar82 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  auVar63[0xf] = (byte)((uint)iVar15 >> 0x18) & bVar82;
  auVar17 = NEON_ext(auVar63,auVar63,8,1);
  if (((*PTR_DAT_047e6e20 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047e6e20), iVar10 != 0)) {
    auVar11 = NEON_fmov(0xbf800000,4);
    *(long *)((long)pfVar8 + 8) = auVar11._8_8_;
    *(long *)pfVar8 = auVar11._0_8_;
    __cxa_guard_release(PTR_DAT_047e6e20);
  }
  fVar31 = (float)uVar28;
  fVar23 = (float)((ulong)uVar28 >> 0x20);
  uVar29 = (undefined4)uVar30;
  auVar11._0_8_ = CONCAT44(uVar29,uVar29);
  auVar11._8_4_ = uVar29;
  auVar11._12_4_ = uVar29;
  if ((*PTR_DAT_047e6e30 & 1) == 0) {
    uVar28 = auVar11._8_8_;
    iVar10 = __cxa_guard_acquire(PTR_DAT_047e6e30);
    puVar6 = PTR_DAT_047e6e38;
    auVar11._8_8_ = uVar28;
    pfVar8 = (float *)PTR_DAT_047e6e28;
    if (iVar10 != 0) {
      auVar12 = NEON_fmov(0x3f800000,4);
      *(long *)(PTR_DAT_047e6e38 + 8) = auVar12._8_8_;
      *(long *)puVar6 = auVar12._0_8_;
      __cxa_guard_release(PTR_DAT_047e6e30);
      pfVar8 = (float *)PTR_DAT_047e6e28;
    }
  }
  uVar1 = 0xf >> (ulong)(4U - (int)param_1[0x3e] & 0x1f);
  fVar32 = (float)*(undefined8 *)PTR_DAT_047e6e38 * (float)*(undefined8 *)(param_1 + 0xc) +
           *pfVar8 * (*param_1 * fVar31 + fVar23 * param_1[4] +
                     auVar11._0_4_ * (float)*(undefined8 *)(param_1 + 8));
  fVar33 = (float)((ulong)*(undefined8 *)PTR_DAT_047e6e38 >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
           pfVar8[1] *
           (param_1[1] * fVar31 + fVar23 * param_1[5] +
           auVar11._4_4_ * (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  fVar35 = (float)*(undefined8 *)(PTR_DAT_047e6e38 + 8) * (float)*(undefined8 *)(param_1 + 0xe) +
           pfVar8[2] *
           (param_1[2] * fVar31 + fVar23 * param_1[6] +
           auVar11._8_4_ * (float)*(undefined8 *)(param_1 + 10));
  fVar37 = (float)((ulong)*(undefined8 *)(PTR_DAT_047e6e38 + 8) >> 0x20) *
           (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) +
           pfVar8[3] *
           (param_1[3] * fVar31 + fVar23 * param_1[7] +
           auVar11._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20));
  bVar39 = (char)((byte)((uint)(fVar64 - fVar32) >> 0x18) ^ (byte)((uint)fVar32 >> 0x18)) >> 7;
  auVar12[0] = bVar39 & bVar20;
  auVar12[1] = bVar39 & bVar68;
  auVar12[2] = bVar39 & bVar69;
  auVar12[3] = bVar39 & bVar70;
  bVar39 = (char)((byte)((uint)(fVar65 - fVar33) >> 0x18) ^ (byte)((uint)fVar33 >> 0x18)) >> 7;
  auVar12[4] = bVar39 & bVar71;
  auVar12[5] = bVar39 & bVar72;
  auVar12[6] = bVar39 & bVar73;
  auVar12[7] = bVar39 & bVar74;
  bVar39 = (char)((byte)((uint)(fVar66 - fVar35) >> 0x18) ^ (byte)((uint)fVar35 >> 0x18)) >> 7;
  auVar12[8] = bVar39 & bVar75;
  auVar12[9] = bVar39 & bVar76;
  auVar12[10] = bVar39 & bVar77;
  auVar12[0xb] = bVar39 & bVar78;
  bVar39 = (char)((byte)((uint)(fVar67 - fVar37) >> 0x18) ^ (byte)((uint)fVar37 >> 0x18)) >> 7;
  auVar12[0xc] = bVar39 & bVar79;
  auVar12[0xd] = bVar39 & bVar80;
  auVar12[0xe] = bVar39 & bVar81;
  auVar12[0xf] = bVar39 & bVar82;
  auVar18 = NEON_ext(auVar12,auVar12,8,1);
  uVar2 = CONCAT13(auVar17[3] | auVar63[3] | auVar17[7] | auVar63[7],
                   CONCAT12(auVar17[2] | auVar63[2] | auVar17[6] | auVar63[6],
                            CONCAT11(auVar17[1] | auVar63[1] | auVar17[5] | auVar63[5],
                                     auVar17[0] | auVar63[0] | auVar17[4] | auVar63[4]))) |
          CONCAT13(auVar18[3] | auVar12[3] | auVar18[7] | auVar12[7],
                   CONCAT12(auVar18[2] | auVar12[2] | auVar18[6] | auVar12[6],
                            CONCAT11(auVar18[1] | auVar12[1] | auVar18[5] | auVar12[5],
                                     auVar18[0] | auVar12[0] | auVar18[4] | auVar12[4]))) & uVar1;
  if (uVar2 != uVar1) {
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x34);
    fVar16 = auVar17._0_4_;
    fVar24 = fVar64 * fVar31 + fVar32 * fVar16;
    fVar25 = fVar65 * fVar31 + fVar33 * fVar16;
    fVar26 = fVar66 * fVar31 + fVar35 * fVar16;
    fVar27 = fVar67 * fVar31 + fVar37 * fVar16;
    fVar31 = auVar17._4_4_;
    fVar16 = fVar64 * fVar23 + fVar32 * fVar31;
    fVar21 = fVar65 * fVar23 + fVar33 * fVar31;
    fVar22 = fVar66 * fVar23 + fVar35 * fVar31;
    fVar23 = fVar67 * fVar23 + fVar37 * fVar31;
    fVar31 = auVar17._8_4_;
    fVar32 = fVar64 * auVar11._0_4_ + fVar32 * fVar31;
    fVar33 = fVar65 * auVar11._4_4_ + fVar33 * fVar31;
    fVar35 = fVar66 * auVar11._8_4_ + fVar35 * fVar31;
    fVar31 = fVar67 * auVar11._12_4_ + fVar37 * fVar31;
    fVar37 = fVar24 * (float)*(undefined8 *)(param_1 + 0x10) +
             (float)*(undefined8 *)(param_1 + 0x14) * fVar16 + param_1[0x18] * fVar32 +
             fVar64 * (float)*(undefined8 *)(param_1 + 0x1c);
    fVar34 = fVar25 * (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) * fVar21 +
             param_1[0x19] * fVar33 +
             fVar65 * (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    fVar36 = fVar26 * (float)*(undefined8 *)(param_1 + 0x12) +
             (float)*(undefined8 *)(param_1 + 0x16) * fVar22 + param_1[0x1a] * fVar35 +
             fVar66 * (float)*(undefined8 *)(param_1 + 0x1e);
    fVar38 = fVar27 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20) * fVar23 +
             param_1[0x1b] * fVar31 +
             fVar67 * (float)((ulong)*(undefined8 *)(param_1 + 0x1e) >> 0x20);
    iVar10 = -(uint)(fVar37 == 0.0);
    iVar13 = -(uint)(fVar34 == 0.0);
    iVar14 = -(uint)(fVar36 == 0.0);
    iVar15 = -(uint)(fVar38 == 0.0);
    bVar39 = (byte)iVar10 & bVar20;
    bVar40 = (byte)((uint)iVar10 >> 8) & bVar68;
    bVar41 = (byte)((uint)iVar10 >> 0x10) & bVar69;
    bVar42 = (byte)((uint)iVar10 >> 0x18) & bVar70;
    bVar43 = (byte)iVar13 & bVar71;
    bVar44 = (byte)((uint)iVar13 >> 8) & bVar72;
    bVar45 = (byte)((uint)iVar13 >> 0x10) & bVar73;
    bVar46 = (byte)((uint)iVar13 >> 0x18) & bVar74;
    bVar47 = (byte)iVar14 & bVar75;
    bVar49 = (byte)((uint)iVar14 >> 8) & bVar76;
    bVar51 = (byte)((uint)iVar14 >> 0x10) & bVar77;
    bVar53 = (byte)((uint)iVar14 >> 0x18) & bVar78;
    bVar55 = (byte)iVar15 & bVar79;
    bVar57 = (byte)((uint)iVar15 >> 8) & bVar80;
    bVar59 = (byte)((uint)iVar15 >> 0x10) & bVar81;
    bVar61 = (byte)((uint)iVar15 >> 0x18) & bVar82;
    auVar18[1] = bVar40;
    auVar18[0] = bVar39;
    auVar18[2] = bVar41;
    auVar18[3] = bVar42;
    auVar18[4] = bVar43;
    auVar18[5] = bVar44;
    auVar18[6] = bVar45;
    auVar18[7] = bVar46;
    auVar18[8] = bVar47;
    auVar18[9] = bVar49;
    auVar18[10] = bVar51;
    auVar18[0xb] = bVar53;
    auVar18[0xc] = bVar55;
    auVar18[0xd] = bVar57;
    auVar18[0xe] = bVar59;
    auVar18[0xf] = bVar61;
    auVar3[1] = bVar40;
    auVar3[0] = bVar39;
    auVar3[2] = bVar41;
    auVar3[3] = bVar42;
    auVar3[4] = bVar43;
    auVar3[5] = bVar44;
    auVar3[6] = bVar45;
    auVar3[7] = bVar46;
    auVar3[8] = bVar47;
    auVar3[9] = bVar49;
    auVar3[10] = bVar51;
    auVar3[0xb] = bVar53;
    auVar3[0xc] = bVar55;
    auVar3[0xd] = bVar57;
    auVar3[0xe] = bVar59;
    auVar3[0xf] = bVar61;
    auVar17 = NEON_ext(auVar18,auVar3,8,1);
    bVar53 = (byte)((uint)(fVar64 - fVar37) >> 0x18) ^ (byte)((uint)fVar37 >> 0x18);
    bVar61 = (byte)((uint)(fVar65 - fVar34) >> 0x18) ^ (byte)((uint)fVar34 >> 0x18);
    bVar54 = (byte)((uint)(fVar66 - fVar36) >> 0x18) ^ (byte)((uint)fVar36 >> 0x18);
    bVar62 = (byte)((uint)(fVar67 - fVar38) >> 0x18) ^ (byte)((uint)fVar38 >> 0x18);
    iVar10 = (int)(char)bVar53 >> 7;
    iVar13 = (int)(char)bVar61 >> 7;
    iVar14 = (int)(char)bVar54 >> 7;
    iVar15 = (int)(char)bVar62 >> 7;
    bVar47 = (byte)iVar10 & bVar20;
    bVar49 = (byte)((uint)iVar10 >> 8) & bVar68;
    bVar51 = (byte)((uint)iVar10 >> 0x10) & bVar69;
    bVar53 = (char)bVar53 >> 7 & bVar70;
    bVar55 = (byte)iVar13 & bVar71;
    bVar57 = (byte)((uint)iVar13 >> 8) & bVar72;
    bVar59 = (byte)((uint)iVar13 >> 0x10) & bVar73;
    bVar61 = (char)bVar61 >> 7 & bVar74;
    bVar48 = (byte)iVar14 & bVar75;
    bVar50 = (byte)((uint)iVar14 >> 8) & bVar76;
    bVar52 = (byte)((uint)iVar14 >> 0x10) & bVar77;
    bVar54 = (char)bVar54 >> 7 & bVar78;
    bVar56 = (byte)iVar15 & bVar79;
    bVar58 = (byte)((uint)iVar15 >> 8) & bVar80;
    bVar60 = (byte)((uint)iVar15 >> 0x10) & bVar81;
    bVar62 = (char)bVar62 >> 7 & bVar82;
    auVar4[1] = bVar49;
    auVar4[0] = bVar47;
    auVar4[2] = bVar51;
    auVar4[3] = bVar53;
    auVar4[4] = bVar55;
    auVar4[5] = bVar57;
    auVar4[6] = bVar59;
    auVar4[7] = bVar61;
    auVar4[8] = bVar48;
    auVar4[9] = bVar50;
    auVar4[10] = bVar52;
    auVar4[0xb] = bVar54;
    auVar4[0xc] = bVar56;
    auVar4[0xd] = bVar58;
    auVar4[0xe] = bVar60;
    auVar4[0xf] = bVar62;
    auVar5[1] = bVar49;
    auVar5[0] = bVar47;
    auVar5[2] = bVar51;
    auVar5[3] = bVar53;
    auVar5[4] = bVar55;
    auVar5[5] = bVar57;
    auVar5[6] = bVar59;
    auVar5[7] = bVar61;
    auVar5[8] = bVar48;
    auVar5[9] = bVar50;
    auVar5[10] = bVar52;
    auVar5[0xb] = bVar54;
    auVar5[0xc] = bVar56;
    auVar5[0xd] = bVar58;
    auVar5[0xe] = bVar60;
    auVar5[0xf] = bVar62;
    auVar63 = NEON_ext(auVar4,auVar5,8,1);
    uVar2 = uVar1 & (CONCAT13(auVar17[3] | bVar42 | auVar17[7] | bVar46,
                              CONCAT12(auVar17[2] | bVar41 | auVar17[6] | bVar45,
                                       CONCAT11(auVar17[1] | bVar40 | auVar17[5] | bVar44,
                                                auVar17[0] | bVar39 | auVar17[4] | bVar43))) ^
                    0xffffffff) &
            CONCAT13(auVar63[3] | bVar53 | auVar63[7] | bVar61,
                     CONCAT12(auVar63[2] | bVar51 | auVar63[6] | bVar59,
                              CONCAT11(auVar63[1] | bVar49 | auVar63[5] | bVar57,
                                       auVar63[0] | bVar47 | auVar63[4] | bVar55))) | uVar2;
    if (uVar2 != uVar1) {
      auVar17 = *(undefined1 (*) [16])(param_1 + 0x24);
      fVar32 = (float)*(undefined8 *)(param_1 + 0x20) * fVar24 + fVar16 * auVar17._0_4_ +
               fVar32 * (float)*(undefined8 *)(param_1 + 0x28) +
               fVar64 * (float)*(undefined8 *)(param_1 + 0x2c);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar25 +
               fVar21 * auVar17._4_4_ +
               fVar33 * (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
               fVar65 * (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar35 = (float)*(undefined8 *)(param_1 + 0x22) * fVar26 + fVar22 * auVar17._8_4_ +
               fVar35 * (float)*(undefined8 *)(param_1 + 0x2a) +
               fVar66 * (float)*(undefined8 *)(param_1 + 0x2e);
      fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) * fVar27 +
               fVar23 * auVar17._12_4_ +
               fVar31 * (float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) +
               fVar67 * (float)((ulong)*(undefined8 *)(param_1 + 0x2e) >> 0x20);
      bVar39 = (char)((byte)((uint)(fVar64 - (fVar37 + fVar32)) >> 0x18) ^
                     (byte)((uint)fVar32 >> 0x18)) >> 7;
      auVar19[0] = bVar39 & bVar20;
      auVar19[1] = bVar39 & bVar68;
      auVar19[2] = bVar39 & bVar69;
      auVar19[3] = bVar39 & bVar70;
      bVar20 = (char)((byte)((uint)(fVar65 - (fVar34 + fVar33)) >> 0x18) ^
                     (byte)((uint)fVar33 >> 0x18)) >> 7;
      auVar19[4] = bVar20 & bVar71;
      auVar19[5] = bVar20 & bVar72;
      auVar19[6] = bVar20 & bVar73;
      auVar19[7] = bVar20 & bVar74;
      bVar20 = (char)((byte)((uint)(fVar66 - (fVar36 + fVar35)) >> 0x18) ^
                     (byte)((uint)fVar35 >> 0x18)) >> 7;
      auVar19[8] = bVar20 & bVar75;
      auVar19[9] = bVar20 & bVar76;
      auVar19[10] = bVar20 & bVar77;
      auVar19[0xb] = bVar20 & bVar78;
      bVar20 = (char)((byte)((uint)(fVar67 - (fVar38 + fVar31)) >> 0x18) ^
                     (byte)((uint)fVar31 >> 0x18)) >> 7;
      auVar19[0xc] = bVar20 & bVar79;
      auVar19[0xd] = bVar20 & bVar80;
      auVar19[0xe] = bVar20 & bVar81;
      auVar19[0xf] = bVar20 & bVar82;
      auVar17 = NEON_ext(auVar19,auVar19,8,1);
      uVar2 = CONCAT13(auVar17[3] | auVar19[3] | auVar17[7] | auVar19[7],
                       CONCAT12(auVar17[2] | auVar19[2] | auVar17[6] | auVar19[6],
                                CONCAT11(auVar17[1] | auVar19[1] | auVar17[5] | auVar19[5],
                                         auVar17[0] | auVar19[0] | auVar17[4] | auVar19[4]))) &
              uVar1 | uVar2;
      if ((uVar2 != uVar1) &&
         (((((uVar1 = uVar1 & (uVar2 ^ 0xffffffff), (uVar1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x40) == 0 ||
              (lVar7 = FUN_0341cbd0(*(long *)(param_1 + 0x40),pfVar9,auStack_40), lVar7 == 0)))) ||
            (((uVar1 >> 1 & 1) != 0 &&
             ((*(long *)(param_1 + 0x42) == 0 ||
              (lVar7 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x42)
                                    ,pfVar9,auStack_40), lVar7 == 0)))))) ||
           (((uVar1 >> 2 & 1) != 0 &&
            ((*(long *)(param_1 + 0x44) == 0 ||
             (lVar7 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x44),
                                   pfVar9,auStack_40), lVar7 == 0)))))) ||
          (((uVar1 >> 3 & 1) != 0 &&
           ((*(long *)(param_1 + 0x46) == 0 ||
            (lVar7 = FUN_0341cbd0(*(undefined1 (*) [16])(param_1 + 0x34),*(long *)(param_1 + 0x46),
                                  pfVar9,auStack_40), lVar7 == 0)))))))) {
        return 1;
      }
    }
  }
  return 0;
}


