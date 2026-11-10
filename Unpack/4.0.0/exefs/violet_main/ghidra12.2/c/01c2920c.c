/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2920c; name: FUN_01c2920c
 */


undefined8 FUN_01c2920c(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  long local_28;
  
  FUN_01c27d8c(&local_28);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)();
  }
  FUN_01c1abf8(&local_28);
  return uVar1;
}


