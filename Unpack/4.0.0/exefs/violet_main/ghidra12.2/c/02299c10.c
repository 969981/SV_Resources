/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02299c10; name: FUN_02299c10
 */


undefined1  [16] FUN_02299c10(long param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 == 0) {
    auVar1._8_8_ = 0xffffffff;
    auVar1._0_8_ = 0xffffffffffffffff;
    return auVar1;
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
  }
  auVar1 = (*param_2)();
  auVar2._0_8_ = auVar1._0_8_;
  auVar2._8_8_ = auVar1._8_8_ & 0xffffffff;
  return auVar2;
}


