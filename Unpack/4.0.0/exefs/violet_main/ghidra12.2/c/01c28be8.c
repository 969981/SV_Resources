/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c28be8; name: FUN_01c28be8
 */


void FUN_01c28be8(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  long local_18;
  
  FUN_01c27d8c(&local_18);
  if (local_18 == 0) {
    FUN_01c1abf8(&local_18);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(local_18 + ((long)param_4 >> 1)));
    }
    (*param_3)(param_1);
    FUN_01c1abf8(&local_18);
  }
  return;
}


