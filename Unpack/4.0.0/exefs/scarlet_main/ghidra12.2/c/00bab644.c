/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bab644; name: FUN_00bab644
 */


undefined1  [16] FUN_00bab644(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((long *)*param_1 == param_2) {
    lVar2 = 0;
LAB_00bab690:
    bVar4 = true;
  }
  else {
    lVar2 = *param_2;
    if (lVar2 == 0) goto LAB_00bab690;
    FUN_00bb1344(lVar2);
    bVar4 = false;
  }
  auVar6 = FUN_00b7b9c4(param_2[4],param_3);
  uVar3 = auVar6._8_8_;
  uVar5 = auVar6._0_8_ >> 0x20;
  if (auVar6._0_4_ == 0) {
    if (param_2[3] != 0) {
      auVar6 = FUN_00bab644(param_1,param_2[3],param_3);
      uVar3 = auVar6._8_8_;
      uVar5 = auVar6._0_8_ >> 0x20;
      if (auVar6._0_4_ != 0) goto LAB_00bab6b0;
    }
    uVar1 = FUN_00b7bb2c(param_2,param_3);
    if ((uVar1 & 1) == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar3;
      auVar6 = auVar6 << 0x40;
    }
    else {
      auVar6 = FUN_00b7b9c4(param_2[4],param_3);
      uVar5 = auVar6._0_8_ >> 0x20;
    }
  }
LAB_00bab6b0:
  if (!bVar4) {
    FUN_00bb14b8(lVar2);
  }
  auVar7._8_8_ = auVar6._8_8_;
  auVar7._0_8_ = auVar6._0_8_ & 0xffffffff | uVar5 << 0x20;
  return auVar7;
}


