/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f90fa0; name: FUN_00f90fa0
 */


void FUN_00f90fa0(long param_1)

{
  long *local_50 [4];
  long *local_30;
  
  FUN_00f92f18(local_50);
  FUN_00f91320(param_1 + 0x20,local_50,*(undefined8 *)(param_1 + 8));
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  FUN_00f91054(local_50,*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x28) + 0x210);
  FUN_00f910c0(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = local_50[0];
  FUN_00f91044(*(undefined8 *)(param_1 + 0x10),param_1 + 0x60);
  return;
}


