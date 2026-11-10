/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a3688; name: FUN_028a3688
 */


undefined8 FUN_028a3688(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  MutexType *pMVar3;
  long lVar4;
  undefined8 local_28;
  
  pMVar3 = (MutexType *)(param_1 + 0x558);
  nn::os::LockMutex(pMVar3);
  lVar4 = 0;
  local_28 = param_2;
  do {
    uVar1 = FUN_028ae43c(&local_28,param_1 + 0x478 + lVar4);
    if ((uVar1 & 1) != 0) goto LAB_028a3758;
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0xe0);
  nn::os::UnlockMutex(pMVar3);
  pMVar3 = (MutexType *)(param_1 + 0x440);
  nn::os::LockMutex(pMVar3);
  lVar4 = 0;
  local_28 = param_2;
  while (uVar1 = FUN_028ae4b4(&local_28,param_1 + 0x360 + lVar4), (uVar1 & 1) == 0) {
    lVar4 = lVar4 + 0x70;
    if (lVar4 == 0xe0) {
      nn::os::UnlockMutex(pMVar3);
      uVar1 = FUN_028ae52c(*(undefined8 *)(param_1 + 0x460),param_2);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = FUN_028ae52c(*(undefined8 *)(param_1 + 0x468),param_2), (uVar1 & 1) == 0)) {
        uVar2 = FUN_028ae52c(*(undefined8 *)(param_1 + 0x470),param_2);
        return uVar2;
      }
      return 1;
    }
  }
LAB_028a3758:
  nn::os::UnlockMutex(pMVar3);
  return 1;
}


