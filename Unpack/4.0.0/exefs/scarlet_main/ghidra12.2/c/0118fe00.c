/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118fe00; name: FUN_0118fe00
 */


void FUN_0118fe00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = &DAT_afc4d6c05abef19e;
  pcStack_28 = "default";
  local_20 = 7;
  local_18 = (long *)0x0;
  FUN_0118fe64(param_1,&local_30,param_2,param_3);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


