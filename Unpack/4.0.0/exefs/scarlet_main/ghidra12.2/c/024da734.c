/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024da734; name: FUN_024da734
 */


undefined1  [16]
FUN_024da734(char *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      auVar2 = ZEXT816(0);
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
      auVar2 = (*param_2)(*param_5,plVar1,&local_30);
    }
    return auVar2;
  }
  if (*param_1 != '\0') {
    return ZEXT816(0);
  }
  if (*(long *)(param_1 + 8) == 0) {
    return ZEXT816(0);
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_18 = param_4[3];
  local_28 = param_4[1];
  local_30 = *param_4;
  uStack_20 = param_4[2];
  auVar2 = (*param_2)(*param_5,plVar1,&local_30);
  return auVar2;
}


