/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032326dc; name: FUN_032326dc
 */


void FUN_032326dc(long param_1,int param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  MutexType *pMVar10;
  int iVar11;
  long lVar12;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar12 = (long)DAT_0488576c;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar6;
    iVar11 = DAT_04885768;
    lVar12 = *(long *)(lVar6 + lVar12 * 8 + 1000);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar7 + 0x1000b8) = lVar6;
    }
  }
  else {
    lVar12 = *(long *)(lVar6 + lVar12 * 8 + 1000);
    iVar11 = DAT_04885768;
  }
  lVar7 = *(long *)(lVar6 + (long)iVar11 * 8 + 1000);
  uVar2 = lVar9 + (long)param_2 * 0x80;
  if (lVar12 == 0 || (int)lVar7 == -1) {
    pMVar10 = (MutexType *)(uVar2 + 0x28);
    nn::os::LockMutex(pMVar10);
    piVar8 = (int *)(uVar2 + 0x24);
    if (*piVar8 == 0) {
      *piVar8 = 1;
      piVar8 = (int *)(uVar2 + 0x20);
      if (*piVar8 == 3) {
        *piVar8 = 0;
        if (*(char *)(uVar2 + 0x1d) == '\x02') goto LAB_03232880;
      }
      else {
        if (*piVar8 != 4) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        *piVar8 = 1;
        piVar8 = (int *)(param_1 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar5) {
            *piVar8 = *piVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      nn::os::ReleaseSemaphore((SemaphoreType *)(uVar2 + 0x50),1);
    }
    else {
      *piVar8 = *piVar8 + 1;
    }
    goto LAB_03232880;
  }
  uVar3 = *(long *)(param_1 + 0x20) + ((lVar7 << 0x20) >> 0x19);
  pMVar1 = (MutexType *)(uVar3 + 0x28);
  pMVar10 = (MutexType *)(uVar2 + 0x28);
  if (uVar2 <= uVar3) {
    pMVar10 = pMVar1;
    pMVar1 = (MutexType *)(uVar2 + 0x28);
  }
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar10);
  piVar8 = (int *)(uVar2 + 0x24);
  if (*piVar8 == 0) {
    *piVar8 = 1;
    piVar8 = (int *)(uVar2 + 0x20);
    if (*piVar8 == 3) {
      *piVar8 = 0;
      if (*(char *)(uVar2 + 0x1d) == '\x02') goto LAB_03232878;
    }
    else {
      if (*piVar8 != 4) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *piVar8 = 1;
      piVar8 = (int *)(param_1 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = *piVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    nn::os::ReleaseSemaphore((SemaphoreType *)(uVar2 + 0x50),1);
  }
  else {
    *piVar8 = *piVar8 + 1;
  }
LAB_03232878:
  nn::os::UnlockMutex(pMVar1);
LAB_03232880:
  nn::os::UnlockMutex(pMVar10);
  return;
}


