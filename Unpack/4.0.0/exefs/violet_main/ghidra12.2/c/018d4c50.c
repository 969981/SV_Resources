/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d4c50; name: FUN_018d4c50
 */


undefined1  [16] FUN_018d4c50(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == 0) {
    uVar1 = 0;
    uVar2 = 0;
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


