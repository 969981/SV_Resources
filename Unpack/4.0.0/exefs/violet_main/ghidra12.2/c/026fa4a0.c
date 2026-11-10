/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fa4a0; name: FUN_026fa4a0
 */


void FUN_026fa4a0(float *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                 float *param_5,float *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [16];
  
  fVar10 = param_1[8];
  fVar18 = *(float *)(param_2 + 4);
  fVar5 = *param_1;
  fVar11 = param_1[1];
  fVar12 = param_1[2];
  fVar13 = param_1[3];
  fVar23 = (float)*(undefined8 *)(param_1 + 4) * fVar10;
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar10;
  fVar25 = (float)*(undefined8 *)(param_1 + 6) * fVar10;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * fVar10;
  fVar14 = (float)param_2[2];
  fVar40 = fVar14 * fVar18;
  fVar15 = (float)((ulong)param_2[2] >> 0x20);
  fVar43 = fVar15 * fVar18;
  fVar16 = (float)param_2[3];
  fVar45 = fVar16 * fVar18;
  fVar17 = (float)((ulong)param_2[3] >> 0x20);
  fVar47 = fVar17 * fVar18;
  fVar30 = 1.0 / (fVar18 * fVar18);
  fVar19 = (float)*param_2;
  fVar26 = fVar5 - fVar19;
  fVar20 = (float)((ulong)*param_2 >> 0x20);
  fVar27 = fVar11 - fVar20;
  fVar21 = (float)param_2[1];
  fVar28 = fVar12 - fVar21;
  fVar22 = (float)((ulong)param_2[1] >> 0x20);
  fVar29 = fVar13 - fVar22;
  auVar32._0_4_ = fVar26 * fVar40 + fVar27 * fVar43;
  auVar32._4_4_ = fVar28 * fVar45 + fVar29 * fVar47;
  auVar32._8_4_ = fVar26 * fVar40 + fVar27 * fVar43;
  auVar32._12_4_ = fVar28 * fVar45 + fVar29 * fVar47;
  auVar32 = NEON_ext(auVar32,auVar32,4,1);
  fVar36 = fVar5 + fVar23;
  fVar37 = fVar11 + fVar24;
  fVar38 = fVar12 + fVar25;
  fVar39 = fVar13 + fVar10;
  fVar31 = fVar36 - fVar19;
  fVar33 = fVar37 - fVar20;
  fVar34 = fVar38 - fVar21;
  fVar35 = fVar39 - fVar22;
  fVar41 = fVar31 * fVar40;
  fVar44 = fVar33 * fVar43;
  fVar46 = fVar34 * fVar45;
  fVar48 = fVar35 * fVar47;
  auVar42._0_4_ = fVar41 + fVar44;
  auVar42._4_4_ = fVar46 + fVar48;
  auVar42._8_4_ = fVar41 + fVar44;
  auVar42._12_4_ = fVar46 + fVar48;
  fVar41 = fVar5 - (auVar32._0_4_ + auVar32._4_4_) * fVar40 * fVar30;
  fVar44 = fVar11 - (auVar32._8_4_ + auVar32._12_4_) * fVar43 * fVar30;
  fVar46 = fVar12 - (auVar32._0_4_ + auVar32._4_4_) * fVar45 * fVar30;
  fVar48 = fVar13 - (auVar32._8_4_ + auVar32._12_4_) * fVar47 * fVar30;
  auVar32 = NEON_ext(auVar42,auVar42,4,1);
  fVar36 = (fVar36 - (auVar32._0_4_ + auVar32._4_4_) * fVar40 * fVar30) - fVar41;
  fVar37 = (fVar37 - (auVar32._8_4_ + auVar32._12_4_) * fVar43 * fVar30) - fVar44;
  fVar38 = (fVar38 - (auVar32._0_4_ + auVar32._4_4_) * fVar45 * fVar30) - fVar46;
  fVar30 = (fVar39 - (auVar32._8_4_ + auVar32._12_4_) * fVar47 * fVar30) - fVar48;
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar36 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar36)) {
      bVar1 = fVar36 < -1.1920929e-07;
      bVar3 = fVar36 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar37))) {
    bVar2 = fVar37 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar37)) {
      bVar1 = fVar37 < -1.1920929e-07;
      bVar3 = fVar37 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar38))) {
    bVar2 = fVar38 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar38)) {
      bVar1 = fVar38 < -1.1920929e-07;
      bVar3 = fVar38 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar39 = fVar36 * (fVar19 - fVar41);
    fVar40 = fVar37 * (fVar20 - fVar44);
    fVar41 = fVar38 * (fVar21 - fVar46);
    fVar43 = fVar30 * (fVar22 - fVar48);
    auVar6._0_4_ = fVar39 + fVar40;
    auVar6._4_4_ = fVar41 + fVar43;
    auVar6._8_4_ = fVar39 + fVar40;
    auVar6._12_4_ = fVar41 + fVar43;
    auVar7._0_4_ = fVar36 * fVar36 + fVar37 * fVar37;
    auVar7._4_4_ = fVar38 * fVar38 + fVar30 * fVar30;
    auVar7._8_4_ = fVar36 * fVar36 + fVar37 * fVar37;
    auVar7._12_4_ = fVar38 * fVar38 + fVar30 * fVar30;
    auVar42 = NEON_ext(auVar6,auVar6,4,1);
    auVar32 = NEON_ext(auVar7,auVar7,4,1);
    fVar30 = (auVar42._0_4_ + auVar42._4_4_) / (auVar32._0_4_ + auVar32._4_4_);
    if ((0.0 < fVar30) &&
       (fVar28 = fVar34, fVar29 = fVar35, fVar26 = fVar31, fVar27 = fVar33, fVar30 < 1.0)) {
      fVar26 = (fVar5 + fVar23 * fVar30) - fVar19;
      fVar27 = (fVar11 + fVar24 * fVar30) - fVar20;
      fVar28 = (fVar12 + fVar25 * fVar30) - fVar21;
      fVar29 = (fVar13 + fVar10 * fVar30) - fVar22;
    }
  }
  auVar8._0_4_ = fVar14 * fVar26 + fVar15 * fVar27;
  auVar8._4_4_ = fVar16 * fVar28 + fVar17 * fVar29;
  auVar8._8_4_ = fVar14 * fVar26 + fVar15 * fVar27;
  auVar8._12_4_ = fVar16 * fVar28 + fVar17 * fVar29;
  auVar32 = NEON_ext(auVar8,auVar8,4,1);
  fVar5 = auVar32._0_4_ + auVar32._4_4_;
  if (param_6 != (float *)0x0) {
    *param_6 = fVar5 / fVar18;
  }
  fVar19 = fVar19 + fVar14 * fVar5;
  fVar20 = fVar20 + fVar15 * (auVar32._8_4_ + auVar32._12_4_);
  fVar21 = fVar21 + fVar16 * (auVar32._0_4_ + auVar32._4_4_);
  fVar22 = fVar22 + fVar17 * (auVar32._8_4_ + auVar32._12_4_);
  if (param_5 != (float *)0x0) {
    param_5[2] = fVar21;
    param_5[3] = fVar22;
    *param_5 = fVar19;
    param_5[1] = fVar20;
  }
  if (param_3 != (undefined8 *)0x0) {
    fVar11 = (float)*(undefined8 *)param_1;
    fVar12 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar13 = (float)*(undefined8 *)(param_1 + 2);
    fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
    fVar29 = (float)*(undefined8 *)(param_1 + 4);
    fVar5 = (fVar19 - fVar11) * fVar29;
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar19 = (fVar20 - fVar12) * fVar26;
    fVar27 = (float)*(undefined8 *)(param_1 + 6);
    fVar20 = (fVar21 - fVar13) * fVar27;
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
    fVar21 = (fVar22 - fVar28) * fVar10;
    auVar9._0_4_ = fVar5 + fVar19;
    auVar9._4_4_ = fVar20 + fVar21;
    auVar9._8_4_ = fVar5 + fVar19;
    auVar9._12_4_ = fVar20 + fVar21;
    auVar32 = NEON_ext(auVar9,auVar9,4,1);
    fVar5 = auVar32._0_4_ + auVar32._4_4_;
    fVar19 = param_1[8];
    fVar20 = 1.0;
    if (fVar5 < 0.0) {
      fVar20 = 0.0;
    }
    fVar20 = fVar20 * fVar5;
    fVar5 = 1.0;
    if (fVar19 <= fVar20) {
      fVar5 = 0.0;
    }
    fVar21 = 1.0;
    if (fVar19 > fVar20) {
      fVar21 = 0.0;
    }
    fVar5 = fVar20 * fVar5 + fVar19 * fVar21;
    if (param_4 != (float *)0x0) {
      *param_4 = fVar5 / fVar19;
    }
    param_3[1] = CONCAT44(fVar28 + fVar10 * fVar5,fVar13 + fVar27 * fVar5);
    *param_3 = CONCAT44(fVar12 + fVar26 * fVar5,fVar11 + fVar29 * fVar5);
  }
  return;
}


