/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263d38c; name: FUN_0263d38c
 */


void FUN_0263d38c(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar1);
      }
      local_30 = *param_4;
      uStack_28 = param_4[1];
      local_20 = param_4[2];
      local_18 = (long *)param_4[3];
      param_4[3] = 0;
      (*param_2)(plVar1,&local_30);
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 0x20))();
      }
    }
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_30 = *param_4;
    uStack_28 = param_4[1];
    local_20 = param_4[2];
    local_18 = (long *)param_4[3];
    param_4[3] = 0;
    (*param_2)(plVar1,&local_30);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


