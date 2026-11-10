/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02636364; name: FUN_02636364
 */


void FUN_02636364(undefined8 param_1,long *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar1);
  }
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_40 = param_5[2];
  local_38 = (long *)param_5[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  (*param_3)(param_1,plVar1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


