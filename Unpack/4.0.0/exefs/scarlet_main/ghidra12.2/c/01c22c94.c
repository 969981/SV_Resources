/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c22c94; name: FUN_01c22c94
 */


undefined1  [16] FUN_01c22c94(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long local_18;
  
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = param_2;
  FUN_01c228e8(&local_18);
  if (local_18 == 0) {
    bVar4 = true;
  }
  else {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    auVar5 = (*param_2)(plVar1,*param_4);
    bVar4 = false;
  }
  FUN_01c226f8(&local_18);
  uVar2 = 0;
  if (!bVar4) {
    uVar2 = auVar5._0_8_;
  }
  uVar3 = 0;
  if (!bVar4) {
    uVar3 = auVar5._8_8_;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}


