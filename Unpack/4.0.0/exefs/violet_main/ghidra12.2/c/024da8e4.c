/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024da8e4; name: FUN_024da8e4
 */


void FUN_024da8e4(undefined8 *param_1,char *param_2,code *param_3,ulong param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar1);
      }
      local_18 = param_5[3];
      local_28 = param_5[1];
      local_30 = *param_5;
      uStack_20 = param_5[2];
      (*param_3)(*param_6,plVar1,&local_30);
    }
    return;
  }
  if (*param_2 != '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    local_18 = param_5[3];
    local_28 = param_5[1];
    local_30 = *param_5;
    uStack_20 = param_5[2];
    (*param_3)(*param_6,plVar1,&local_30);
  }
  return;
}


