/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fc1c0; name: FUN_026fc1c0
 */


void FUN_026fc1c0(undefined1 param_1 [16],undefined8 *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = (param_1._0_4_ - (float)*param_2) * (float)param_2[2];
  fVar4 = (param_1._4_4_ - (float)((ulong)*param_2 >> 0x20)) * (float)((ulong)param_2[2] >> 0x20);
  fVar5 = (param_1._8_4_ - (float)param_2[1]) * (float)param_2[3];
  fVar6 = (param_1._12_4_ - (float)((ulong)param_2[1] >> 0x20)) * (float)((ulong)param_2[3] >> 0x20)
  ;
  auVar3._0_4_ = fVar2 + fVar4;
  auVar3._4_4_ = fVar5 + fVar6;
  auVar3._8_4_ = fVar2 + fVar4;
  auVar3._12_4_ = fVar5 + fVar6;
  auVar3 = NEON_ext(auVar3,auVar3,4,1);
  local_4 = auVar3._0_4_ + auVar3._4_4_;
  local_8 = *(float *)(param_2 + 4);
  local_c = 0.0;
  pfVar1 = &local_4;
  if (local_4 <= 0.0) {
    pfVar1 = &local_c;
  }
  if (local_8 <= *pfVar1) {
    pfVar1 = &local_8;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = *pfVar1 / local_8;
  }
  return;
}


