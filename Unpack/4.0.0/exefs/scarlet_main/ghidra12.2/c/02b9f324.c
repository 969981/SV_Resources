/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9f324; name: FUN_02b9f324
 */


undefined1  [16] FUN_02b9f324(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  
  fVar2 = (float)*param_2 - param_1._0_4_;
  fVar4 = (float)((ulong)*param_2 >> 0x20) - param_1._4_4_;
  fVar5 = (float)param_2[1] - param_1._8_4_;
  fVar2 = fVar2 * fVar2;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  auVar3._0_4_ = fVar2 + fVar4;
  auVar3._4_4_ = fVar5 + 0.0;
  auVar3._8_4_ = fVar2 + fVar4;
  auVar3._12_4_ = fVar5 + 0.0;
  auVar3 = NEON_ext(auVar3,auVar3,4,1);
  auVar1._0_4_ = auVar3._0_4_ + auVar3._4_4_;
  auVar1._4_4_ = auVar3._8_4_ + auVar3._12_4_;
  auVar1._8_4_ = auVar3._0_4_ + auVar3._4_4_;
  auVar1._12_4_ = auVar3._8_4_ + auVar3._12_4_;
  return auVar1;
}


