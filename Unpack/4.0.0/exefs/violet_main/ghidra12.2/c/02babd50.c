/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02babd50; name: FUN_02babd50
 */


float FUN_02babd50(undefined1 param_1 [16],undefined8 *param_2)

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
  fVar2 = param_1._0_4_ - (fVar2 + fVar5 * (auVar9._0_4_ + auVar9._4_4_));
  fVar3 = param_1._4_4_ - (fVar3 + fVar6 * (auVar9._8_4_ + auVar9._12_4_));
  fVar4 = param_1._8_4_ - (fVar4 + fVar7 * (auVar9._0_4_ + auVar9._4_4_));
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar1._0_4_ = fVar2 + fVar3;
  auVar1._4_4_ = fVar4 + 0.0;
  auVar1._8_4_ = fVar2 + fVar3;
  auVar1._12_4_ = fVar4 + 0.0;
  auVar9 = NEON_ext(auVar1,auVar1,4,1);
  fVar2 = auVar9._0_4_ + auVar9._4_4_;
  fVar3 = SQRT(fVar2);
  if (NAN(fVar3)) {
    fVar2 = sqrtf(fVar2);
    return fVar2;
  }
  return fVar3;
}


