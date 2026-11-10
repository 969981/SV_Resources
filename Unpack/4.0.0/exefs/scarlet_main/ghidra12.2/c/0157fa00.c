/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157fa00; name: FUN_0157fa00
 */


void FUN_0157fa00(int param_1,undefined8 param_2,int param_3,long param_4)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  
  if (param_4 == 0) {
    return;
  }
  lVar3 = *(long *)(param_4 + 0x240);
  pMVar1 = (MutexType *)(lVar3 + 0x70);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  plVar2 = *(long **)(lVar3 + 0x38);
  do {
    if (plVar2 == (long *)0x0) {
      nn::os::UnlockMutex(pMVar1);
LAB_0157fa7c:
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    if (*(int *)(plVar2 + 4) == param_1) {
      nn::os::UnlockMutex(pMVar1);
      FUN_0157fa94(plVar2 + 3,param_3 == 1);
      goto LAB_0157fa7c;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}


