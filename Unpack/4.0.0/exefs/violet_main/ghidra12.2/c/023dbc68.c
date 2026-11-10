/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023dbc68; name: FUN_023dbc68
 */


void FUN_023dbc68(undefined8 param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long local_18;
  
  FUN_023dbb80(&local_18);
  if (local_18 != 0) {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(plVar1,param_4);
  }
  FUN_018eb3a8(&local_18);
  return;
}


