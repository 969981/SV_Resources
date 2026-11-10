/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a4af20; name: FUN_01a4af20
 */


undefined1  [16] FUN_01a4af20(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_38;
  long local_18;
  
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    FUN_026691c0(&local_18);
    local_38 = local_18;
    if (local_18 != 0) {
      plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      auVar4 = (*param_2)(plVar1,*param_4);
      uVar2 = auVar4._0_8_;
      uVar3 = auVar4._8_8_ & 0xffffffff;
      FUN_0266924c(&local_38);
      goto LAB_01a4af9c;
    }
  }
  FUN_0266924c(&local_38);
  uVar2 = 0;
  uVar3 = 0;
LAB_01a4af9c:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


