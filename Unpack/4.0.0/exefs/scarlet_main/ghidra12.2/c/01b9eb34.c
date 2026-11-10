/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9eb34; name: FUN_01b9eb34
 */


void FUN_01b9eb34(long *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined4 param_5)

{
  long *plVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_40 = param_4[2];
  local_38 = (long *)param_4[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  (*param_2)(plVar1,&local_50,param_5);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


