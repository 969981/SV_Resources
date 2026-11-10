/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fd7b9c; name: FUN_00fd7b9c
 */


void FUN_00fd7b9c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  long lVar6;
  short sVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  plVar21 = (long *)(param_2 + 0x530);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar21;
    lVar22 = *(long *)(param_2 + 0x538);
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar14) {
      *plVar21 = lVar18;
      *(long *)(param_2 + 0x538) = lVar22;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
LAB_00fd7bf8:
  while ((lVar18 != 0 && (lVar12 != lVar18))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar18 = *plVar21;
      lVar22 = *(long *)(param_2 + 0x538);
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar14) {
        *plVar21 = lVar18;
        *(long *)(param_2 + 0x538) = lVar22;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  do {
    lVar6 = *plVar21;
    if (lVar6 != lVar18 || *(long *)(param_2 + 0x538) != lVar22) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_00fd7c28;
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar14) {
      *plVar21 = lVar18;
      *(long *)(param_2 + 0x534) = lVar22 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar14 = true;
LAB_00fd7c28:
  if (!bVar14) {
    lVar18 = lVar6;
    lVar22 = *(long *)(param_2 + 0x538);
    goto LAB_00fd7bf8;
  }
  if (*(char *)(param_2 + 0x550) != '\0') {
    do {
      lVar12 = *plVar21;
      lVar18 = *(long *)(param_2 + 0x538);
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar14) {
        *plVar21 = lVar12;
        *(long *)(param_2 + 0x538) = lVar18;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      lVar22 = *plVar21;
      lVar6 = *(long *)(param_2 + 0x538);
      if (lVar22 != lVar12 || lVar6 != lVar18) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fd82e8;
      }
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar14) {
        *plVar21 = lVar12;
        *(long *)(param_2 + 0x534) = lVar18 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar14 = true;
joined_r0x00fd82e8:
    if (!bVar14) {
      do {
        lVar12 = *plVar21;
        lVar18 = *(long *)(param_2 + 0x538);
        if (lVar12 != lVar22 || lVar18 != lVar6) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar22 = lVar12;
          lVar6 = lVar18;
          goto joined_r0x00fd82e8;
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar14) {
          *plVar21 = lVar22;
          *(long *)(param_2 + 0x534) = lVar6 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar14 = true;
      lVar22 = lVar12;
      lVar6 = lVar18;
      goto joined_r0x00fd82e8;
    }
    nn::os::SignalLightEvent(pLVar2);
    uVar13 = *param_3;
    uVar8 = param_3[1];
    local_88 = *param_6;
    local_78 = 0;
    local_80 = (undefined8 *)0x0;
    FUN_00fd9730(&local_80,param_6 + 1);
    FUN_00fd9c68(param_1,PTR_DAT_047dc2d8,param_2,uVar13,uVar8,param_4,param_5,&local_88,param_7);
    puVar10 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar4 = (short *)(local_80 + 3);
      do {
        sVar7 = *psVar4;
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar14) {
          *psVar4 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar5 = (int *)((long)local_80 + 0x1c);
        do {
          iVar11 = *piVar5;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar14) {
            *piVar5 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_68 = *puVar10;
          FUN_00c44438(lVar12 + 0x8040,&local_68);
        }
      }
      else if (sVar7 == 0) {
LAB_00fd83a8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
  plVar3 = (long *)(param_2 + 0x60);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar14) {
      *plVar3 = lVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_00fd7c7c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar3 == 0) {
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar14) {
            *plVar3 = lVar12;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00fd7c7c;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar14) {
      *plVar3 = lVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00fd7c7c:
  plVar3 = (long *)(param_2 + 0x290);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar3;
    lVar22 = *(long *)(param_2 + 0x298);
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar14) {
      *plVar3 = lVar18;
      *(long *)(param_2 + 0x298) = lVar22;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00fd7c9c:
  while ((lVar18 != 0 && (lVar12 != lVar18))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
    do {
      lVar18 = *plVar3;
      lVar22 = *(long *)(param_2 + 0x298);
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar14) {
        *plVar3 = lVar18;
        *(long *)(param_2 + 0x298) = lVar22;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  do {
    lVar6 = *plVar3;
    if (lVar6 != lVar18 || *(long *)(param_2 + 0x298) != lVar22) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_00fd7ccc;
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar14) {
      *plVar3 = lVar18;
      *(long *)(param_2 + 0x294) = lVar22 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar14 = true;
LAB_00fd7ccc:
  if (!bVar14) {
    lVar18 = lVar6;
    lVar22 = *(long *)(param_2 + 0x298);
    goto LAB_00fd7c9c;
  }
  plVar15 = *(long **)(param_2 + 0x2b0);
  lVar12 = *(long *)(param_2 + 0x2e8);
  if ((lVar12 == 0) || (*plVar15 == param_5)) {
    plVar16 = plVar15;
LAB_00fd7d38:
    if (plVar16 == plVar15 + lVar12 * 4) goto LAB_00fd8004;
    lVar18 = *(long *)(*(long *)(param_2 + 0x348) + plVar16[3] * 0x130 + 0x120);
    plVar15 = (long *)(lVar18 + 0x30);
    lVar22 = *plVar15;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar22) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00fd7d74:
      if (*plVar15 == 0) goto code_r0x00fd7d7c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x38));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x38));
            while (*plVar15 == 0) {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = lVar12;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00fd7d84;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *plVar15 = lVar12;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00fd7d84:
      uVar13 = FUN_00fd84c4(param_1,lVar18,param_6,param_7);
      *(undefined8 *)(lVar18 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x38));
      goto LAB_00fd7dac;
    }
    uVar13 = FUN_00fdbbd0(param_1,lVar18,param_6,param_7);
LAB_00fd7dac:
    plVar15 = (long *)*param_3;
    lVar18 = *plVar15;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar18) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00fd7dcc:
      if (*plVar15 == 0) goto code_r0x00fd7dd4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar15 + 1));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar15 + 1));
            while (*plVar15 == 0) {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = lVar12;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00fd7ddc;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *plVar15 = lVar12;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00fd7ddc:
      *(undefined8 *)(plVar15[3] + param_3[1] * 8) = uVar13;
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
      goto LAB_00fd7df4;
    }
    *(undefined8 *)(plVar15[3] + param_3[1] * 8) = uVar13;
