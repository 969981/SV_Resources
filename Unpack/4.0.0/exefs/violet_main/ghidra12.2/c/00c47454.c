/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c47454; name: FUN_00c47454
 */


void FUN_00c47454(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  MultiWaitType *pMVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  ulong uVar8;
  MultiWaitHolderType *pMVar9;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  MultiWaitHolderType *pMVar15;
  int iVar16;
  undefined8 *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  undefined8 local_38;
  
  iVar16 = *(int *)((long)param_1 + 0x204);
  if (iVar16 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = iVar16;
  }
  if (param_1[2] == 0) {
    local_d0 = param_1;
    FUN_00c497d0(&local_38,*param_1,&local_d0);
    plVar10 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar10 != (long *)0x0) {
      lVar13 = plVar10[6];
      psVar3 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar12) {
          *psVar3 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar11 = local_38;
    local_38 = 0;
    param_1[2] = uVar11;
    iVar16 = *(int *)(param_1 + 0x40);
  }
  iVar5 = *(int *)(param_1 + 0x41);
  *(undefined1 *)((long)param_1 + 0x20c) = 0;
  *(int *)(param_1 + 0x41) = iVar5 + 1;
  if (0 < iVar16) {
    uVar11 = *param_2;
    lVar13 = param_1[3];
    *(int *)(lVar13 + 0x500) = iVar5 + 1;
    *(undefined8 *)(lVar13 + 0x4f8) = uVar11;
    if (1 < *(int *)(param_1 + 0x40)) {
      uVar11 = *param_2;
      lVar13 = param_1[4];
      *(undefined4 *)(lVar13 + 0x500) = *(undefined4 *)(param_1 + 0x41);
      *(undefined8 *)(lVar13 + 0x4f8) = uVar11;
      if (2 < *(int *)(param_1 + 0x40)) {
        uVar11 = *param_2;
        lVar13 = param_1[5];
        *(undefined4 *)(lVar13 + 0x500) = *(undefined4 *)(param_1 + 0x41);
        *(undefined8 *)(lVar13 + 0x4f8) = uVar11;
        if (3 < *(int *)(param_1 + 0x40)) {
          uVar11 = *param_2;
          lVar13 = param_1[6];
          *(undefined4 *)(lVar13 + 0x500) = *(undefined4 *)(param_1 + 0x41);
          *(undefined8 *)(lVar13 + 0x4f8) = uVar11;
          if (4 < *(int *)(param_1 + 0x40)) {
            uVar11 = *param_2;
            lVar13 = param_1[7];
            *(undefined4 *)(lVar13 + 0x500) = *(undefined4 *)(param_1 + 0x41);
            *(undefined8 *)(lVar13 + 0x4f8) = uVar11;
            if (5 < *(int *)(param_1 + 0x40)) {
              lVar13 = 8;
              do {
                uVar11 = *param_2;
                lVar14 = param_1[lVar13];
                *(undefined4 *)(lVar14 + 0x500) = *(undefined4 *)(param_1 + 0x41);
                *(undefined8 *)(lVar14 + 0x4f8) = uVar11;
                lVar14 = lVar13 + -2;
                lVar13 = lVar13 + 1;
              } while (lVar14 < *(int *)(param_1 + 0x40));
            }
          }
        }
      }
    }
  }
  FUN_00c4826c(param_1);
  FUN_00c485fc(param_1);
  lVar13 = param_1[3];
  (**(code **)(*(long *)param_1[1] + 0x90))((long *)param_1[1],lVar13 + 0x4f8);
  piVar1 = (int *)(lVar13 + 0x514);
  if (*piVar1 != 2) {
    if (*piVar1 == 0) {
      do {
        iVar16 = *piVar1;
        if (iVar16 != 0) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_00c477ec;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = 2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
LAB_00c477ec:
      if ((bVar12) || (iVar16 == 2)) goto LAB_00c4757c;
    }
    nn::os::LockMutex((MutexType *)(lVar13 + 0x4c8));
    *(undefined4 *)(lVar13 + 0x514) = 2;
    nn::os::ClearEvent((EventType *)(*(long *)(lVar13 + 0x4f0) + 0x40));
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x4e8));
    nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4c8));
  }
