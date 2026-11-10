/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c3f70; name: FUN_017c3f70
 */


void FUN_017c3f70(undefined8 param_1,undefined8 param_2)

{
  long *local_28;
  long *local_8;
  
  FUN_017c3fdc(&local_8);
  FUN_017c3fdc(&local_28,param_2);
  FUN_017c407c(&local_8,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return;
}


