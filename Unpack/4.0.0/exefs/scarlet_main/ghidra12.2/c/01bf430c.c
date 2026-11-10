/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bf430c; name: FUN_01bf430c
 */


void FUN_01bf430c(long *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined1 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_30 = *param_5;
    uStack_28 = param_5[1];
    uVar2 = *param_4;
    local_20 = param_5[2];
    local_18 = (long *)param_5[3];
    param_5[3] = 0;
    (*param_2)(plVar1,uVar2,&local_30,*param_6);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


