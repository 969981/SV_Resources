/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d48b8; name: FUN_018d48b8
 */


undefined1  [16] FUN_018d48b8(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar3 + ((long)param_3 >> 1) + -0x28));
    }
    auVar4 = (*param_2)();
    uVar1 = auVar4._0_8_;
    uVar2 = auVar4._8_8_ & 0xffffffff;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


