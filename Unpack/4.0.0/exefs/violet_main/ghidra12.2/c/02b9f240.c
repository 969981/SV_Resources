/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f240; name: FUN_02b9f240
 */


void FUN_02b9f240(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = *param_1;
  auVar2 = NEON_frecpe(auVar1,4);
  auVar4 = NEON_frecps(auVar2,auVar1,4);
  auVar3._0_4_ = auVar2._0_4_ * auVar4._0_4_;
  auVar3._4_4_ = auVar2._4_4_ * auVar4._4_4_;
  auVar3._8_4_ = auVar2._8_4_ * auVar4._8_4_;
  auVar3._12_4_ = auVar2._12_4_ * auVar4._12_4_;
  NEON_frecps(auVar3,auVar1,4);
  return;
}


