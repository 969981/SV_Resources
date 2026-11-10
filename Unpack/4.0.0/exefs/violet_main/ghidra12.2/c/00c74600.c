/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c74600; name: FUN_00c74600
 */


bool FUN_00c74600(float *param_1,float *param_2,uint param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  
  fVar26 = param_2[4];
  pauVar1 = (undefined1 (*) [12])(param_1 + 8);
  fVar37 = (float)*(undefined8 *)(param_1 + 10);
  fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  fVar36 = (float)*(undefined8 *)*pauVar1;
  fVar35 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  fVar27 = fVar11 - (*param_1 - param_1[0x50] * fVar26 * fVar36);
  fVar30 = fVar12 - (param_1[1] - param_1[0x51] * fVar26 * fVar35);
  fVar31 = fVar13 - (param_1[2] - param_1[0x52] * fVar26 * fVar37);
  fVar32 = fVar14 - (param_1[3] - param_1[0x53] * fVar26 * fVar38);
  auVar33._0_4_ = fVar36 * fVar27 + fVar35 * fVar30;
  auVar33._4_4_ = fVar37 * fVar31 + fVar38 * fVar32;
  auVar33._8_4_ = fVar36 * fVar27 + fVar35 * fVar30;
  auVar33._12_4_ = fVar37 * fVar31 + fVar38 * fVar32;
  auVar33 = NEON_ext(auVar33,auVar33,4,1);
  fVar17 = auVar33._0_4_ + auVar33._4_4_;
  if (fVar17 <= 0.0) {
    return false;
  }
  auVar18._0_4_ = fVar27 * fVar27 + fVar30 * fVar30;
  auVar18._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar18._8_4_ = fVar27 * fVar27 + fVar30 * fVar30;
  auVar18._12_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar33 = NEON_ext(auVar18,auVar18,4,1);
  if (fVar17 * fVar17 < param_1[0x48] * (auVar33._0_4_ + auVar33._4_4_)) {
    return false;
  }
  fVar30 = fVar11 - *param_1;
  fVar31 = fVar12 - param_1[1];
  fVar32 = fVar13 - param_1[2];
  fVar40 = fVar14 - param_1[3];
  fVar17 = param_1[0x58];
  auVar19._0_4_ = fVar36 * fVar30 + fVar35 * fVar31;
  auVar19._4_4_ = fVar37 * fVar32 + fVar38 * fVar40;
  auVar19._8_4_ = fVar36 * fVar30 + fVar35 * fVar31;
  auVar19._12_4_ = fVar37 * fVar32 + fVar38 * fVar40;
  auVar33 = NEON_ext(auVar19,auVar19,4,1);
  fVar27 = auVar33._0_4_ + auVar33._4_4_;
  if (fVar27 < fVar17 - fVar26) {
    return false;
  }
  fVar15 = param_1[0x5c];
  if (fVar26 + fVar15 < fVar27) {
    return false;
  }
  fVar41 = fVar26 * (float)*(undefined8 *)(param_1 + 0x4c);
  if ((bool)(~(fVar17 - fVar41 <= fVar27) & 1)) {
    auVar34._0_4_ = fVar30 - fVar36 * fVar17;
    auVar34._4_4_ = fVar31 - fVar35 * param_1[0x59];
    auVar34._8_4_ = fVar32 - fVar37 * param_1[0x5a];
    auVar34._12_4_ = fVar40 - fVar38 * param_1[0x5b];
    auVar6._12_4_ = fVar38;
    auVar6._0_12_ = *pauVar1;
    uVar42 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb56c8);
    uVar39 = a64_TBL(ZEXT816(0),auVar34,DAT_03cb56c8);
    auVar7._12_4_ = fVar38;
    auVar7._0_12_ = *pauVar1;
    uVar43 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54d8);
    uVar45 = a64_TBL(ZEXT816(0),auVar34,DAT_03cb5488);
    auVar8._12_4_ = fVar38;
    auVar8._0_12_ = *pauVar1;
    uVar44 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb5488);
    uVar46 = a64_TBL(ZEXT816(0),auVar34,DAT_03cb54c0);
    auVar9._12_4_ = fVar38;
    auVar9._0_12_ = *pauVar1;
    uVar10 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb54c0);
    uVar28 = a64_TBL(ZEXT816(0),auVar34,DAT_03cb54d8);
    fVar31 = (float)uVar42 * (float)uVar45 - (float)uVar44 * (float)uVar39;
    fVar36 = (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar45 >> 0x20) -
             (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
    fVar30 = (float)uVar43 * (float)uVar46 - (float)uVar10 * (float)uVar28;
    fVar32 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar46 >> 0x20) -
             (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar28 >> 0x20);
    fVar31 = fVar31 * fVar31;
    fVar36 = fVar36 * fVar36;
    fVar30 = fVar30 * fVar30;
    fVar32 = fVar32 * fVar32;
    auVar25._0_4_ = fVar31 + fVar36;
    auVar25._4_4_ = fVar30 + fVar32;
    auVar25._8_4_ = fVar31 + fVar36;
    auVar25._12_4_ = fVar30 + fVar32;
    auVar33 = NEON_ext(auVar25,auVar25,4,1);
    fVar30 = auVar33._0_4_ + auVar33._4_4_;
    if (fVar30 == 0.0) {
      fVar30 = 0.0;
    }
    else {
      fVar31 = (float)(0x5f1ffff9 - ((uint)fVar30 >> 1));
      fVar30 = 1.0 / ((fVar30 * -0.70395225 * fVar31 * fVar31 + 1.6819141) * fVar31);
    }
    fVar31 = fVar17 * (float)*(undefined8 *)(param_1 + 0x54);
    if (fVar31 < fVar30) {
      fVar30 = fVar30 - fVar31;
LAB_00c74830:
      bVar16 = (fVar27 - fVar17) * (fVar27 - fVar17) + fVar30 * fVar30 <= fVar26 * fVar26;
      goto LAB_00c746ec;
    }
  }
  else if ((bool)(~(fVar27 <= fVar15 - fVar41) & 1)) {
    auVar29._0_4_ = fVar30 - fVar36 * fVar15;
    auVar29._4_4_ = fVar31 - fVar35 * param_1[0x5d];
    auVar29._8_4_ = fVar32 - fVar37 * param_1[0x5e];
    auVar29._12_4_ = fVar40 - fVar38 * param_1[0x5f];
    auVar2._12_4_ = fVar38;
    auVar2._0_12_ = *pauVar1;
    uVar42 = a64_TBL(ZEXT816(0),auVar2,DAT_03cb56c8);
    uVar39 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb56c8);
    auVar3._12_4_ = fVar38;
    auVar3._0_12_ = *pauVar1;
    uVar43 = a64_TBL(ZEXT816(0),auVar3,DAT_03cb54d8);
    uVar45 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb5488);
    auVar4._12_4_ = fVar38;
    auVar4._0_12_ = *pauVar1;
    uVar44 = a64_TBL(ZEXT816(0),auVar4,DAT_03cb5488);
    uVar46 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54c0);
    auVar5._12_4_ = fVar38;
    auVar5._0_12_ = *pauVar1;
    uVar10 = a64_TBL(ZEXT816(0),auVar5,DAT_03cb54c0);
    uVar28 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb54d8);
    fVar30 = (float)uVar42 * (float)uVar45 - (float)uVar44 * (float)uVar39;
    fVar32 = (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar45 >> 0x20) -
             (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
    fVar17 = (float)uVar43 * (float)uVar46 - (float)uVar10 * (float)uVar28;
    fVar31 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar46 >> 0x20) -
             (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar28 >> 0x20);
    fVar30 = fVar30 * fVar30;
    fVar32 = fVar32 * fVar32;
    fVar17 = fVar17 * fVar17;
    fVar31 = fVar31 * fVar31;
    auVar24._0_4_ = fVar30 + fVar32;
    auVar24._4_4_ = fVar17 + fVar31;
    auVar24._8_4_ = fVar30 + fVar32;
    auVar24._12_4_ = fVar17 + fVar31;
    auVar33 = NEON_ext(auVar24,auVar24,4,1);
    fVar17 = auVar33._0_4_ + auVar33._4_4_;
    if (fVar17 == 0.0) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = (float)(0x5f1ffff9 - ((uint)fVar17 >> 1));
      fVar30 = 1.0 / ((fVar17 * -0.70395225 * fVar30 * fVar30 + 1.6819141) * fVar30);
    }
    fVar17 = fVar15 * (float)*(undefined8 *)(param_1 + 0x54);
    if (fVar17 < fVar30) {
      fVar30 = fVar30 - fVar17;
      fVar17 = fVar15;
      goto LAB_00c74830;
    }
  }
  bVar16 = true;
