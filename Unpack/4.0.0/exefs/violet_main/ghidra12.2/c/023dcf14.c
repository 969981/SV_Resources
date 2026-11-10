/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023dcf14; name: FUN_023dcf14
 */


void FUN_023dcf14(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  char local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  char local_78;
  long *local_70;
  char local_68;
  
  plVar12 = (long *)(param_2 + 0x530);
  local_68 = '\x01';
  local_70 = plVar12;
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar17 = *plVar12;
    lVar16 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar14) {
      *plVar12 = lVar17;
      *(long *)(param_2 + 0x538) = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    while ((lVar17 != 0 && (lVar10 != lVar17))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar17 = *plVar12;
        lVar16 = *(long *)(param_2 + 0x538);
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar14) {
          *plVar12 = lVar17;
          *(long *)(param_2 + 0x538) = lVar16;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    do {
      lVar4 = *plVar12;
      if (lVar4 != lVar17 || *(long *)(param_2 + 0x538) != lVar16) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_023dcfb4;
      }
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar17;
        *(long *)(param_2 + 0x534) = lVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar14 = true;
LAB_023dcfb4:
    lVar17 = lVar4;
    lVar16 = *(long *)(param_2 + 0x538);
  } while (!bVar14);
  if (*(char *)(param_2 + 0x550) == '\0') {
    plVar12 = (long *)(param_2 + 0x60);
    lVar10 = nn::os::GetCurrentThread();
    while (*plVar12 == 0) {
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') goto LAB_023dd02c;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
          while (*plVar12 == 0) {
            cVar7 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_023dd02c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_023dd02c:
    plVar12 = (long *)(param_2 + 0x290);
    local_78 = 1;
    local_80 = plVar12;
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar17 = *plVar12;
      lVar16 = *(long *)(param_2 + 0x298);
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar17;
        *(long *)(param_2 + 0x298) = lVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      while ((lVar17 != 0 && (lVar10 != lVar17))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar17 = *plVar12;
          lVar16 = *(long *)(param_2 + 0x298);
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar14) {
            *plVar12 = lVar17;
            *(long *)(param_2 + 0x298) = lVar16;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      do {
        lVar4 = *plVar12;
        if (lVar4 != lVar17 || *(long *)(param_2 + 0x298) != lVar16) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto LAB_023dd08c;
        }
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar14) {
          *plVar12 = lVar17;
          *(long *)(param_2 + 0x294) = lVar16 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar14 = true;
LAB_023dd08c:
      lVar17 = lVar4;
      lVar16 = *(long *)(param_2 + 0x298);
    } while (!bVar14);
    plVar12 = *(long **)(param_2 + 0x2b0);
    lVar10 = *(long *)(param_2 + 0x2e8);
    if ((lVar10 == 0) || (*plVar12 == param_5)) {
      plVar13 = plVar12;
LAB_023dd0d8:
      if (plVar13 == plVar12 + lVar10 * 4) goto LAB_023dd240;
      uVar11 = FUN_023ddadc(param_1,*(undefined8 *)
                                     (*(long *)(param_2 + 0x348) + plVar13[3] * 0x130 + 0x120),
                            param_6,param_7);
      FUN_023de094(param_3,uVar11);
    }
    else {
      lVar17 = lVar10 * 0x20;
      plVar18 = plVar12;
      while (lVar17 = lVar17 + -0x20, lVar17 != 0) {
        plVar19 = plVar18 + 4;
        plVar13 = plVar18 + 4;
        plVar18 = plVar18 + 4;
        if (*plVar19 == param_5) goto LAB_023dd0d8;
      }
LAB_023dd240:
      plVar12 = (long *)(param_2 + 0x948);
      lVar17 = *plVar12;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar17) {
        lVar10 = nn::os::GetCurrentThread();
LAB_023dd25c:
        if (*plVar12 == 0) goto code_r0x023dd264;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
        do {
          if (*plVar12 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
              while (*plVar12 == 0) {
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar14) {
                  *plVar12 = lVar10;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_023dd26c;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar14) {
            *plVar12 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_023dd26c:
        bVar14 = false;
        goto LAB_023dd270;
      }
      plVar12 = (long *)0x0;
      bVar14 = true;
LAB_023dd270:
      plVar13 = *(long **)(param_2 + 0x960);
      lVar10 = *(long *)(param_2 + 0x998);
      if ((lVar10 == 0) || (*plVar13 == param_5)) {
        plVar18 = plVar13;
LAB_023dd280:
        if (plVar18 == plVar13 + lVar10 * 2) goto LAB_023dd464;
        *(undefined1 *)(plVar18 + 1) = 1;
      }
      else {
        lVar17 = lVar10 * 0x10;
        plVar19 = plVar13;
        while (lVar17 = lVar17 + -0x10, lVar17 != 0) {
          plVar18 = plVar19 + 2;
          plVar1 = plVar19 + 2;
          plVar19 = plVar18;
          if (*plVar1 == param_5) goto LAB_023dd280;
        }
LAB_023dd464:
        local_c0 = (long *)0x0;
        local_b8 = '\0';
        if (local_68 == '\0') {
          local_70 = (long *)0x0;
        }
        else {
          do {
            lVar10 = *local_70;
            lVar17 = local_70[1];
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(local_70,0x10);
            if (bVar15) {
              *local_70 = lVar10;
              local_70[1] = lVar17;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar16 = *local_70;
            lVar4 = local_70[1];
            if (lVar16 != lVar10 || lVar4 != lVar17) {
              bVar15 = false;
              ClearExclusiveLocal();
              goto LAB_023dd4bc;
            }
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(local_70,0x10);
            if (bVar15) {
              *local_70 = lVar10;
              *(long *)((long)local_70 + 4) = lVar17 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar15 = true;
LAB_023dd4bc:
          if (!bVar15) {
            do {
              lVar10 = *local_70;
              lVar17 = local_70[1];
              if (lVar10 != lVar16 || lVar17 != lVar4) {
                bVar15 = false;
                ClearExclusiveLocal();
                goto joined_r0x023dd618;
              }
              cVar7 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(local_70,0x10);
              if (bVar15) {
                *local_70 = lVar16;
                *(long *)((long)local_70 + 4) = lVar4 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar15 = true;
joined_r0x023dd618:
            if (!bVar15) {
              do {
                lVar16 = *local_70;
                lVar4 = local_70[1];
                if (lVar16 != lVar10 || lVar4 != lVar17) {
                  bVar15 = false;
                  ClearExclusiveLocal();
                  lVar10 = lVar16;
                  lVar17 = lVar4;
                  goto joined_r0x023dd618;
                }
                cVar7 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(local_70,0x10);
                if (bVar15) {
                  *local_70 = lVar10;
                  *(long *)((long)local_70 + 4) = lVar17 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar15 = true;
              lVar10 = lVar16;
              lVar17 = lVar4;
              goto joined_r0x023dd618;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(local_70 + 2));
          local_70 = local_c0;
          local_68 = local_b8;
        }
        local_c0 = (long *)0x0;
        local_b8 = 0;
        FUN_00f08b20(&local_c0);
        uVar11 = *param_3;
        uVar6 = param_3[1];
        local_f0 = (undefined8 *)0x0;
        uStack_e8 = 0;
        FUN_00c96b7c(&local_f0,param_6);
        local_e0 = *(undefined8 *)(param_6 + 0x10);
        uStack_d8 = *(undefined8 *)(param_6 + 0x18);
        local_d0 = *(undefined8 *)(param_6 + 0x20);
        local_c8 = *(long **)(param_6 + 0x28);
        *(undefined8 *)(param_6 + 0x28) = 0;
        FUN_023ddcb4(param_1,param_2,uVar11,uVar6,param_4,param_5,&local_f0,param_7);
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x20))();
        }
        puVar8 = local_f0;
        if (local_f0 != (undefined8 *)0x0) {
          psVar3 = (short *)(local_f0 + 3);
          do {
            sVar5 = *psVar3;
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar15) {
              *psVar3 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            piVar2 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar7 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar15) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_c0 = (long *)*puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_c0);
            }
          }
          else if (sVar5 == 0) goto LAB_023dd2c8;
        }
      }
      if (!bVar14) {
        *plVar12 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
      }
    }
    FUN_00f08b20(&local_80);
    *(undefined8 *)(param_2 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
    goto LAB_023dd1d0;
  }
  local_80 = (long *)0x0;
  local_78 = '\0';
  if (local_68 == '\0') {
    local_70 = (long *)0x0;
  }
  else {
    do {
      lVar10 = *local_70;
      lVar17 = local_70[1];
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar14) {
        *local_70 = lVar10;
        local_70[1] = lVar17;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar16 = *local_70;
      lVar4 = local_70[1];
      if (lVar16 != lVar10 || lVar4 != lVar17) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_023dd140;
      }
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar14) {
        *local_70 = lVar10;
        *(long *)((long)local_70 + 4) = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar14 = true;
LAB_023dd140:
    if (!bVar14) {
      do {
        lVar10 = *local_70;
        lVar17 = local_70[1];
        if (lVar10 != lVar16 || lVar17 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x023dd404;
        }
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(local_70,0x10);
        if (bVar14) {
          *local_70 = lVar16;
          *(long *)((long)local_70 + 4) = lVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar14 = true;
joined_r0x023dd404:
      if (!bVar14) {
        do {
          lVar16 = *local_70;
          lVar4 = local_70[1];
          if (lVar16 != lVar10 || lVar4 != lVar17) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar10 = lVar16;
            lVar17 = lVar4;
            goto joined_r0x023dd404;
          }
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(local_70,0x10);
          if (bVar14) {
            *local_70 = lVar10;
            *(long *)((long)local_70 + 4) = lVar17 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar14 = true;
        lVar10 = lVar16;
        lVar17 = lVar4;
        goto joined_r0x023dd404;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(local_70 + 2));
    local_70 = local_80;
    local_68 = local_78;
  }
  local_80 = (long *)0x0;
  local_78 = 0;
  FUN_00f08b20(&local_80);
  uVar11 = *param_3;
  uVar6 = param_3[1];
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_00c96b7c(&local_b0,param_6);
  local_a0 = *(undefined8 *)(param_6 + 0x10);
  uStack_98 = *(undefined8 *)(param_6 + 0x18);
  local_90 = *(undefined8 *)(param_6 + 0x20);
  local_88 = *(long **)(param_6 + 0x28);
  *(undefined8 *)(param_6 + 0x28) = 0;
  FUN_023ddcb4(param_1,param_2,uVar11,uVar6,param_4,param_5,&local_b0,param_7);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  plVar12 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar13 = local_b0 + 3;
    do {
      sVar5 = (short)*plVar13;
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar14) {
        *(short *)plVar13 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_80 = (long *)*plVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_80);
      }
    }
    else if (sVar5 == 0) {
LAB_023dd2c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_023dd1d0:
  FUN_00f08b20(&local_70);
  return;
code_r0x023dd264:
  cVar7 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar14) {
    *plVar12 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_023dd26c;
  goto LAB_023dd25c;
}


