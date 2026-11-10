/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b9d9c; name: FUN_007b9d9c
 */


void FUN_007b9d9c(long param_1,undefined8 param_2)

{
  long *plVar1;
  int local_40 [4];
  undefined4 local_24;
  
  FUN_0079d848();
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  plVar1 = (long *)FUN_007b7268(*(undefined8 *)(param_1 + 0x218));
  (**(code **)(*plVar1 + 0x10))(local_40,plVar1,param_1 + 0xc40,&local_24,0x4d8);
  if (local_40[0] == 0) {
    FUN_007a336c(param_2,param_1 + 0xc40,local_24);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


