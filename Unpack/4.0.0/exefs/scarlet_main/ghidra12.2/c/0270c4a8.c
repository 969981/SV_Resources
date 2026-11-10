/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270c4a8; name: FUN_0270c4a8
 */


undefined1  [16] FUN_0270c4a8(long *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = FUN_00cf8cd8();
  uVar4 = auVar5._0_8_;
  uVar3 = uVar4 >> 0x28;
  if ((uVar4 >> 0x20 & 0xff) == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar5._8_4_ == 0) {
      auVar5 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar4 = auVar5._0_8_ >> 0x20;
      uVar3 = auVar5._0_8_ >> 0x28;
      FUN_00cf8c04(param_1);
      bVar1 = (uVar4 & 0xff) == 0;
    }
    else {
      bVar1 = false;
      uVar4 = uVar4 >> 0x20;
    }
    if ((auVar5._8_4_ == 0) && (!bVar1)) {
      lVar2 = param_1[0x2d];
      if (lVar2 == 0) {
        lVar2 = param_1[1];
      }
      FUN_0270c570(param_1,param_1[0x3e] + (ulong)*(uint *)param_1[0x3e],lVar2);
    }
  }
  auVar6._0_8_ = uVar3 << 0x28 | auVar5._0_8_ & 0xffffffff | (uVar4 & 0xff) << 0x20;
  auVar6._8_8_ = auVar5._8_8_ & 0xffffffff;
  return auVar6;
}


