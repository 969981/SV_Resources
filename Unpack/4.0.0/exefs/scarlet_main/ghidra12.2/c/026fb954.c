/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fb954; name: FUN_026fb954
 */


void FUN_026fb954(undefined1 param_1 [16],undefined8 *param_2,float *param_3)

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
  fVar1 = auVar2._0_4_ + auVar2._4_4_;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = 1.0;
  if (fVar1 < 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = fVar4 * fVar1;
  fVar1 = 1.0;
  if (fVar3 <= fVar4) {
    fVar1 = 0.0;
  }
  fVar5 = 1.0;
  if (fVar3 > fVar4) {
    fVar5 = 0.0;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (fVar4 * fVar1 + fVar3 * fVar5) / fVar3;
  }
  return;
}


