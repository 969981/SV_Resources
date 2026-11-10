/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbf5e4; name: FUN_01dbf5e4
 */


void FUN_01dbf5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_0125a1ac(auStack_40,param_3,0);
  FUN_00cb7f10(param_1,param_2,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


