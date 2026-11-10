/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e90e80; name: FUN_00e90e80
 */


void FUN_00e90e80(undefined8 param_1,undefined4 param_2)

{
  undefined1 *local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = &DAT_fbec41851566601b;
  pcStack_28 = "values";
  local_20 = 6;
  local_18 = (long *)0x0;
  FUN_00e90ee0(param_1,&local_30,param_2);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


