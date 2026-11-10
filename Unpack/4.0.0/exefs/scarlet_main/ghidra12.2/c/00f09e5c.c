/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f09e5c; name: FUN_00f09e5c
 */


void FUN_00f09e5c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  bool bVar22;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  plVar20 = (long *)(param_2 + 0x530);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar17 = *plVar20;
    lVar21 = *(long *)(param_2 + 0x538);
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar22) {
      *plVar20 = lVar17;
      *(long *)(param_2 + 0x538) = lVar21;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar17 != 0 && (lVar11 != lVar17))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar17 = *plVar20;
        lVar21 = *(long *)(param_2 + 0x538);
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar22) {
          *plVar20 = lVar17;
          *(long *)(param_2 + 0x538) = lVar21;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    while( true ) {
      if (*plVar20 != lVar17 || *(long *)(param_2 + 0x538) != lVar21) break;
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar22) {
        *plVar20 = lVar17;
        *(long *)(param_2 + 0x534) = lVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_00f09f28;
        plVar3 = (long *)(param_2 + 0x60);
        lVar11 = nn::os::GetCurrentThread();
        goto LAB_00f09f70;
      }
    }
    ClearExclusiveLocal();
    lVar17 = *plVar20;
    lVar21 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_00f09f28:
  do {
    lVar11 = *plVar20;
    lVar17 = *(long *)(param_2 + 0x538);
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar22) {
      *plVar20 = lVar11;
      *(long *)(param_2 + 0x538) = lVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  while( true ) {
    lVar21 = *plVar20;
    lVar15 = *(long *)(param_2 + 0x538);
    if (lVar21 != lVar11 || lVar15 != lVar17) break;
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar22) {
      *plVar20 = lVar11;
      *(long *)(param_2 + 0x534) = lVar17 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00f0a150;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar20;
      if (lVar11 != lVar21 || *(long *)(param_2 + 0x538) != lVar15) {
        bVar22 = false;
        ClearExclusiveLocal();
        goto LAB_00f0a144;
      }
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar22) {
        *plVar20 = lVar21;
        *(long *)(param_2 + 0x534) = lVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar22 = true;
LAB_00f0a144:
    lVar21 = lVar11;
    lVar15 = *(long *)(param_2 + 0x538);
  } while (!bVar22);
LAB_00f0a150:
  nn::os::SignalLightEvent(pLVar2);
  uVar12 = *param_3;
  uVar7 = param_3[1];
  local_88 = *param_6;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  FUN_00fd9730(&local_80,param_6 + 1);
  FUN_0187b4a8(param_1,PTR_DAT_047dbe58,param_2,uVar12,uVar7,param_4,param_5,&local_88,param_7);
  puVar9 = local_80;
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  psVar4 = (short *)(local_80 + 3);
  do {
    sVar6 = *psVar4;
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(psVar4,0x10);
    if (bVar22) {
      *psVar4 = sVar6 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar6 == 1) {
    piVar5 = (int *)((long)local_80 + 0x1c);
    do {
      iVar10 = *piVar5;
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar22) {
        *piVar5 = -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar11 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar11;
    local_68 = *puVar9;
    FUN_00c44438(lVar11 + 0x8040,&local_68);
    return;
  }
  if (sVar6 != 0) {
    return;
  }
  goto LAB_00f0a1cc;
  while( true ) {
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar22) {
      *plVar3 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') break;
LAB_00f09f70:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar22) {
            *plVar3 = lVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00f09f80;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00f09f80:
  plVar3 = (long *)(param_2 + 0x290);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar17 = *plVar3;
    lVar21 = *(long *)(param_2 + 0x298);
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar22) {
      *plVar3 = lVar17;
      *(long *)(param_2 + 0x298) = lVar21;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    while ((lVar17 != 0 && (lVar11 != lVar17))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
      do {
        lVar17 = *plVar3;
        lVar21 = *(long *)(param_2 + 0x298);
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar22) {
          *plVar3 = lVar17;
          *(long *)(param_2 + 0x298) = lVar21;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    while( true ) {
      if (*plVar3 != lVar17 || *(long *)(param_2 + 0x298) != lVar21) break;
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar22) {
        *plVar3 = lVar17;
        *(long *)(param_2 + 0x294) = lVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        plVar13 = *(long **)(param_2 + 0x2b0);
        lVar11 = *(long *)(param_2 + 0x2e8);
        if ((lVar11 != 0) && (*plVar13 != param_5)) {
          lVar17 = lVar11 * 0x20;
          plVar18 = plVar13;
          goto LAB_00f0a028;
        }
        plVar14 = plVar13;
        goto LAB_00f0a044;
      }
    }
    ClearExclusiveLocal();
    lVar17 = *plVar3;
    lVar21 = *(long *)(param_2 + 0x298);
  } while( true );
  while (plVar19 = plVar18 + 4, plVar14 = plVar18 + 4, plVar18 = plVar18 + 4, *plVar19 != param_5) {
LAB_00f0a028:
    lVar17 = lVar17 + -0x20;
    if (lVar17 == 0) goto LAB_00f0a220;
  }
LAB_00f0a044:
  if (plVar14 == plVar13 + lVar11 * 4) {
LAB_00f0a220:
    plVar13 = (long *)(param_2 + 0x948);
    lVar17 = *plVar13;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar17) {
      plVar13 = (long *)0x0;
      bVar22 = true;
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
            while (*plVar13 == 0) {
              cVar8 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar22) {
                *plVar13 = lVar11;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_00f0a2ec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar22) {
          *plVar13 = lVar11;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_00f0a2ec:
      bVar22 = false;
    }
    plVar14 = *(long **)(param_2 + 0x960);
    lVar11 = *(long *)(param_2 + 0x998);
    if ((lVar11 == 0) || (*plVar14 == param_5)) {
      plVar18 = plVar14;
    }
    else {
      lVar17 = lVar11 * 0x10;
      plVar19 = plVar14;
      do {
        lVar17 = lVar17 + -0x10;
        if (lVar17 == 0) goto LAB_00f0a3b4;
        plVar18 = plVar19 + 2;
        plVar1 = plVar19 + 2;
        plVar19 = plVar18;
      } while (*plVar1 != param_5);
    }
    if (plVar18 == plVar14 + lVar11 * 2) {
LAB_00f0a3b4:
      do {
        lVar11 = *plVar20;
        lVar17 = *(long *)(param_2 + 0x538);
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar16) {
          *plVar20 = lVar11;
          *(long *)(param_2 + 0x538) = lVar17;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        lVar21 = *plVar20;
        lVar15 = *(long *)(param_2 + 0x538);
        if (lVar21 != lVar11 || lVar15 != lVar17) {
          bVar16 = false;
          ClearExclusiveLocal();
          goto joined_r0x00f0a3f8;
        }
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar16) {
          *plVar20 = lVar11;
          *(long *)(param_2 + 0x534) = lVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar16 = true;
joined_r0x00f0a3f8:
      if (!bVar16) {
        do {
          lVar11 = *plVar20;
          lVar17 = *(long *)(param_2 + 0x538);
          if (lVar11 != lVar21 || lVar17 != lVar15) {
            bVar16 = false;
            ClearExclusiveLocal();
            lVar21 = lVar11;
            lVar15 = lVar17;
            goto joined_r0x00f0a3f8;
          }
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar16) {
            *plVar20 = lVar21;
            *(long *)(param_2 + 0x534) = lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar16 = true;
        lVar21 = lVar11;
        lVar15 = lVar17;
        goto joined_r0x00f0a3f8;
      }
      nn::os::SignalLightEvent(pLVar2);
      uVar12 = *param_3;
      uVar7 = param_3[1];
      local_a0 = *param_6;
      local_90 = 0;
      local_98 = (undefined8 *)0x0;
      FUN_00fd9730(&local_98,param_6 + 1);
      FUN_0187b4a8(param_1,PTR_DAT_047dbe58,param_2,uVar12,uVar7,param_4,param_5,&local_a0,param_7);
      puVar9 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        psVar4 = (short *)(local_98 + 3);
        do {
          sVar6 = *psVar4;
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar16) {
            *psVar4 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          piVar5 = (int *)((long)local_98 + 0x1c);
          do {
            iVar10 = *piVar5;
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar16) {
              *piVar5 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_68 = *puVar9;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar6 == 0) {
LAB_00f0a1cc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      plVar20 = (long *)0x0;
      bVar16 = false;
    }
    else {
      bVar16 = true;
      *(undefined1 *)(plVar18 + 1) = 1;
    }
    if (!bVar22) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
  }
  else {
    lVar17 = *(long *)(*(long *)(param_2 + 0x348) + plVar14[3] * 0x130 + 0x110);
    plVar13 = (long *)(lVar17 + 0x30);
    lVar21 = *plVar13;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar21) {
      uVar12 = FUN_01ff4dd0(param_1,lVar17,param_6,param_7);
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x38));
            while (*plVar13 == 0) {
              cVar8 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar22) {
                *plVar13 = lVar11;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_00f0a094;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar22) {
          *plVar13 = lVar11;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_00f0a094:
      uVar12 = FUN_00e93240(param_1,lVar17,param_6,param_7);
      *(undefined8 *)(lVar17 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x38));
    }
    plVar13 = (long *)*param_3;
    lVar17 = *plVar13;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar17) {
      *(undefined8 *)(plVar13[3] + param_3[1] * 8) = uVar12;
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar13 + 1));
            while (*plVar13 == 0) {
              cVar8 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar22) {
                *plVar13 = lVar11;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_00f0a0e8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar22) {
          *plVar13 = lVar11;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_00f0a0e8:
      *(undefined8 *)(plVar13[3] + param_3[1] * 8) = uVar12;
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
    bVar16 = true;
  }
  do {
    lVar11 = *plVar3;
    lVar17 = *(long *)(param_2 + 0x298);
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar22) {
      *plVar3 = lVar11;
      *(long *)(param_2 + 0x298) = lVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  while( true ) {
    lVar21 = *plVar3;
    lVar15 = *(long *)(param_2 + 0x298);
    if (lVar21 != lVar11 || lVar15 != lVar17) break;
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar22) {
      *plVar3 = lVar11;
      *(long *)(param_2 + 0x294) = lVar17 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00f0a558;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar3;
      if (lVar11 != lVar21 || *(long *)(param_2 + 0x298) != lVar15) {
        bVar22 = false;
        ClearExclusiveLocal();
        goto LAB_00f0a54c;
      }
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar22) {
        *plVar3 = lVar21;
        *(long *)(param_2 + 0x294) = lVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar22 = true;
LAB_00f0a54c:
    lVar21 = lVar11;
    lVar15 = *(long *)(param_2 + 0x298);
  } while (!bVar22);
LAB_00f0a558:
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (!bVar16) {
    return;
  }
  do {
    lVar11 = *plVar20;
    lVar17 = plVar20[1];
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar22) {
      *plVar20 = lVar11;
      plVar20[1] = lVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  while( true ) {
    lVar21 = *plVar20;
    lVar15 = plVar20[1];
    if (lVar21 != lVar11 || lVar15 != lVar17) break;
    cVar8 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar22) {
      *plVar20 = lVar11;
      *(long *)((long)plVar20 + 4) = lVar17 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00f0a5f4;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar20;
      if (lVar11 != lVar21 || plVar20[1] != lVar15) {
        bVar22 = false;
        ClearExclusiveLocal();
        goto LAB_00f0a5e8;
      }
      cVar8 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar22) {
        *plVar20 = lVar21;
        *(long *)((long)plVar20 + 4) = lVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar22 = true;
LAB_00f0a5e8:
    lVar21 = lVar11;
    lVar15 = plVar20[1];
  } while (!bVar22);
LAB_00f0a5f4:
  nn::os::SignalLightEvent((LightEventType *)(plVar20 + 2));
  return;
}


