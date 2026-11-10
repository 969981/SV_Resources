/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fa818; name: FUN_026fa818
 */


undefined1  [16] FUN_026fa818(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  
  fVar3 = (float)*param_2;
  fVar4 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = (float)param_2[1];
  fVar6 = (float)param_2[2];
  fVar9 = (param_1._0_4_ - fVar3) * fVar6;
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  fVar11 = (param_1._4_4_ - fVar4) * fVar7;
  fVar8 = (float)param_2[3];
  fVar12 = (param_1._8_4_ - fVar5) * fVar8;
  fVar13 = (param_1._12_4_ - (float)((ulong)param_2[1] >> 0x20)) *
           (float)((ulong)param_2[3] >> 0x20);
  auVar10._0_4_ = fVar9 + fVar11;
  auVar10._4_4_ = fVar12 + fVar13;
  auVar10._8_4_ = fVar9 + fVar11;
  auVar10._12_4_ = fVar12 + fVar13;
  auVar10 = NEON_ext(auVar10,auVar10,4,1);
  fVar3 = param_1._0_4_ - (fVar3 + fVar6 * (auVar10._0_4_ + auVar10._4_4_));
  fVar4 = param_1._4_4_ - (fVar4 + fVar7 * (auVar10._8_4_ + auVar10._12_4_));
  fVar5 = param_1._8_4_ - (fVar5 + fVar8 * (auVar10._0_4_ + auVar10._4_4_));
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  auVar1._0_4_ = fVar3 + fVar4;
  auVar1._4_4_ = fVar5 + 0.0;
  auVar1._8_4_ = fVar3 + fVar4;
  auVar1._12_4_ = fVar5 + 0.0;
  auVar10 = NEON_ext(auVar1,auVar1,4,1);
  auVar2._0_4_ = auVar10._0_4_ + auVar10._4_4_;
  auVar2._4_4_ = auVar10._8_4_ + auVar10._12_4_;
  auVar2._8_4_ = auVar10._0_4_ + auVar10._4_4_;
  auVar2._12_4_ = auVar10._8_4_ + auVar10._12_4_;
  return auVar2;
}


