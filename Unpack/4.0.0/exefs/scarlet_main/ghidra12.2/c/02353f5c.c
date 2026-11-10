/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02353f5c; name: FUN_02353f5c
 */


undefined8 FUN_02353f5c(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_40 = *param_4;
  uStack_38 = param_4[1];
  local_30 = param_4[2];
  local_28 = (long *)param_4[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  uVar2 = (*param_2)(plVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2;
}


