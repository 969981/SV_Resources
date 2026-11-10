/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055b7a8; name: FUN_0055b7a8
 */


void FUN_0055b7a8(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x138);
  pMVar1 = (MutexType *)(lVar2 + 0x38);
  nn::os::LockMutex(pMVar1);
  nn::os::SignalEvent((EventType *)(lVar2 + 0x10));
  nn::os::UnlockMutex(pMVar1);
  return;
}


