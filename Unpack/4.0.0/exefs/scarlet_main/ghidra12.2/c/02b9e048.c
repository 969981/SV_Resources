/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9e048; name: FUN_02b9e048
 */


bool FUN_02b9e048(undefined1 param_1 [16],undefined8 *param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  
  fVar1 = param_1._0_4_ * (float)*param_2;
  fVar3 = param_1._4_4_ * (float)((ulong)*param_2 >> 0x20);
  fVar4 = param_1._8_4_ * (float)param_2[1];
  fVar5 = param_1._12_4_ * (float)((ulong)param_2[1] >> 0x20);
  auVar2._0_4_ = fVar1 + fVar3;
  auVar2._4_4_ = fVar4 + fVar5;
  auVar2._8_4_ = fVar1 + fVar3;
  auVar2._12_4_ = fVar4 + fVar5;
  auVar2 = NEON_ext(auVar2,auVar2,4,1);
  return 0.0 <= *(float *)(param_2 + 2) + auVar2._0_4_ + auVar2._4_4_;
}


