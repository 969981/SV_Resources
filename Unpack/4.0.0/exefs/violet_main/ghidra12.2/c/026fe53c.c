/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fe53c; name: FUN_026fe53c
 */


bool FUN_026fe53c(undefined1 param_1 [16],long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  
  fVar13 = param_1._12_4_;
  fVar12 = param_1._8_4_;
  fVar11 = param_1._4_4_;
  fVar10 = param_1._0_4_;
  pfVar1 = (float *)*param_2;
  pfVar3 = (float *)param_2[1];
  pfVar2 = (float *)param_2[2];
  auVar14._0_4_ = fVar10 * *pfVar3 + fVar11 * pfVar3[1];
  auVar14._4_4_ = fVar12 * pfVar3[2] + fVar13 * pfVar3[3];
  auVar14._8_4_ = fVar10 * *pfVar3 + fVar11 * pfVar3[1];
  auVar14._12_4_ = fVar12 * pfVar3[2] + fVar13 * pfVar3[3];
  auVar14 = NEON_ext(auVar14,auVar14,4,1);
  auVar15._0_4_ = fVar10 * *pfVar2 + fVar11 * pfVar2[1];
  auVar15._4_4_ = fVar12 * pfVar2[2] + fVar13 * pfVar2[3];
  auVar15._8_4_ = fVar10 * *pfVar2 + fVar11 * pfVar2[1];
  auVar15._12_4_ = fVar12 * pfVar2[2] + fVar13 * pfVar2[3];
  auVar15 = NEON_ext(auVar15,auVar15,4,1);
  fVar4 = auVar14._0_4_ + auVar14._4_4_;
  fVar16 = (float)*(undefined8 *)PTR_DAT_047d4180;
  fVar5 = auVar15._0_4_ + auVar15._4_4_;
  auVar7._0_4_ = fVar10 * *pfVar1 + fVar11 * pfVar1[1];
  auVar7._4_4_ = fVar12 * pfVar1[2] + fVar13 * pfVar1[3];
  auVar7._8_4_ = fVar10 * *pfVar1 + fVar11 * pfVar1[1];
  auVar7._12_4_ = fVar12 * pfVar1[2] + fVar13 * pfVar1[3];
  auVar14 = NEON_ext(auVar7,auVar7,4,1);
  fVar6 = auVar14._0_4_ + auVar14._4_4_;
  uVar22 = ((undefined8 *)param_2[3])[1];
  uVar21 = *(undefined8 *)param_2[3];
  fVar23 = *(float *)PTR_DAT_047d41a0;
  fVar17 = fVar10 * (float)uVar21;
  fVar18 = fVar11 * (float)((ulong)uVar21 >> 0x20);
  fVar19 = fVar12 * (float)uVar22;
  fVar20 = fVar13 * (float)((ulong)uVar22 >> 0x20);
  auVar8._0_4_ = fVar17 + fVar18;
  auVar8._4_4_ = fVar19 + fVar20;
  auVar8._8_4_ = fVar17 + fVar18;
  auVar8._12_4_ = fVar19 + fVar20;
  auVar14 = NEON_ext(auVar8,auVar8,4,1);
  fVar17 = auVar14._0_4_ + auVar14._4_4_;
  uVar22 = ((undefined8 *)param_2[4])[1];
  uVar21 = *(undefined8 *)param_2[4];
  fVar10 = fVar10 * (float)uVar21;
  fVar11 = fVar11 * (float)((ulong)uVar21 >> 0x20);
  fVar12 = fVar12 * (float)uVar22;
  fVar13 = fVar13 * (float)((ulong)uVar22 >> 0x20);
  auVar9._0_4_ = fVar10 + fVar11;
  auVar9._4_4_ = fVar12 + fVar13;
  auVar9._8_4_ = fVar10 + fVar11;
  auVar9._12_4_ = fVar12 + fVar13;
  auVar14 = NEON_ext(auVar9,auVar9,4,1);
  fVar10 = auVar14._0_4_ + auVar14._4_4_;
  return (float)(fVar16 <= fVar4) * fVar4 + fVar23 * (float)(fVar4 < fVar16) * fVar4 +
         (float)(fVar16 <= fVar5) * fVar5 + fVar23 * (float)(fVar5 < fVar16) * fVar5 +
         (float)(fVar16 <= fVar17) * fVar17 + fVar23 * (float)(fVar17 < fVar16) * fVar17 +
         (float)(fVar16 <= fVar10) * fVar10 + fVar23 * (float)(fVar10 < fVar16) * fVar10 <
         (float)(fVar16 <= fVar6) * fVar6 + fVar23 * (float)(fVar6 < fVar16) * fVar6;
}


