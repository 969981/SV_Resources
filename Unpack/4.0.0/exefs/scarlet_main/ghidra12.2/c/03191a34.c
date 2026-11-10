/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03191a34; name: FUN_03191a34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03191a34(long *param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar60;
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  
  uVar24 = (ulong)*(uint *)(param_1 + 1);
  if ((int)*(uint *)(param_1 + 1) < 1) {
    fVar34 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
  }
  else {
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar34 = 0.0;
    puVar26 = (undefined8 *)(*param_1 + 0x80);
    do {
      puVar2 = puVar26 + -6;
      puVar4 = puVar26 + -5;
      puVar3 = puVar26 + -4;
      puVar5 = puVar26 + -3;
      uVar24 = uVar24 - 1;
      fVar40 = (float)puVar26[-0xd];
      fVar38 = (float)puVar26[-0xe];
      fVar39 = (float)((ulong)puVar26[-0xe] >> 0x20);
      puVar1 = puVar26 + -2;
      puVar7 = puVar26 + -1;
      puVar6 = puVar26 + 1;
      uVar35 = *puVar26;
      fVar34 = fVar34 + *(float *)(puVar26 + -0x10);
      fVar36 = *(float *)((long)puVar26 + -0x7c);
      puVar26 = puVar26 + 0x12;
      fVar32 = fVar32 + fVar36;
      fVar33 = fVar33 + fVar36;
      fVar28 = fVar28 + ((float)uVar35 +
                        (float)*puVar1 * fVar40 + (float)*puVar2 * fVar38 + (float)*puVar3 * fVar39)
                        * fVar36;
      fVar29 = fVar29 + ((float)((ulong)uVar35 >> 0x20) +
                        (float)((ulong)*puVar1 >> 0x20) * fVar40 +
                        (float)((ulong)*puVar2 >> 0x20) * fVar38 +
                        (float)((ulong)*puVar3 >> 0x20) * fVar39) * fVar36;
      fVar30 = fVar30 + ((float)*puVar6 +
                        (float)*puVar7 * fVar40 + (float)*puVar4 * fVar38 + (float)*puVar5 * fVar39)
                        * fVar36;
      fVar31 = fVar31 + ((float)((ulong)*puVar6 >> 0x20) +
                        (float)((ulong)*puVar7 >> 0x20) * fVar40 +
                        (float)((ulong)*puVar4 >> 0x20) * fVar38 +
                        (float)((ulong)*puVar5 >> 0x20) * fVar39) * fVar36;
    } while (uVar24 != 0);
  }
  if (0.0 < fVar32) {
    uVar35 = NEON_fmov(0x3f800000,4);
    fVar36 = (float)uVar35 / fVar32;
    fVar33 = (float)((ulong)uVar35 >> 0x20) / fVar33;
    *param_2 = fVar34;
    param_2[1] = fVar32;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 0.0;
    param_2[0x10] = 0.0;
    param_2[0x11] = 0.0;
    param_2[0x12] = 0.0;
    param_2[0x13] = 0.0;
    fVar28 = fVar28 * fVar36;
    fVar29 = fVar29 * fVar33;
    fVar30 = fVar30 * fVar36;
    fVar31 = fVar31 * fVar33;
    *(ulong *)(param_2 + 6) = CONCAT44(fVar31,fVar30);
    *(ulong *)(param_2 + 4) = CONCAT44(fVar29,fVar28);
    puVar23 = PTR_DAT_047d19e0;
    uVar22 = _UNK_03cabbe8;
    uVar21 = _DAT_03cabbe0;
    uVar20 = _DAT_03cabbd0;
    uVar19 = _DAT_03caba70;
    uVar18 = _UNK_03cab388;
    uVar17 = _DAT_03cab380;
    uVar16 = _DAT_03cab130;
    uVar15 = _UNK_03caa768;
    uVar35 = _DAT_03caa760;
    if (0 < (int)param_1[1]) {
      uVar37 = (undefined4)_UNK_03cabbd8;
      uVar24 = (ulong)_UNK_03cabbd8 >> 0x20;
      uVar41 = (undefined4)_UNK_03caba78;
      uVar13 = (ulong)_UNK_03caba78 >> 0x20;
      lVar25 = 0;
      lVar27 = 0x80;
      uVar42 = (undefined4)_UNK_03cab138;
      uVar14 = (ulong)_UNK_03cab138 >> 0x20;
      do {
        puVar26 = (undefined8 *)(*param_1 + lVar27);
        lVar27 = lVar27 + 0x90;
        fVar32 = *(float *)(puVar26 + -2);
        fVar33 = *(float *)((long)puVar26 + -0xc);
        fVar34 = *(float *)(puVar26 + -1);
        fVar36 = *(float *)((long)puVar26 + -4);
        fVar38 = *(float *)(puVar26 + -6);
        fVar39 = *(float *)((long)puVar26 + -0x2c);
        fVar40 = *(float *)(puVar26 + -5);
        fVar12 = *(float *)((long)puVar26 + -0x24);
        fVar68 = (float)puVar26[-0xd];
        fVar66 = (float)puVar26[-0xe];
        fVar67 = (float)((ulong)puVar26[-0xe] >> 0x20);
        lVar25 = lVar25 + 1;
        fVar52 = (float)puVar26[-4];
        fVar53 = (float)((ulong)puVar26[-4] >> 0x20);
        fVar54 = (float)puVar26[-3];
        fVar55 = (float)((ulong)puVar26[-3] >> 0x20);
        fVar43 = (float)puVar26[-10];
        fVar44 = (float)((ulong)puVar26[-10] >> 0x20);
        fVar45 = (float)puVar26[-9];
        fVar46 = (float)puVar26[-8];
        fVar48 = (float)((ulong)puVar26[-8] >> 0x20);
        fVar50 = (float)puVar26[-7];
        fVar69 = (float)puVar26[-0xc];
        fVar70 = (float)((ulong)puVar26[-0xc] >> 0x20);
        fVar71 = (float)puVar26[-0xb];
        fVar72 = *(float *)((long)puVar26 + -0x7c);
        fVar47 = fVar46 * fVar34 + fVar69 * fVar40 + fVar43 * fVar54;
        fVar49 = fVar48 * fVar34 + fVar70 * fVar40 + fVar44 * fVar54;
        fVar51 = fVar50 * fVar34 + fVar71 * fVar40 + fVar45 * fVar54;
        fVar56 = fVar46 * fVar33 + fVar69 * fVar39 + fVar43 * fVar53;
        fVar60 = fVar48 * fVar33 + fVar70 * fVar39 + fVar44 * fVar53;
        fVar61 = fVar50 * fVar33 + fVar71 * fVar39 + fVar45 * fVar53;
        fVar43 = fVar46 * fVar32 + fVar69 * fVar38 + fVar43 * fVar52;
        fVar44 = fVar48 * fVar32 + fVar70 * fVar38 + fVar44 * fVar52;
        fVar45 = fVar50 * fVar32 + fVar71 * fVar38 + fVar45 * fVar52;
        auVar65._0_4_ =
             ((float)*puVar26 + fVar32 * fVar68 + fVar38 * fVar66 + fVar52 * fVar67) - fVar28;
        auVar65._4_4_ =
             ((float)((ulong)*puVar26 >> 0x20) + fVar33 * fVar68 + fVar39 * fVar66 + fVar53 * fVar67
             ) - fVar29;
        auVar65._8_4_ =
             ((float)puVar26[1] + fVar34 * fVar68 + fVar40 * fVar66 + fVar54 * fVar67) - fVar30;
        auVar65._12_4_ =
             ((float)((ulong)puVar26[1] >> 0x20) +
             fVar36 * fVar68 + fVar12 * fVar66 + fVar55 * fVar67) - fVar31;
        auVar57._0_4_ = auVar65._0_4_ * auVar65._0_4_;
        auVar57._4_4_ = auVar65._4_4_ * auVar65._4_4_;
        auVar57._8_4_ = auVar65._8_4_ * auVar65._8_4_;
        auVar57._12_4_ = auVar65._12_4_ * auVar65._12_4_;
        auVar62._8_8_ = uVar22;
        auVar62._0_8_ = uVar21;
        auVar62 = a64_TBL(ZEXT816(0),auVar57,auVar62);
        auVar58._8_8_ = uVar18;
        auVar58._0_8_ = uVar17;
        auVar58 = a64_TBL(ZEXT816(0),auVar57,auVar58);
        auVar63._8_4_ = uVar37;
        auVar63._0_8_ = uVar20;
        auVar63._12_4_ = (int)uVar24;
        auVar63 = a64_TBL(ZEXT816(0),auVar65,auVar63);
        auVar59._0_4_ = (auVar58._0_4_ + auVar62._0_4_) * fVar72;
        auVar59._4_4_ = (auVar58._4_4_ + auVar62._4_4_) * fVar72;
        auVar59._8_4_ = (auVar58._8_4_ + auVar62._8_4_) * fVar72;
        auVar59._12_4_ = 0;
        auVar64._0_4_ = -fVar72 * auVar65._0_4_ * auVar63._0_4_;
        auVar64._4_4_ = -fVar72 * auVar65._4_4_ * auVar63._4_4_;
        auVar64._8_4_ = -fVar72 * auVar65._8_4_ * auVar63._8_4_;
        auVar64._12_4_ = -fVar72 * auVar65._12_4_ * auVar63._12_4_;
        auVar8._8_4_ = uVar41;
        auVar8._0_8_ = uVar19;
        auVar8._12_4_ = (int)uVar13;
        auVar62 = a64_TBL(ZEXT816(0),auVar64,auVar8);
        auVar10._8_8_ = uVar15;
        auVar10._0_8_ = uVar35;
        auVar63 = a64_TBL(ZEXT816(0),auVar64,auVar10);
        auVar9._8_4_ = uVar42;
        auVar9._0_8_ = uVar16;
        auVar9._12_4_ = (int)uVar14;
        auVar58 = a64_TBL(ZEXT816(0),auVar64,auVar9);
        auVar62 = auVar62 ^ (auVar62 ^ auVar59) & *(undefined1 (*) [16])(puVar23 + 0x90);
        auVar11._12_4_ = (int)((ulong)*(undefined8 *)(puVar23 + 0xa8) >> 0x20);
        auVar11._0_12_ = *(undefined1 (*) [12])(puVar23 + 0xa0);
        auVar58 = auVar58 ^ (auVar58 ^ auVar59) & auVar11;
        auVar59 = auVar59 ^ (auVar59 ^ auVar63) & ~*(undefined1 (*) [16])(puVar23 + 0xc0);
        *(ulong *)(param_2 + 10) =
             CONCAT44(param_2[0xb] +
                      fVar36 * fVar45 + fVar12 * fVar43 + fVar55 * fVar44 + auVar62._12_4_,
                      param_2[10] +
                      fVar34 * fVar45 + fVar40 * fVar43 + fVar54 * fVar44 + auVar62._8_4_);
        *(ulong *)(param_2 + 8) =
             CONCAT44(param_2[9] +
                      fVar33 * fVar45 + fVar39 * fVar43 + fVar53 * fVar44 + auVar62._4_4_,
                      param_2[8] +
                      fVar32 * fVar45 + fVar38 * fVar43 + fVar52 * fVar44 + auVar62._0_4_);
        *(ulong *)(param_2 + 0xe) =
             CONCAT44(fVar36 * fVar61 + fVar12 * fVar56 + fVar55 * fVar60 + auVar58._12_4_ +
                      param_2[0xf],
                      fVar34 * fVar61 + fVar40 * fVar56 + fVar54 * fVar60 + auVar58._8_4_ +
                      param_2[0xe]);
        *(ulong *)(param_2 + 0xc) =
             CONCAT44(fVar33 * fVar61 + fVar39 * fVar56 + fVar53 * fVar60 + auVar58._4_4_ +
                      param_2[0xd],
                      fVar32 * fVar61 + fVar38 * fVar56 + fVar52 * fVar60 + auVar58._0_4_ +
                      param_2[0xc]);
        *(ulong *)(param_2 + 0x12) =
             CONCAT44(fVar36 * fVar51 + fVar12 * fVar47 + fVar55 * fVar49 + auVar59._12_4_ +
                      param_2[0x13],
                      fVar34 * fVar51 + fVar40 * fVar47 + fVar54 * fVar49 + auVar59._8_4_ +
                      param_2[0x12]);
        *(ulong *)(param_2 + 0x10) =
             CONCAT44(fVar33 * fVar51 + fVar39 * fVar47 + fVar53 * fVar49 + auVar59._4_4_ +
                      param_2[0x11],
                      fVar32 * fVar51 + fVar38 * fVar47 + fVar52 * fVar49 + auVar59._0_4_ +
                      param_2[0x10]);
      } while (lVar25 < (int)param_1[1]);
    }
    return 0;
  }
  return 0x80040200;
}


