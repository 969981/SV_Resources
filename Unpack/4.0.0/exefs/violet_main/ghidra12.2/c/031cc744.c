/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cc744; name: FUN_031cc744
 */


void FUN_031cc744(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar7 = *(undefined8 *)*param_2;
  pauVar1 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar33 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar18 = *(undefined8 *)*pauVar1;
  auVar8._12_4_ = uVar33;
  auVar8._0_12_ = *pauVar1;
  auVar9._12_4_ = uVar33;
  auVar9._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar8,auVar9,8,1);
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar33 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar36._12_4_ = uVar32;
  auVar36._0_12_ = *param_2;
  auVar38._12_4_ = uVar32;
  auVar38._0_12_ = *param_2;
  auVar36 = NEON_ext(auVar36,auVar38,8,1);
  auVar19._12_4_ = uVar33;
  auVar19._0_12_ = *pauVar1;
  auVar20._12_4_ = uVar33;
  auVar20._0_12_ = *pauVar1;
  auVar38 = NEON_ext(auVar19,auVar20,8,1);
  fVar31 = (float)param_3[7];
  fVar29 = (float)param_3[6];
  fVar30 = (float)((ulong)param_3[6] >> 0x20);
  param_1[7] = CONCAT44(auVar38._4_4_ * fVar31 + fVar34 * fVar29 + auVar38._4_4_ * fVar30,
                        auVar38._0_4_ * fVar31 +
                        (float)*(undefined8 *)*pauVar1 * fVar29 + fVar34 * fVar30);
  param_1[6] = CONCAT44(auVar37._0_4_ * fVar31 +
                        (float)uVar18 * fVar29 + (float)((ulong)uVar18 >> 0x20) * fVar30,
                        auVar36._0_4_ * fVar31 +
                        (float)uVar7 * fVar29 + (float)((ulong)uVar7 >> 0x20) * fVar30);
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar7 = *(undefined8 *)*param_2;
  pauVar2 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar33 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar18 = *(undefined8 *)*pauVar2;
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar35 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar10._12_4_ = uVar33;
  auVar10._0_12_ = *pauVar2;
  auVar11._12_4_ = uVar33;
  auVar11._0_12_ = *pauVar2;
  auVar38 = NEON_ext(auVar10,auVar11,8,1);
  auVar37._12_4_ = uVar32;
  auVar37._0_12_ = *param_2;
  auVar39._12_4_ = uVar32;
  auVar39._0_12_ = *param_2;
  auVar36 = NEON_ext(auVar37,auVar39,8,1);
  auVar21._12_4_ = uVar35;
  auVar21._0_12_ = *pauVar1;
  auVar22._12_4_ = uVar35;
  auVar22._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar21,auVar22,8,1);
  fVar31 = (float)param_3[5];
  fVar29 = (float)param_3[4];
  fVar30 = (float)((ulong)param_3[4] >> 0x20);
  param_1[5] = CONCAT44(auVar37._4_4_ * fVar31 + fVar34 * fVar29 + auVar37._4_4_ * fVar30,
                        auVar37._0_4_ * fVar31 +
                        (float)*(undefined8 *)*pauVar1 * fVar29 + fVar34 * fVar30);
  param_1[4] = CONCAT44(auVar38._0_4_ * fVar31 +
                        (float)uVar18 * fVar29 + (float)((ulong)uVar18 >> 0x20) * fVar30,
                        auVar36._0_4_ * fVar31 +
                        (float)uVar7 * fVar29 + (float)((ulong)uVar7 >> 0x20) * fVar30);
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar7 = *(undefined8 *)*param_2;
  pauVar2 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar33 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar18 = *(undefined8 *)*pauVar2;
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar35 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar12._12_4_ = uVar33;
  auVar12._0_12_ = *pauVar2;
  auVar13._12_4_ = uVar33;
  auVar13._0_12_ = *pauVar2;
  auVar38 = NEON_ext(auVar12,auVar13,8,1);
  auVar3._12_4_ = uVar32;
  auVar3._0_12_ = *param_2;
  auVar4._12_4_ = uVar32;
  auVar4._0_12_ = *param_2;
  auVar36 = NEON_ext(auVar3,auVar4,8,1);
  auVar23._12_4_ = uVar35;
  auVar23._0_12_ = *pauVar1;
  auVar24._12_4_ = uVar35;
  auVar24._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar23,auVar24,8,1);
  fVar31 = (float)param_3[3];
  fVar29 = (float)param_3[2];
  fVar30 = (float)((ulong)param_3[2] >> 0x20);
  param_1[3] = CONCAT44(auVar37._4_4_ * fVar31 + fVar34 * fVar29 + auVar37._4_4_ * fVar30,
                        auVar37._0_4_ * fVar31 +
                        (float)*(undefined8 *)*pauVar1 * fVar29 + fVar34 * fVar30);
  param_1[2] = CONCAT44(auVar38._0_4_ * fVar31 +
                        (float)uVar18 * fVar29 + (float)((ulong)uVar18 >> 0x20) * fVar30,
                        auVar36._0_4_ * fVar31 +
                        (float)uVar7 * fVar29 + (float)((ulong)uVar7 >> 0x20) * fVar30);
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar7 = *(undefined8 *)*param_2;
  pauVar2 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar33 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar18 = *(undefined8 *)*pauVar2;
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar35 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar14._12_4_ = uVar33;
  auVar14._0_12_ = *pauVar2;
  auVar15._12_4_ = uVar33;
  auVar15._0_12_ = *pauVar2;
  auVar38 = NEON_ext(auVar14,auVar15,8,1);
  auVar5._12_4_ = uVar32;
  auVar5._0_12_ = *param_2;
  auVar6._12_4_ = uVar32;
  auVar6._0_12_ = *param_2;
  auVar36 = NEON_ext(auVar5,auVar6,8,1);
  auVar25._12_4_ = uVar35;
  auVar25._0_12_ = *pauVar1;
  auVar26._12_4_ = uVar35;
  auVar26._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar25,auVar26,8,1);
  fVar31 = (float)param_3[1];
  fVar29 = (float)*param_3;
  fVar30 = (float)((ulong)*param_3 >> 0x20);
  param_1[1] = CONCAT44(auVar37._4_4_ * fVar31 + fVar34 * fVar29 + auVar37._4_4_ * fVar30,
                        auVar37._0_4_ * fVar31 +
                        (float)*(undefined8 *)*pauVar1 * fVar29 + fVar34 * fVar30);
  *param_1 = CONCAT44(auVar38._0_4_ * fVar31 +
                      (float)uVar18 * fVar29 + (float)((ulong)uVar18 >> 0x20) * fVar30,
                      auVar36._0_4_ * fVar31 +
                      (float)uVar7 * fVar29 + (float)((ulong)uVar7 >> 0x20) * fVar30);
  auVar36 = *(undefined1 (*) [16])(param_2[2] + 8);
  fVar29 = ((float)param_3[6] - (float)*(undefined8 *)param_2[4]) +
           ((float)param_3[8] - (float)*(undefined8 *)(param_2[5] + 4));
  fVar30 = ((float)((ulong)param_3[6] >> 0x20) - (float)((ulong)*(undefined8 *)param_2[4] >> 0x20))
           + ((float)((ulong)param_3[8] >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2[5] + 4) >> 0x20));
  fVar31 = ((float)param_3[7] - (float)*(undefined8 *)(param_2[4] + 8)) +
           ((float)param_3[9] - (float)*(undefined8 *)param_2[6]);
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar7 = *(undefined8 *)*param_2;
  pauVar1 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar33 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar18 = *(undefined8 *)*pauVar1;
  auVar27._12_4_ = uVar33;
  auVar27._0_12_ = *pauVar1;
  auVar28._12_4_ = uVar33;
  auVar28._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar27,auVar28,8,1);
  auVar16._12_4_ = uVar32;
  auVar16._0_12_ = *param_2;
  auVar17._12_4_ = uVar32;
  auVar17._0_12_ = *param_2;
  auVar38 = NEON_ext(auVar16,auVar17,8,1);
  auVar39 = NEON_ext(auVar36,auVar36,8,1);
  param_1[7] = CONCAT44(auVar39._4_4_ * fVar31 + auVar36._4_4_ * fVar29 + auVar39._4_4_ * fVar30,
                        auVar39._0_4_ * fVar31 + auVar36._0_4_ * fVar29 + auVar36._4_4_ * fVar30);
  param_1[6] = CONCAT44(auVar37._0_4_ * fVar31 +
                        (float)uVar18 * fVar29 + (float)((ulong)uVar18 >> 0x20) * fVar30,
                        auVar38._0_4_ * fVar31 +
                        (float)uVar7 * fVar29 + (float)((ulong)uVar7 >> 0x20) * fVar30);
  return;
}


