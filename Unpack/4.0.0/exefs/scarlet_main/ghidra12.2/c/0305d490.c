/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0305d490; name: FUN_0305d490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0305d490(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  
  fVar13 = param_1._0_4_ - param_2._0_4_;
  fVar14 = param_1._4_4_ - param_2._4_4_;
  fVar16 = param_1._8_4_ - param_2._8_4_;
  fVar18 = param_1._12_4_ - param_2._12_4_;
  auVar23 = NEON_ext(param_3,param_3,8,1);
  uVar22 = NEON_ext(param_3._0_8_,auVar23._0_8_,4,1);
  auVar23._4_4_ = fVar14;
  auVar23._0_4_ = fVar13;
  auVar23._8_4_ = fVar16;
  auVar23._12_4_ = fVar18;
  auVar62._4_4_ = fVar14;
  auVar62._0_4_ = fVar13;
  auVar62._8_4_ = fVar16;
  auVar62._12_4_ = fVar18;
  auVar23 = NEON_ext(auVar23,auVar62,4,1);
  auVar24._0_4_ = auVar23._0_4_ * param_3._0_4_ - fVar13 * (float)uVar22;
  auVar24._4_4_ = auVar23._4_4_ * param_3._4_4_ - fVar14 * (float)((ulong)uVar22 >> 0x20);
  auVar24._8_4_ = fVar13 * param_3._8_4_ - fVar16 * param_3._0_4_;
  auVar24._12_4_ = fVar14 * param_3._12_4_ - fVar18 * param_3._4_4_;
  auVar23 = NEON_ext(auVar24,auVar24,4,1);
  fVar13 = auVar23._0_4_;
  fVar14 = auVar23._4_4_;
  fVar16 = auVar24._0_4_ * auVar24._0_4_ + fVar13 * fVar13 + fVar14 * fVar14;
  if (fVar16 == 0.0) {
    auVar25 = SUB1612(ZEXT816(0),0);
  }
  else {
    fVar16 = SQRT(fVar16);
    auVar25._0_4_ = fVar13 / fVar16;
    auVar25._4_4_ = fVar14 / SQRT(auVar24._0_4_ * auVar24._0_4_ + fVar13 * fVar13 + fVar14 * fVar14)
    ;
    auVar25._8_4_ = auVar24._0_4_ / fVar16;
  }
  if (param_4 != param_5) {
    fVar27 = auVar25._0_4_;
    fVar28 = auVar25._4_4_;
    fVar26 = auVar25._8_4_;
    uVar29 = *param_6;
    fVar13 = *(float *)(param_6 + 2);
    fVar14 = *(float *)((long)param_6 + 0x14);
    fVar16 = *(float *)(param_6 + 3);
    fVar30 = -(fVar27 * param_2._0_4_ + fVar28 * param_2._4_4_ + fVar26 * param_2._8_4_);
    fVar18 = *(float *)(param_6 + 4);
    fVar9 = *(float *)((long)param_6 + 0x24);
    fVar10 = *(float *)(param_6 + 5);
    fVar45 = *(float *)((long)param_6 + 0x2c);
    uVar20 = param_6[6];
    uVar38 = uVar20;
    uVar40 = param_6[7];
    uVar22 = uVar29;
    uVar44 = param_6[1];
    fVar15 = fVar13;
    fVar17 = fVar14;
    fVar19 = fVar16;
    fVar21 = *(float *)((long)param_6 + 0x1c);
    fVar41 = fVar18;
    fVar42 = fVar9;
    fVar43 = fVar10;
    do {
      fVar57 = (float)param_4[1];
      fVar52 = (float)*param_4;
      fVar54 = (float)((ulong)*param_4 >> 0x20);
      fVar53 = (float)param_4[3];
      fVar48 = (float)param_4[2];
      fVar49 = (float)((ulong)param_4[2] >> 0x20);
      fVar35 = (float)uVar22;
      fVar36 = (float)((ulong)uVar22 >> 0x20);
      fVar37 = (float)uVar44;
      fVar39 = (float)((ulong)uVar44 >> 0x20);
      fVar31 = (float)uVar38;
      fVar32 = (float)((ulong)uVar38 >> 0x20);
      fVar33 = (float)uVar40;
      fVar34 = (float)((ulong)uVar40 >> 0x20);
      fVar46 = fVar27 * (fVar41 * fVar57 + fVar15 * fVar54 + fVar31 + fVar35 * fVar52);
      fVar47 = fVar28 * (fVar42 * fVar57 + fVar17 * fVar54 + fVar32 + fVar36 * fVar52);
      fVar50 = fVar26 * (fVar43 * fVar57 + fVar19 * fVar54 + fVar33 + fVar37 * fVar52);
      fVar52 = fVar30 * (fVar45 * fVar57 + fVar21 * fVar54 + fVar34 + fVar39 * fVar52);
      auVar5._4_4_ = fVar47;
      auVar5._0_4_ = fVar46;
      auVar5._8_4_ = fVar50;
      auVar5._12_4_ = fVar52;
      auVar6._4_4_ = fVar47;
      auVar6._0_4_ = fVar46;
      auVar6._8_4_ = fVar50;
      auVar6._12_4_ = fVar52;
      auVar23 = NEON_ext(auVar5,auVar6,8,1);
      fVar54 = fVar27 * (fVar41 * fVar53 + fVar15 * fVar49 + fVar31 + fVar35 * fVar48);
      fVar57 = fVar28 * (fVar42 * fVar53 + fVar17 * fVar49 + fVar32 + fVar36 * fVar48);
      fVar52 = fVar26 * (fVar43 * fVar53 + fVar19 * fVar49 + fVar33 + fVar37 * fVar48);
      fVar50 = fVar30 * (fVar45 * fVar53 + fVar21 * fVar49 + fVar34 + fVar39 * fVar48);
      auVar7._4_4_ = fVar57;
      auVar7._0_4_ = fVar54;
      auVar7._8_4_ = fVar52;
      auVar7._12_4_ = fVar50;
      auVar8._4_4_ = fVar57;
      auVar8._0_4_ = fVar54;
      auVar8._8_4_ = fVar52;
      auVar8._12_4_ = fVar50;
      auVar62 = NEON_ext(auVar7,auVar8,8,1);
      fVar52 = fVar46 + fVar47 + auVar23._0_4_ + fVar30;
      fVar46 = fVar54 + fVar57 + auVar62._0_4_ + fVar30;
      if ((fVar52 < 0.0) && (fVar46 < 0.0)) {
        if (param_7 != (undefined8 *)0x0) {
          fVar45 = fVar27 + fVar27;
          fVar15 = fVar28 + fVar28;
          fVar17 = fVar26 + fVar26;
          fVar31 = (float)DAT_03cab620 - fVar45 * fVar27;
          fVar32 = (float)((ulong)DAT_03cab620 >> 0x20) - fVar15 * fVar27;
          fVar33 = (float)DAT_03cab628 - fVar17 * fVar27;
          fVar34 = (float)((ulong)DAT_03cab628 >> 0x20) - fVar27 * 0.0;
          fVar37 = (float)_DAT_03cabe60 - fVar45 * fVar28;
          fVar39 = (float)((ulong)_DAT_03cabe60 >> 0x20) - fVar15 * fVar28;
          fVar54 = (float)_UNK_03cabe68 - fVar17 * fVar28;
          fVar47 = (float)((ulong)_UNK_03cabe68 >> 0x20) - fVar28 * 0.0;
          fVar42 = (float)_DAT_03caa5b0 - fVar45 * fVar26;
          fVar43 = (float)((ulong)_DAT_03caa5b0 >> 0x20) - fVar15 * fVar26;
          fVar27 = (float)_UNK_03caa5b8 - fVar17 * fVar26;
          fVar28 = (float)((ulong)_UNK_03caa5b8 >> 0x20) - fVar26 * 0.0;
          fVar35 = (float)_DAT_03cabe50;
          uVar11 = (ulong)_DAT_03cabe50 >> 0x20;
          fVar36 = (float)_UNK_03cabe58;
          uVar12 = (ulong)_UNK_03cabe58 >> 0x20;
          fVar19 = (float)uVar20;
          fVar26 = (float)uVar29;
          fVar52 = (float)((ulong)uVar29 >> 0x20);
          fVar46 = (float)param_6[1];
          fVar41 = (float)param_6[7];
          fVar21 = (float)((ulong)uVar20 >> 0x20);
          param_7[1] = CONCAT44(fVar28 * fVar46 + fVar34 * fVar26 + fVar47 * fVar52,
                                fVar27 * fVar46 + fVar33 * fVar26 + fVar54 * fVar52);
          *param_7 = CONCAT44(fVar43 * fVar46 + fVar32 * fVar26 + fVar39 * fVar52,
                              fVar42 * fVar46 + fVar31 * fVar26 + fVar37 * fVar52);
          *(float *)(param_7 + 3) = fVar27 * fVar16 + fVar33 * fVar13 + fVar54 * fVar14;
          *(float *)((long)param_7 + 0x1c) = fVar28 * fVar16 + fVar34 * fVar13 + fVar47 * fVar14;
          *(float *)(param_7 + 2) = fVar42 * fVar16 + fVar31 * fVar13 + fVar37 * fVar14;
          *(float *)((long)param_7 + 0x14) = fVar43 * fVar16 + fVar32 * fVar13 + fVar39 * fVar14;
          param_7[5] = CONCAT44(fVar28 * fVar10 + fVar34 * fVar18 + fVar47 * fVar9,
                                fVar27 * fVar10 + fVar33 * fVar18 + fVar54 * fVar9);
          param_7[4] = CONCAT44(fVar43 * fVar10 + fVar32 * fVar18 + fVar39 * fVar9,
                                fVar42 * fVar10 + fVar31 * fVar18 + fVar37 * fVar9);
          param_7[7] = CONCAT44(fVar28 * fVar41 +
                                fVar47 * fVar21 + ((float)uVar12 - fVar30 * 0.0) + fVar34 * fVar19,
                                fVar27 * fVar41 +
                                fVar54 * fVar21 + (fVar36 - fVar17 * fVar30) + fVar33 * fVar19);
          param_7[6] = CONCAT44(fVar43 * fVar41 +
                                fVar39 * fVar21 +
                                ((float)uVar11 - fVar15 * fVar30) + fVar32 * fVar19,
                                fVar42 * fVar41 +
                                fVar37 * fVar21 + (fVar35 - fVar45 * fVar30) + fVar31 * fVar19);
        }
        return 1;
      }
      if ((0.0 <= fVar52) && (0.0 <= fVar46)) {
        return 0;
      }
      fVar53 = (float)param_4[7];
      fVar57 = (float)param_4[6];
      fVar48 = (float)((ulong)param_4[6] >> 0x20);
      fVar61 = (float)param_4[9];
      fVar55 = (float)param_4[8];
      fVar58 = (float)((ulong)param_4[8] >> 0x20);
      fVar56 = fVar41 * fVar61;
      fVar59 = fVar42 * fVar61;
      fVar60 = fVar43 * fVar61;
      fVar61 = fVar45 * fVar61;
      fVar50 = fVar41 * fVar53;
      fVar49 = fVar42 * fVar53;
      fVar51 = fVar43 * fVar53;
      fVar53 = fVar45 * fVar53;
      puVar1 = param_4 + 10;
      puVar4 = param_4 + 0xb;
      puVar2 = param_4 + 0xc;
      puVar3 = param_4 + 0xd;
      param_4 = param_4 + 0x12;
      fVar63 = (float)*puVar2;
      fVar65 = (float)*puVar1;
      fVar66 = (float)((ulong)*puVar1 >> 0x20);
      fVar64 = (float)((ulong)*puVar2 >> 0x20);
      fVar67 = (float)*puVar4;
      fVar47 = (float)*puVar3;
      fVar52 = fVar41 * fVar47;
      fVar46 = fVar42 * fVar47;
      fVar54 = fVar43 * fVar47;
      fVar47 = fVar45 * fVar47;
      fVar41 = fVar41 * fVar67 + fVar35 * fVar65 + fVar15 * fVar66;
      fVar42 = fVar42 * fVar67 + fVar36 * fVar65 + fVar17 * fVar66;
      fVar43 = fVar43 * fVar67 + fVar37 * fVar65 + fVar19 * fVar66;
      fVar45 = fVar45 * fVar67 + fVar39 * fVar65 + fVar21 * fVar66;
      uVar38 = CONCAT44(fVar46 + fVar17 * fVar64 + fVar32 + fVar36 * fVar63,
                        fVar52 + fVar15 * fVar64 + fVar31 + fVar35 * fVar63);
      uVar40 = CONCAT44(fVar47 + fVar21 * fVar64 + fVar34 + fVar39 * fVar63,
                        fVar54 + fVar19 * fVar64 + fVar33 + fVar37 * fVar63);
      uVar44 = CONCAT44(fVar53 + fVar39 * fVar57 + fVar21 * fVar48,
                        fVar51 + fVar37 * fVar57 + fVar19 * fVar48);
      uVar22 = CONCAT44(fVar49 + fVar36 * fVar57 + fVar17 * fVar48,
                        fVar50 + fVar35 * fVar57 + fVar15 * fVar48);
      fVar15 = fVar56 + fVar35 * fVar55 + fVar15 * fVar58;
      fVar17 = fVar59 + fVar36 * fVar55 + fVar17 * fVar58;
      fVar19 = fVar60 + fVar37 * fVar55 + fVar19 * fVar58;
      fVar21 = fVar61 + fVar39 * fVar55 + fVar21 * fVar58;
    } while (param_4 != param_5);
  }
  return 0;
}


