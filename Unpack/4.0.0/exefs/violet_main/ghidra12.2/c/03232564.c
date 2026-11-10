/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03232564; name: FUN_03232564
 */


void FUN_03232564(long param_1)

{
  MutexType *pMVar1;
  SemaphoreType *pSVar2;
  char cVar3;
  bool bVar4;
  SemaphoreType *pSVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  
  lVar9 = (long)DAT_0488576c;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar6;
    iVar10 = DAT_04885768;
    lVar9 = *(long *)(lVar6 + lVar9 * 8 + 1000);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar7 + 0x1000b8) = lVar6;
    }
  }
  else {
    lVar9 = *(long *)(lVar6 + lVar9 * 8 + 1000);
    iVar10 = DAT_04885768;
  }
  lVar7 = (long)*(int *)(lVar6 + (long)iVar10 * 8 + 1000);
  if (lVar9 == 0) {
    lVar7 = -1;
  }
  lVar7 = *(long *)(param_1 + 0x20) + lVar7 * 0x80;
  pMVar1 = (MutexType *)(lVar7 + 0x28);
  nn::os::LockMutex(pMVar1);
  iVar10 = *(int *)(lVar7 + 0x24) + -1;
  *(int *)(lVar7 + 0x24) = iVar10;
  if (iVar10 != 0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  piVar8 = (int *)(lVar7 + 0x20);
  if (*piVar8 == 0) {
    *piVar8 = 3;
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    if (*piVar8 != 1) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *piVar8 = 4;
    nn::os::UnlockMutex(pMVar1);
    piVar8 = (int *)(param_1 + 0x50);
    do {
      iVar10 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      pSVar5 = *(SemaphoreType **)(param_1 + 0x48);
      pSVar2 = pSVar5 + 0x40;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pSVar2,0x10);
        if (bVar4) {
          *(int *)pSVar2 = *(int *)pSVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::ReleaseSemaphore(pSVar5,1);
    }
  }
  *(undefined1 *)(lVar7 + 0x48) = 1;
  nn::os::AcquireSemaphore((SemaphoreType *)(lVar7 + 0x50));
  *(undefined1 *)(lVar7 + 0x48) = 0;
  return;
}


