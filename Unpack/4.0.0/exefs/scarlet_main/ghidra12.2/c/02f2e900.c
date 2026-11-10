/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2e900; name: FUN_02f2e900
 */


void FUN_02f2e900(undefined8 *param_1,long param_2,undefined1 (*param_3) [12],
                 undefined1 (*param_4) [16],undefined8 *param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined8 uVar20;
  float fVar27;
  undefined1 auVar21 [16];
  float fVar19;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  fVar41 = (float)*(double *)param_3[2];
  fVar36 = (float)*(double *)(param_3[1] + 4);
  fVar18 = (float)*(double *)param_4[1];
  pauVar1 = (undefined1 (*) [12])(param_3[3] + 4);
  fVar27 = (float)*(undefined8 *)param_3[4];
  fVar29 = (float)((ulong)*(undefined8 *)param_3[4] >> 0x20);
  uVar12 = *(undefined8 *)*pauVar1;
  fVar19 = (float)uVar12;
  fVar26 = (float)((ulong)uVar12 >> 0x20);
  auVar23 = *(undefined1 (*) [16])(param_4[2] + 8);
  fVar15 = (float)*(undefined8 *)(param_3[4] + 8) - (float)*(undefined8 *)(param_4[3] + 8);
  fVar17 = (float)((ulong)*(undefined8 *)(param_3[4] + 8) >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_4[3] + 8) >> 0x20);
  auVar38._12_4_ = fVar29;
  auVar38._0_12_ = *pauVar1;
  auVar51._12_4_ = fVar29;
  auVar51._0_12_ = *pauVar1;
  auVar13 = NEON_ext(auVar38,auVar51,8,1);
  auVar51 = NEON_ext(auVar23,auVar23,8,1);
  fVar31 = (float)*(double *)(param_4[1] + 8);
  fVar44 = auVar13._4_4_ - auVar51._4_4_;
  fVar56 = (float)*(undefined8 *)(*param_3 + 8);
  fVar60 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar20 = *(undefined8 *)*param_3;
  fVar46 = (float)uVar20;
  fVar47 = (float)((ulong)uVar20 >> 0x20);
  auVar57._12_4_ = fVar60;
  auVar57._0_12_ = *param_3;
  auVar2._12_4_ = fVar60;
  auVar2._0_12_ = *param_3;
  auVar38 = NEON_ext(auVar57,auVar2,8,1);
  uVar20 = NEON_ext(uVar20,auVar38._0_8_,4,1);
  uVar12 = NEON_ext(uVar12,auVar13._0_8_,4,1);
  fVar40 = auVar38._4_4_ * auVar38._4_4_;
  uVar50 = NEON_ext(auVar23._0_8_,auVar51._0_8_,4,1);
  fVar32 = fVar19 * fVar46 + fVar26 * fVar47 + fVar27 * fVar56;
  fVar35 = fVar19 * fVar46 + fVar26 * fVar47 + fVar27 * fVar56;
  fVar37 = fVar40 + -0.5;
  fVar40 = fVar40 + -0.5;
  fVar7 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_2 + 0x10);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  fVar28 = (float)*param_1;
  fVar30 = (float)((ulong)*param_1 >> 0x20);
  fVar42 = fVar5 * fVar15;
  fVar45 = fVar6 * fVar17;
  auVar21._0_4_ = (float)uVar12 * fVar46 - fVar19 * (float)uVar20;
  auVar21._4_4_ = (float)((ulong)uVar12 >> 0x20) * fVar47 - fVar26 * (float)((ulong)uVar20 >> 0x20);
  auVar21._8_4_ = fVar19 * fVar56 - fVar27 * fVar46;
  auVar21._12_4_ = fVar26 * fVar60 - fVar29 * fVar47;
  fVar10 = (float)*(double *)(param_3[2] + 8);
  auVar13 = NEON_ext(auVar21,auVar21,4,1);
  fVar11 = (float)*(double *)param_4[2];
  fVar9 = fVar42 + fVar45 + fVar7 * fVar44;
  fVar42 = fVar42 + fVar45 + fVar7 * fVar44;
  fVar19 = fVar19 * fVar37 + fVar46 * fVar32 + auVar13._0_4_ * fVar60;
  fVar26 = fVar26 * fVar40 + fVar47 * fVar35 + auVar13._4_4_ * fVar60;
  fVar27 = fVar27 * fVar37 + fVar56 * fVar32 + auVar21._0_4_ * fVar60;
  fVar29 = fVar29 * fVar40 + fVar60 * fVar35 + fVar60 * 0.0;
  auVar16._0_4_ = fVar19 + fVar19;
  auVar16._4_4_ = fVar26 + fVar26;
  auVar16._8_4_ = fVar27 + fVar27;
  auVar16._12_4_ = fVar29 + fVar29;
  fVar19 = fVar28 * (fVar15 - fVar5 * fVar9);
  fVar26 = fVar30 * (fVar17 - fVar6 * fVar42);
  fVar28 = fVar28 * (fVar44 - fVar7 * fVar9);
  fVar30 = fVar30 * (fVar44 - fVar8 * fVar42);
  fVar32 = *(float *)(param_2 + 0x50) + fVar19;
  fVar35 = *(float *)(param_2 + 0x54) + fVar26;
  fVar37 = *(float *)(param_2 + 0x58) + fVar28;
  fVar40 = *(float *)(param_2 + 0x5c) + fVar30;
  fVar56 = *(float *)(param_2 + 0x70) + fVar19;
  fVar60 = *(float *)(param_2 + 0x74) + fVar26;
  fVar61 = *(float *)(param_2 + 0x78) + fVar28;
  fVar62 = *(float *)(param_2 + 0x7c) + fVar30;
  fVar27 = *(float *)(param_2 + 0x40) + fVar19;
  fVar29 = *(float *)(param_2 + 0x44) + fVar26;
  fVar15 = *(float *)(param_2 + 0x48) + fVar28;
  fVar17 = *(float *)(param_2 + 0x4c) + fVar30;
  fVar19 = (float)*(undefined8 *)(param_2 + 0x60) + fVar19;
  fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) + fVar26;
  fVar28 = (float)*(undefined8 *)(param_2 + 0x68) + fVar28;
  fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20) + fVar30;
  fVar44 = fVar32 - fVar36;
  fVar45 = fVar35 - fVar41;
  fVar46 = fVar37 - fVar10;
  fVar47 = fVar40 - 0.0;
  auVar22._0_4_ = fVar56 - fVar36;
  auVar22._4_4_ = fVar60 - fVar41;
  auVar22._8_4_ = fVar61 - fVar10;
  auVar22._12_4_ = fVar62 - 0.0;
  auVar43._0_4_ = fVar32 - fVar18;
  auVar43._4_4_ = fVar35 - fVar31;
  auVar43._8_4_ = fVar37 - fVar11;
  auVar43._12_4_ = fVar40 - 0.0;
  fVar32 = fVar19 - fVar36;
  fVar35 = fVar26 - fVar41;
  fVar37 = fVar28 - fVar10;
  fVar40 = fVar30 - 0.0;
  auVar63._0_4_ = fVar27 - fVar36;
  auVar63._4_4_ = fVar29 - fVar41;
  auVar63._8_4_ = fVar15 - fVar10;
  auVar63._12_4_ = fVar17 - 0.0;
  auVar13 = *param_4;
  fVar27 = fVar27 - fVar18;
  fVar29 = fVar29 - fVar31;
  fVar15 = fVar15 - fVar11;
  fVar17 = fVar17 - 0.0;
  auVar39._0_4_ = fVar19 - fVar18;
  auVar39._4_4_ = fVar26 - fVar31;
  auVar39._8_4_ = fVar28 - fVar11;
  auVar39._12_4_ = fVar30 - 0.0;
  auVar33._0_4_ = fVar56 - fVar18;
  auVar33._4_4_ = fVar60 - fVar31;
  auVar33._8_4_ = fVar61 - fVar11;
  auVar33._12_4_ = fVar62 - 0.0;
  auVar38 = NEON_ext(auVar13,auVar13,8,1);
  fVar31 = auVar13._0_4_;
  fVar36 = auVar13._4_4_;
  fVar19 = auVar23._0_4_;
  fVar26 = auVar23._4_4_;
  fVar41 = auVar13._8_4_;
  fVar56 = auVar13._12_4_;
  fVar18 = auVar38._4_4_ * auVar38._4_4_;
  uVar12 = NEON_ext(auVar13._0_8_,auVar38._0_8_,4,1);
  fVar11 = fVar18 + -0.5;
  fVar18 = fVar18 + -0.5;
  fVar10 = auVar23._8_4_;
  fVar60 = fVar19 * fVar31 + fVar26 * fVar36 + fVar10 * fVar41;
  fVar61 = fVar19 * fVar31 + fVar26 * fVar36 + fVar10 * fVar41;
  auVar53._4_4_ = fVar35;
  auVar53._0_4_ = fVar32;
  auVar53._8_4_ = fVar37;
  auVar53._12_4_ = fVar40;
  auVar54._4_4_ = fVar35;
  auVar54._0_4_ = fVar32;
  auVar54._8_4_ = fVar37;
  auVar54._12_4_ = fVar40;
  auVar57 = NEON_ext(auVar53,auVar54,4,1);
  auVar48._0_4_ = (float)uVar50 * fVar31 - fVar19 * (float)uVar12;
  auVar48._4_4_ = (float)((ulong)uVar50 >> 0x20) * fVar36 - fVar26 * (float)((ulong)uVar12 >> 0x20);
  auVar48._8_4_ = fVar19 * fVar41 - fVar10 * fVar31;
  auVar48._12_4_ = fVar26 * fVar56 - auVar23._12_4_ * fVar36;
  auVar13 = NEON_ext(auVar48,auVar48,4,1);
  auVar58._4_4_ = fVar45;
  auVar58._0_4_ = fVar44;
  auVar58._8_4_ = fVar46;
  auVar58._12_4_ = fVar47;
  auVar64._4_4_ = fVar45;
  auVar64._0_4_ = fVar44;
  auVar64._8_4_ = fVar46;
  auVar64._12_4_ = fVar47;
  auVar53 = NEON_ext(auVar58,auVar64,4,1);
  auVar38 = NEON_ext(auVar16,auVar16,4,1);
  auVar3._4_4_ = fVar29;
  auVar3._0_4_ = fVar27;
  auVar3._8_4_ = fVar15;
  auVar3._12_4_ = fVar17;
  auVar4._4_4_ = fVar29;
  auVar4._0_4_ = fVar27;
  auVar4._8_4_ = fVar15;
  auVar4._12_4_ = fVar17;
  auVar51 = NEON_ext(auVar3,auVar4,4,1);
  fVar28 = auVar38._0_4_;
  fVar30 = auVar38._4_4_;
  fVar19 = fVar19 * fVar11 + fVar31 * fVar60 + auVar13._0_4_ * fVar56;
  fVar26 = fVar26 * fVar18 + fVar36 * fVar61 + auVar13._4_4_ * fVar56;
  fVar10 = fVar10 * fVar11 + fVar41 * fVar60 + auVar48._0_4_ * fVar56;
  fVar11 = auVar23._12_4_ * fVar18 + fVar56 * fVar61 + fVar56 * 0.0;
  auVar13 = NEON_ext(auVar63,auVar63,4,1);
  auVar64 = NEON_ext(auVar22,auVar22,4,1);
  auVar49._0_4_ = fVar19 + fVar19;
  auVar49._4_4_ = fVar26 + fVar26;
  auVar49._8_4_ = fVar10 + fVar10;
  auVar49._12_4_ = fVar11 + fVar11;
  fVar18 = auVar53._0_4_ * auVar16._0_4_ - fVar44 * fVar28;
  auVar54 = NEON_ext(auVar43,auVar43,4,1);
  fVar10 = auVar57._0_4_ * auVar16._0_4_ - fVar32 * fVar28;
  auVar58 = NEON_ext(auVar39,auVar39,4,1);
  fVar31 = auVar13._0_4_ * auVar16._0_4_ - auVar63._0_4_ * fVar28;
  auVar38 = NEON_ext(auVar49,auVar49,4,1);
  fVar19 = auVar64._0_4_ * auVar16._0_4_ - auVar22._0_4_ * fVar28;
  auVar23 = NEON_ext(auVar33,auVar33,4,1);
  fVar26 = auVar38._0_4_;
  fVar36 = auVar38._4_4_;
  fVar28 = auVar51._0_4_ * auVar49._0_4_ - fVar27 * fVar26;
  fVar11 = auVar54._0_4_ * auVar49._0_4_ - auVar43._0_4_ * fVar26;
  auVar52._0_4_ = fVar31 - fVar28;
  auVar52._4_4_ =
       (auVar13._4_4_ * auVar16._4_4_ - auVar63._4_4_ * fVar30) -
       (auVar51._4_4_ * auVar49._4_4_ - fVar29 * fVar36);
  auVar52._8_4_ =
       (auVar63._0_4_ * auVar16._8_4_ - auVar63._8_4_ * auVar16._0_4_) -
       (fVar27 * auVar49._8_4_ - fVar15 * auVar49._0_4_);
  auVar52._12_4_ =
       (auVar63._4_4_ * auVar16._12_4_ - auVar63._12_4_ * auVar16._4_4_) -
       (fVar29 * auVar49._12_4_ - fVar17 * auVar49._4_4_);
  auVar55._0_4_ = fVar18 - fVar11;
  auVar55._4_4_ =
       (auVar53._4_4_ * auVar16._4_4_ - fVar45 * fVar30) -
       (auVar54._4_4_ * auVar49._4_4_ - auVar43._4_4_ * fVar36);
  auVar55._8_4_ =
       (fVar44 * auVar16._8_4_ - fVar46 * auVar16._0_4_) -
       (auVar43._0_4_ * auVar49._8_4_ - auVar43._8_4_ * auVar49._0_4_);
  auVar55._12_4_ =
       (fVar45 * auVar16._12_4_ - fVar47 * auVar16._4_4_) -
       (auVar43._4_4_ * auVar49._12_4_ - auVar43._12_4_ * auVar49._4_4_);
  fVar27 = auVar58._0_4_ * auVar49._0_4_ - auVar39._0_4_ * fVar26;
  fVar26 = auVar23._0_4_ * auVar49._0_4_ - auVar33._0_4_ * fVar26;
  auVar59._0_4_ = fVar10 - fVar27;
  auVar59._4_4_ =
       (auVar57._4_4_ * auVar16._4_4_ - fVar35 * fVar30) -
       (auVar58._4_4_ * auVar49._4_4_ - auVar39._4_4_ * fVar36);
  auVar59._8_4_ =
       (fVar32 * auVar16._8_4_ - fVar37 * auVar16._0_4_) -
       (auVar39._0_4_ * auVar49._8_4_ - auVar39._8_4_ * auVar49._0_4_);
  auVar59._12_4_ =
       (fVar35 * auVar16._12_4_ - fVar40 * auVar16._4_4_) -
       (auVar39._4_4_ * auVar49._12_4_ - auVar39._12_4_ * auVar49._4_4_);
  auVar34._0_4_ = fVar19 - fVar26;
  auVar34._4_4_ =
       (auVar64._4_4_ * auVar16._4_4_ - auVar22._4_4_ * fVar30) -
       (auVar23._4_4_ * auVar49._4_4_ - auVar33._4_4_ * fVar36);
  auVar34._8_4_ =
       (auVar22._0_4_ * auVar16._8_4_ - auVar22._8_4_ * auVar16._0_4_) -
       (auVar33._0_4_ * auVar49._8_4_ - auVar33._8_4_ * auVar49._0_4_);
  auVar34._12_4_ =
       (auVar22._4_4_ * auVar16._12_4_ - auVar22._12_4_ * auVar16._4_4_) -
       (auVar33._4_4_ * auVar49._12_4_ - auVar33._12_4_ * auVar49._4_4_);
  auVar13 = NEON_ext(auVar34,auVar34,4,1);
  auVar23 = NEON_ext(auVar52,auVar52,4,1);
  auVar38 = NEON_ext(auVar55,auVar55,4,1);
  auVar53 = NEON_ext(auVar59,auVar59,4,1);
  auVar24._0_4_ = fVar5 * auVar38._0_4_;
  auVar24._4_4_ = fVar6 * auVar38._4_4_;
  auVar24._8_4_ = fVar7 * (fVar18 - fVar11);
  auVar24._12_4_ = fVar8 * 0.0;
  auVar14._0_4_ = fVar5 * auVar23._0_4_;
  auVar14._4_4_ = fVar6 * auVar23._4_4_;
  auVar14._8_4_ = fVar7 * (fVar31 - fVar28);
  auVar14._12_4_ = fVar8 * 0.0;
  auVar38 = NEON_ext(auVar14,auVar14,8,1);
  auVar51 = NEON_ext(auVar24,auVar24,8,1);
  auVar25._0_4_ = fVar5 * auVar53._0_4_;
  auVar25._4_4_ = fVar6 * auVar53._4_4_;
  auVar25._8_4_ = fVar7 * (fVar10 - fVar27);
  auVar25._12_4_ = fVar8 * 0.0;
  fVar5 = fVar5 * auVar13._0_4_;
  fVar6 = fVar6 * auVar13._4_4_;
  fVar7 = fVar7 * (fVar19 - fVar26);
  auVar53 = NEON_ext(auVar25,auVar25,8,1);
  auVar23._4_4_ = fVar6;
  auVar23._0_4_ = fVar5;
  auVar23._8_4_ = fVar7;
  auVar23._12_4_ = fVar8 * 0.0;
  auVar13._4_4_ = fVar6;
  auVar13._0_4_ = fVar5;
  auVar13._8_4_ = fVar7;
  auVar13._12_4_ = fVar8 * 0.0;
  auVar23 = NEON_ext(auVar23,auVar13,8,1);
  param_5[1] = CONCAT44(fVar42 + fVar5 + fVar6 + auVar23._0_4_,
                        fVar9 + auVar25._0_4_ + auVar25._4_4_ + auVar53._0_4_);
  *param_5 = CONCAT44(fVar42 + auVar24._0_4_ + auVar24._4_4_ + auVar51._0_4_,
                      fVar9 + auVar14._0_4_ + auVar14._4_4_ + auVar38._0_4_);
  return;
}


