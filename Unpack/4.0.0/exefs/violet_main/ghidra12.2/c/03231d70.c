/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03231d70; name: FUN_03231d70
 */


void FUN_03231d70(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  SemaphoreType *pSVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  long *plVar16;
  SemaphoreType *pSVar17;
  MutexType *pMVar18;
  int iVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  uVar3 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(ulong *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  pSVar17 = *(SemaphoreType **)(param_1 + 0x48);
  *(undefined4 *)(pSVar17 + 0x28) = 0;
  *(undefined4 *)(pSVar17 + 0x2c) = 0;
  if (*(int *)(pSVar17 + 0x38) != 0) {
    lVar22 = (long)*(int *)(pSVar17 + 0x38) << 2;
    piVar20 = *(int **)(pSVar17 + 0x30);
    do {
      if (-1 < *piVar20) {
        nn::os::AcquireSemaphore(pSVar17);
      }
      lVar22 = lVar22 + -4;
      *piVar20 = -1;
      piVar20 = piVar20 + 1;
    } while (lVar22 != 0);
  }
  pSVar4 = pSVar17 + 0x40;
  do {
    iVar19 = *(int *)pSVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pSVar4,0x10);
    if (bVar2) {
      *(int *)pSVar4 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (0 < iVar19) {
    do {
      nn::os::AcquireSemaphore(pSVar17);
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  FUN_03231a28(param_1);
  if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    pSVar4 = *(SemaphoreType **)(param_1 + 0x48);
    pSVar17 = pSVar4 + 0x40;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pSVar17,0x10);
      if (bVar2) {
        *(int *)pSVar17 = *(int *)pSVar17 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::ReleaseSemaphore(pSVar4,1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar19 = 0;
    piVar20 = (int *)(param_1 + 0x50);
    do {
      pSVar17 = *(SemaphoreType **)(param_1 + 0x48);
      nn::os::AcquireSemaphore(pSVar17);
      if (*(int *)(pSVar17 + 0x40) != 0) {
        pSVar4 = pSVar17 + 0x40;
        iVar11 = *(int *)(pSVar17 + 0x40);
        do {
          iVar12 = *(int *)pSVar4;
          if (iVar12 == iVar11) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pSVar4,0x10);
            if (bVar2) {
              *(int *)pSVar4 = iVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              lVar22 = *(long *)(param_1 + 0x20);
              goto LAB_03231f58;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
      piVar14 = (int *)(*(long *)(pSVar17 + 0x30) + (long)*(int *)(pSVar17 + 0x28) * 4);
      do {
        piVar8 = piVar14;
        iVar11 = *piVar8;
        piVar14 = piVar8 + 1;
      } while (iVar11 < 0);
      *piVar8 = -2;
      iVar12 = *(int *)(pSVar17 + 0x28);
      if (iVar12 < *(int *)(pSVar17 + 0x38)) {
        lVar22 = (long)*(int *)(pSVar17 + 0x38) - (long)iVar12;
        piVar14 = (int *)(*(long *)(pSVar17 + 0x30) + (long)iVar12 * 4);
        do {
          iVar12 = iVar12 + 1;
          if (*piVar14 != -2) break;
          lVar22 = lVar22 + -1;
          *(int *)(pSVar17 + 0x28) = iVar12;
          piVar14 = piVar14 + 1;
        } while (lVar22 != 0);
        lVar22 = *(long *)(param_1 + 0x20);
        if (iVar11 != -1) goto LAB_03231f1c;
LAB_03231f58:
        if (*(int *)(param_1 + 0x28) != 0) {
          pMVar18 = (MutexType *)(lVar22 + 0x28);
          lVar22 = (long)*(int *)(param_1 + 0x28) << 7;
          do {
            if (*(int *)(pMVar18 + -8) == 4) {
              nn::os::LockMutex(pMVar18);
              if (*(int *)(pMVar18 + -8) == 4) {
                if (pMVar18[-0xb] == (MutexType)0x1) {
                  lVar6 = *(long *)(pMVar18 + -0x18);
                  *(undefined4 *)(lVar6 + 0x10) = 0;
                  nn::os::ChangeThreadPriority((ThreadType *)(lVar6 + 0x78),0x1f);
                }
                iVar19 = iVar19 + 1;
                *(undefined4 *)(pMVar18 + -8) = 3;
              }
              nn::os::UnlockMutex(pMVar18);
            }
            pMVar18 = pMVar18 + 0x80;
            lVar22 = lVar22 + -0x80;
          } while (lVar22 != 0);
        }
      }
      else {
        lVar22 = *(long *)(param_1 + 0x20);
LAB_03231f1c:
        lVar22 = lVar22 + (long)iVar11 * 0x80;
        pMVar18 = (MutexType *)(lVar22 + 0x28);
        nn::os::LockMutex(pMVar18);
        iVar11 = *(int *)(lVar22 + 0x20);
        if (iVar11 == 2) {
          *(int *)(lVar22 + 0x20) = 0;
          if (*(char *)(lVar22 + 0x1d) == '\0') {
LAB_03231ff0:
            nn::os::ReleaseSemaphore((SemaphoreType *)(lVar22 + 0x50),1);
          }
          else if (*(char *)(lVar22 + 0x1d) == '\x01') {
            lVar6 = *(long *)(lVar22 + 0x10);
            *(undefined4 *)(lVar6 + 0x10) = 0;
            nn::os::ChangeThreadPriority((ThreadType *)(lVar6 + 0x78),0x1f);
            goto LAB_03231ff0;
          }
          nn::os::UnlockMutex(pMVar18);
          do {
            iVar11 = *piVar20;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar2) {
              *piVar20 = iVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          iVar19 = iVar19 + 1;
          if ((iVar11 == 1) && (iVar19 != *(int *)(param_1 + 0x28))) {
            pSVar4 = *(SemaphoreType **)(param_1 + 0x48);
            pSVar17 = pSVar4 + 0x40;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pSVar17,0x10);
              if (bVar2) {
                *(int *)pSVar17 = *(int *)pSVar17 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            nn::os::ReleaseSemaphore(pSVar4,1);
          }
        }
        else {
          if (iVar11 != 5) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          nn::os::UnlockMutex(pMVar18);
          iVar19 = iVar19 + 1;
        }
      }
    } while (iVar19 != *(int *)(param_1 + 0x28));
  }
  uVar5 = nn::os::GetSystemTick();
  lVar21 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x58);
  uVar10 = uVar5;
  lVar22 = 0;
  if (param_2 <= uVar5) {
    uVar10 = param_2;
    lVar22 = uVar5 - param_2;
  }
  lVar23 = tpidr_el0;
  lVar7 = *(long *)(lVar23 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar7;
  }
  plVar16 = *(long **)(lVar7 + 0x3e0);
  if (plVar16 == (long *)0x0) {
    return;
  }
  lVar23 = *plVar16;
  if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
    (**(code **)(lVar23 + 0x18))("processForegroundImpl",0x15,*(undefined8 *)(lVar23 + 0x28));
  }
  puVar15 = (undefined8 *)plVar16[2];
  uVar5 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
  if ((uVar5 <= (ulong)plVar16[3]) && (plVar16[2] = uVar5, puVar15 != (undefined8 *)0x0)) {
    *puVar15 = "YtprocessForegroundImpl";
  }
  if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
    puVar15 = (undefined8 *)plVar16[2];
    uVar5 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar16[3]) && (plVar16[2] = uVar5, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
    }
  }
  lVar23 = *plVar16;
  if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
    (**(code **)(lVar23 + 0x18))("driveToForeground",0x11,*(undefined8 *)(lVar23 + 0x28));
  }
  puVar15 = (undefined8 *)plVar16[2];
  uVar5 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
  if ((uVar5 <= (ulong)plVar16[3]) && (plVar16[2] = uVar5, puVar15 != (undefined8 *)0x0)) {
    *puVar15 = "YtdriveToForeground";
  }
  if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
    puVar15 = (undefined8 *)plVar16[2];
    uVar5 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar16[3]) && (plVar16[2] = uVar5, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
    }
  }
  lVar23 = *plVar16;
  if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar16[6] == 0)) {
LAB_032321f8:
    puVar9 = (undefined8 *)plVar16[2];
    puVar13 = (undefined8 *)plVar16[3];
  }
  else {
    puVar15 = (undefined8 *)plVar16[2];
    puVar13 = (undefined8 *)plVar16[3];
    puVar9 = (undefined8 *)((long)puVar15 + 0x17U & 0xfffffffffffffff8);
    if (puVar13 < puVar9) goto LAB_032321f8;
    plVar16[2] = (long)puVar9;
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
      goto LAB_032321f8;
    }
  }
  puVar15 = (undefined8 *)((long)puVar9 + 0x1fU & 0xfffffffffffffff8);
  lVar6 = lVar21 - lVar6;
  if ((puVar15 <= puVar13) && (plVar16[2] = (long)puVar15, puVar9 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar9 + 2) = 1;
    *puVar9 = &DAT_03c65669;
    puVar9[1] = lVar6;
  }
  if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
    (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
  }
  lVar23 = *plVar16;
  if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
    (**(code **)(lVar23 + 0x18))("waiting",7,*(undefined8 *)(lVar23 + 0x28));
  }
  puVar15 = (undefined8 *)plVar16[2];
  uVar5 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
  if ((uVar5 <= (ulong)plVar16[3]) && (plVar16[2] = uVar5, puVar15 != (undefined8 *)0x0)) {
    *puVar15 = "Ytwaiting";
  }
  if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
    puVar15 = (undefined8 *)plVar16[2];
    uVar5 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar16[3]) && (plVar16[2] = uVar5, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
    }
  }
  lVar23 = *plVar16;
  if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar16[6] == 0)) {
LAB_03232310:
    puVar9 = (undefined8 *)plVar16[2];
    puVar13 = (undefined8 *)plVar16[3];
  }
  else {
    puVar15 = (undefined8 *)plVar16[2];
    puVar13 = (undefined8 *)plVar16[3];
    puVar9 = (undefined8 *)((long)puVar15 + 0x17U & 0xfffffffffffffff8);
    if (puVar13 < puVar9) goto LAB_03232310;
    plVar16[2] = (long)puVar9;
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
      goto LAB_03232310;
    }
  }
  puVar15 = (undefined8 *)((long)puVar9 + 0x1fU & 0xfffffffffffffff8);
  lVar21 = uVar10 - lVar21;
  if ((puVar15 <= puVar13) && (plVar16[2] = (long)puVar15, puVar9 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar9 + 2) = 1;
    *puVar9 = &DAT_03c65669;
    puVar9[1] = lVar21;
  }
  if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
    (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
  }
  lVar23 = *plVar16;
  if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
    (**(code **)(lVar23 + 0x18))("driveToBackground",0x11,*(undefined8 *)(lVar23 + 0x28));
  }
  puVar15 = (undefined8 *)plVar16[2];
  uVar10 = (long)puVar15 + 0xfU & 0xfffffffffffffff8;
  if ((uVar10 <= (ulong)plVar16[3]) && (plVar16[2] = uVar10, puVar15 != (undefined8 *)0x0)) {
    *puVar15 = "YtdriveToBackground";
  }
  if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
    puVar15 = (undefined8 *)plVar16[2];
    uVar10 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar16[3]) && (plVar16[2] = uVar10, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
    }
  }
  lVar23 = *plVar16;
  if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar16[6] == 0)) {
LAB_03232434:
    puVar9 = (undefined8 *)plVar16[2];
    puVar13 = (undefined8 *)plVar16[3];
  }
  else {
    puVar15 = (undefined8 *)plVar16[2];
    puVar13 = (undefined8 *)plVar16[3];
    puVar9 = (undefined8 *)((long)puVar15 + 0x17U & 0xfffffffffffffff8);
    if (puVar13 < puVar9) goto LAB_03232434;
    plVar16[2] = (long)puVar9;
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
      goto LAB_03232434;
    }
  }
  puVar15 = (undefined8 *)((long)puVar9 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar15 <= puVar13) && (plVar16[2] = (long)puVar15, puVar9 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar9 + 2) = 1;
    *puVar9 = &DAT_03c65669;
    puVar9[1] = lVar22;
  }
  if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
    (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
  }
  lVar23 = *plVar16;
  if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
    puVar15 = (undefined8 *)plVar16[2];
    puVar9 = (undefined8 *)((long)puVar15 + 0x17U & 0xfffffffffffffff8);
    if (puVar9 <= (undefined8 *)plVar16[3]) {
      plVar16[2] = (long)puVar9;
      if (puVar15 == (undefined8 *)0x0) goto LAB_032324c4;
      *puVar15 = &DAT_03c4e575;
      puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
    }
  }
  puVar9 = (undefined8 *)plVar16[2];
LAB_032324c4:
  uVar10 = (long)puVar9 + 0x1fU & 0xfffffffffffffff8;
  if ((uVar10 <= (ulong)plVar16[3]) && (plVar16[2] = uVar10, puVar9 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar9 + 2) = 1;
    *puVar9 = &DAT_03c65669;
    puVar9[1] = lVar21 + lVar22 + lVar6;
  }
  if (*(code **)(lVar23 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03232520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
  return;
}


