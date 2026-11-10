/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c28a50; name: FUN_01c28a50
 */


void FUN_01c28a50(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4,char *param_5,
                 char *param_6)

{
  long *plVar1;
  long local_28;
  
  FUN_01c27d8c(&local_28);
  if (local_28 == 0) {
    FUN_01c1abf8(&local_28);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)(local_28 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    (*param_3)(param_1,plVar1,*param_5 != '\0',*param_6 != '\0');
    FUN_01c1abf8(&local_28);
  }
  return;
}


