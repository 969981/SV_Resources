/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bb6560; name: FUN_01bb6560
 */


void FUN_01bb6560(undefined8 param_1,code *param_2,ulong param_3)

{
  long local_28;
  
  FUN_01bb63e0(&local_28);
  if (local_28 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    (*param_2)();
  }
  FUN_01018e84(&local_28);
  return;
}


