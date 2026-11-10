/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9e070; name: FUN_02b9e070
 */


undefined1  [16] FUN_02b9e070(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  
  fVar2 = (float)*param_2;
  fVar6 = param_1._0_4_ * fVar2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar8 = param_1._4_4_ * fVar3;
  fVar4 = (float)param_2[1];
  fVar9 = param_1._8_4_ * fVar4;
  fVar5 = (float)((ulong)param_2[1] >> 0x20);
  fVar10 = param_1._12_4_ * fVar5;
  auVar7._0_4_ = fVar6 + fVar8;
  auVar7._4_4_ = fVar9 + fVar10;
  auVar7._8_4_ = fVar6 + fVar8;
  auVar7._12_4_ = fVar9 + fVar10;
  auVar7 = NEON_ext(auVar7,auVar7,4,1);
  auVar1._0_4_ = param_1._0_4_ - fVar2 * (auVar7._0_4_ + auVar7._4_4_);
  auVar1._4_4_ = param_1._4_4_ - fVar3 * (auVar7._8_4_ + auVar7._12_4_);
  auVar1._8_4_ = param_1._8_4_ - fVar4 * (auVar7._0_4_ + auVar7._4_4_);
  auVar1._12_4_ = param_1._12_4_ - fVar5 * (auVar7._8_4_ + auVar7._12_4_);
  return auVar1;
}


