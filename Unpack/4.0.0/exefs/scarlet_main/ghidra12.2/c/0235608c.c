/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0235608c; name: FUN_0235608c
 */


void FUN_0235608c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  uVar1 = *param_2;
  FUN_00f830a8(auStack_40,uVar1);
  FUN_00f834a4(param_1,uVar1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


