/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029de608; name: FUN_029de608
 */


void FUN_029de608(long param_1)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  code *pcVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  char *local_c0 [12];
  char local_5c [4];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar16 = (long *)(param_1 + 0x140);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_029de640;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar16 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar8) {
            *plVar16 = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_029de640;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_029de640:
  puVar9 = PTR_DAT_047d3e28;
  local_5c[0] = '\x01';
  if (*(long *)(param_1 + 0x180) == *(long *)(param_1 + 0x178)) {
    local_5c[0] = '\0';
  }
  else {
    local_c0[0] = local_5c;
    local_e0 = FUN_00ff4d08;
    local_d8 = FUN_02e63188;
    local_d0 = &LAB_02e6318c;
    local_c8 = &LAB_02e63198;
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_00d54858(param_1,PTR_DAT_047d3e30,&local_e0);
    pcVar11 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar11)(local_c0);
    }
    if (local_5c[0] == '\0') goto LAB_029de6cc;
    local_e0 = (code *)&LAB_01274034;
    local_d8 = FUN_02e631a4;
    local_c0[0] = (char *)(param_1 + 0x170);
    local_d0 = &LAB_02e631a8;
    local_c8 = &LAB_02e631b4;
    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_00d54858(param_1,PTR_DAT_047d3e30,&local_e0);
    pcVar11 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar11)(local_c0);
    }
    if (local_5c[0] == '\0') goto LAB_029de6cc;
    lVar13 = FUN_00c8dda0(param_1);
    if ((lVar13 != 0) && (plVar16 = *(long **)(lVar13 + 0x120), plVar16 != (long *)0x0)) {
      plVar1 = plVar16 + 5;
      do {
        lVar13 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = (int)lVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar13 == -1) {
LAB_029dedd8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar13 = *(long *)(param_1 + 0x2a8);
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      FUN_00c43ef0(&local_e0,param_1 + 0x98);
      local_f0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      if (*(long *)(local_e0 + 0x10) == param_1 + 0x28) {
        FUN_00d94688(&local_f0,&local_e0);
      }
      pcVar11 = local_e0;
      if (local_e0 != (code *)0x0) {
        pcVar5 = local_e0 + 0x18;
        do {
          sVar6 = *(short *)pcVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar8) {
            *(short *)pcVar5 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          pcVar5 = local_e0 + 0x1c;
          do {
            iVar12 = *(int *)pcVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar8) {
              *(int *)pcVar5 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_58 = *(undefined8 **)pcVar11;
            FUN_00c44438(lVar15 + 0x8040,&local_58);
          }
        }
        else if (sVar6 == 0) goto LAB_029dea80;
      }
      FUN_00d4ca00(lVar13 + 0x40,&local_f0);
      do {
        lVar15 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = (int)lVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar15 == -1) goto LAB_029dedd8;
      plVar14 = *(long **)(lVar13 + 0x50);
      *(long **)(lVar13 + 0x50) = plVar16;
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 5;
        do {
          lVar15 = *plVar2;
          iVar12 = (int)lVar15 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = iVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar15 == 0) goto LAB_029de9a8;
      }
      if (*(char *)(lVar13 + 0x58) == '\0') {
        uVar17 = *(undefined8 *)(lVar13 + 0x50);
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        FUN_00c43ef0(&local_e0,lVar13 + 0x30);
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        if (*(long *)(local_e0 + 0x10) == lVar13 + 0x28) {
          FUN_0127d168(&local_58,&local_e0);
        }
        pcVar11 = local_e0;
        if (local_e0 != (code *)0x0) {
          pcVar5 = local_e0 + 0x18;
          do {
            sVar6 = *(short *)pcVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar8) {
              *(short *)pcVar5 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            pcVar5 = local_e0 + 0x1c;
            do {
              iVar12 = *(int *)pcVar5;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar8) {
                *(int *)pcVar5 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_48 = *(undefined8 *)pcVar11;
              FUN_00c44438(lVar15 + 0x8040,&local_48);
            }
          }
          else if (sVar6 == 0) goto LAB_029dea80;
        }
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        FUN_0127cd98(&local_e0,&local_58);
        FUN_013ddf44(uVar17,&local_e0);
        pcVar11 = local_e0;
        if (local_e0 != (code *)0x0) {
          pcVar5 = local_e0 + 0x18;
          do {
            sVar6 = *(short *)pcVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar8) {
              *(short *)pcVar5 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            pcVar5 = local_e0 + 0x1c;
            do {
              iVar12 = *(int *)pcVar5;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar8) {
                *(int *)pcVar5 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_48 = *(undefined8 *)pcVar11;
              FUN_00c44438(lVar15 + 0x8040,&local_48);
            }
          }
          else if (sVar6 == 0) goto LAB_029dea80;
        }
        puVar10 = local_58;
        if (local_58 != (undefined8 *)0x0) {
          psVar3 = (short *)(local_58 + 3);
          do {
            sVar6 = *psVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar8) {
              *psVar3 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar4 = (int *)((long)local_58 + 0x1c);
            do {
              iVar12 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_48 = *puVar10;
              FUN_00c44438(lVar15 + 0x8040,&local_48);
            }
          }
          else if (sVar6 == 0) goto LAB_029dea80;
        }
        *(undefined1 *)(lVar13 + 0x58) = 1;
      }
      puVar10 = local_f0;
      if (local_f0 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_f0 + 3);
        do {
          sVar6 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar4 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar12 = *piVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar8) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_e0 = (code *)*puVar10;
            FUN_00c44438(lVar13 + 0x8040,&local_e0);
          }
        }
        else if (sVar6 == 0) {
LAB_029dea80:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *(undefined1 *)(plVar16 + 0x3a) = 0;
      do {
        lVar13 = *plVar1;
        iVar12 = (int)lVar13 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      else if ((int)lVar13 == 0) {
LAB_029de9a8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + 0x2b0) = 1;
  }
LAB_029de6cc:
  *(char *)(param_1 + 0x278) = local_5c[0];
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return;
}


