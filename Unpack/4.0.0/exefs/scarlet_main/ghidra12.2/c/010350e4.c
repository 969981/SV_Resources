/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010350e4; name: FUN_010350e4
 */


undefined8 FUN_010350e4(long param_1)

{
  MutexType *pMVar1;
  short *psVar2;
  code *pcVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  long *local_c8;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_28;
  
  if ((*(byte *)(param_1 + 0x221) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x220) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x278) & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x280) == 0) {
      FUN_00c9e664(&local_d0,param_1 + 0xe8);
      if (local_d0 != (long *)0x0) {
        if (((*PTR_DAT_047d88d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d88d0);
        }
        uVar17 = *(undefined8 *)PTR_DAT_047d88d8;
        *(undefined8 *)PTR_DAT_047d88e0 = uVar17;
        if (local_c8 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          plVar18 = (long *)local_c8[9];
        }
        (**(code **)(*plVar18 + 0x18))(&local_c0,plVar18);
        local_e0 = (undefined8 *)0x0;
        uStack_d8 = 0;
        plVar16 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          plVar16 = plVar18 + 5;
        }
        if (*(long **)(local_c0 + 0x10) == plVar16) {
          FUN_00c9ea00(&local_e0,&local_c0);
        }
        pcVar12 = local_c0;
        if (local_c0 != (code *)0x0) {
          pcVar3 = local_c0 + 0x18;
          do {
            sVar5 = *(short *)pcVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar7) {
              *(short *)pcVar3 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            pcVar3 = local_c0 + 0x1c;
            do {
              iVar13 = *(int *)pcVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
              if (bVar7) {
                *(int *)pcVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_28 = *(undefined8 *)pcVar12;
              FUN_00c44438(lVar14 + 0x8040,&local_28);
            }
          }
          else if (sVar5 == 0) goto LAB_010354cc;
        }
        FUN_01035a9c(&local_28,uVar17,&local_e0);
        plVar18 = *(long **)(param_1 + 0x280);
        *(undefined8 *)(param_1 + 0x280) = 0;
        if (plVar18 != (long *)0x0) {
          lVar14 = plVar18[6];
          psVar2 = (short *)(lVar14 + 0x1a);
          do {
            sVar5 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*plVar18 + 0x50))();
          }
          else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        uVar17 = local_28;
        puVar11 = local_e0;
        local_28 = 0;
        *(undefined8 *)(param_1 + 0x280) = uVar17;
        if (local_e0 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_e0 + 3);
          do {
            sVar5 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            piVar4 = (int *)((long)local_e0 + 0x1c);
            do {
              iVar13 = *piVar4;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar7) {
                *piVar4 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_c0 = (code *)*puVar11;
              FUN_00c44438(lVar14 + 0x8040,&local_c0);
            }
          }
          else if (sVar5 == 0) goto LAB_010354cc;
        }
      }
      if (local_c8 != (long *)0x0) {
        plVar18 = local_c8 + 5;
        do {
          lVar14 = *plVar18;
          iVar13 = (int)lVar14 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar7) {
            *(int *)plVar18 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x60))();
      }
    }
    lVar14 = FUN_00c8dda0(param_1);
    if (lVar14 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x24b) == '\0') {
      local_c0 = (code *)0x0;
      local_b8 = (code *)0x0;
      FUN_00c43ef0(&local_c0,lVar14 + 0x98);
      local_d0 = (long *)0x0;
      local_c8 = (long *)0x0;
      if (*(long *)(local_c0 + 0x10) == lVar14 + 0x28) {
        FUN_00c953a8(&local_d0,&local_c0);
      }
      pcVar12 = local_c0;
      if (local_c0 != (code *)0x0) {
        pcVar3 = local_c0 + 0x18;
        do {
          sVar5 = *(short *)pcVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar7) {
            *(short *)pcVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          pcVar3 = local_c0 + 0x1c;
          do {
            iVar13 = *(int *)pcVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar7) {
              *(int *)pcVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_e0 = *(undefined8 **)pcVar12;
            FUN_00c44438(lVar15 + 0x8040,&local_e0);
          }
        }
        else if (sVar5 == 0) goto LAB_010354cc;
      }
      FUN_00cacc64(param_1 + 0x120,&local_d0);
      plVar18 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar16 = local_d0 + 3;
        do {
          sVar5 = (short)*plVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *(short *)plVar16 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_d0 + 0x1c);
          do {
            iVar13 = *piVar4;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
              *piVar4 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_c0 = (code *)*plVar18;
            FUN_00c44438(lVar15 + 0x8040,&local_c0);
          }
        }
        else if (sVar5 == 0) goto LAB_010354cc;
      }
      *(undefined1 *)(param_1 + 0x24b) = 1;
    }
    if (*(int *)(lVar14 + 0x130) != 3) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x220) = 1;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    FUN_00c43ef0(&local_c0,param_1 + 0x98);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    if (*(long *)(local_c0 + 0x10) == param_1 + 0x28) {
      FUN_00d94688(&local_d0,&local_c0);
    }
    pcVar12 = local_c0;
    if (local_c0 != (code *)0x0) {
      pcVar3 = local_c0 + 0x18;
      do {
        sVar5 = *(short *)pcVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar7) {
          *(short *)pcVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        pcVar3 = local_c0 + 0x1c;
        do {
          iVar13 = *(int *)pcVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar7) {
            *(int *)pcVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_e0 = *(undefined8 **)pcVar12;
          FUN_00c44438(lVar14 + 0x8040,&local_e0);
        }
      }
      else if (sVar5 == 0) goto LAB_010354cc;
    }
    puVar8 = PTR_DAT_047dd4c0;
    if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd4c0);
    }
    puVar10 = PTR_DAT_047dd4d0;
    puVar9 = PTR_DAT_047dd4c8;
    *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd4c0);
    }
    lVar14 = *(long *)puVar9;
    *(long *)puVar10 = lVar14;
    lVar14 = *(long *)(lVar14 + 0x28);
    nn::os::LockMutex((MutexType *)(lVar14 + 0x3d0));
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    FUN_00d4ca00(&local_a0,&local_d0);
    local_c0 = FUN_029e4d50;
    local_b8 = FUN_029e4fe8;
    local_b0 = &LAB_029e50f8;
    puStack_a8 = &LAB_029e510c;
    FUN_00dd17e4(lVar14 + 0x360,&local_c0);
    pcVar12 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (code *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar12)(&local_a0);
    }
    *(undefined8 *)(lVar14 + 0x3f8) = *(undefined8 *)(lVar14 + 0x3a8);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar14 + 0x3f0));
    nn::os::UnlockMutex((MutexType *)(lVar14 + 0x3d0));
    plVar18 = *(long **)(lVar14 + 0x400);
    plVar16 = *(long **)(lVar14 + 0x408);
    if (plVar18 != plVar16) {
      lVar14 = *plVar18;
      pMVar1 = (MutexType *)(lVar14 + 0x3f0);
      nn::os::LockMutex(pMVar1);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar14 + 0x410));
      nn::os::UnlockMutex(pMVar1);
      if (plVar18 + 1 != plVar16) {
        lVar14 = plVar18[1];
        pMVar1 = (MutexType *)(lVar14 + 0x3f0);
        nn::os::LockMutex(pMVar1);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar14 + 0x410));
        nn::os::UnlockMutex(pMVar1);
        for (plVar18 = plVar18 + 2; plVar18 != plVar16; plVar18 = plVar18 + 1) {
          lVar14 = *plVar18;
          pMVar1 = (MutexType *)(lVar14 + 0x3f0);
          nn::os::LockMutex(pMVar1);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar14 + 0x410));
          nn::os::UnlockMutex(pMVar1);
        }
      }
    }
    plVar18 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar16 = local_d0 + 3;
      do {
        sVar5 = (short)*plVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(short *)plVar16 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar13 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_c0 = (code *)*plVar18;
          FUN_00c44438(lVar14 + 0x8040,&local_c0);
        }
      }
      else if (sVar5 == 0) {
LAB_010354cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  return 0;
}


