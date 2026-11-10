/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025410c; name: FUN_0025410c
 */


void FUN_0025410c(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  pMVar1 = (MutexType *)(lVar2 + 0x38);
  nn::os::LockMutex(pMVar1);
  nn::os::SignalEvent((EventType *)(lVar2 + 0x10));
  nn::os::UnlockMutex(pMVar1);
  return;
}


