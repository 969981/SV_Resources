/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028af638; name: FUN_028af638
 */


void FUN_028af638(long param_1)

{
  MutexType *pMVar1;
  long local_38;
  MutexType *local_30;
  undefined1 local_28;
  
  pMVar1 = (MutexType *)(param_1 + 0x3f0);
  local_28 = 1;
  local_30 = pMVar1;
  nn::os::LockMutex(pMVar1);
  local_38 = param_1;
  FUN_028af68c(param_1 + 0x410,&local_30,&local_38);
  nn::os::UnlockMutex(pMVar1);
  return;
}


