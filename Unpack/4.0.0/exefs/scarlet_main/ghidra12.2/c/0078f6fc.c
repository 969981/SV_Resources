/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078f6fc; name: FUN_0078f6fc
 */


void FUN_0078f6fc(long param_1,long *param_2)

{
  long lVar1;
  MutexType *pMVar2;
  long lVar3;
  MutexType *pMVar4;
  long lVar5;
  long local_48;
  
  pMVar2 = *(MutexType **)(param_1 + 0x118);
  nn::os::LockMutex(pMVar2);
  if (*(char *)(param_1 + 0x168) == '\0') {
    lVar3 = *(long *)PTR_DAT_047d0970;
LAB_0078f7a8:
    do {
      if (*(int *)(param_1 + 0x180) == 0) {
        pMVar4 = *(MutexType **)(param_1 + 0x118);
        nn::os::UnlockMutex(pMVar4);
        lVar5 = lVar3;
      }
      else {
        lVar1 = *(long *)(param_1 + 0x170);
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          lVar1 = lVar1 - *(int *)(param_1 + 0x184);
        }
        local_48 = 0;
        FUN_007935cc(&local_48);
        lVar5 = *(long *)(lVar1 + 0x10) - local_48;
        FUN_0079365c();
        if (lVar5 < 1) {
          FUN_0078fac8((long *)(param_1 + 0x170));
          FUN_0078ce60(lVar1,1);
          FUN_007c9f0c(param_1 + 0x120);
          if (*(char *)(param_1 + 0x168) != '\0') break;
          goto LAB_0078f7a8;
        }
        pMVar4 = *(MutexType **)(param_1 + 0x118);
        nn::os::UnlockMutex(pMVar4);
      }
      FUN_007c9ee4(param_1 + 0x120,lVar5);
      nn::os::LockMutex(pMVar4);
    } while (*(char *)(param_1 + 0x168) == '\0');
  }
  (**(code **)(*param_2 + 0x38))(param_2,0);
  FUN_007caa20(param_1 + 0x20);
  nn::os::UnlockMutex(pMVar2);
  return;
}


