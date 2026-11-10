/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119cfd8; name: FUN_0119cfd8
 */


bool FUN_0119cfd8(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  
  fVar2 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar4 = (float)param_2[1];
  fVar5 = (float)param_2[2];
  fVar8 = (param_1._0_4_ - fVar2) * fVar5;
  fVar6 = (float)((ulong)param_2[2] >> 0x20);
  fVar10 = (param_1._4_4_ - fVar3) * fVar6;
  fVar7 = (float)param_2[3];
  fVar11 = (param_1._8_4_ - fVar4) * fVar7;
  fVar12 = (param_1._12_4_ - (float)((ulong)param_2[1] >> 0x20)) *
           (float)((ulong)param_2[3] >> 0x20);
  auVar9._0_4_ = fVar8 + fVar10;
  auVar9._4_4_ = fVar11 + fVar12;
  auVar9._8_4_ = fVar8 + fVar10;
  auVar9._12_4_ = fVar11 + fVar12;
  auVar9 = NEON_ext(auVar9,auVar9,4,1);
  fVar11 = *(float *)(param_2 + 4);
  fVar8 = auVar9._0_4_ + auVar9._4_4_;
  fVar10 = 1.0;
  if (fVar8 < 0.0) {
    fVar10 = 0.0;
  }
  fVar10 = fVar10 * fVar8;
  fVar8 = 1.0;
  if (fVar11 <= fVar10) {
    fVar8 = 0.0;
  }
  fVar12 = 1.0;
  if (fVar11 > fVar10) {
    fVar12 = 0.0;
  }
  fVar10 = fVar10 * fVar8 + fVar11 * fVar12;
  fVar8 = param_1._0_4_ - (fVar2 + fVar5 * fVar10);
  fVar2 = param_1._4_4_ - (fVar3 + fVar6 * fVar10);
  fVar3 = param_1._8_4_ - (fVar4 + fVar7 * fVar10);
  fVar8 = fVar8 * fVar8;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  auVar1._0_4_ = fVar8 + fVar2;
  auVar1._4_4_ = fVar3 + 0.0;
  auVar1._8_4_ = fVar8 + fVar2;
  auVar1._12_4_ = fVar3 + 0.0;
  auVar9 = NEON_ext(auVar1,auVar1,4,1);
  return auVar9._0_4_ + auVar9._4_4_ <= *(float *)(param_2 + 6) * *(float *)(param_2 + 6);
}


