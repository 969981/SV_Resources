/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1f59c; name: FUN_00d1f59c
 */


undefined1  [16] FUN_00d1f59c(long *param_1)

{
  short *psVar1;
  MutexType *pMVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  short sVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  (**(code **)(*param_1 + 0x18))(local_58);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  plVar14 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar14 = param_1 + 5;
  }
  if ((long *)local_58[0][2] == plVar14) {
    FUN_00d1f904(&local_68,local_58);
  }
  puVar7 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar3 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar10 == 0) goto LAB_00d1f658;
  }
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    if (*(short *)((long)local_68 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_68 + 0x1a);
      sVar10 = *(short *)((long)local_68 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar10) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00d1f714;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d1f714:
          bVar6 = false;
        }
        if (bVar6) {
          plVar14 = (long *)0x0;
          if (local_68[2] != 0) {
            plVar14 = (long *)(local_68[2] + -0x28);
          }
          goto LAB_00d1f73c;
        }
        sVar10 = sVar4;
      } while (sVar4 != 0);
    }
    plVar14 = (long *)0x0;
LAB_00d1f73c:
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar3 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_58);
      }
    }
    else if (sVar10 == 0) {
LAB_00d1f658:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar14 != (long *)0x0) {
      pMVar2 = (MutexType *)(param_1 + 0x24);
      nn::os::LockMutex(pMVar2);
      if ((int)param_1[0x2c] != 5) {
        nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x28),pMVar2);
        iVar8 = (int)param_1[0x2c];
        while (iVar8 != 5) {
          nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x28),pMVar2);
          iVar8 = (int)param_1[0x2c];
        }
      }
      uVar12 = param_1[0x2e];
      uVar11 = uVar12 >> 0x20;
      param_1 = (long *)(ulong)*(uint *)(param_1 + 0x2f);
      uVar13 = uVar12 >> 0x28;
      nn::os::UnlockMutex(pMVar2);
      lVar9 = plVar14[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))(plVar14);
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_00d1f610;
    }
  }
  uVar13 = 0;
  uVar11 = 0;
  uVar12 = 0;
LAB_00d1f610:
  auVar15._0_8_ = uVar13 << 0x28 | (uVar11 & 0xff) << 0x20 | uVar12 & 0xffffffff;
  auVar15._8_8_ = (ulong)param_1 & 0xffffffff;
  return auVar15;
}


