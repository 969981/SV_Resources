/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02636174; name: FUN_02636174
 */


void FUN_02636174(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    local_30 = *param_5;
    uStack_28 = param_5[1];
    local_20 = param_5[2];
    local_18 = (long *)param_5[3];
    param_5[3] = 0;
    (*param_3)(plVar1,&local_30);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


