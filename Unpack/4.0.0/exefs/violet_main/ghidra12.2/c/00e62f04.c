/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e62f04; name: FUN_00e62f04
 */


void FUN_00e62f04(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  long local_38;
  
  FUN_02307c4c(&local_38);
  if (local_38 == 0) {
    FUN_01774eac(&local_38);
    *param_1 = 0;
  }
  else {
    plVar1 = (long *)(local_38 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    (*param_3)(param_1,plVar1,*param_5);
    FUN_01774eac(&local_38);
  }
  return;
}


