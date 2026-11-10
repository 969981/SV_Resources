/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d0b14; name: FUN_029d0b14
 */


undefined1  [16] FUN_029d0b14(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = FUN_00cf8cd8();
  uVar2 = auVar3._0_8_;
  uVar1 = uVar2 >> 0x28;
  if ((uVar2 >> 0x20 & 0xff) == 0) {
    uVar2 = 0;
  }
  else if (auVar3._8_4_ == 0) {
    auVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    uVar2 = auVar3._0_8_ >> 0x20;
    uVar1 = auVar3._0_8_ >> 0x28;
    FUN_00cf8c04(param_1);
  }
  else {
    uVar2 = uVar2 >> 0x20;
  }
  auVar4._0_8_ = uVar1 << 0x28 | (uVar2 & 0xff) << 0x20 | auVar3._0_8_ & 0xffffffff;
  auVar4._8_8_ = auVar3._8_8_ & 0xffffffff;
  return auVar4;
}


