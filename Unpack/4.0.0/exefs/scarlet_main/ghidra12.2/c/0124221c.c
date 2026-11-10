/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124221c; name: FUN_0124221c
 */


void FUN_0124221c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_0124c8f4(auStack_40,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_01245ab0(param_1);
  FUN_0129aff0(uVar1,0xb1,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


