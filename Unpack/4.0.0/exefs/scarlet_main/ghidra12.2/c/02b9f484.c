/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9f484; name: FUN_02b9f484
 */


void FUN_02b9f484(float *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_1 * *param_1;
  fVar3 = param_1[1] * param_1[1];
  fVar4 = param_1[2] * param_1[2];
  fVar5 = param_1[3] * param_1[3];
  auVar1._0_4_ = fVar2 + fVar3;
  auVar1._4_4_ = fVar4 + fVar5;
  auVar1._8_4_ = fVar2 + fVar3;
  auVar1._12_4_ = fVar4 + fVar5;
  NEON_ext(auVar1,auVar1,4,1);
  return;
}


