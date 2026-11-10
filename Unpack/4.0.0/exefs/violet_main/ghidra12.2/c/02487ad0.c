/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02487ad0; name: FUN_02487ad0
 */


undefined4 FUN_02487ad0(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined4 uVar1;
  long local_28;
  
  FUN_02486fe4(&local_28);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)();
  }
  FUN_01797590(&local_28);
  return uVar1;
}


