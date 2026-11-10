/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a4aed0; name: FUN_01a4aed0
 */


undefined1  [16] FUN_01a4aed0(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((*param_1 == 0) || (lVar4 = *(long *)(*param_1 + 0x10), lVar4 == 0)) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)(lVar4 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    auVar5 = (*param_2)(plVar1,*param_4);
    uVar2 = auVar5._0_8_;
    uVar3 = auVar5._8_8_ & 0xffffffff;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


