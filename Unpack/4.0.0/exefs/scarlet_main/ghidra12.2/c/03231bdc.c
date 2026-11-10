/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03231bdc; name: FUN_03231bdc
 */


void FUN_03231bdc(long param_1)

{
  MutexType *pMVar1;
  SemaphoreType *pSVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  SemaphoreType *pSVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  
  lVar9 = (long)DAT_0488576c;
  lVar10 = tpidr_el0;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
    iVar11 = DAT_04885768;
    lVar9 = *(long *)(lVar8 + lVar9 * 8 + 1000);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar8;
    }
  }
  else {
    lVar9 = *(long *)(lVar8 + lVar9 * 8 + 1000);
    iVar11 = DAT_04885768;
  }
  iVar11 = *(int *)(lVar8 + (long)iVar11 * 8 + 1000);
  lVar10 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    iVar11 = -1;
  }
  FUN_03231a28(param_1);
  lVar10 = lVar10 + (long)iVar11 * 0x80;
  piVar12 = (int *)(lVar10 + 0x20);
  if ((*piVar12 == 1) && (uVar6 = nn::os::GetSystemTick(), *(ulong *)(param_1 + 0x40) < uVar6)) {
    pMVar1 = (MutexType *)(lVar10 + 0x28);
    nn::os::LockMutex(pMVar1);
    if (*piVar12 != 1) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    *piVar12 = 2;
    nn::os::UnlockMutex(pMVar1);
    pSVar7 = *(SemaphoreType **)(param_1 + 0x48);
    pSVar2 = pSVar7 + 0x2c;
    do {
      iVar3 = *(int *)pSVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar2,0x10);
      if (bVar5) {
        *(int *)pSVar2 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int *)(*(long *)(pSVar7 + 0x30) + (long)iVar3 * 4) = iVar11;
    nn::os::ReleaseSemaphore(pSVar7,1);
    *(undefined1 *)(lVar10 + 0x48) = 1;
    nn::os::AcquireSemaphore((SemaphoreType *)(lVar10 + 0x50));
    *(undefined1 *)(lVar10 + 0x48) = 0;
    if (*(char *)(lVar10 + 0x1d) == '\x02') {
      FUN_03231a28(param_1);
      return;
    }
  }
  return;
}


