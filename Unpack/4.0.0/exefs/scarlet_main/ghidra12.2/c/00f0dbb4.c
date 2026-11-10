/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0dbb4; name: FUN_00f0dbb4
 */


bool FUN_00f0dbb4(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    pMVar1 = (MutexType *)(lVar4 + 0x120);
    uVar2 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
    if ((uVar2 & 1) == 0) {
      nn::os::LockMutex(pMVar1);
      uVar2 = *(ulong *)(lVar4 + 0x170);
      iVar3 = *(int *)(lVar4 + 0x178);
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      uVar2 = *(ulong *)(lVar4 + 0x170);
      iVar3 = *(int *)(lVar4 + 0x178);
    }
    if (((iVar3 != 0) || ((uVar2 >> 0x20 & 0xff) == 0)) && (*(char *)(param_1 + 0x40) == '\0')) {
      return true;
    }
    if ((*(long *)(param_1 + 0x58) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x58) + 0x1e8) & 1) != 0)) {
      if (*(long *)(param_1 + 0x48) == 0) {
        return false;
      }
      uVar2 = FUN_00efa2a4();
      if ((uVar2 & 1) != 0) {
        return *(char *)(param_1 + 0x40) == '\0';
      }
    }
  }
  return false;
}