LAB_00c746ec:
  if ((bVar16 != false) && ((param_3 & 1) == 0)) {
    auVar20._0_4_ = fVar11 * param_1[0x1c] + fVar12 * param_1[0x1d];
    auVar20._4_4_ = fVar13 * param_1[0x1e] + fVar14 * param_1[0x1f];
    auVar20._8_4_ = fVar11 * param_1[0x1c] + fVar12 * param_1[0x1d];
    auVar20._12_4_ = fVar13 * param_1[0x1e] + fVar14 * param_1[0x1f];
    auVar33 = NEON_ext(auVar20,auVar20,4,1);
    fVar26 = -fVar26;
    if ((param_1[0x20] + auVar33._0_4_ + auVar33._4_4_ < fVar26) ||
       (((auVar21._0_4_ = fVar11 * param_1[0x24] + fVar12 * param_1[0x25],
         auVar21._4_4_ = fVar13 * param_1[0x26] + fVar14 * param_1[0x27],
         auVar21._8_4_ = fVar11 * param_1[0x24] + fVar12 * param_1[0x25],
         auVar21._12_4_ = fVar13 * param_1[0x26] + fVar14 * param_1[0x27],
         auVar33 = NEON_ext(auVar21,auVar21,4,1),
         param_1[0x28] + auVar33._0_4_ + auVar33._4_4_ < fVar26 ||
         (auVar22._0_4_ = fVar11 * param_1[0x2c] + fVar12 * param_1[0x2d],
         auVar22._4_4_ = fVar13 * param_1[0x2e] + fVar14 * param_1[0x2f],
         auVar22._8_4_ = fVar11 * param_1[0x2c] + fVar12 * param_1[0x2d],
         auVar22._12_4_ = fVar13 * param_1[0x2e] + fVar14 * param_1[0x2f],
         auVar33 = NEON_ext(auVar22,auVar22,4,1),
         param_1[0x30] + auVar33._0_4_ + auVar33._4_4_ < fVar26)) ||
        (auVar23._0_4_ = fVar11 * param_1[0x34] + fVar12 * param_1[0x35],
        auVar23._4_4_ = fVar13 * param_1[0x36] + fVar14 * param_1[0x37],
        auVar23._8_4_ = fVar11 * param_1[0x34] + fVar12 * param_1[0x35],
        auVar23._12_4_ = fVar13 * param_1[0x36] + fVar14 * param_1[0x37],
        auVar33 = NEON_ext(auVar23,auVar23,4,1),
        param_1[0x38] + auVar33._0_4_ + auVar33._4_4_ < fVar26)))) {
      return false;
    }
    bVar16 = true;
  }
  return bVar16;
}


