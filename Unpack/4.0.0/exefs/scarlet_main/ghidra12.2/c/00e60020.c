/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e60020; name: FUN_00e60020
 */


void FUN_00e60020(long param_1)

{
  MutexType *pMVar1;
  bool bVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *puStack_b8;
  long *local_b0 [12];
  
  plVar10 = (long *)(param_1 + 0x10);
  lVar7 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar7) {
    plVar10 = (long *)0x0;
    bVar9 = true;
LAB_00e60070:
    if (*(long *)(param_1 + 8) != 0) {
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      lVar6 = *(long *)PTR_DAT_047d4e00;
      *(long *)PTR_DAT_047d4e08 = lVar6;
      lVar6 = *(long *)(lVar6 + 0xb4f0);
      plVar8 = *(long **)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x3d0));
      local_c0 = (code *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (code *)0x0;
      local_c8 = (code *)0x0;
      local_b0[0] = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 5;
        do {
          lVar7 = *plVar12;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = (int)lVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      local_d0 = FUN_0219cb58;
      local_c8 = FUN_02b4dca0;
      local_c0 = FUN_02b4dd0c;
      puStack_b8 = &LAB_02b4dd6c;
      FUN_00dd17e4(lVar6 + 0x360,&local_d0);
      pcVar4 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (code *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (code *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar4)(local_b0);
      }
      *(undefined8 *)(lVar6 + 0x3f8) = *(undefined8 *)(lVar6 + 0x3a8);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar6 + 0x3f0));
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x3d0));
      plVar12 = *(long **)(lVar6 + 0x400);
      plVar11 = *(long **)(lVar6 + 0x408);
      if (plVar12 != plVar11) {
        lVar6 = *plVar12;
        pMVar1 = (MutexType *)(lVar6 + 0x3f0);
        nn::os::LockMutex(pMVar1);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar6 + 0x410));
        nn::os::UnlockMutex(pMVar1);
        if (plVar12 + 1 != plVar11) {
          lVar6 = plVar12[1];
          pMVar1 = (MutexType *)(lVar6 + 0x3f0);
          nn::os::LockMutex(pMVar1);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar6 + 0x410));
          nn::os::UnlockMutex(pMVar1);
          for (plVar12 = plVar12 + 2; plVar12 != plVar11; plVar12 = plVar12 + 1) {
            lVar6 = *plVar12;
            pMVar1 = (MutexType *)(lVar6 + 0x3f0);
            nn::os::LockMutex(pMVar1);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar6 + 0x410));
            nn::os::UnlockMutex(pMVar1);
          }
        }
      }
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 5;
        do {
          lVar6 = *plVar12;
          iVar5 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *(int *)plVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (!bVar9) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00e6006c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e6006c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e6006c:
  bVar9 = false;
  goto LAB_00e60070;
}


