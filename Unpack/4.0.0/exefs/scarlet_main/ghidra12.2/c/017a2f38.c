/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a2f38; name: FUN_017a2f38
 */


void FUN_017a2f38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  local_28 = (long *)param_3[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  (*(code *)*param_2)(param_1,param_2 + 4,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


