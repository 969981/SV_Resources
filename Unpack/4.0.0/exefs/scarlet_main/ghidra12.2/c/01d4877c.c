/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4877c; name: FUN_01d4877c
 */


void FUN_01d4877c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [24];
  long *local_30;
  undefined4 local_4;
  
  local_4 = param_4;
  FUN_01d48f58(auStack_48,param_3,*param_2,param_2[1],&local_4);
  FUN_017f5500(param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return;
}


