/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa0868; name: FUN_01fa0868
 */


void FUN_01fa0868(undefined1 param_1 [16],undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  
  fVar1 = (param_1._0_4_ - (float)*param_2) * (float)param_2[2];
  fVar3 = (param_1._4_4_ - (float)((ulong)*param_2 >> 0x20)) * (float)((ulong)param_2[2] >> 0x20);
  fVar4 = (param_1._8_4_ - (float)param_2[1]) * (float)param_2[3];
  fVar5 = (param_1._12_4_ - (float)((ulong)param_2[1] >> 0x20)) * (float)((ulong)param_2[3] >> 0x20)
  ;
  auVar2._0_4_ = fVar1 + fVar3;
  auVar2._4_4_ = fVar4 + fVar5;
  auVar2._8_4_ = fVar1 + fVar3;
  auVar2._12_4_ = fVar4 + fVar5;
  auVar2 = NEON_ext(auVar2,auVar2,4,1);
  if (param_3 != (float *)0x0) {
    *param_3 = (auVar2._0_4_ + auVar2._4_4_) / *(float *)(param_2 + 4);
  }
  return;
}


