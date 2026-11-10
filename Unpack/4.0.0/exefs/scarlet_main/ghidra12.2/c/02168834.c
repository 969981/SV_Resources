/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02168834; name: FUN_02168834
 */


void FUN_02168834(long param_1)

{
  undefined1 auStack_60 [24];
  long *local_48;
  long *local_28;
  
  FUN_02168ac4(auStack_60);
  FUN_02168b4c(param_1 + 0x140,auStack_60);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


