/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011da4a0; name: FUN_011da4a0
 */


undefined8 FUN_011da4a0(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  long *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_48;
  
  if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x11e) = 0;
    return 0;
  }
  if ((*(byte *)(param_1 + 0x11e) & 1) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x11f) & 1) != 0) {
    return 1;
  }
  FUN_00c9e664(&local_e0,param_1 + 0xe8);
  if (local_e0 == (long *)0x0) goto LAB_011da518;
  if (*(long *)(param_1 + 0x140) == 0) {
LAB_011da7a8:
    if (local_d8 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = local_d8[9];
    }
    plVar12 = (long *)(lVar10 + 0x110);
    lVar14 = *plVar12;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar14) {
      lVar9 = nn::os::GetCurrentThread();
LAB_011da7d0:
      if (*plVar12 == 0) goto code_r0x011da7d8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
            while (*plVar12 == 0) {
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar13) {
                *plVar12 = lVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_011da7e0;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_011da7e0:
      bVar13 = false;
      goto LAB_011da7e4;
    }
    bVar13 = true;
LAB_011da7e4:
    plVar12 = (long *)FUN_011dac10(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
    if ((*(long **)(lVar10 + 0x130) == plVar12) || (*plVar12 == 0)) {
      plVar12 = (long *)FUN_011dac10(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168)
                                    );
      if (*(long **)(lVar10 + 0x168) == plVar12) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*plVar12 != 0) {
          lVar9 = *plVar12 + -0x20;
        }
      }
    }
    else {
      lVar9 = *plVar12 + -0x20;
    }
    if (!bVar13) {
      *(undefined8 *)(lVar10 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
    }
    if (lVar9 == 0) goto LAB_011da518;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    FUN_00c43ef0(&local_d0,lVar9 + 0x98);
    local_f0 = (undefined8 *)0x0;
    uStack_e8 = 0;
    if (local_d0[2] == lVar9 + 0x28) {
      FUN_00c953a8(&local_f0,&local_d0);
    }
    puVar5 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_d0 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *puVar5;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar11 == 0) goto LAB_011da910;
    }
    FUN_00cacc64((long *)(param_1 + 0x140),&local_f0);
    puVar5 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_d0 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar10 + 0x8040,&local_d0);
        }
      }
      else if (sVar11 == 0) {
LAB_011da910:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else if (*(short *)(*(long *)(param_1 + 0x140) + 0x1a) == 0) {
    if (local_e0 == (long *)0x0) goto LAB_011da518;
    goto LAB_011da7a8;
  }
  lVar10 = *(long *)(param_1 + 0x140);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_011da5c8;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011da5c8:
        bVar13 = false;
      }
      if (bVar13) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
          uVar8 = FUN_01e0d238(plVar12);
          if ((uVar8 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x11e) = 1;
            local_d0 = (undefined8 *)0x0;
            local_c8 = (code *)0x0;
            FUN_00c43ef0(&local_d0,param_1 + 0x98);
            local_f0 = (undefined8 *)0x0;
            uStack_e8 = 0;
            lVar10 = 0;
            if (param_1 != 0) {
              lVar10 = param_1 + 0x28;
            }
            if (local_d0[2] == lVar10) {
              FUN_015bfafc(&local_f0,&local_d0);
            }
            puVar5 = local_d0;
            if (local_d0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_d0 + 3);
              do {
                sVar11 = *psVar1;
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar13) {
                  *psVar1 = sVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar11 == 1) {
                piVar2 = (int *)((long)local_d0 + 0x1c);
                do {
                  iVar7 = *piVar2;
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar13) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar10 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar10;
                  local_48 = *puVar5;
                  FUN_00c44438(lVar10 + 0x8040,&local_48);
                }
              }
              else if (sVar11 == 0) goto LAB_011da910;
            }
            if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047dd4c0);
            }
            *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
            lVar10 = FUN_014b65d8();
            nn::os::LockMutex((MutexType *)(lVar10 + 0x3d0));
            local_b0 = 0;
            uStack_a8 = 0;
            local_c0 = (undefined1 *)0x0;
            puStack_b8 = (undefined1 *)0x0;
            local_d0 = (undefined8 *)0x0;
            local_c8 = (code *)0x0;
            FUN_01316ac0(&local_b0,&local_f0);
            local_d0 = (undefined8 *)&LAB_029cb238;
            local_c8 = FUN_029cbb28;
            local_c0 = &LAB_01316aac;
            puStack_b8 = &LAB_013263e4;
            FUN_00dd17e4(lVar10 + 0x360,&local_d0);
            pcVar6 = local_c8;
            if (local_c8 != (code *)0x0) {
              local_c0 = (undefined1 *)0x0;
              puStack_b8 = (undefined1 *)0x0;
              local_d0 = (undefined8 *)0x0;
              local_c8 = (code *)0x0;
              (*pcVar6)(&local_b0);
            }
            *(undefined8 *)(lVar10 + 0x3f8) = *(undefined8 *)(lVar10 + 0x3a8);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x3f0));
            nn::os::UnlockMutex((MutexType *)(lVar10 + 0x3d0));
            FUN_017aafec(lVar10);
            puVar5 = local_f0;
            if (local_f0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_f0 + 3);
              do {
                sVar11 = *psVar1;
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar13) {
                  *psVar1 = sVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar11 == 1) {
                piVar2 = (int *)((long)local_f0 + 0x1c);
                do {
                  iVar7 = *piVar2;
                  cVar4 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar13) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar10 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar10;
                  local_d0 = (undefined8 *)*puVar5;
                  FUN_00c44438(lVar10 + 0x8040,&local_d0);
                }
              }
              else if (sVar11 == 0) goto LAB_011da910;
            }
          }
          (**(code **)(*plVar12 + 0x60))(plVar12);
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_011da518:
  if (local_d8 != (long *)0x0) {
    plVar12 = local_d8 + 5;
    do {
      lVar10 = *plVar12;
      iVar7 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *(int *)plVar12 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x60))();
  }
  return 0;
code_r0x011da7d8:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar13) {
    *plVar12 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_011da7e0;
  goto LAB_011da7d0;
}