LAB_00c4757c:
  if (*(char *)((long)param_1 + 0x20d) != '\0') {
    while (*(char *)((long)param_1 + 0x20c) == '\0') {
      FUN_00c479f4(param_1[3]);
    }
  }
  pMVar9 = (MultiWaitHolderType *)param_1[0x13];
  pMVar15 = (MultiWaitHolderType *)param_1[0x14];
  if (pMVar9 != pMVar15) {
    pMVar2 = (MultiWaitType *)(param_1 + 0xd);
    do {
      if ((*(long **)(pMVar9 + 0x40) == (long *)0x0) ||
         (uVar8 = (**(code **)(**(long **)(pMVar9 + 0x40) + 0x68))(), (uVar8 & 1) != 0)) {
        iVar16 = 0;
      }
      else if (pMVar9[0x48] == (MultiWaitHolderType)0x0) {
        iVar16 = 1;
        if (*(long *)(pMVar9 + 0x40) != 0) {
          nn::os::LinkMultiWaitHolder(pMVar2,pMVar9);
          pMVar9[0x48] = (MultiWaitHolderType)0x1;
        }
      }
      else {
        iVar16 = 1;
      }
      if (pMVar9 + 0x50 != pMVar15) {
        if ((*(long **)(pMVar9 + 0x90) != (long *)0x0) &&
           (uVar8 = (**(code **)(**(long **)(pMVar9 + 0x90) + 0x68))(), (uVar8 & 1) == 0)) {
          if ((pMVar9[0x98] == (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x90) != 0)) {
            nn::os::LinkMultiWaitHolder(pMVar2,pMVar9 + 0x50);
            pMVar9[0x98] = (MultiWaitHolderType)0x1;
          }
          iVar16 = iVar16 + 1;
        }
        if (pMVar9 + 0xa0 != pMVar15) {
          if ((*(long **)(pMVar9 + 0xe0) != (long *)0x0) &&
             (uVar8 = (**(code **)(**(long **)(pMVar9 + 0xe0) + 0x68))(), (uVar8 & 1) == 0)) {
            if ((pMVar9[0xe8] == (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0xe0) != 0)) {
              nn::os::LinkMultiWaitHolder(pMVar2,pMVar9 + 0xa0);
              pMVar9[0xe8] = (MultiWaitHolderType)0x1;
            }
            iVar16 = iVar16 + 1;
          }
          for (pMVar9 = pMVar9 + 0xf0; pMVar9 != pMVar15; pMVar9 = pMVar9 + 0x50) {
            if ((*(long **)(pMVar9 + 0x40) != (long *)0x0) &&
               (uVar8 = (**(code **)(**(long **)(pMVar9 + 0x40) + 0x68))(), (uVar8 & 1) == 0)) {
              if ((pMVar9[0x48] == (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x40) != 0)) {
                nn::os::LinkMultiWaitHolder(pMVar2,pMVar9);
                pMVar9[0x48] = (MultiWaitHolderType)0x1;
              }
              iVar16 = iVar16 + 1;
            }
          }
        }
      }
      if (iVar16 == 0) {
        pMVar9 = (MultiWaitHolderType *)param_1[0x13];
        pMVar15 = (MultiWaitHolderType *)param_1[0x14];
        if (pMVar9 != pMVar15) {
          if ((pMVar9[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x40) != 0)) {
            nn::os::UnlinkMultiWaitHolder(pMVar9);
            pMVar9[0x48] = (MultiWaitHolderType)0x0;
          }
          if (pMVar9 + 0x50 != pMVar15) {
            if ((pMVar9[0x98] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x90) != 0)) {
              nn::os::UnlinkMultiWaitHolder(pMVar9 + 0x50);
              pMVar9[0x98] = (MultiWaitHolderType)0x0;
            }
            if (pMVar9 + 0xa0 != pMVar15) {
              if ((pMVar9[0xe8] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0xe0) != 0)) {
                nn::os::UnlinkMultiWaitHolder(pMVar9 + 0xa0);
                pMVar9[0xe8] = (MultiWaitHolderType)0x0;
              }
              for (pMVar9 = pMVar9 + 0xf0; pMVar9 != pMVar15; pMVar9 = pMVar9 + 0x50) {
                if ((pMVar9[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x40) != 0)) {
                  nn::os::UnlinkMultiWaitHolder(pMVar9);
                  pMVar9[0x48] = (MultiWaitHolderType)0x0;
                }
              }
            }
          }
        }
        break;
      }
      pMVar9 = (MultiWaitHolderType *)nn::os::WaitAny(pMVar2);
      pMVar9 = (MultiWaitHolderType *)nn::os::GetMultiWaitHolderUserData(pMVar9);
      if ((pMVar9[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x40) != 0)) {
        nn::os::UnlinkMultiWaitHolder(pMVar9);
        pMVar9[0x48] = (MultiWaitHolderType)0x0;
      }
      if (1 < iVar16) {
        iVar16 = iVar16 + 1;
        do {
          pMVar9 = (MultiWaitHolderType *)nn::os::WaitAny(pMVar2);
          pMVar9 = (MultiWaitHolderType *)nn::os::GetMultiWaitHolderUserData(pMVar9);
          if ((pMVar9[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar9 + 0x40) != 0)) {
            nn::os::UnlinkMultiWaitHolder(pMVar9);
            pMVar9[0x48] = (MultiWaitHolderType)0x0;
          }
          iVar16 = iVar16 + -1;
        } while (2 < iVar16);
      }
      pMVar9 = (MultiWaitHolderType *)param_1[0x13];
      pMVar15 = (MultiWaitHolderType *)param_1[0x14];
    } while (pMVar9 != pMVar15);
  }
  FUN_00c4826c(param_1);
  FUN_00c485fc(param_1);
  if ((code *)param_1[0x30] != (code *)0x0) {
    local_d0 = (undefined8 *)param_1[1];
    (*(code *)param_1[0x30])(param_1 + 0x34,&local_d0);
    memset(&local_d0,0,0x80);
    FUN_00c49ab0(param_1 + 0x30,&local_d0);
    pcVar7 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = (undefined8 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar7)(auStack_b0);
    }
  }
  return;
}


