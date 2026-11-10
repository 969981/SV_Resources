/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02732800; name: FUN_02732800
 */


undefined1  [16] FUN_02732800(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar4 = FUN_00cf8cd8();
  uVar3 = auVar4._0_8_;
  uVar2 = uVar3 >> 0x28;
  if ((uVar3 >> 0x20 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    if (auVar4._8_4_ == 0) {
      auVar4 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar3 = auVar4._0_8_ >> 0x20;
      uVar2 = auVar4._0_8_ >> 0x28;
      FUN_00cf8c04(param_1);
      bVar1 = (uVar3 & 0xff) == 0;
    }
    else {
      bVar1 = false;
      uVar3 = uVar3 >> 0x20;
    }
    if ((auVar4._8_4_ == 0) && (!bVar1)) {
      param_1[0x42] = param_1[0x3e] + (ulong)*(uint *)param_1[0x3e];
    }
  }
  auVar5._0_8_ = uVar2 << 0x28 | auVar4._0_8_ & 0xffffffff | (uVar3 & 0xff) << 0x20;
  auVar5._8_8_ = auVar4._8_8_ & 0xffffffff;
  return auVar5;
}


