/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271a150; name: FUN_0271a150
 */


undefined1  [16] FUN_0271a150(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar6 = FUN_00cf8cd8();
  uVar5 = auVar6._0_8_;
  uVar4 = uVar5 >> 0x28;
  if ((uVar5 >> 0x20 & 0xff) == 0) {
    uVar5 = 0;
  }
  else {
    if (auVar6._8_4_ == 0) {
      auVar6 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar5 = auVar6._0_8_ >> 0x20;
      uVar4 = auVar6._0_8_ >> 0x28;
      FUN_00cf8c04(param_1);
      bVar1 = (uVar5 & 0xff) == 0;
    }
    else {
      bVar1 = false;
      uVar5 = uVar5 >> 0x20;
    }
    if ((auVar6._8_4_ == 0) && (!bVar1)) {
      plVar3 = (long *)param_1[8];
      param_1[0x42] = param_1[0x3e] + (ulong)*(uint *)param_1[0x3e];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar2 = (long *)param_1[0x43];
      param_1[0x43] = (long)plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      param_1[0x44] = param_1[9];
      plVar3 = (long *)param_1[0xc];
      param_1[0x45] = param_1[10];
      param_1[0x46] = param_1[0xb];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar2 = (long *)param_1[0x47];
      param_1[0x47] = (long)plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      *(int *)(param_1 + 0x48) = (int)param_1[0xd];
    }
  }
  auVar7._8_8_ = auVar6._8_8_ & 0xffffffff;
  auVar7._0_8_ = uVar4 << 0x28 | auVar6._0_8_ & 0xffffffff | (uVar5 & 0xff) << 0x20;
  return auVar7;
}


