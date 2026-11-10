/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ffd8cc; name: FUN_02ffd8cc
 */


float FUN_02ffd8cc(long param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  
  fVar13 = (float)*(undefined8 *)(param_2 + 4) * param_3[4];
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_3[5];
  fVar15 = (float)*(undefined8 *)(param_2 + 6) * param_3[6];
  fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) * param_3[7];
  auVar42._4_4_ = fVar14;
  auVar42._0_4_ = fVar13;
  auVar42._8_4_ = fVar15;
  auVar42._12_4_ = fVar16;
  auVar23._4_4_ = fVar14;
  auVar23._0_4_ = fVar13;
  auVar23._8_4_ = fVar15;
  auVar23._12_4_ = fVar16;
  auVar18 = NEON_ext(auVar42,auVar23,8,1);
  fVar17 = param_3[8];
  fVar15 = *(float *)(param_1 + 0x148);
  fVar16 = param_2[8];
  lVar9 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))
                    (*(long **)(param_1 + 0x48),*(undefined8 *)(param_2 + 10));
  lVar10 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))
                     (*(long **)(param_1 + 0x48),*(undefined8 *)(param_3 + 10));
  pauVar11 = (undefined1 (*) [16])
             (**(code **)(**(long **)(param_1 + 0x48) + 0x100))
                       (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar9 + 0x80));
  pauVar12 = (undefined1 (*) [16])
             (**(code **)(**(long **)(param_1 + 0x48) + 0x100))
                       (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar10 + 0x80));
  auVar42 = *pauVar11;
  auVar23 = NEON_ext(auVar42,auVar42,8,1);
  fVar24 = *param_2 - (float)*(double *)pauVar11[1];
  fVar26 = param_2[1] - (float)*(double *)(pauVar11[1] + 8);
  fVar27 = param_2[2] - (float)*(double *)pauVar11[2];
  fVar28 = param_2[3] - 0.0;
  fVar21 = auVar23._4_4_ * auVar23._4_4_;
  uVar22 = NEON_ext(auVar42._0_8_,auVar23._0_8_,4,1);
  fVar39 = fVar21 + -0.5;
  fVar21 = fVar21 + -0.5;
  auVar23 = pauVar11[7];
  fVar29 = auVar42._0_4_;
  fVar33 = auVar23._0_4_;
  fVar32 = auVar42._4_4_;
  fVar35 = auVar23._4_4_;
  fVar34 = auVar42._8_4_;
  fVar36 = auVar23._8_4_;
  fVar25 = auVar42._12_4_;
  fVar40 = fVar29 * fVar33 + fVar32 * fVar35 + fVar34 * fVar36;
  fVar43 = fVar29 * fVar33 + fVar32 * fVar35 + fVar34 * fVar36;
  auVar42 = NEON_ext(auVar23,auVar23,8,1);
  uVar41 = NEON_ext(auVar23._0_8_,auVar42._0_8_,4,1);
  auVar37._0_4_ = fVar29 * (float)uVar41 - fVar33 * (float)uVar22;
  auVar37._4_4_ = fVar32 * (float)((ulong)uVar41 >> 0x20) - fVar35 * (float)((ulong)uVar22 >> 0x20);
  auVar37._8_4_ = fVar34 * fVar33 - fVar36 * fVar29;
  auVar37._12_4_ = fVar25 * fVar35 - auVar23._12_4_ * fVar32;
  auVar42 = NEON_ext(auVar37,auVar37,4,1);
  fVar29 = fVar33 * fVar39 + fVar29 * fVar40 + auVar42._0_4_ * fVar25;
  fVar32 = fVar35 * fVar21 + fVar32 * fVar43 + auVar42._4_4_ * fVar25;
  fVar34 = fVar36 * fVar39 + fVar34 * fVar40 + auVar37._0_4_ * fVar25;
  fVar21 = auVar23._12_4_ * fVar21 + fVar25 * fVar43 + fVar25 * 0.0;
  auVar5._4_4_ = fVar26;
  auVar5._0_4_ = fVar24;
  auVar5._8_4_ = fVar27;
  auVar5._12_4_ = fVar28;
  auVar6._4_4_ = fVar26;
  auVar6._0_4_ = fVar24;
  auVar6._8_4_ = fVar27;
  auVar6._12_4_ = fVar28;
  auVar23 = NEON_ext(auVar5,auVar6,4,1);
  auVar30._0_4_ = fVar29 + fVar29;
  auVar30._4_4_ = fVar32 + fVar32;
  auVar30._8_4_ = fVar34 + fVar34;
  auVar30._12_4_ = fVar21 + fVar21;
  auVar42 = NEON_ext(auVar30,auVar30,4,1);
  fVar25 = auVar23._0_4_ * auVar30._0_4_ - fVar24 * auVar42._0_4_;
  fVar21 = auVar23._4_4_ * auVar30._4_4_ - fVar26 * auVar42._4_4_;
  fVar24 = fVar24 * auVar30._8_4_ - fVar27 * auVar30._0_4_;
  fVar26 = fVar26 * auVar30._12_4_ - fVar28 * auVar30._4_4_;
  auVar7._4_4_ = fVar21;
  auVar7._0_4_ = fVar25;
  auVar7._8_4_ = fVar24;
  auVar7._12_4_ = fVar26;
  auVar8._4_4_ = fVar21;
  auVar8._0_4_ = fVar25;
  auVar8._8_4_ = fVar24;
  auVar8._12_4_ = fVar26;
  auVar31 = NEON_ext(auVar7,auVar8,4,1);
  fVar21 = *param_3 - (float)*(double *)pauVar12[1];
  fVar26 = param_3[1] - (float)*(double *)(pauVar12[1] + 8);
  fVar28 = param_3[2] - (float)*(double *)pauVar12[2];
  fVar29 = param_3[3] - 0.0;
  auVar42 = *pauVar12;
  auVar23 = NEON_ext(auVar42,auVar42,8,1);
  fVar40 = auVar23._4_4_ * auVar23._4_4_;
  uVar22 = NEON_ext(auVar42._0_8_,auVar23._0_8_,4,1);
  fVar39 = fVar40 + -0.5;
  fVar40 = fVar40 + -0.5;
  auVar23 = pauVar12[7];
  fVar24 = auVar23._0_4_;
  fVar34 = auVar42._0_4_;
  fVar27 = auVar23._4_4_;
  fVar33 = auVar42._4_4_;
  fVar32 = auVar23._8_4_;
  fVar35 = auVar42._8_4_;
  fVar36 = auVar42._12_4_;
  fVar43 = fVar34 * fVar24 + fVar33 * fVar27 + fVar35 * fVar32;
  fVar44 = fVar34 * fVar24 + fVar33 * fVar27 + fVar35 * fVar32;
  auVar42 = NEON_ext(auVar23,auVar23,8,1);
  uVar41 = NEON_ext(auVar23._0_8_,auVar42._0_8_,4,1);
  auVar19._0_4_ = fVar34 * (float)uVar41 - fVar24 * (float)uVar22;
  auVar19._4_4_ = fVar33 * (float)((ulong)uVar41 >> 0x20) - fVar27 * (float)((ulong)uVar22 >> 0x20);
  auVar19._8_4_ = fVar35 * fVar24 - fVar32 * fVar34;
  auVar19._12_4_ = fVar36 * fVar27 - auVar23._12_4_ * fVar33;
  auVar42 = NEON_ext(auVar19,auVar19,4,1);
  auVar38._4_4_ = fVar26;
  auVar38._0_4_ = fVar21;
  auVar38._8_4_ = fVar28;
  auVar38._12_4_ = fVar29;
  auVar1._4_4_ = fVar26;
  auVar1._0_4_ = fVar21;
  auVar1._8_4_ = fVar28;
  auVar1._12_4_ = fVar29;
  auVar38 = NEON_ext(auVar38,auVar1,4,1);
  fVar24 = fVar24 * fVar39 + fVar34 * fVar43 + auVar42._0_4_ * fVar36;
  fVar27 = fVar27 * fVar40 + fVar33 * fVar44 + auVar42._4_4_ * fVar36;
  fVar32 = fVar32 * fVar39 + fVar35 * fVar43 + auVar19._0_4_ * fVar36;
  fVar34 = auVar23._12_4_ * fVar40 + fVar36 * fVar44 + fVar36 * 0.0;
  auVar20._0_4_ = fVar24 + fVar24;
  auVar20._4_4_ = fVar27 + fVar27;
  auVar20._8_4_ = fVar32 + fVar32;
  auVar20._12_4_ = fVar34 + fVar34;
  auVar42 = NEON_ext(auVar20,auVar20,4,1);
  fVar24 = auVar38._0_4_ * auVar20._0_4_ - fVar21 * auVar42._0_4_;
  fVar27 = auVar38._4_4_ * auVar20._4_4_ - fVar26 * auVar42._4_4_;
  fVar21 = fVar21 * auVar20._8_4_ - fVar28 * auVar20._0_4_;
  fVar26 = fVar26 * auVar20._12_4_ - fVar29 * auVar20._4_4_;
  auVar2._4_4_ = fVar27;
  auVar2._0_4_ = fVar24;
  auVar2._8_4_ = fVar21;
  auVar2._12_4_ = fVar26;
  auVar3._4_4_ = fVar27;
  auVar3._0_4_ = fVar24;
  auVar3._8_4_ = fVar21;
  auVar3._12_4_ = fVar26;
  auVar42 = NEON_ext(auVar2,auVar3,4,1);
  fVar21 = ((float)*(undefined8 *)pauVar11[6] + auVar31._0_4_) -
           ((float)*(undefined8 *)pauVar12[6] + auVar42._0_4_);
  fVar26 = ((float)((ulong)*(undefined8 *)pauVar11[6] >> 0x20) + auVar31._4_4_) -
           ((float)((ulong)*(undefined8 *)pauVar12[6] >> 0x20) + auVar42._4_4_);
  fVar24 = ((float)*(undefined8 *)(pauVar11[6] + 8) + fVar25) -
           ((float)*(undefined8 *)(pauVar12[6] + 8) + fVar24);
  fVar27 = ((float)((ulong)*(undefined8 *)(pauVar11[6] + 8) >> 0x20) + 0.0) -
           ((float)((ulong)*(undefined8 *)(pauVar12[6] + 8) >> 0x20) + 0.0);
  fVar21 = fVar21 * fVar21;
  fVar26 = fVar26 * fVar26;
  fVar24 = fVar24 * fVar24;
  fVar27 = fVar27 * fVar27;
  auVar31._4_4_ = fVar26;
  auVar31._0_4_ = fVar21;
  auVar31._8_4_ = fVar24;
  auVar31._12_4_ = fVar27;
  auVar4._4_4_ = fVar26;
  auVar4._0_4_ = fVar21;
  auVar4._8_4_ = fVar24;
  auVar4._12_4_ = fVar27;
  auVar42 = NEON_ext(auVar31,auVar4,8,1);
  return (fVar16 - fVar17) * (fVar16 - fVar17) +
         fVar15 * fVar15 * (1.0 - (fVar13 + fVar14 + auVar18._0_4_)) * 10.0 +
         (fVar21 + fVar26 + auVar42._0_4_) * 0.1;
}


