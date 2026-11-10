/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023dc668; name: FUN_023dc668
 */


void FUN_023dc668(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  
  plVar18 = (long *)(param_2 + 0x530);
  local_78 = '\x01';
  local_80 = plVar18;
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar17 = *plVar18;
    lVar13 = *(long *)(param_2 + 0x538);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar11) {
      *plVar18 = lVar17;
      *(long *)(param_2 + 0x538) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    while ((lVar17 != 0 && (lVar8 != lVar17))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar17 = *plVar18;
        lVar13 = *(long *)(param_2 + 0x538);
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar11) {
          *plVar18 = lVar17;
          *(long *)(param_2 + 0x538) = lVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      lVar3 = *plVar18;
      if (lVar3 != lVar17 || *(long *)(param_2 + 0x538) != lVar13) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_023dc708;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar17;
        *(long *)(param_2 + 0x534) = lVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
LAB_023dc708:
    lVar17 = lVar3;
    lVar13 = *(long *)(param_2 + 0x538);
  } while (!bVar11);
  if (*(char *)(param_2 + 0x550) != '\0') {
    local_90 = (long *)0x0;
    local_88 = '\0';
    if (local_78 == '\0') {
      local_80 = (long *)0x0;
    }
    else {
      do {
        lVar8 = *local_80;
        lVar17 = local_80[1];
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar11) {
          *local_80 = lVar8;
          local_80[1] = lVar17;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar13 = *local_80;
        lVar3 = local_80[1];
        if (lVar13 != lVar8 || lVar3 != lVar17) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto LAB_023dc8dc;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar11) {
          *local_80 = lVar8;
          *(long *)((long)local_80 + 4) = lVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
LAB_023dc8dc:
      if (!bVar11) {
        do {
          lVar8 = *local_80;
          lVar17 = local_80[1];
          if (lVar8 != lVar13 || lVar17 != lVar3) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto joined_r0x023dcd48;
          }
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar11) {
            *local_80 = lVar13;
            *(long *)((long)local_80 + 4) = lVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar11 = true;
joined_r0x023dcd48:
        if (!bVar11) {
          do {
            lVar13 = *local_80;
            lVar3 = local_80[1];
            if (lVar13 != lVar8 || lVar3 != lVar17) {
              bVar11 = false;
              ClearExclusiveLocal();
              lVar8 = lVar13;
              lVar17 = lVar3;
              goto joined_r0x023dcd48;
            }
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar11) {
              *local_80 = lVar8;
              *(long *)((long)local_80 + 4) = lVar17 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar11 = true;
          lVar8 = lVar13;
          lVar17 = lVar3;
          goto joined_r0x023dcd48;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
      local_80 = local_90;
      local_78 = local_88;
    }
    local_90 = (long *)0x0;
    local_88 = 0;
    FUN_00f08b20(&local_90);
    uVar9 = *param_3;
    uVar5 = param_3[1];
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    FUN_00c96b7c(&local_c0,param_6);
    local_b0 = *(undefined8 *)(param_6 + 0x10);
    uStack_a8 = *(undefined8 *)(param_6 + 0x18);
    local_a0 = *(undefined8 *)(param_6 + 0x20);
    local_98 = *(long **)(param_6 + 0x28);
    *(undefined8 *)(param_6 + 0x28) = 0;
    FUN_023dd6fc(param_1,param_2,uVar9,uVar5,param_4,param_5,&local_c0,param_7);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    plVar18 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar10 = local_c0 + 3;
      do {
        sVar4 = (short)*plVar10;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar11) {
          *(short *)plVar10 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_90 = (long *)*plVar18;
          FUN_00c44438(lVar8 + 0x8040,&local_90);
        }
      }
      else if (sVar4 == 0) {
LAB_023dca40:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_023dc96c:
    FUN_00f08b20(&local_80);
    return;
  }
  plVar18 = (long *)(param_2 + 0x60);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar18 == 0) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar11) {
      *plVar18 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_023dc780;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar18 == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_023dc780;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar11) {
      *plVar18 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_023dc780:
  plVar18 = (long *)(param_2 + 0x2f0);
  lVar17 = *plVar18;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar17) {
    lVar8 = nn::os::GetCurrentThread();
LAB_023dc79c:
    if (*plVar18 == 0) goto code_r0x023dc7a4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar18 == 0) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar11) {
              *plVar18 = lVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_023dc7ac;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_023dc7ac:
    bVar11 = false;
    goto LAB_023dc7b0;
  }
  plVar18 = (long *)0x0;
  bVar11 = true;
LAB_023dc7b0:
  plVar10 = *(long **)(param_2 + 0x308);
  lVar8 = *(long *)(param_2 + 0x340);
  if ((lVar8 == 0) || (*plVar10 == param_5)) {
    plVar14 = plVar10;
LAB_023dc7f0:
    if (plVar14 == plVar10 + lVar8 * 8) goto LAB_023dc898;
    uVar9 = FUN_023ddadc(param_1,plVar14[4],param_6,param_7);
    plVar10 = (long *)(param_2 + 0x290);
    local_88 = 1;
    local_90 = plVar10;
    lVar8 = nn::os::GetCurrentThread();
    do {
      lVar17 = *plVar10;
      lVar13 = *(long *)(param_2 + 0x298);
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar12) {
        *plVar10 = lVar17;
        *(long *)(param_2 + 0x298) = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar17 != 0 && (lVar8 != lVar17))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar17 = *plVar10;
          lVar13 = *(long *)(param_2 + 0x298);
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar12) {
            *plVar10 = lVar17;
            *(long *)(param_2 + 0x298) = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar3 = *plVar10;
        if (lVar3 != lVar17 || *(long *)(param_2 + 0x298) != lVar13) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_023dc874;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *plVar10 = lVar17;
          *(long *)(param_2 + 0x294) = lVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
LAB_023dc874:
      lVar17 = lVar3;
      lVar13 = *(long *)(param_2 + 0x298);
    } while (!bVar12);
    FUN_023ddbe0(param_3,uVar9);
    FUN_00f08b20(&local_90);
    goto LAB_023dcb68;
  }
  lVar17 = lVar8 * 0x40;
  plVar15 = plVar10;
  while (lVar17 = lVar17 + -0x40, lVar17 != 0) {
    plVar16 = plVar15 + 8;
    plVar14 = plVar15 + 8;
    plVar15 = plVar15 + 8;
    if (*plVar16 == param_5) goto LAB_023dc7f0;
  }
LAB_023dc898:
  plVar10 = (long *)(param_2 + 0x730);
  lVar17 = *plVar10;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar17) {
    lVar8 = nn::os::GetCurrentThread();
LAB_023dc8b8:
    if (*plVar10 == 0) goto code_r0x023dc8c0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar10 == 0) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar12) {
              *plVar10 = lVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_023dcab4;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar12) {
        *plVar10 = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_023dcab4:
    bVar12 = false;
    goto LAB_023dcac0;
  }
  plVar10 = (long *)0x0;
  bVar12 = true;
