/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054f1fc; name: FUN_0054f1fc
 */


void FUN_0054f1fc(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x100);
  pMVar1 = (MutexType *)(lVar2 + 0x38);
  nn::os::LockMutex(pMVar1);
  nn::os::SignalEvent((EventType *)(lVar2 + 0x10));
  nn::os::UnlockMutex(pMVar1);
  return;
}


