/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f096ac; name: FUN_01f096ac
 */


void FUN_01f096ac(undefined8 param_1)

{
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = &DAT_cbf29ce484222645;
  puStack_28 = &DAT_03c886bc;
  local_20 = 0;
  local_18 = (long *)0x0;
  FUN_01e7b418(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


