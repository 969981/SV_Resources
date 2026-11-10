/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9f55c; name: FUN_02b9f55c
 */


void FUN_02b9f55c(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = *param_1;
  auVar2 = NEON_frsqrte(auVar1,4);
  auVar4._0_4_ = auVar1._0_4_ * auVar2._0_4_;
  auVar4._4_4_ = auVar1._4_4_ * auVar2._4_4_;
  auVar4._8_4_ = auVar1._8_4_ * auVar2._8_4_;
  auVar4._12_4_ = auVar1._12_4_ * auVar2._12_4_;
  auVar4 = NEON_frsqrts(auVar2,auVar4,4);
  auVar3._0_4_ = auVar2._0_4_ * auVar4._0_4_;
  auVar3._4_4_ = auVar2._4_4_ * auVar4._4_4_;
  auVar3._8_4_ = auVar2._8_4_ * auVar4._8_4_;
  auVar3._12_4_ = auVar2._12_4_ * auVar4._12_4_;
  auVar2._0_4_ = auVar1._0_4_ * auVar3._0_4_;
  auVar2._4_4_ = auVar1._4_4_ * auVar3._4_4_;
  auVar2._8_4_ = auVar1._8_4_ * auVar3._8_4_;
  auVar2._12_4_ = auVar1._12_4_ * auVar3._12_4_;
  NEON_frsqrts(auVar3,auVar2,4);
  return;
}


