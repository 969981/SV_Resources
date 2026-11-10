/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e176c0; name: FUN_01e176c0
 */


void FUN_01e176c0(undefined8 param_1)

{
  undefined1 *local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = &DAT_afc4d6c05abef19e;
  pcStack_28 = "default";
  local_20 = 7;
  local_18 = (long *)0x0;
  FUN_01e19df8(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


