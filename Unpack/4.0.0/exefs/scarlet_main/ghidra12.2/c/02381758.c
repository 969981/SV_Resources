/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02381758; name: FUN_02381758
 */


void FUN_02381758(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  
  plVar19 = (long *)(param_2 + 0x530);
  local_78 = '\x01';
  local_80 = plVar19;
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar19;
    lVar14 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar12) {
      *plVar19 = lVar18;
      *(long *)(param_2 + 0x538) = lVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    while ((lVar18 != 0 && (lVar9 != lVar18))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar18 = *plVar19;
        lVar14 = *(long *)(param_2 + 0x538);
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar12) {
          *plVar19 = lVar18;
          *(long *)(param_2 + 0x538) = lVar14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    do {
      lVar4 = *plVar19;
      if (lVar4 != lVar18 || *(long *)(param_2 + 0x538) != lVar14) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_023817f8;
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = lVar18;
        *(long *)(param_2 + 0x534) = lVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar12 = true;
LAB_023817f8:
    lVar18 = lVar4;
    lVar14 = *(long *)(param_2 + 0x538);
  } while (!bVar12);
  if (*(char *)(param_2 + 0x550) != '\0') {
    local_90 = (long *)0x0;
    local_88 = '\0';
    if (local_78 == '\0') {
      local_80 = (long *)0x0;
    }
    else {
      do {
        lVar9 = *local_80;
        lVar18 = local_80[1];
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar12) {
          *local_80 = lVar9;
          local_80[1] = lVar18;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      do {
        lVar14 = *local_80;
        lVar4 = local_80[1];
        if (lVar14 != lVar9 || lVar4 != lVar18) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_023819cc;
        }
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar12) {
          *local_80 = lVar9;
          *(long *)((long)local_80 + 4) = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar12 = true;
LAB_023819cc:
      if (!bVar12) {
        do {
          lVar9 = *local_80;
          lVar18 = local_80[1];
          if (lVar9 != lVar14 || lVar18 != lVar4) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x02381e54;
          }
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar12) {
            *local_80 = lVar14;
            *(long *)((long)local_80 + 4) = lVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar12 = true;
joined_r0x02381e54:
        if (!bVar12) {
          do {
            lVar14 = *local_80;
            lVar4 = local_80[1];
            if (lVar14 != lVar9 || lVar4 != lVar18) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar9 = lVar14;
              lVar18 = lVar4;
              goto joined_r0x02381e54;
            }
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar12) {
              *local_80 = lVar9;
              *(long *)((long)local_80 + 4) = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar12 = true;
          lVar9 = lVar14;
          lVar18 = lVar4;
          goto joined_r0x02381e54;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
      local_80 = local_90;
      local_78 = local_88;
    }
    local_90 = (long *)0x0;
    local_88 = 0;
    FUN_00f08b20(&local_90);
    uVar10 = *param_3;
    uVar6 = param_3[1];
    local_a8 = (long *)0x0;
    uStack_a0 = 0;
    FUN_00d334b4(&local_a8,param_6);
    local_98 = *(long **)(param_6 + 0x10);
    *(undefined8 *)(param_6 + 0x10) = 0;
    FUN_0238289c(param_1,param_2,uVar10,uVar6,param_4,param_5,&local_a8,param_7);
    if (local_98 != (long *)0x0) {
      lVar9 = local_98[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar5 == 0) {
LAB_02381ff8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar19 = local_a8;
    if (local_a8 != (long *)0x0) {
      plVar11 = local_a8 + 3;
      do {
        sVar5 = (short)*plVar11;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar12) {
          *(short *)plVar11 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar12) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_90 = (long *)*plVar19;
          FUN_00c44438(lVar9 + 0x8040,&local_90);
        }
      }
      else if (sVar5 == 0) {
LAB_02381b44:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_02381a70:
    FUN_00f08b20(&local_80);
    return;
  }
  plVar19 = (long *)(param_2 + 0x60);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar12) {
      *plVar19 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_02381870;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar19 == 0) {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar12) {
            *plVar19 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_02381870;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar12) {
      *plVar19 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_02381870:
  plVar19 = (long *)(param_2 + 0x2f0);
  lVar18 = *plVar19;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar18) {
    lVar9 = nn::os::GetCurrentThread();
LAB_0238188c:
    if (*plVar19 == 0) goto code_r0x02381894;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar19 == 0) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar12) {
              *plVar19 = lVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_0238189c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_0238189c:
    bVar12 = false;
    goto LAB_023818a0;
  }
  plVar19 = (long *)0x0;
  bVar12 = true;
LAB_023818a0:
  plVar11 = *(long **)(param_2 + 0x308);
  lVar9 = *(long *)(param_2 + 0x340);
  if ((lVar9 == 0) || (*plVar11 == param_5)) {
    plVar15 = plVar11;
LAB_023818e0:
    if (plVar15 == plVar11 + lVar9 * 8) goto LAB_02381988;
    uVar10 = FUN_02382cbc(param_1,plVar15[4],param_6,param_7);
    plVar11 = (long *)(param_2 + 0x290);
    local_88 = 1;
    local_90 = plVar11;
    lVar9 = nn::os::GetCurrentThread();
    do {
      lVar18 = *plVar11;
      lVar14 = *(long *)(param_2 + 0x298);
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *plVar11 = lVar18;
        *(long *)(param_2 + 0x298) = lVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      while ((lVar18 != 0 && (lVar9 != lVar18))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar18 = *plVar11;
          lVar14 = *(long *)(param_2 + 0x298);
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar13) {
            *plVar11 = lVar18;
            *(long *)(param_2 + 0x298) = lVar14;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      do {
        lVar4 = *plVar11;
        if (lVar4 != lVar18 || *(long *)(param_2 + 0x298) != lVar14) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_02381964;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar13) {
          *plVar11 = lVar18;
          *(long *)(param_2 + 0x294) = lVar14 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
LAB_02381964:
      lVar18 = lVar4;
      lVar14 = *(long *)(param_2 + 0x298);
    } while (!bVar13);
    FUN_02382dc0(param_3,uVar10);
    FUN_00f08b20(&local_90);
    goto LAB_02381c6c;
  }
  lVar18 = lVar9 * 0x40;
  plVar16 = plVar11;
  while (lVar18 = lVar18 + -0x40, lVar18 != 0) {
    plVar17 = plVar16 + 8;
    plVar15 = plVar16 + 8;
    plVar16 = plVar16 + 8;
    if (*plVar17 == param_5) goto LAB_023818e0;
  }
LAB_02381988:
  plVar11 = (long *)(param_2 + 0x730);
  lVar18 = *plVar11;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar18) {
    lVar9 = nn::os::GetCurrentThread();
LAB_023819a8:
    if (*plVar11 == 0) goto code_r0x023819b0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar11 == 0) {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar13) {
              *plVar11 = lVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_02381bb8;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *plVar11 = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_02381bb8:
    bVar13 = false;
    goto LAB_02381bc4;
  }
  plVar11 = (long *)0x0;
  bVar13 = true;
LAB_02381bc4:
  plVar15 = *(long **)(param_2 + 0x748);
  lVar9 = *(long *)(param_2 + 0x780);
  if ((lVar9 == 0) || (*plVar15 == param_5)) {
    plVar16 = plVar15;
LAB_02381c04:
    if (plVar16 != plVar15 + lVar9 * 2) {
      lVar9 = plVar16[1];
      if (!bVar13) {
        *plVar11 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
      }
      if (lVar9 == 0) goto LAB_02381c6c;
      local_90 = (long *)0x0;
      local_88 = '\0';
      if (local_78 == '\0') {
        local_80 = (long *)0x0;
      }
      else {
        do {
          lVar9 = *local_80;
          lVar18 = local_80[1];
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar13) {
            *local_80 = lVar9;
            local_80[1] = lVar18;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar14 = *local_80;
          lVar4 = local_80[1];
          if (lVar14 != lVar9 || lVar4 != lVar18) {
            bVar13 = false;
            ClearExclusiveLocal();
            goto LAB_02381c98;
          }
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar13) {
            *local_80 = lVar9;
            *(long *)((long)local_80 + 4) = lVar18 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar13 = true;
LAB_02381c98:
        if (!bVar13) {
          do {
            lVar9 = *local_80;
            lVar18 = local_80[1];
            if (lVar9 != lVar14 || lVar18 != lVar4) {
              bVar13 = false;
              ClearExclusiveLocal();
              goto joined_r0x02381f5c;
            }
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar13) {
              *local_80 = lVar14;
              *(long *)((long)local_80 + 4) = lVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar13 = true;
joined_r0x02381f5c:
          if (!bVar13) {
            do {
              lVar14 = *local_80;
              lVar4 = local_80[1];
              if (lVar14 != lVar9 || lVar4 != lVar18) {
                bVar13 = false;
                ClearExclusiveLocal();
                lVar9 = lVar14;
                lVar18 = lVar4;
                goto joined_r0x02381f5c;
              }
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar13) {
                *local_80 = lVar9;
                *(long *)((long)local_80 + 4) = lVar18 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar13 = true;
            lVar9 = lVar14;
            lVar18 = lVar4;
            goto joined_r0x02381f5c;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
        local_80 = local_90;
        local_78 = local_88;
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_00f08b20(&local_90);
      uVar10 = *param_3;
      uVar6 = param_3[1];
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      FUN_00d334b4(&local_c0,param_6);
      local_b0 = *(long **)(param_6 + 0x10);
      *(undefined8 *)(param_6 + 0x10) = 0;
      FUN_0238289c(param_1,param_2,uVar10,uVar6,param_4,param_5,&local_c0,param_7);
      if (local_b0 != (long *)0x0) {
        lVar9 = local_b0[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar13) {
            *psVar2 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_b0 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_02381ff8;
      }
      plVar11 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar15 = local_c0 + 3;
        do {
          sVar5 = (short)*plVar15;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar13) {
            *(short *)plVar15 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_90 = (long *)*plVar11;
            FUN_00c44438(lVar9 + 0x8040,&local_90);
          }
        }
        else if (sVar5 == 0) goto LAB_02381b44;
      }
      goto LAB_02381c6c;
    }
  }
  else {
    lVar18 = lVar9 * 0x10;
    plVar17 = plVar15;
    while (lVar18 = lVar18 + -0x10, lVar18 != 0) {
      plVar1 = plVar17 + 2;
      plVar16 = plVar17 + 2;
      plVar17 = plVar17 + 2;
      if (*plVar1 == param_5) goto LAB_02381c04;
    }
  }
  if (!bVar13) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
LAB_02381c6c:
  if (!bVar12) {
    *plVar19 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  goto LAB_02381a70;
code_r0x02381894:
  cVar7 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar12) {
    *plVar19 = lVar9;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0238189c;
  goto LAB_0238188c;
code_r0x023819b0:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar13) {
    *plVar11 = lVar9;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto code_r0x023819b8;
  goto LAB_023819a8;
code_r0x023819b8:
  bVar13 = false;
  goto LAB_02381bc4;
}