LAB_00fd7df4:
    bVar14 = true;
  }
  else {
    lVar18 = lVar12 * 0x20;
    plVar19 = plVar15;
    while (lVar18 = lVar18 + -0x20, lVar18 != 0) {
      plVar20 = plVar19 + 4;
      plVar16 = plVar19 + 4;
      plVar19 = plVar19 + 4;
      if (*plVar20 == param_5) goto LAB_00fd7d38;
    }
LAB_00fd8004:
    plVar15 = (long *)(param_2 + 0x948);
    lVar18 = *plVar15;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar18) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00fd8020:
      if (*plVar15 == 0) goto code_r0x00fd8028;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
            while (*plVar15 == 0) {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = lVar12;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_00fd8084;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *plVar15 = lVar12;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_00fd8084:
      bVar17 = false;
      goto LAB_00fd8088;
    }
    plVar15 = (long *)0x0;
    bVar17 = true;
LAB_00fd8088:
    plVar16 = *(long **)(param_2 + 0x960);
    lVar12 = *(long *)(param_2 + 0x998);
    if ((lVar12 == 0) || (*plVar16 == param_5)) {
      plVar19 = plVar16;
LAB_00fd8098:
      if (plVar19 == plVar16 + lVar12 * 2) goto LAB_00fd80a4;
      bVar14 = true;
      *(undefined1 *)(plVar19 + 1) = 1;
    }
    else {
      lVar18 = lVar12 * 0x10;
      plVar20 = plVar16;
      while (lVar18 = lVar18 + -0x10, lVar18 != 0) {
        plVar19 = plVar20 + 2;
        plVar1 = plVar20 + 2;
        plVar20 = plVar19;
        if (*plVar1 == param_5) goto LAB_00fd8098;
      }
LAB_00fd80a4:
      do {
        lVar12 = *plVar21;
        lVar18 = *(long *)(param_2 + 0x538);
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar14) {
          *plVar21 = lVar12;
          *(long *)(param_2 + 0x538) = lVar18;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        lVar22 = *plVar21;
        lVar6 = *(long *)(param_2 + 0x538);
        if (lVar22 != lVar12 || lVar6 != lVar18) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x00fd80e8;
        }
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar14) {
          *plVar21 = lVar12;
          *(long *)(param_2 + 0x534) = lVar18 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar14 = true;
joined_r0x00fd80e8:
      if (!bVar14) {
        do {
          lVar12 = *plVar21;
          lVar18 = *(long *)(param_2 + 0x538);
          if (lVar12 != lVar22 || lVar18 != lVar6) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar22 = lVar12;
            lVar6 = lVar18;
            goto joined_r0x00fd80e8;
          }
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar14) {
            *plVar21 = lVar22;
            *(long *)(param_2 + 0x534) = lVar6 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar14 = true;
        lVar22 = lVar12;
        lVar6 = lVar18;
        goto joined_r0x00fd80e8;
      }
      nn::os::SignalLightEvent(pLVar2);
      uVar13 = *param_3;
      uVar8 = param_3[1];
      local_a0 = *param_6;
      local_90 = 0;
      local_98 = (undefined8 *)0x0;
      FUN_00fd9730(&local_98,param_6 + 1);
      FUN_00fd9c68(param_1,PTR_DAT_047dc2d8,param_2,uVar13,uVar8,param_4,param_5,&local_a0,param_7);
      puVar10 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        psVar4 = (short *)(local_98 + 3);
        do {
          sVar7 = *psVar4;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar14) {
            *psVar4 = sVar7 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar7 == 1) {
          piVar5 = (int *)((long)local_98 + 0x1c);
          do {
            iVar11 = *piVar5;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar14) {
              *piVar5 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_68 = *puVar10;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar7 == 0) goto LAB_00fd83a8;
      }
      plVar21 = (long *)0x0;
      bVar14 = false;
    }
    if (!bVar17) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
  }
  do {
    lVar12 = *plVar3;
    lVar18 = *(long *)(param_2 + 0x298);
    cVar9 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar17) {
      *plVar3 = lVar12;
      *(long *)(param_2 + 0x298) = lVar18;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar3;
    lVar6 = *(long *)(param_2 + 0x298);
    if (lVar22 != lVar12 || lVar6 != lVar18) {
      bVar17 = false;
      ClearExclusiveLocal();
      goto joined_r0x00fd7e28;
    }
    cVar9 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar17) {
      *plVar3 = lVar12;
      *(long *)(param_2 + 0x294) = lVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar17 = true;
joined_r0x00fd7e28:
  if (!bVar17) {
    do {
      lVar12 = *plVar3;
      lVar18 = *(long *)(param_2 + 0x298);
      if (lVar12 != lVar22 || lVar18 != lVar6) {
        bVar17 = false;
        ClearExclusiveLocal();
        lVar22 = lVar12;
        lVar6 = lVar18;
        goto joined_r0x00fd7e28;
      }
      cVar9 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar17) {
        *plVar3 = lVar22;
        *(long *)(param_2 + 0x294) = lVar6 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar17 = true;
    lVar22 = lVar12;
    lVar6 = lVar18;
    goto joined_r0x00fd7e28;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (!bVar14) {
    return;
  }
  do {
    lVar12 = *plVar21;
    lVar18 = plVar21[1];
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar14) {
      *plVar21 = lVar12;
      plVar21[1] = lVar18;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar21;
    lVar6 = plVar21[1];
    if (lVar22 != lVar12 || lVar6 != lVar18) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto joined_r0x00fd7eb4;
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar14) {
      *plVar21 = lVar12;
      *(long *)((long)plVar21 + 4) = lVar18 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar14 = true;
joined_r0x00fd7eb4:
  do {
    if (bVar14) {
      nn::os::SignalLightEvent((LightEventType *)(plVar21 + 2));
      return;
    }
    do {
      lVar12 = *plVar21;
      lVar18 = plVar21[1];
      if (lVar12 != lVar22 || lVar18 != lVar6) {
        bVar14 = false;
        ClearExclusiveLocal();
        lVar22 = lVar12;
        lVar6 = lVar18;
        goto joined_r0x00fd7eb4;
      }
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar14) {
        *plVar21 = lVar22;
        *(long *)((long)plVar21 + 4) = lVar6 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar14 = true;
    lVar22 = lVar12;
    lVar6 = lVar18;
  } while( true );
code_r0x00fd7d7c:
  cVar9 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar12;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00fd7d84;
  goto LAB_00fd7d74;
code_r0x00fd7dd4:
  cVar9 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar12;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00fd7ddc;
  goto LAB_00fd7dcc;
code_r0x00fd8028:
  cVar9 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar12;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_00fd8084;
  goto LAB_00fd8020;
}


