/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e83bc; name: FUN_021e83bc
 */


void FUN_021e83bc(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_50 [8];
  char *local_48;
  long *local_38;
  int local_14;
  
  local_14 = FUN_00d0c374(param_2);
  if (local_14 != -1) {
    piVar1 = (int *)(param_1 + (long)local_14 * 4 + 0x70);
    if (*piVar1 != 3) {
      FUN_014def50(auStack_50,param_2);
      nn::fs::Unmount(local_48);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
    *piVar1 = 0;
    FUN_014df7c0(param_1,&local_14);
  }
  return;
}


