/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1f374; name: FUN_01e1f374
 */


void FUN_01e1f374(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  float fVar1;
  float fVar7;
  undefined1 auVar2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar5 [16];
  undefined1 auVar4 [16];
  undefined1 auVar3 [16];
  
  if (*(char *)(param_3 + 0x40) == '\0') {
    return;
  }
  auVar2 = NEON_ext(param_2,param_2,0xc,1);
  auVar3._4_12_ = auVar2._4_12_;
  auVar3._0_4_ = param_2._0_4_;
  auVar5._12_4_ = auVar2._12_4_;
  auVar5._0_8_ = auVar3._0_8_;
  auVar5._8_4_ = param_2._4_4_;
  auVar4._8_8_ = auVar5._8_8_;
  auVar4._4_4_ = auVar2._0_4_;
  auVar4._0_4_ = param_2._0_4_;
  auVar6._0_12_ = auVar4._0_12_;
  auVar6._12_4_ = auVar2._4_4_;
  auVar2 = NEON_ext(auVar6,auVar6,8,1);
  fVar7 = auVar2._4_4_ * param_2._8_4_;
  NEON_fmov(0x3f800000,4);
  fVar1 = param_2._4_4_ * param_2._12_4_;
  FUN_01e1f328(param_1,fVar7 + fVar7 + fVar1 + fVar1,*(undefined8 *)(param_3 + 0x78));
  return;
}


