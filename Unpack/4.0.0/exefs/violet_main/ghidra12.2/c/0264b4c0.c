/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0264b4c0; name: FUN_0264b4c0
 */


void FUN_0264b4c0(undefined8 param_1,code *param_2,ulong param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  long *plVar1;
  long local_38;
  
  FUN_02640070(&local_38);
  if (local_38 != 0) {
    plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(plVar1,*param_4,*param_5);
  }
  FUN_0263fdb4(&local_38);
  return;
}


