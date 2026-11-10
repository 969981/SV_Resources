/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c479f4; name: FUN_00c479f4
 */


void FUN_00c479f4(long *param_1)

{
  short *psVar1;
  long *plVar2;
  LightEventType *pLVar3;
  int *piVar4;
  MutexType *pMVar5;
  int iVar6;
  short sVar7;
  undefined8 *puVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  long *local_38;
  
  if (param_1[0xa3] == 0) {
    if ((*(byte *)(param_1 + 0x49) & 1) != 0) {
      return;
    }
    if (((char)param_1[0xa2] != '\0') && (*(char *)(param_1[0xa1] + 0x20c) != '\0')) {
      return;
    }
    plVar2 = param_1 + 0x96;
    lVar13 = nn::os::GetCurrentThread();
LAB_00c47c7c:
    if (*plVar2 == 0) goto code_r0x00c47c84;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x97));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x97));
          while (*plVar2 == 0) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *plVar2 = lVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_00c47c8c;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_00c47c8c:
    lVar13 = FUN_00c47f5c(param_1,param_1 + 0x9f);
    pLVar3 = (LightEventType *)(param_1 + 0x97);
    param_1[0x96] = 0;
    nn::os::SignalLightEvent(pLVar3);
    param_1[0xa3] = lVar13;
    if (lVar13 != 0) goto LAB_00c47a18;
    piVar4 = (int *)((long)param_1 + 0x514);
    do {
      if (*piVar4 != 0) {
        ClearExclusiveLocal();
        goto LAB_00c47ed8;
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar11) {
        *piVar4 = 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    pMVar5 = (MutexType *)(param_1 + 0x99);
    nn::os::LockMutex(pMVar5);
    do {
      if (*piVar4 != 1) {
        ClearExclusiveLocal();
        goto LAB_00c47ed0;
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar11) {
        *piVar4 = 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    FUN_028fa17c(param_1[0x9e]);
    uVar15 = FUN_028fa184(param_1[0x9e]);
    if ((uVar15 & 1) != 0) {
      do {
        nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x9d),pMVar5);
        uVar15 = FUN_028fa184(param_1[0x9e]);
      } while ((uVar15 & 1) != 0);
    }
    if (((*(byte *)(param_1 + 0x49) & 1) != 0) &&
       (*(int *)(param_1[0xa1] + 0x200) <= *(int *)((long)param_1 + 0x504))) {
      nn::os::UnlockMutex(pMVar5);
      return;
    }
LAB_00c47ed0:
    nn::os::UnlockMutex(pMVar5);
LAB_00c47ed8:
    *piVar4 = 0;
    lVar13 = nn::os::GetCurrentThread();
LAB_00c47ee4:
    if (*plVar2 == 0) goto code_r0x00c47eec;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar3);
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar3);
          while (*plVar2 == 0) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar11) {
              *plVar2 = lVar13;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_00c47ef4;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_00c47ef4:
    lVar13 = FUN_00c47f5c(param_1,param_1 + 0x9f);
    param_1[0x96] = 0;
    nn::os::SignalLightEvent(pLVar3);
    param_1[0xa3] = lVar13;
  }
LAB_00c47a18:
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  *(undefined4 *)(lVar13 + 0x90) = *(undefined4 *)((long)param_1 + 0x504);
  if (*(int *)((long)param_1 + 0x24c) == 1) {
    local_38 = param_1;
    (*(code *)param_1[0x4c])(param_1 + 0x50,&local_38);
    pcVar16 = (code *)param_1[0x4d];
    if (pcVar16 != (code *)0x0) {
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      (*pcVar16)(param_1 + 0x50);
    }
    *(undefined4 *)((long)param_1 + 0x24c) = 2;
  }
  lVar13 = param_1[0xa3];
  if (lVar13 != 0) {
    plVar2 = param_1 + 0x9f;
    do {
      if (*(long *)(lVar13 + 0x30) == 0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00c4ae64(&local_38);
        if (local_38 != (long *)0x0) {
          FUN_00c49b48(local_38,plVar2);
        }
      }
      lVar13 = param_1[0xa3];
      param_1[0xa3] = 0;
      FUN_00c49c28(lVar13 + 0x290,plVar2);
      puVar18 = *(undefined8 **)(lVar13 + 0x80);
      puVar8 = *(undefined8 **)(lVar13 + 0x88);
      if (((puVar18 != puVar8) &&
          ((**(code **)(*(long *)*puVar18 + 0x90))((long *)*puVar18,plVar2), puVar18 + 1 != puVar8))
         && ((**(code **)(*(long *)puVar18[1] + 0x90))((long *)puVar18[1],plVar2),
            puVar18 + 2 != puVar8)) {
        (**(code **)(*(long *)puVar18[2] + 0x90))((long *)puVar18[2],plVar2);
        for (puVar18 = puVar18 + 3; puVar18 != puVar8; puVar18 = puVar18 + 1) {
          (**(code **)(*(long *)*puVar18 + 0x90))((long *)*puVar18,plVar2);
        }
      }
      *(undefined4 *)(lVar13 + 0x1c8) = 0;
      *(int *)(lVar13 + 0x354) = (int)param_1[0xa0];
      if (local_38 != (long *)0x0) {
        lVar13 = local_38[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar7 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar13 = param_1[0xa3];
    } while (lVar13 != 0);
  }
  plVar2 = param_1 + 0x96;
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar13;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_00c47a74;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x97));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x97));
        while (*plVar2 == 0) {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar11) {
            *plVar2 = lVar13;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_00c47a74;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar13;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_00c47a74:
  lVar13 = FUN_00c47f5c(param_1,param_1 + 0x9f);
  param_1[0x96] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x97));
  param_1[0xa3] = lVar13;
  if (lVar13 != 0) {
    return;
  }
  lVar13 = param_1[0xa1];
  iVar9 = *(int *)((long)param_1 + 0x504);
  iVar12 = 0;
  if (iVar9 + 1 < *(int *)(lVar13 + 0x200)) {
    iVar12 = iVar9 + 1;
  }
  do {
    lVar17 = *(long *)(lVar13 + (long)iVar12 * 8 + 0x18);
    plVar2 = (long *)(lVar17 + 0x4b0);
    lVar14 = nn::os::GetCurrentThread();
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB_00c47c34;
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar14;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar14 = FUN_00c47f5c(lVar17,param_1 + 0x9f);
    *(undefined8 *)(lVar17 + 0x4b0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x4b8));
    if (lVar14 != 0) goto LAB_00c47c50;
LAB_00c47c34:
    iVar6 = 0;
    if (iVar12 + 1 < *(int *)(lVar13 + 0x200)) {
      iVar6 = iVar12 + 1;
    }
    iVar12 = iVar6;
  } while (iVar6 != iVar9);
  lVar14 = 0;
LAB_00c47c50:
  param_1[0xa3] = lVar14;
  return;
code_r0x00c47c84:
  cVar10 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar11) {
    *plVar2 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_00c47c8c;
  goto LAB_00c47c7c;
code_r0x00c47eec:
  cVar10 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar11) {
    *plVar2 = lVar13;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_00c47ef4;
  goto LAB_00c47ee4;
}


