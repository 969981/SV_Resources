/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026b9ea0; name: FUN_026b9ea0
 */


void FUN_026b9ea0(undefined8 param_1,code *param_2,ulong param_3,char *param_4)

{
  long *plVar1;
  long local_18;
  
  FUN_026b9930(&local_18);
  if (local_18 != 0) {
    plVar1 = (long *)(local_18 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(plVar1,*param_4 != '\0');
  }
  FUN_026b96d4(&local_18);
  return;
}


