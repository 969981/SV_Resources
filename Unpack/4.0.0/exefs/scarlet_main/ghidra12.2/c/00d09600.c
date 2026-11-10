/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d09600; name: FUN_00d09600
 */


undefined8 FUN_00d09600(void)

{
  undefined8 local_40 [3];
  long *local_28;
  
  FUN_00d09648(local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_40[0];
}


