/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024da86c; name: FUN_024da86c
 */


void FUN_024da86c(undefined8 *param_1,char *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    local_18 = param_5[3];
    local_28 = param_5[1];
    local_30 = *param_5;
    local_20 = param_5[2];
    (*param_3)(plVar1,&local_30);
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


