/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bac334; name: FUN_02bac334
 */


bool FUN_02bac334(undefined1 param_1 [16],undefined8 *param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  
  fVar1 = (float)*param_2 - param_1._0_4_;
  fVar3 = (float)((ulong)*param_2 >> 0x20) - param_1._4_4_;
  fVar4 = (float)param_2[1] - param_1._8_4_;
  fVar1 = fVar1 * fVar1;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar2._0_4_ = fVar1 + fVar3;
  auVar2._4_4_ = fVar4 + 0.0;
  auVar2._8_4_ = fVar1 + fVar3;
  auVar2._12_4_ = fVar4 + 0.0;
  auVar2 = NEON_ext(auVar2,auVar2,4,1);
  return auVar2._0_4_ + auVar2._4_4_ <= *(float *)(param_2 + 2) * *(float *)(param_2 + 2);
}


