/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0232f040; name: FUN_0232f040
 */


void FUN_0232f040(undefined8 param_1,code *param_2,ulong param_3)

{
  long local_28;
  
  FUN_0232ef60(&local_28);
  if (local_28 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    (*param_2)();
  }
  FUN_015dbf30(&local_28);
  return;
}


