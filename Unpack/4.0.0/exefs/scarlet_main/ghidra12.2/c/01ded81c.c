/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ded81c; name: FUN_01ded81c
 */


void FUN_01ded81c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),5,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),5,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_014fa9b4(auStack_40);
  FUN_015d8984(uVar1,5,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


