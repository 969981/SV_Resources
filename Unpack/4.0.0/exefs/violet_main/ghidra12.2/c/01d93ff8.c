/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d93ff8; name: FUN_01d93ff8
 */


void FUN_01d93ff8(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long local_28;
  
  FUN_01d93d88(&local_28);
  if (local_28 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    (*param_2)(*param_4,*param_5,*param_6);
  }
  FUN_01847410(&local_28);
  return;
}


