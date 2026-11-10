/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b96bac; name: FUN_01b96bac
 */


void FUN_01b96bac(long param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  long *local_28;
  long *local_20;
  long *local_18;
  
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    local_18 = (long *)*param_4;
    *param_4 = 0;
    local_20 = (long *)*param_5;
    *param_5 = 0;
    local_28 = (long *)*param_6;
    *param_6 = 0;
    (*param_2)(plVar1,&local_18,&local_20,&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x60))();
    }
    if (local_20 != (long *)0x0) {
      (**(code **)(*local_20 + 0x60))();
    }
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x60))();
    }
  }
  return;
}


