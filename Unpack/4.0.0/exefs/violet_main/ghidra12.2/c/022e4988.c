/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e4988; name: FUN_022e4988
 */


undefined1  [16] FUN_022e4988(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long local_28;
  
  FUN_022e3f6c(&local_28);
  if (local_28 == 0) {
    auVar1 = ZEXT816(0);
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)();
  }
  uVar3 = auVar1._8_8_;
  FUN_022e3ab8(&local_28);
  auVar2._8_8_ = uVar3;
  auVar2._0_8_ = auVar1._0_8_;
  return auVar2;
}


