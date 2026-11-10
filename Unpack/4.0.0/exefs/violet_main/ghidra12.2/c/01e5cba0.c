/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5cba0; name: FUN_01e5cba0
 */


float FUN_01e5cba0(undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar1 = param_1._0_4_ * param_1._0_4_;
  fVar2 = param_1._4_4_ * param_1._4_4_;
  fVar3 = param_1._8_4_ * param_1._8_4_;
  fVar4 = param_1._12_4_ * param_1._12_4_;
  auVar5._0_4_ = fVar1 + fVar2;
  auVar5._4_4_ = fVar3 + fVar4;
  auVar5._8_4_ = fVar1 + fVar2;
  auVar5._12_4_ = fVar3 + fVar4;
  param_2 = param_2 * param_2;
  fVar3 = param_2 - fVar3;
  auVar5 = NEON_ext(auVar5,auVar5,4,1);
  if (fVar3 == 0.0) {
    fVar3 = 1.1920929e-07;
  }
  fVar2 = ABS(((auVar5._0_4_ + auVar5._4_4_) - param_2) / fVar3);
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  return (param_2 * param_3 * param_3 * -3.1415927 * fVar1) / fVar3;
}


