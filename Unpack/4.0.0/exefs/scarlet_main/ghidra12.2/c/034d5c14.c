/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d5c14; name: FUN_034d5c14
 */


void FUN_034d5c14(undefined4 param_1,float *param_2,float *param_3,int param_4,uint param_5,
                 float *param_6,undefined1 (*param_7) [16])

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float afStack_240 [128];
  float afStack_38 [2];
  float afStack_18 [2];
  
  fVar26 = param_2[3];
  fVar30 = param_2[1];
  fVar27 = param_2[2];
  fVar28 = param_2[4];
  fVar31 = param_2[5];
  fVar29 = *param_2;
  if (param_4 == 1) {
    uVar7 = *(undefined8 *)param_2;
    param_3[2] = param_2[2];
    *(undefined8 *)param_3 = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 3);
    param_3[5] = param_2[5];
    *(undefined8 *)(param_3 + 3) = uVar7;
  }
  uVar2 = param_5 & 0xff;
  uVar6 = (ulong)uVar2;
  pfVar8 = (float *)((long)afStack_240 + -(ulong)(uVar2 << 4) + 0x200);
  if (uVar2 != 0) {
    puVar11 = (undefined4 *)(&DAT_03d9912c + (ulong)(uVar2 - 1) * 0x54);
    puVar9 = (undefined4 *)((long)afStack_38 + -(ulong)(uVar2 << 4));
    uVar10 = uVar6;
    do {
      uVar3 = *puVar11;
      puVar9[-2] = puVar11[-1];
      puVar9[-1] = uVar3;
      puVar1 = puVar11 + 1;
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 3;
      *puVar9 = *puVar1;
      puVar9[1] = 0;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
  }
  fVar32 = fVar27 * fVar28 - fVar30 * fVar31;
  fVar33 = fVar29 * fVar31 - fVar26 * fVar27;
  fVar34 = fVar26 * fVar30 - fVar29 * fVar28;
  fVar15 = param_3[7] - param_2[7];
  fVar17 = param_3[8] - param_2[8];
  fVar14 = param_3[6] - param_2[6];
  fVar13 = 0.0;
  if (0.0 < fVar14 * fVar14 + fVar15 * fVar15 + fVar17 * fVar17) {
    fVar19 = fVar14 * fVar26 + fVar28 * fVar15;
    fVar21 = fVar19 + fVar31 * fVar17;
    fVar18 = fVar14 * fVar32 + fVar33 * fVar15 + fVar34 * fVar17;
    fVar16 = fVar14 * fVar29 + fVar30 * fVar15 + fVar27 * fVar17;
    fVar15 = 1.0;
    fVar14 = 1.0 / SQRT(fVar18 * fVar18 + fVar21 * fVar21 + fVar16 * fVar16);
    fVar18 = fVar14 * fVar18;
    fVar17 = fVar14 * (-(fVar17 * fVar31) - fVar19);
    fVar14 = fVar14 * fVar16;
    fVar16 = fVar18 * fVar18 + fVar17 * fVar17;
    if (1.1920929e-07 < fVar16) {
      fVar16 = SQRT(fVar16);
      fVar20 = 1.0 - fVar14;
      fVar17 = (1.0 / fVar16) * fVar17;
      fVar18 = (1.0 / fVar16) * fVar18;
      fVar21 = fVar18 * fVar16;
      fVar15 = fVar14 + fVar20 * fVar17 * fVar17;
      fVar13 = fVar17 * fVar20 * fVar18;
      fVar19 = -(fVar18 * fVar16);
      fVar20 = fVar14 + fVar20 * fVar18 * fVar18;
      fVar18 = fVar17 * fVar16;
      fVar17 = -(fVar17 * fVar16);
      goto LAB_034d5df0;
    }
    if (fVar14 < 0.0) {
      fVar20 = -1.0;
      fVar19 = 0.0;
      fVar18 = 0.0;
      fVar21 = 0.0;
      fVar17 = 0.0;
      fVar14 = -1.0;
      goto LAB_034d5df0;
    }
  }
  fVar15 = 1.0;
  fVar19 = 0.0;
  fVar18 = 0.0;
  fVar21 = 0.0;
  fVar17 = 0.0;
  fVar20 = 1.0;
  fVar14 = 1.0;
LAB_034d5df0:
  fVar35 = param_3[4];
  fVar36 = param_3[5];
  fVar39 = *param_3;
  fVar38 = param_3[1];
  fVar52 = param_3[2];
  fVar16 = param_3[3];
  fVar45 = fVar52 * fVar35 - fVar38 * fVar36;
  fVar22 = fVar39 * fVar36 - fVar16 * fVar52;
  fVar23 = fVar16 * fVar38 - fVar39 * fVar35;
  fVar24 = fVar45 * fVar32 + fVar33 * fVar22 + fVar34 * fVar23;
  fVar25 = fVar45 * fVar26 + fVar28 * fVar22 + fVar31 * fVar23;
  fVar46 = fVar45 * fVar29 + fVar30 * fVar22 + fVar27 * fVar23;
  fVar22 = fVar35 * fVar33 + fVar34 * fVar36 + fVar32 * fVar16;
  fVar23 = fVar35 * fVar28 + fVar31 * fVar36 + fVar26 * fVar16;
  fVar33 = fVar52 * fVar34 + fVar33 * fVar38 + fVar32 * fVar39;
  fVar45 = fVar52 * fVar31 + fVar28 * fVar38 + fVar26 * fVar39;
  fVar26 = fVar35 * fVar30 + fVar27 * fVar36 + fVar29 * fVar16;
  fVar16 = fVar52 * fVar27 + fVar30 * fVar38 + fVar29 * fVar39;
  fVar29 = fVar22 * fVar15 + fVar13 * fVar23 + fVar19 * fVar26;
  fVar30 = fVar22 * fVar13 + fVar20 * fVar23 + fVar18 * fVar26;
  fVar31 = fVar22 * fVar21 + fVar17 * fVar23 + fVar14 * fVar26;
  fVar26 = fVar24 * fVar15 + fVar13 * fVar25 + fVar19 * fVar46;
  fVar27 = fVar24 * fVar13 + fVar20 * fVar25 + fVar18 * fVar46;
  fVar28 = fVar24 * fVar21 + fVar17 * fVar25 + fVar14 * fVar46;
  fVar34 = fVar33 * fVar21 + fVar17 * fVar45 + fVar14 * fVar16;
  fVar32 = fVar33 * fVar15 + fVar13 * fVar45 + fVar19 * fVar16;
  fVar33 = fVar33 * fVar13 + fVar20 * fVar45 + fVar18 * fVar16;
  if ((param_5 & 3) == 0) {
    fVar16 = (float)uVar2 + -1.0;
    if (uVar2 < 2) {
      fVar16 = 1.0;
    }
    if (uVar2 != 0) {
      fVar22 = (float)NEON_fminnm(param_1,0x3f7ff972);
      fVar23 = fVar22 * 1.5707964 + 1.5707964;
      fVar23 = fVar23 * fVar23 * -0.4052847 + fVar23 * 1.2732395;
      fVar22 = fVar22 * -0.63661975 * fVar22 * 1.5707964 + fVar22 * 2.0;
      fVar22 = (fVar23 + (ABS(fVar23) * fVar23 - fVar23) * 0.225) /
               (fVar22 + (ABS(fVar22) * fVar22 - fVar22) * 0.225);
      uVar10 = 0;
      do {
        pfVar12 = pfVar8 + uVar10 * 4;
        fVar23 = *pfVar12;
        fVar24 = pfVar12[1];
        fVar25 = pfVar12[2];
        fVar35 = pfVar12[4];
        fVar36 = pfVar12[5];
        fVar45 = pfVar12[6];
        fVar38 = pfVar12[8];
        fVar39 = pfVar12[9];
        fVar46 = pfVar12[10];
        fVar52 = pfVar12[0xc];
        fVar4 = pfVar12[0xd];
        fVar5 = pfVar12[0xe];
        pfVar12 = param_6 + uVar10 * 4;
        uVar10 = uVar10 + 4;
        fVar40 = fVar23 * fVar26 + fVar29 * fVar24 + fVar32 * fVar25;
        fVar42 = fVar35 * fVar26 + fVar29 * fVar36 + fVar32 * fVar45;
        fVar43 = fVar38 * fVar26 + fVar29 * fVar39 + fVar32 * fVar46;
        fVar44 = fVar52 * fVar26 + fVar29 * fVar4 + fVar32 * fVar5;
        fVar47 = fVar23 * fVar27 + fVar30 * fVar24 + fVar33 * fVar25;
        fVar49 = fVar35 * fVar27 + fVar30 * fVar36 + fVar33 * fVar45;
        fVar50 = fVar38 * fVar27 + fVar30 * fVar39 + fVar33 * fVar46;
        fVar51 = fVar52 * fVar27 + fVar30 * fVar4 + fVar33 * fVar5;
        fVar23 = fVar23 * fVar28 + fVar31 * fVar24 + fVar34 * fVar25 + fVar22;
        fVar24 = fVar35 * fVar28 + fVar31 * fVar36 + fVar34 * fVar45 + fVar22;
        fVar25 = fVar38 * fVar28 + fVar31 * fVar39 + fVar34 * fVar46 + fVar22;
        fVar35 = fVar52 * fVar28 + fVar31 * fVar4 + fVar34 * fVar5 + fVar22;
        auVar53 = NEON_fmov(0x3f800000,4);
        auVar41._0_4_ = fVar40 * fVar40 + fVar47 * fVar47 + fVar23 * fVar23;
        auVar41._4_4_ = fVar42 * fVar42 + fVar49 * fVar49 + fVar24 * fVar24;
        auVar41._8_4_ = fVar43 * fVar43 + fVar50 * fVar50 + fVar25 * fVar25;
        auVar41._12_4_ = fVar44 * fVar44 + fVar51 * fVar51 + fVar35 * fVar35;
        auVar37 = NEON_frsqrte(auVar41,4);
        fVar25 = auVar37._0_4_;
        fVar40 = fVar40 * fVar25;
        fVar35 = auVar37._4_4_;
        fVar42 = fVar42 * fVar35;
        fVar36 = auVar37._8_4_;
        fVar43 = fVar43 * fVar36;
        fVar45 = auVar37._12_4_;
        fVar44 = fVar44 * fVar45;
        fVar47 = fVar47 * fVar25;
        fVar49 = fVar49 * fVar35;
        fVar50 = fVar50 * fVar36;
        fVar51 = fVar51 * fVar45;
        auVar37 = NEON_frecpe(auVar37,4);
        auVar54._0_4_ = auVar53._0_4_ + fVar16 * auVar37._0_4_;
        auVar54._4_4_ = auVar53._4_4_ + fVar16 * auVar37._4_4_;
        auVar54._8_4_ = auVar53._8_4_ + fVar16 * auVar37._8_4_;
        auVar54._12_4_ = auVar53._12_4_ + fVar16 * auVar37._12_4_;
        fVar25 = fVar40 * fVar25;
        fVar35 = fVar42 * fVar35;
        fVar36 = fVar43 * fVar36;
        fVar45 = fVar44 * fVar45;
        auVar48._0_4_ = fVar40 * fVar15 + fVar13 * fVar47 + fVar21 * fVar25;
        auVar48._4_4_ = fVar42 * fVar15 + fVar13 * fVar49 + fVar21 * fVar35;
        auVar48._8_4_ = fVar43 * fVar15 + fVar13 * fVar50 + fVar21 * fVar36;
        auVar48._12_4_ = fVar44 * fVar15 + fVar13 * fVar51 + fVar21 * fVar45;
        fVar23 = fVar40 * fVar13 + fVar20 * fVar47 + fVar17 * fVar25;
        fVar24 = fVar42 * fVar13 + fVar20 * fVar49 + fVar17 * fVar35;
        auVar53._0_4_ = fVar40 * fVar19 + fVar18 * fVar47 + fVar14 * fVar25;
        auVar53._4_4_ = fVar42 * fVar19 + fVar18 * fVar49 + fVar14 * fVar35;
        auVar53._8_4_ = fVar43 * fVar19 + fVar18 * fVar50 + fVar14 * fVar36;
        auVar53._12_4_ = fVar44 * fVar19 + fVar18 * fVar51 + fVar14 * fVar45;
        auVar54 = NEON_frecpe(auVar54,4);
        auVar37._4_4_ = fVar24;
        auVar37._0_4_ = fVar23;
        auVar37._8_4_ = fVar43 * fVar13 + fVar20 * fVar50 + fVar17 * fVar36;
        auVar37._12_4_ = fVar44 * fVar13 + fVar20 * fVar51 + fVar17 * fVar45;
        auVar37 = NEON_ext(auVar37,auVar48,8,1);
        auVar41 = NEON_ext(auVar53,auVar53,8,1);
        auVar37 = NEON_ext(auVar48,auVar37,8,1);
        *param_7 = auVar54;
        auVar54 = NEON_ext(auVar41,auVar53,8,1);
        auVar41 = NEON_ext(auVar53,auVar41,8,1);
        pfVar12[10] = auVar41._0_4_;
        pfVar12[0xb] = auVar41._8_4_;
        pfVar12[8] = auVar37._0_4_;
        pfVar12[9] = auVar37._8_4_;
        pfVar12[0xe] = auVar41._4_4_;
        pfVar12[0xf] = auVar41._12_4_;
        pfVar12[0xc] = auVar37._4_4_;
        pfVar12[0xd] = auVar37._12_4_;
        pfVar12[2] = auVar54._0_4_;
        pfVar12[3] = auVar54._8_4_;
        *pfVar12 = auVar48._0_4_;
        pfVar12[1] = fVar23;
        pfVar12[6] = auVar54._4_4_;
        pfVar12[7] = auVar54._12_4_;
        pfVar12[4] = auVar48._4_4_;
        pfVar12[5] = fVar24;
        param_7 = param_7 + 1;
      } while (uVar10 < uVar6);
    }
  }
  else {
    fVar16 = (float)uVar2 + -1.0;
    if (uVar2 < 2) {
      fVar16 = 1.0;
    }
    if (uVar2 != 0) {
      fVar22 = (float)NEON_fminnm(param_1,0x3f7ff972);
      if (fVar22 <= 0.0001) {
        fVar22 = 0.0001;
      }
      fVar23 = fVar22 * 1.5707964 + 1.5707964;
      fVar23 = fVar23 * fVar23 * -0.4052847 + fVar23 * 1.2732395;
      fVar22 = fVar22 * -0.63661975 * fVar22 * 1.5707964 + fVar22 * 2.0;
      pfVar12 = param_6;
      do {
        fVar25 = *pfVar8;
        fVar35 = pfVar8[1];
        fVar45 = pfVar8[2];
        fVar24 = fVar25 * fVar27 + fVar30 * fVar35 + fVar33 * fVar45;
        fVar36 = fVar25 * fVar26 + fVar29 * fVar35 + fVar32 * fVar45;
        fVar25 = (fVar23 + (ABS(fVar23) * fVar23 - fVar23) * 0.225) /
                 (fVar22 + (ABS(fVar22) * fVar22 - fVar22) * 0.225) + fVar28 * fVar25 +
                 fVar31 * fVar35 + fVar34 * fVar45;
        pfVar8 = pfVar8 + 4;
        fVar45 = SQRT(fVar24 * fVar24 + fVar36 * fVar36 + fVar25 * fVar25);
        fVar35 = 1.0 / fVar45;
        fVar36 = fVar35 * fVar36;
        fVar24 = fVar35 * fVar24;
        fVar35 = fVar35 * fVar25;
        *(float *)*param_7 = 1.0 / (fVar16 * fVar45 + 1.0);
        *pfVar12 = fVar36 * fVar15 + fVar13 * fVar24 + fVar21 * fVar35;
        pfVar12[1] = fVar36 * fVar13 + fVar20 * fVar24 + fVar17 * fVar35;
        uVar6 = uVar6 - 1;
        pfVar12[2] = fVar36 * fVar19 + fVar18 * fVar24 + fVar14 * fVar35;
        pfVar12[3] = 0.0;
        pfVar12 = pfVar12 + 4;
        param_7 = (undefined1 (*) [16])(*param_7 + 4);
      } while (uVar6 != 0);
    }
  }
  if ((uVar2 != 0) &&
     (fVar26 = SQRT((param_2[6] - param_3[6]) * (param_2[6] - param_3[6]) +
                    (param_2[7] - param_3[7]) * (param_2[7] - param_3[7]) +
                    (param_2[8] - param_3[8]) * (param_2[8] - param_3[8])), 1.1920929e-07 <= fVar26)
     ) {
    uVar6 = (ulong)(uVar2 << 2);
    param_6 = param_6 + 1;
    do {
      param_6[-1] = param_6[-1] * fVar26;
      *param_6 = *param_6 * fVar26;
      param_6 = param_6 + 2;
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  return;
}


