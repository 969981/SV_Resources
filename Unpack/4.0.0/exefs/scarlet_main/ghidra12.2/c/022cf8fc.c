/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022cf8fc; name: FUN_022cf8fc
 */


undefined8 FUN_022cf8fc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  undefined4 local_4;
  
  local_4 = param_3;
  FUN_022d0a5c(auStack_40,param_2,*param_1,param_1[1],&local_4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


