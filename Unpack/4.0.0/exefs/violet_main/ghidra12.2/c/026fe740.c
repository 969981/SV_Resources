/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fe740; name: FUN_026fe740
 */


bool FUN_026fe740(undefined1 param_1 [16],long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  
  fVar18 = param_1._12_4_;
  fVar17 = param_1._8_4_;
  fVar16 = param_1._4_4_;
  fVar15 = param_1._0_4_;
  pfVar1 = (float *)*param_2;
  pfVar4 = (float *)param_2[1];
  pfVar2 = (float *)param_2[2];
  pfVar5 = (float *)param_2[3];
  pfVar3 = (float *)param_2[4];
  auVar19._0_4_ = fVar15 * *pfVar1 + fVar16 * pfVar1[1];
  auVar19._4_4_ = fVar17 * pfVar1[2] + fVar18 * pfVar1[3];
  auVar19._8_4_ = fVar15 * *pfVar1 + fVar16 * pfVar1[1];
  auVar19._12_4_ = fVar17 * pfVar1[2] + fVar18 * pfVar1[3];
  auVar20._0_4_ = fVar15 * *pfVar4 + fVar16 * pfVar4[1];
  auVar20._4_4_ = fVar17 * pfVar4[2] + fVar18 * pfVar4[3];
  auVar20._8_4_ = fVar15 * *pfVar4 + fVar16 * pfVar4[1];
  auVar20._12_4_ = fVar17 * pfVar4[2] + fVar18 * pfVar4[3];
  auVar19 = NEON_ext(auVar19,auVar19,4,1);
  auVar21._0_4_ = fVar15 * *pfVar2 + fVar16 * pfVar2[1];
  auVar21._4_4_ = fVar17 * pfVar2[2] + fVar18 * pfVar2[3];
  auVar21._8_4_ = fVar15 * *pfVar2 + fVar16 * pfVar2[1];
  auVar21._12_4_ = fVar17 * pfVar2[2] + fVar18 * pfVar2[3];
  auVar22._0_4_ = fVar15 * *pfVar5 + fVar16 * pfVar5[1];
  auVar22._4_4_ = fVar17 * pfVar5[2] + fVar18 * pfVar5[3];
  auVar22._8_4_ = fVar15 * *pfVar5 + fVar16 * pfVar5[1];
  auVar22._12_4_ = fVar17 * pfVar5[2] + fVar18 * pfVar5[3];
  auVar20 = NEON_ext(auVar20,auVar20,4,1);
  auVar21 = NEON_ext(auVar21,auVar21,4,1);
  auVar22 = NEON_ext(auVar22,auVar22,4,1);
  fVar7 = auVar19._0_4_ + auVar19._4_4_;
  fVar8 = auVar20._0_4_ + auVar20._4_4_;
  fVar9 = auVar21._0_4_ + auVar21._4_4_;
  fVar10 = auVar22._0_4_ + auVar22._4_4_;
  fVar6 = *(float *)PTR_DAT_047d4180;
  auVar12._0_4_ = fVar15 * *pfVar3 + fVar16 * pfVar3[1];
  auVar12._4_4_ = fVar17 * pfVar3[2] + fVar18 * pfVar3[3];
  auVar12._8_4_ = fVar15 * *pfVar3 + fVar16 * pfVar3[1];
  auVar12._12_4_ = fVar17 * pfVar3[2] + fVar18 * pfVar3[3];
  auVar19 = NEON_ext(auVar12,auVar12,4,1);
  fVar11 = auVar19._0_4_ + auVar19._4_4_;
  uVar28 = ((undefined8 *)param_2[5])[1];
  uVar27 = *(undefined8 *)param_2[5];
  fVar29 = *(float *)PTR_DAT_047d41a0;
  fVar23 = fVar15 * (float)uVar27;
  fVar24 = fVar16 * (float)((ulong)uVar27 >> 0x20);
  fVar25 = fVar17 * (float)uVar28;
  fVar26 = fVar18 * (float)((ulong)uVar28 >> 0x20);
  auVar13._0_4_ = fVar23 + fVar24;
  auVar13._4_4_ = fVar25 + fVar26;
  auVar13._8_4_ = fVar23 + fVar24;
  auVar13._12_4_ = fVar25 + fVar26;
  auVar19 = NEON_ext(auVar13,auVar13,4,1);
  fVar23 = auVar19._0_4_ + auVar19._4_4_;
  uVar28 = ((undefined8 *)param_2[6])[1];
  uVar27 = *(undefined8 *)param_2[6];
  fVar15 = fVar15 * (float)uVar27;
  fVar16 = fVar16 * (float)((ulong)uVar27 >> 0x20);
  fVar17 = fVar17 * (float)uVar28;
  fVar18 = fVar18 * (float)((ulong)uVar28 >> 0x20);
  auVar14._0_4_ = fVar15 + fVar16;
  auVar14._4_4_ = fVar17 + fVar18;
  auVar14._8_4_ = fVar15 + fVar16;
  auVar14._12_4_ = fVar17 + fVar18;
  auVar19 = NEON_ext(auVar14,auVar14,4,1);
  fVar15 = auVar19._0_4_ + auVar19._4_4_;
  return (float)(fVar6 <= fVar8) * fVar8 + fVar29 * (float)(fVar8 < fVar6) * fVar8 +
         (float)(fVar6 <= fVar9) * fVar9 + fVar29 * (float)(fVar9 < fVar6) * fVar9 +
         (float)(fVar6 <= fVar10) * fVar10 + fVar29 * (float)(fVar10 < fVar6) * fVar10 +
         (float)(fVar6 <= fVar11) * fVar11 + fVar29 * (float)(fVar11 < fVar6) * fVar11 +
         (float)(fVar6 <= fVar23) * fVar23 + fVar29 * (float)(fVar23 < fVar6) * fVar23 +
         (float)(fVar6 <= fVar15) * fVar15 + fVar29 * (float)(fVar15 < fVar6) * fVar15 <
         (float)(fVar6 <= fVar7) * fVar7 + fVar29 * (float)(fVar7 < fVar6) * fVar7;
}


