/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026b00cc; name: FUN_026b00cc
 */


undefined1  [16] FUN_026b00cc(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long local_28;
  
  FUN_026afb44(&local_28);
  if (local_28 == 0) {
    auVar1 = ZEXT816(0);
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)();
  }
  FUN_026af8a8(&local_28);
  return auVar1;
}


