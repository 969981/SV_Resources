/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03231a28; name: FUN_03231a28
 */


/* WARNING: Removing unreachable block (ram,0x03231a90) */

void FUN_03231a28(long param_1)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  SemaphoreType *pSVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  SemaphoreType *pSVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  
  DataMemoryBarrier(2,3);
  iVar15 = *(int *)(param_1 + 0x30);
  if (iVar15 != *(int *)(param_1 + 0x28)) {
    piVar1 = (int *)(param_1 + 0x30);
    piVar2 = (int *)(param_1 + 0x50);
    puVar3 = (ulong *)(param_1 + 0x60);
    do {
      iVar6 = *piVar1;
      if (iVar6 == iVar15) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar5 = *(long *)(param_1 + 0x20) + (long)iVar15 * 0x80;
          nn::os::LockMutex((MutexType *)(lVar5 + 0x28));
          piVar11 = (int *)(lVar5 + 0x20);
          iVar6 = *piVar11;
          if (iVar6 == 0) {
            *piVar11 = 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = *piVar2 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            cVar7 = *(char *)(lVar5 + 0x1d);
            if (cVar7 == '\x02') {
              pSVar9 = (SemaphoreType *)(lVar5 + 0x50);
              goto LAB_03231b1c;
            }
LAB_03231b30:
            if (cVar7 == '\x01') {
              lVar12 = *(long *)(lVar5 + 0x10);
              *(undefined4 *)(lVar12 + 0x10) = 2;
              nn::os::ChangeThreadPriority((ThreadType *)(lVar12 + 0x78),0x10);
            }
          }
          else {
            if (iVar6 == 3) {
              *piVar11 = 4;
              cVar7 = *(char *)(lVar5 + 0x1d);
              goto LAB_03231b30;
            }
            if (iVar6 != 5) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            pSVar9 = *(SemaphoreType **)(param_1 + 0x48);
            pSVar4 = pSVar9 + 0x2c;
            do {
              iVar6 = *(int *)pSVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pSVar4,0x10);
              if (bVar8) {
                *(int *)pSVar4 = iVar6 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            *(int *)(*(long *)(pSVar9 + 0x30) + (long)iVar6 * 4) = iVar15;
LAB_03231b1c:
            nn::os::ReleaseSemaphore(pSVar9,1);
          }
          nn::os::UnlockMutex((MutexType *)(lVar5 + 0x28));
          if (*(long *)(param_1 + 0x58) != 0) {
            uVar14 = *puVar3;
            uVar10 = nn::os::GetSystemTick();
            do {
              while( true ) {
                if (uVar10 <= uVar14) goto LAB_03231ba8;
                uVar13 = *puVar3;
                if (uVar13 == uVar14) break;
                ClearExclusiveLocal();
                uVar14 = uVar13;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar8) {
                *puVar3 = uVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              uVar14 = uVar13;
            } while (cVar7 != '\0');
          }
LAB_03231ba8:
          iVar6 = iVar15 + 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar6;
    } while (iVar15 != *(int *)(param_1 + 0x28));
  }
  return;
}


