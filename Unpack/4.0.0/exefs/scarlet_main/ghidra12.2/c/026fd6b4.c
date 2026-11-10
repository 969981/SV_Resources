/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fd6b4; name: FUN_026fd6b4
 */


void FUN_026fd6b4(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_1._0_4_ * (float)*param_2;
  fVar3 = param_1._4_4_ * (float)((ulong)*param_2 >> 0x20);
  fVar4 = param_1._8_4_ * (float)param_2[1];
  fVar5 = param_1._12_4_ * (float)((ulong)param_2[1] >> 0x20);
  auVar1._0_4_ = fVar2 + fVar3;
  auVar1._4_4_ = fVar4 + fVar5;
  auVar1._8_4_ = fVar2 + fVar3;
  auVar1._12_4_ = fVar4 + fVar5;
  NEON_ext(auVar1,auVar1,4,1);
  return;
}


