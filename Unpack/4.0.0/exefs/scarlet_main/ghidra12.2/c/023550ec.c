/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023550ec; name: FUN_023550ec
 */


void FUN_023550ec(undefined8 param_1,long *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  if ((*param_2 == 0) || (lVar2 = *(long *)(*param_2 + 0x10), lVar2 == 0)) {
    FUN_02355264(param_1);
    return;
  }
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1) + -0x28);
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
  return;
}


