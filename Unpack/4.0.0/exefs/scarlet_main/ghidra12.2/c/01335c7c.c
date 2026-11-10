/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01335c7c; name: FUN_01335c7c
 */


void FUN_01335c7c(long param_1,undefined2 param_2)

{
  long lVar1;
  undefined2 local_28 [4];
  
  local_28[0] = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x108) = 1;
  if (*(long *)(lVar1 + 8) == *(long *)(lVar1 + 0x10)) {
    FUN_0133bcb4(lVar1,local_28);
  }
  else {
    FUN_01335cdc();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


