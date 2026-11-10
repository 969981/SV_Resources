/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a7d43c; name: FUN_01a7d43c
 */


void FUN_01a7d43c(long *param_1,code *param_2,ulong param_3,undefined8 param_4,char *param_5)

{
  long *plVar1;
  long local_40;
  long local_38;
  
  if (*param_1 == 0) {
    local_40 = 0;
  }
  else {
    FUN_01beac5c(&local_38);
    local_40 = local_38;
    if (local_38 != 0) {
      plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      (*param_2)(plVar1,param_4,*param_5 != '\0');
    }
  }
  FUN_01beace8(&local_40);
  return;
}


