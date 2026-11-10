/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cc66c; name: FUN_031cc66c
 */


void FUN_031cc66c(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar26 [16];
  
  uVar13 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar12 = (float)*(undefined8 *)*param_2;
  fVar10 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar20 = (undefined4)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  fVar15 = (float)*(undefined8 *)*pauVar1;
  fVar17 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar24._12_4_ = uVar20;
  auVar24._0_12_ = *pauVar1;
  auVar26._12_4_ = uVar20;
  auVar26._0_12_ = *pauVar1;
  auVar24 = NEON_ext(auVar24,auVar26,8,1);
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar20 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar21 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar22._12_4_ = uVar13;
  auVar22._0_12_ = *param_2;
  auVar25._12_4_ = uVar13;
  auVar25._0_12_ = *param_2;
  auVar22 = NEON_ext(auVar22,auVar25,8,1);
  fVar9 = auVar22._0_4_;
  fVar11 = auVar24._0_4_;
  auVar5._12_4_ = uVar20;
  auVar5._0_12_ = *pauVar1;
  auVar6._12_4_ = uVar20;
  auVar6._0_12_ = *pauVar1;
  auVar22 = NEON_ext(auVar5,auVar6,8,1);
  fVar19 = (float)param_3[1];
  fVar16 = (float)*param_3;
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  fVar27 = (float)*(undefined8 *)*pauVar1;
  fVar14 = auVar22._4_4_;
  fVar23 = auVar22._0_4_;
  param_1[1] = CONCAT44(fVar14 * fVar19 + fVar21 * fVar16 + fVar14 * fVar18,
                        fVar23 * fVar19 + fVar27 * fVar16 + fVar21 * fVar18);
  *param_1 = CONCAT44(fVar11 * fVar19 + fVar15 * fVar16 + fVar17 * fVar18,
                      fVar9 * fVar19 + fVar12 * fVar16 + fVar10 * fVar18);
  fVar19 = (float)param_3[3];
  fVar16 = (float)param_3[2];
  fVar18 = (float)((ulong)param_3[2] >> 0x20);
  param_1[3] = CONCAT44(fVar14 * fVar19 + fVar21 * fVar16 + fVar14 * fVar18,
                        fVar23 * fVar19 + fVar27 * fVar16 + fVar21 * fVar18);
  param_1[2] = CONCAT44(fVar11 * fVar19 + fVar15 * fVar16 + fVar17 * fVar18,
                        fVar9 * fVar19 + fVar12 * fVar16 + fVar10 * fVar18);
  fVar19 = (float)param_3[5];
  fVar16 = (float)param_3[4];
  fVar18 = (float)((ulong)param_3[4] >> 0x20);
  param_1[5] = CONCAT44(fVar14 * fVar19 + fVar21 * fVar16 + fVar14 * fVar18,
                        fVar23 * fVar19 + fVar27 * fVar16 + fVar21 * fVar18);
  param_1[4] = CONCAT44(fVar11 * fVar19 + fVar15 * fVar16 + fVar17 * fVar18,
                        fVar9 * fVar19 + fVar12 * fVar16 + fVar10 * fVar18);
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar20 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar9 = (float)param_3[6] - (float)*(undefined8 *)param_2[4];
  fVar11 = (float)((ulong)param_3[6] >> 0x20) - (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  fVar12 = (float)param_3[7] - (float)*(undefined8 *)(param_2[4] + 8);
  uVar13 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar4 = *(undefined8 *)*param_2;
  auVar22 = *(undefined1 (*) [16])(param_2[1] + 4);
  auVar24 = NEON_ext(auVar22,auVar22,8,1);
  auVar2._12_4_ = uVar13;
  auVar2._0_12_ = *param_2;
  auVar3._12_4_ = uVar13;
  auVar3._0_12_ = *param_2;
  auVar25 = NEON_ext(auVar2,auVar3,8,1);
  auVar7._12_4_ = uVar20;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = uVar20;
  auVar8._0_12_ = *pauVar1;
  auVar26 = NEON_ext(auVar7,auVar8,8,1);
  param_1[7] = CONCAT44(auVar26._4_4_ * fVar12 + fVar10 * fVar9 + auVar26._4_4_ * fVar11,
                        auVar26._0_4_ * fVar12 +
                        (float)*(undefined8 *)*pauVar1 * fVar9 + fVar10 * fVar11);
  param_1[6] = CONCAT44(auVar24._0_4_ * fVar12 + auVar22._0_4_ * fVar9 + auVar22._4_4_ * fVar11,
                        auVar25._0_4_ * fVar12 +
                        (float)uVar4 * fVar9 + (float)((ulong)uVar4 >> 0x20) * fVar11);
  return;
}


