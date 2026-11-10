/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a6f3c; name: FUN_029a6f3c
 */


void FUN_029a6f3c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = (long *)param_2[3];
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x18))();
  }
  local_28 = param_3;
  (*(code *)*param_1)(param_1 + 4,&local_48,&local_28);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return;
}


