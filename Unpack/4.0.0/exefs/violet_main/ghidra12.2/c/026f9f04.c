/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f9f04; name: FUN_026f9f04
 */


undefined8 FUN_026f9f04(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  fVar3 = param_1[8];
  fVar4 = param_1[4] * fVar3;
  fVar6 = param_1[5] * fVar3;
  fVar7 = param_1[6] * fVar3;
  fVar3 = param_1[7] * fVar3;
  fVar8 = *param_1 - *param_2;
  fVar9 = param_1[1] - param_2[1];
  fVar10 = param_1[2] - param_2[2];
  fVar11 = param_1[3] - param_2[3];
  auVar5._0_4_ = fVar4 * fVar8 + fVar6 * fVar9;
  auVar5._4_4_ = fVar7 * fVar10 + fVar3 * fVar11;
  auVar5._8_4_ = fVar4 * fVar8 + fVar6 * fVar9;
  auVar5._12_4_ = fVar7 * fVar10 + fVar3 * fVar11;
  auVar5 = NEON_ext(auVar5,auVar5,4,1);
  auVar12._0_4_ = fVar4 * fVar4 + fVar6 * fVar6;
  auVar12._4_4_ = fVar7 * fVar7 + fVar3 * fVar3;
  auVar12._8_4_ = fVar4 * fVar4 + fVar6 * fVar6;
  auVar12._12_4_ = fVar7 * fVar7 + fVar3 * fVar3;
  auVar2._0_4_ = fVar8 * fVar8 + fVar9 * fVar9;
  auVar2._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar2._8_4_ = fVar8 * fVar8 + fVar9 * fVar9;
  auVar2._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  fVar3 = auVar5._0_4_ + auVar5._4_4_;
  fVar3 = fVar3 + fVar3;
  auVar5 = NEON_ext(auVar2,auVar2,4,1);
  fVar4 = auVar12._0_4_ + auVar12._4_4_;
  fVar6 = fVar3 * fVar3 + fVar4 * -4.0 * ((auVar5._0_4_ + auVar5._4_4_) - param_2[4] * param_2[4]);
  if (0.0 <= fVar6) {
    if ((param_3 != (float *)0x0) || (param_4 != (float *)0x0)) {
      fVar7 = SQRT(fVar6);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar6);
      }
      auVar5 = NEON_fmov(0x3f800000,4);
      fVar4 = auVar5._0_4_ / (fVar4 + fVar4);
      fVar6 = fVar4 * (-fVar3 - fVar7);
      fVar4 = fVar4 * (fVar7 - fVar3);
      fVar3 = *(float *)PTR_DAT_047d4180;
      fVar4 = (float)((uint)fVar4 ^
                     ((uint)fVar4 ^ (uint)fVar6) &
                     ~-(uint)((float)(fVar3 <= fVar4) * fVar4 +
                              *(float *)PTR_DAT_047d41a0 * (float)(fVar4 < fVar3) * fVar4 <
                             (float)(fVar3 <= fVar6) * fVar6 +
                             *(float *)PTR_DAT_047d41a0 * (float)(fVar6 < fVar3) * fVar6));
      if (param_4 != (float *)0x0) {
        *param_4 = fVar4;
      }
      if (param_3 != (float *)0x0) {
        fVar11 = param_1[8];
        fVar8 = *param_1;
        fVar9 = param_1[1];
        fVar10 = param_1[3];
        fVar3 = param_1[4];
        fVar6 = param_1[5];
        fVar7 = param_1[7];
        param_3[2] = param_1[2] + param_1[6] * fVar11 * fVar4;
        param_3[3] = fVar10 + fVar7 * fVar11 * fVar4;
        *param_3 = fVar8 + fVar3 * fVar11 * fVar4;
        param_3[1] = fVar9 + fVar6 * fVar11 * fVar4;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


