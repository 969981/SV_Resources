/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02308394; name: FUN_02308394
 */


void FUN_02308394(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long local_18;
  
  FUN_02307c4c(&local_18);
  if (local_18 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_18 + ((long)param_3 >> 1)));
    }
    (*param_2)(*param_4);
  }
  FUN_01774eac(&local_18);
  return;
}


