/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cdac0; name: FUN_022cdac0
 */


undefined1  [16] FUN_022cdac0(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    FUN_01667884(&local_40);
    auVar1._8_8_ = uStack_38;
    auVar1._0_8_ = local_40;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*param_1 + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)(*param_4);
  }
  return auVar1;
}


