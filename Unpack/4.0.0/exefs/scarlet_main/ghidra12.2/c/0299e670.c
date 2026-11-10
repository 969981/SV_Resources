/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


