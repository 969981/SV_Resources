/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212af00; name: FUN_0212af00
 */


void FUN_0212af00(undefined8 param_1)

{
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  char local_40 [32];
  
  local_60 = 0x5d486426e00af3fc;
  puStack_58 = &DAT_03c8c547;
  local_50 = 3;
  local_48 = (long *)0x0;
  FUN_015eea10(local_40,param_1,&local_60);
  if (local_40[0] != '\0') {
    local_40[0] = '\0';
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


