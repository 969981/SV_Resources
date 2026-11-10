/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299e670; name: FUN_0299e670
 */


void FUN_0299e670(long param_1,undefined8 param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x240);
  pMVar1 = (MutexType *)(lVar2 + 0x70);
  nn::os::LockMutex(pMVar1);
  lVar2 = FUN_01479658(lVar2,param_2);
  if (lVar2 != 0) {
    FUN_029a043c(lVar2,param_3);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


