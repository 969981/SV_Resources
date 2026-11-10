/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d9b48; name: FUN_024d9b48
 */


uint FUN_024d9b48(char *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined1 *param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      local_18 = param_4[3];
      local_28 = param_4[1];
      local_30 = *param_4;
      uStack_20 = param_4[2];
      uVar2 = (*param_2)(plVar1,&local_30,*param_5);
    }
    return uVar2 & 1;
  }
  if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_18 = param_4[3];
    local_28 = param_4[1];
    local_30 = *param_4;
    uStack_20 = param_4[2];
    uVar2 = (*param_2)(plVar1,&local_30,*param_5);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}


