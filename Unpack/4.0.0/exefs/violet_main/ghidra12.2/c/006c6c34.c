/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6c34; name: FUN_006c6c34
 */


void FUN_006c6c34(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x1;
  undefined8 local_38;
  
  FUN_006c6e5c(param_1 + 0xe0);
  local_38 = 0;
  while ((*(char *)(param_1 + 0x110) == '\0' &&
         ((uVar4 = FUN_006c6298(param_1,&local_38), (uVar4 & 1) != 0 ||
          (uVar4 = FUN_006c6558(param_1,&local_38), (uVar4 & 1) != 0))))) {
    FUN_006c61e4(param_1,local_38);
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    pMVar1 = (MutexType *)(param_1 + 0xc0);
    pMVar2 = (MutexType *)(param_1 + 0xa0);
    do {
      uVar4 = nn::os::TryLockMutex(pMVar1);
      if ((uVar4 & 1) != 0) {
        nn::os::LockMutex(pMVar2);
        if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) &&
           (*(long *)(param_1 + 0x10) == param_1 + 8)) {
          iVar3 = *(int *)(param_1 + 0x98);
          nn::os::UnlockMutex(pMVar2);
          nn::os::UnlockMutex(pMVar1);
          if (iVar3 == 0) break;
        }
        else {
          nn::os::UnlockMutex(pMVar2);
          nn::os::UnlockMutex(pMVar1);
        }
      }
      nn::os::LockMutex(pMVar1);
LAB_006c6d08:
      do {
        if (*(char *)(param_1 + 0x110) != '\0') {
LAB_006c6dd0:
          nn::os::UnlockMutex(pMVar1);
          goto LAB_006c6dd8;
        }
        uVar4 = nn::os::TryLockMutex(pMVar1);
        if ((uVar4 & 1) != 0) {
          nn::os::LockMutex(pMVar2);
          if ((*(long *)(param_1 + 0x20) == param_1 + 0x18) &&
             (*(long *)(param_1 + 0x10) == param_1 + 8)) {
            iVar3 = *(int *)(param_1 + 0x98);
            nn::os::UnlockMutex(pMVar2);
            nn::os::UnlockMutex(pMVar1);
            if (iVar3 == 0) goto LAB_006c6dd0;
          }
          else {
            nn::os::UnlockMutex(pMVar2);
            nn::os::UnlockMutex(pMVar1);
          }
        }
        iVar3 = FUN_006c6738(param_1,0);
        if (iVar3 == 0) {
          lVar5 = FUN_006c6820(param_1);
          if (lVar5 != 0) break;
          goto LAB_006c6d08;
        }
        if (iVar3 != 2) {
          if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
                    /* WARNING: Subroutine does not return */
          nn::detail::UnexpectedDefaultImpl("","",0);
        }
        lVar5 = extraout_x1;
      } while (extraout_x1 == 0);
      nn::os::UnlockMutex(pMVar1);
      FUN_006c61e4(param_1,lVar5);
    } while (*(char *)(param_1 + 0x110) == '\0');
  }
LAB_006c6dd8:
  FUN_006c6e94(param_1 + 0xe0);
  return;
}


