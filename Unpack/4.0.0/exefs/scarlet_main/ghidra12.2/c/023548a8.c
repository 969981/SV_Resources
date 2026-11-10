/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023548a8; name: FUN_023548a8
 */


void FUN_023548a8(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 *param_6,undefined8 param_7,uint param_8)

{
  long *plVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar1);
  }
  local_60 = *param_6;
  uStack_58 = param_6[1];
  local_50 = param_6[2];
  local_48 = (long *)param_6[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  (*param_2)(plVar1,param_4,param_5,&local_60,param_7,param_8 & 1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


