/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d8a6c0; name: FUN_01d8a6c0
 */


void FUN_01d8a6c0(code *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = param_3[2];
  local_20 = (long *)param_3[3];
  param_3[3] = 0;
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_48 = param_4[2];
  local_40 = (long *)param_4[3];
  param_4[3] = 0;
  (*param_1)(&local_18,&local_38,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  return;
}


