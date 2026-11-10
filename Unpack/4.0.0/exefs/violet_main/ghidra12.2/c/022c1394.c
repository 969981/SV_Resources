/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022c1394; name: FUN_022c1394
 */


undefined1  [16] FUN_022c1394(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long local_38;
  long local_28;
  
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    FUN_022bfc28(&local_28);
    local_38 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      auVar2 = (*param_2)();
      uVar3 = auVar2._8_8_;
      uVar1 = auVar2._0_8_;
      FUN_022bfcb4(&local_38);
      goto LAB_022c1404;
    }
  }
  FUN_022bfcb4(&local_38);
  uVar1 = 0;
  uVar3 = 0;
LAB_022c1404:
  auVar2._8_8_ = uVar3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


