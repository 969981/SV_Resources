/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02299c4c; name: FUN_02299c4c
 */


undefined1  [16] FUN_02299c4c(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffffffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    auVar3 = (*param_2)();
    uVar1 = auVar3._0_8_;
    uVar2 = auVar3._8_8_ & 0xffffffff;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


