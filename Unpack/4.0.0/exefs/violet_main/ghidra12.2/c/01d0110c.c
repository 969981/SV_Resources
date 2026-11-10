/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0110c; name: FUN_01d0110c
 */


void FUN_01d0110c(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  long local_28;
  
  FUN_01cfc674(&local_28);
  if (local_28 == 0) {
    FUN_01cfc6c0(&local_28);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)(local_28 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    (*param_3)(param_1,plVar1,*param_5,param_6);
    FUN_01cfc6c0(&local_28);
  }
  return;
}


