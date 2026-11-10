/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a0bc08; name: FUN_01a0bc08
 */


void FUN_01a0bc08(undefined8 param_1,code *param_2,ulong param_3,undefined4 *param_4,char *param_5)

{
  long *plVar1;
  long local_38;
  
  FUN_01d93d88(&local_38);
  if (local_38 != 0) {
    plVar1 = (long *)(local_38 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    (*param_2)(plVar1,*param_4,*param_5 != '\0');
  }
  FUN_01847410(&local_38);
  return;
}


