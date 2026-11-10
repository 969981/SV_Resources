/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c95fb8; name: FUN_00c95fb8
 */


/* WARNING: Removing unreachable block (ram,0x00c96300) */
/* WARNING: Removing unreachable block (ram,0x00c96304) */
/* WARNING: Removing unreachable block (ram,0x00c9630c) */
/* WARNING: Removing unreachable block (ram,0x00c96314) */
/* WARNING: Removing unreachable block (ram,0x00c96444) */
/* WARNING: Removing unreachable block (ram,0x00c9644c) */
/* WARNING: Removing unreachable block (ram,0x00c96450) */
/* WARNING: Removing unreachable block (ram,0x00c96458) */
/* WARNING: Removing unreachable block (ram,0x00c96460) */
/* WARNING: Removing unreachable block (ram,0x00c96648) */
/* WARNING: Removing unreachable block (ram,0x00c96658) */
/* WARNING: Removing unreachable block (ram,0x00c96468) */
/* WARNING: Removing unreachable block (ram,0x00c9631c) */
/* WARNING: Removing unreachable block (ram,0x00c96320) */

void FUN_00c95fb8(long param_1,undefined4 param_2)

{
  int *piVar1;
  MutexType *pMVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *local_100;
  code *local_f8;
  undefined4 local_f0;
  long *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  code *local_d0;
  code *pcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long *local_a8;
  undefined8 *local_60;
  undefined8 local_58;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x68) + 0x138);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_e0 = (undefined8 *)0x0;
  local_d8 = (code *)0x0;
  FUN_00c43ef0(&local_e0,param_1 + 0x30);
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  lVar17 = 0;
  if (param_1 != 0) {
    lVar17 = param_1 + 0x28;
  }
  if (local_e0[2] == lVar17) {
    do {
      pcVar14 = local_d8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_d8,0x10);
      if (bVar6) {
        local_d8 = (code *)0x0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar16 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar16;
    FUN_00c44204(&local_60,uVar16,pcVar14);
    puVar13 = local_e0;
    local_e0 = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      psVar3 = (short *)(puVar13 + 3);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar15 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)puVar8;
          *(long *)puVar9 = lVar17;
          local_58 = *puVar13;
          FUN_00c44438(lVar17 + 0x8040,&local_58);
        }
      }
      else if (sVar4 == 0) goto LAB_00c96344;
    }
    puVar13 = local_100;
    if (local_60 == (undefined8 *)0x0) {
      FUN_00c96924(&local_100);
    }
    else {
      local_100 = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        psVar3 = (short *)(puVar13 + 3);
        do {
          sVar4 = *psVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar6) {
            *psVar3 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar1 = (int *)((long)puVar13 + 0x1c);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)puVar8;
            *(long *)puVar9 = lVar17;
            local_58 = *puVar13;
            FUN_00c44438(lVar17 + 0x8040,&local_58);
          }
        }
        else if (sVar4 == 0) goto LAB_00c96344;
      }
      local_100 = local_60;
      local_60 = (undefined8 *)0x0;
      local_f8 = pcVar14;
    }
  }
  puVar13 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_e0 + 3);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar15 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar8;
        *(long *)puVar9 = lVar17;
        local_58 = *puVar13;
        FUN_00c44438(lVar17 + 0x8040,&local_58);
      }
    }
    else if (sVar4 == 0) goto LAB_00c96344;
  }
  local_e8 = *(long **)(param_1 + 0x68);
  local_f0 = param_2;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x58))();
  }
  puVar10 = PTR_DAT_047dd4c0;
  if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  puVar12 = PTR_DAT_047dd4d0;
  puVar11 = PTR_DAT_047dd4c8;
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  lVar17 = *(long *)puVar11;
  *(long *)puVar12 = lVar17;
  lVar17 = *(long *)(lVar17 + 0x28);
  nn::os::LockMutex((MutexType *)(lVar17 + 0x3d0));
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (code *)0x0;
  pcStack_c8 = (code *)0x0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (code *)0x0;
  FUN_00c966c0(&local_c0,&local_100);
  local_b0 = local_f0;
  local_a8 = local_e8;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x58))();
  }
  local_e0 = (undefined8 *)&LAB_01a71124;
  local_d8 = FUN_0278010c;
  local_d0 = FUN_02780228;
  pcStack_c8 = FUN_02780280;
  FUN_00dd17e4(lVar17 + 0x360,&local_e0);
  pcVar14 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    pcStack_c8 = (code *)0x0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar14)(&local_c0);
  }
  *(undefined8 *)(lVar17 + 0x3f8) = *(undefined8 *)(lVar17 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar17 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar17 + 0x3d0));
  plVar19 = *(long **)(lVar17 + 0x400);
  plVar18 = *(long **)(lVar17 + 0x408);
  if (plVar19 != plVar18) {
    lVar17 = *plVar19;
    pMVar2 = (MutexType *)(lVar17 + 0x3f0);
    nn::os::LockMutex(pMVar2);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar17 + 0x410));
    nn::os::UnlockMutex(pMVar2);
    if (plVar19 + 1 != plVar18) {
      lVar17 = plVar19[1];
      pMVar2 = (MutexType *)(lVar17 + 0x3f0);
      nn::os::LockMutex(pMVar2);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar17 + 0x410));
      nn::os::UnlockMutex(pMVar2);
      for (plVar19 = plVar19 + 2; plVar19 != plVar18; plVar19 = plVar19 + 1) {
        lVar17 = *plVar19;
        pMVar2 = (MutexType *)(lVar17 + 0x3f0);
        nn::os::LockMutex(pMVar2);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar17 + 0x410));
        nn::os::UnlockMutex(pMVar2);
      }
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x60))();
  }
  puVar13 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_100 + 3);
    do {
      sVar4 = *psVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar6) {
        *psVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)local_100 + 0x1c);
      do {
        iVar15 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar8;
        *(long *)puVar9 = lVar17;
        local_e0 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar17 + 0x8040,&local_e0);
      }
    }
    else if (sVar4 == 0) {
LAB_00c96344:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


