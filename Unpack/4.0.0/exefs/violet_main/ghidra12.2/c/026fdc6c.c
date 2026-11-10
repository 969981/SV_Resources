/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fdc6c; name: FUN_026fdc6c
 */


undefined1  [16] FUN_026fdc6c(undefined1 param_1 [16],float *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  float fVar8;
  float fVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  
  fVar20 = *param_2;
  fVar22 = param_2[1];
  fVar23 = param_2[2];
  fVar24 = param_2[3];
  auVar10._0_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar10._4_4_ = fVar23 * fVar23 + fVar24 * fVar24;
  auVar10._8_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar10._12_4_ = fVar23 * fVar23 + fVar24 * fVar24;
  auVar10 = NEON_ext(auVar10,auVar10,4,1);
  fVar8 = SQRT(auVar10._0_4_ + auVar10._4_4_);
  bVar3 = false;
  if ((-1.1920929e-07 < fVar8) && (bVar3 = false, !NAN(fVar8))) {
    bVar3 = fVar8 < 1.1920929e-07;
  }
  uVar1 = -(uint)bVar3;
  fVar9 = (float)((uint)(fVar20 / fVar8) ^ ((uint)(fVar20 / fVar8) ^ (uint)fVar20) & uVar1) * fVar8;
  fVar14 = (float)((uint)(fVar22 / fVar8) ^ ((uint)(fVar22 / fVar8) ^ (uint)fVar22) & uVar1) * fVar8
  ;
  fVar15 = (float)((uint)(fVar23 / fVar8) ^ ((uint)(fVar23 / fVar8) ^ (uint)fVar23) & uVar1) * fVar8
  ;
  fVar8 = (float)((uint)(fVar24 / fVar8) ^ ((uint)(fVar24 / fVar8) ^ (uint)fVar24) & uVar1) * fVar8;
  fVar16 = fVar20 * fVar9;
  fVar17 = fVar22 * fVar14;
  fVar18 = fVar23 * fVar15;
  fVar19 = fVar24 * fVar8;
  fVar20 = param_1._0_4_ * fVar20;
  fVar22 = param_1._4_4_ * fVar22;
  fVar23 = param_1._8_4_ * fVar23;
  fVar24 = param_1._12_4_ * fVar24;
  auVar21._0_4_ = fVar16 + fVar17;
  auVar21._4_4_ = fVar18 + fVar19;
  auVar21._8_4_ = fVar16 + fVar17;
  auVar21._12_4_ = fVar18 + fVar19;
  auVar4._0_4_ = fVar20 + fVar22;
  auVar4._4_4_ = fVar23 + fVar24;
  auVar4._8_4_ = fVar20 + fVar22;
  auVar4._12_4_ = fVar23 + fVar24;
  auVar10 = NEON_ext(auVar21,auVar21,4,1);
  auVar21 = NEON_ext(auVar4,auVar4,4,1);
  fVar20 = auVar10._0_4_ + auVar10._4_4_;
  fVar22 = auVar21._0_4_ + auVar21._4_4_;
  bVar3 = false;
  if ((fVar20 < *(float *)PTR_DAT_047d41b0) &&
     (bVar3 = false, !NAN(*(float *)PTR_DAT_047d41c0) && !NAN(fVar20))) {
    bVar3 = *(float *)PTR_DAT_047d41c0 < fVar20;
  }
  if (!bVar3) {
    fVar20 = -(fVar22 + param_2[4]) / fVar20;
    auVar5._0_4_ = param_1._0_4_ + fVar9 * fVar20;
    auVar5._4_4_ = param_1._4_4_ + fVar14 * fVar20;
    auVar5._8_4_ = param_1._8_4_ + fVar15 * fVar20;
    auVar5._12_4_ = param_1._12_4_ + fVar8 * fVar20;
    return auVar5;
  }
  fVar22 = fVar22 + param_2[4];
  fVar20 = 1.0;
  if (*(float *)PTR_DAT_047d4180 <= fVar22) {
    fVar20 = 0.0;
  }
  fVar23 = 1.0;
  if (*(float *)PTR_DAT_047d4180 > fVar22) {
    fVar23 = 0.0;
  }
  fVar20 = fVar22 * fVar23 + fVar22 * *(float *)PTR_DAT_047d41a0 * fVar20;
  bVar3 = false;
  if ((-1.1920929e-07 < fVar20) && (bVar3 = false, !NAN(fVar20))) {
    bVar3 = fVar20 < 1.1920929e-07;
  }
  iVar2 = -(uint)bVar3;
  bVar7 = (byte)iVar2;
  auVar6[0] = param_1[0] & bVar7;
  bVar11 = (byte)((uint)iVar2 >> 8);
  auVar6[1] = param_1[1] & bVar11;
  bVar12 = (byte)((uint)iVar2 >> 0x10);
  auVar6[2] = param_1[2] & bVar12;
  bVar13 = (byte)((uint)iVar2 >> 0x18);
  auVar6[3] = param_1[3] & bVar13;
  auVar6[4] = param_1[4] & bVar7;
  auVar6[5] = param_1[5] & bVar11;
  auVar6[6] = param_1[6] & bVar12;
  auVar6[7] = param_1[7] & bVar13;
  auVar6[8] = param_1[8] & bVar7;
  auVar6[9] = param_1[9] & bVar11;
  auVar6[10] = param_1[10] & bVar12;
  auVar6[0xb] = param_1[0xb] & bVar13;
  auVar6[0xc] = param_1[0xc] & bVar7;
  auVar6[0xd] = param_1[0xd] & bVar11;
  auVar6[0xe] = param_1[0xe] & bVar12;
  auVar6[0xf] = param_1[0xf] & bVar13;
  return auVar6;
}