LAB_023dcac0:
  plVar14 = *(long **)(param_2 + 0x748);
  lVar8 = *(long *)(param_2 + 0x780);
  if ((lVar8 == 0) || (*plVar14 == param_5)) {
    plVar15 = plVar14;
LAB_023dcb00:
    if (plVar15 != plVar14 + lVar8 * 2) {
      lVar8 = plVar15[1];
      if (!bVar12) {
        *plVar10 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
      }
      if (lVar8 == 0) goto LAB_023dcb68;
      local_90 = (long *)0x0;
      local_88 = '\0';
      if (local_78 == '\0') {
        local_80 = (long *)0x0;
      }
      else {
        do {
          lVar8 = *local_80;
          lVar17 = local_80[1];
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar12) {
            *local_80 = lVar8;
            local_80[1] = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          lVar13 = *local_80;
          lVar3 = local_80[1];
          if (lVar13 != lVar8 || lVar3 != lVar17) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto LAB_023dcba4;
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar12) {
            *local_80 = lVar8;
            *(long *)((long)local_80 + 4) = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar12 = true;
LAB_023dcba4:
        if (!bVar12) {
          do {
            lVar8 = *local_80;
            lVar17 = local_80[1];
            if (lVar8 != lVar13 || lVar17 != lVar3) {
              bVar12 = false;
              ClearExclusiveLocal();
              goto joined_r0x023dce3c;
            }
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar12) {
              *local_80 = lVar13;
              *(long *)((long)local_80 + 4) = lVar3 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar12 = true;
joined_r0x023dce3c:
          if (!bVar12) {
            do {
              lVar13 = *local_80;
              lVar3 = local_80[1];
              if (lVar13 != lVar8 || lVar3 != lVar17) {
                bVar12 = false;
                ClearExclusiveLocal();
                lVar8 = lVar13;
                lVar17 = lVar3;
                goto joined_r0x023dce3c;
              }
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar12) {
                *local_80 = lVar8;
                *(long *)((long)local_80 + 4) = lVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar12 = true;
            lVar8 = lVar13;
            lVar17 = lVar3;
            goto joined_r0x023dce3c;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
        local_80 = local_90;
        local_78 = local_88;
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_00f08b20(&local_90);
      uVar9 = *param_3;
      uVar5 = param_3[1];
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      FUN_00c96b7c(&local_f0,param_6);
      local_e0 = *(undefined8 *)(param_6 + 0x10);
      uStack_d8 = *(undefined8 *)(param_6 + 0x18);
      local_d0 = *(undefined8 *)(param_6 + 0x20);
      local_c8 = *(long **)(param_6 + 0x28);
      *(undefined8 *)(param_6 + 0x28) = 0;
      FUN_023dd6fc(param_1,param_2,uVar9,uVar5,param_4,param_5,&local_f0,param_7);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      plVar10 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar14 = local_f0 + 3;
        do {
          sVar4 = (short)*plVar14;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar12) {
            *(short *)plVar14 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_90 = (long *)*plVar10;
            FUN_00c44438(lVar8 + 0x8040,&local_90);
          }
        }
        else if (sVar4 == 0) goto LAB_023dca40;
      }
      goto LAB_023dcb68;
    }
  }
  else {
    lVar17 = lVar8 * 0x10;
    plVar16 = plVar14;
    while (lVar17 = lVar17 + -0x10, lVar17 != 0) {
      plVar1 = plVar16 + 2;
      plVar15 = plVar16 + 2;
      plVar16 = plVar16 + 2;
      if (*plVar1 == param_5) goto LAB_023dcb00;
    }
  }
  if (!bVar12) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
LAB_023dcb68:
  if (!bVar11) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  goto LAB_023dc96c;
code_r0x023dc7a4:
  cVar6 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar11) {
    *plVar18 = lVar8;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_023dc7ac;
  goto LAB_023dc79c;
code_r0x023dc8c0:
  cVar6 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar12) {
    *plVar10 = lVar8;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto code_r0x023dc8c8;
  goto LAB_023dc8b8;
code_r0x023dc8c8:
  bVar12 = false;
  goto LAB_023dcac0;
}


