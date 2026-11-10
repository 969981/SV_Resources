/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fd9fe4; name: FUN_00fd9fe4
 */


void FUN_00fd9fe4(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  LightEventType *pLVar11;
  bool bVar12;
  bool bVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  plVar22 = (long *)(param_2 + 0x530);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar19 = *plVar22;
    lVar20 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar12) {
      *plVar22 = lVar19;
      *(long *)(param_2 + 0x538) = lVar20;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  pLVar11 = (LightEventType *)(param_2 + 0x540);
LAB_00fda040:
  while ((lVar19 != 0 && (lVar10 != lVar19))) {
    nn::os::WaitLightEvent(pLVar11);
    do {
      lVar19 = *plVar22;
      lVar20 = *(long *)(param_2 + 0x538);
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar19;
        *(long *)(param_2 + 0x538) = lVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  do {
    lVar3 = *plVar22;
    if (lVar3 != lVar19 || *(long *)(param_2 + 0x538) != lVar20) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00fda070;
    }
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar12) {
      *plVar22 = lVar19;
      *(long *)(param_2 + 0x534) = lVar20 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar12 = true;
LAB_00fda070:
  if (!bVar12) {
    lVar19 = lVar3;
    lVar20 = *(long *)(param_2 + 0x538);
    goto LAB_00fda040;
  }
  if (*(char *)(param_2 + 0x550) != '\0') {
    do {
      lVar10 = *plVar22;
      lVar19 = *(long *)(param_2 + 0x538);
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar10;
        *(long *)(param_2 + 0x538) = lVar19;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar20 = *plVar22;
      lVar3 = *(long *)(param_2 + 0x538);
      if (lVar20 != lVar10 || lVar3 != lVar19) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fda7c0;
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar10;
        *(long *)(param_2 + 0x534) = lVar19 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar12 = true;
joined_r0x00fda7c0:
    if (!bVar12) {
      do {
        lVar10 = *plVar22;
        lVar19 = *(long *)(param_2 + 0x538);
        if (lVar10 != lVar20 || lVar19 != lVar3) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar20 = lVar10;
          lVar3 = lVar19;
          goto joined_r0x00fda7c0;
        }
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar12) {
          *plVar22 = lVar20;
          *(long *)(param_2 + 0x534) = lVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar12 = true;
      lVar20 = lVar10;
      lVar3 = lVar19;
      goto joined_r0x00fda7c0;
    }
    nn::os::SignalLightEvent(pLVar11);
    uVar5 = *param_3;
    uVar6 = param_3[1];
    local_88 = *param_6;
    local_78 = 0;
    local_80 = (undefined8 *)0x0;
    FUN_00fd9730(&local_80,param_6 + 1);
    FUN_00fda9a0(param_1,PTR_DAT_047dc2d0,param_2,uVar5,uVar6,param_4,param_5,&local_88,param_7);
    puVar8 = local_80;
    if (local_80 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar10 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar10;
      local_68 = *puVar8;
      FUN_00c44438(lVar10 + 0x8040,&local_68);
      return;
    }
    if (sVar4 != 0) {
      return;
    }
LAB_00fda6dc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  plVar18 = (long *)(param_2 + 0x60);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar18 == 0) {
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar12) {
      *plVar18 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00fda0c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar18 == 0) {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *plVar18 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00fda0c4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar12) {
      *plVar18 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00fda0c4:
  plVar18 = (long *)(param_2 + 0x2f0);
  lVar19 = *plVar18;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar19) {
    lVar10 = nn::os::GetCurrentThread();
LAB_00fda0e0:
    if (*plVar18 == 0) goto code_r0x00fda0e8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar18 == 0) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar12) {
              *plVar18 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00fda0f0;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar12) {
        *plVar18 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00fda0f0:
    bVar12 = false;
    goto LAB_00fda0f4;
  }
  plVar18 = (long *)0x0;
  bVar12 = true;
LAB_00fda0f4:
  plVar14 = *(long **)(param_2 + 0x308);
  lVar10 = *(long *)(param_2 + 0x340);
  if ((lVar10 == 0) || (*plVar14 == param_5)) {
    plVar15 = plVar14;
LAB_00fda134:
    if (plVar15 == plVar14 + lVar10 * 8) goto LAB_00fda210;
    lVar19 = plVar15[4];
    plVar14 = (long *)(lVar19 + 0x30);
    lVar20 = *plVar14;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar20) {
      lVar10 = nn::os::GetCurrentThread();
LAB_00fda160:
      if (*plVar14 == 0) goto code_r0x00fda168;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
            while (*plVar14 == 0) {
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar13) {
                *plVar14 = lVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00fda170;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar13) {
          *plVar14 = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00fda170:
      local_a8 = FUN_00fd84c4(param_1,lVar19,param_6,param_7);
      *(undefined8 *)(lVar19 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x38));
      goto LAB_00fda198;
    }
    local_a8 = FUN_00fdbbd0(param_1,lVar19,param_6,param_7);
LAB_00fda198:
    plVar14 = (long *)(param_2 + 0x290);
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar19 = *plVar14;
      lVar20 = *(long *)(param_2 + 0x298);
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19;
        *(long *)(param_2 + 0x298) = lVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    pLVar11 = (LightEventType *)(param_2 + 0x2a0);
LAB_00fda1b4:
    while ((lVar19 != 0 && (lVar10 != lVar19))) {
      nn::os::WaitLightEvent(pLVar11);
      do {
        lVar19 = *plVar14;
        lVar20 = *(long *)(param_2 + 0x298);
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar13) {
          *plVar14 = lVar19;
          *(long *)(param_2 + 0x298) = lVar20;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    do {
      lVar3 = *plVar14;
      if (lVar3 != lVar19 || *(long *)(param_2 + 0x298) != lVar20) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_00fda1e4;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar19;
        *(long *)(param_2 + 0x294) = lVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
LAB_00fda1e4:
    if (!bVar13) {
      lVar19 = lVar3;
      lVar20 = *(long *)(param_2 + 0x298);
      goto LAB_00fda1b4;
    }
    plVar21 = (long *)*param_3;
    lVar19 = *plVar21;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar19) {
      lVar10 = nn::os::GetCurrentThread();
LAB_00fda3e0:
      if (*plVar21 == 0) goto code_r0x00fda3e8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar21 + 1));
      do {
        if (*plVar21 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar21 + 1));
            while (*plVar21 == 0) {
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar13) {
                *plVar21 = lVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00fda3f0;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar13) {
          *plVar21 = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00fda3f0:
      *(undefined8 *)(plVar21[3] + param_3[1] * 8) = local_a8;
      *plVar21 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
      goto LAB_00fda410;
    }
    *(undefined8 *)(plVar21[3] + param_3[1] * 8) = local_a8;
LAB_00fda410:
    do {
      lVar10 = *plVar14;
      lVar19 = *(long *)(param_2 + 0x298);
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar10;
        *(long *)(param_2 + 0x298) = lVar19;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar20 = *plVar14;
      lVar3 = *(long *)(param_2 + 0x298);
      if (lVar20 != lVar10 || lVar3 != lVar19) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fda440;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar10;
        *(long *)(param_2 + 0x294) = lVar19 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
joined_r0x00fda440:
    if (!bVar13) {
      do {
        lVar10 = *plVar14;
        lVar19 = *(long *)(param_2 + 0x298);
        if (lVar10 != lVar20 || lVar19 != lVar3) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar20 = lVar10;
          lVar3 = lVar19;
          goto joined_r0x00fda440;
        }
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar13) {
          *plVar14 = lVar20;
          *(long *)(param_2 + 0x294) = lVar3 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar13 = true;
      lVar20 = lVar10;
      lVar3 = lVar19;
      goto joined_r0x00fda440;
    }
LAB_00fda484:
    nn::os::SignalLightEvent(pLVar11);
LAB_00fda488:
    bVar13 = false;
    goto LAB_00fda48c;
  }
  lVar19 = lVar10 * 0x40;
  plVar21 = plVar14;
  while (lVar19 = lVar19 + -0x40, lVar19 != 0) {
    plVar17 = plVar21 + 8;
    plVar15 = plVar21 + 8;
    plVar21 = plVar21 + 8;
    if (*plVar17 == param_5) goto LAB_00fda134;
  }
LAB_00fda210:
  plVar14 = (long *)(param_2 + 0x730);
  lVar19 = *plVar14;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar19) {
    lVar10 = nn::os::GetCurrentThread();
LAB_00fda22c:
    if (*plVar14 == 0) goto code_r0x00fda234;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar14 == 0) {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar13) {
              *plVar14 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00fda318;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar13) {
        *plVar14 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00fda318:
    bVar13 = false;
    goto LAB_00fda328;
  }
  plVar14 = (long *)0x0;
  bVar13 = true;
LAB_00fda328:
  plVar21 = *(long **)(param_2 + 0x748);
  lVar10 = *(long *)(param_2 + 0x780);
  if ((lVar10 != 0) && (*plVar21 != param_5)) {
    lVar19 = lVar10 * 0x10;
    plVar17 = plVar21;
    while (lVar19 = lVar19 + -0x10, lVar19 != 0) {
      plVar15 = plVar17 + 2;
      plVar16 = plVar17 + 2;
      plVar17 = plVar17 + 2;
      if (*plVar15 == param_5) goto LAB_00fda368;
    }
LAB_00fda558:
    if (!bVar13) {
      pLVar11 = (LightEventType *)(plVar14 + 1);
      *plVar14 = 0;
      goto LAB_00fda484;
    }
    goto LAB_00fda488;
  }
  plVar16 = plVar21;
LAB_00fda368:
  if (plVar16 == plVar21 + lVar10 * 2) goto LAB_00fda558;
  lVar10 = plVar16[1];
  if (!bVar13) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  if (lVar10 == 0) goto LAB_00fda488;
  do {
    lVar10 = *plVar22;
    lVar19 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar13) {
      *plVar22 = lVar10;
      *(long *)(param_2 + 0x538) = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar20 = *plVar22;
    lVar3 = *(long *)(param_2 + 0x538);
    if (lVar20 != lVar10 || lVar3 != lVar19) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto joined_r0x00fda608;
    }
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar13) {
      *plVar22 = lVar10;
      *(long *)(param_2 + 0x534) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar13 = true;
joined_r0x00fda608:
  if (!bVar13) {
    do {
      lVar10 = *plVar22;
      lVar19 = *(long *)(param_2 + 0x538);
      if (lVar10 != lVar20 || lVar19 != lVar3) {
        bVar13 = false;
        ClearExclusiveLocal();
        lVar20 = lVar10;
        lVar3 = lVar19;
        goto joined_r0x00fda608;
      }
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar13) {
        *plVar22 = lVar20;
        *(long *)(param_2 + 0x534) = lVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar13 = true;
    lVar20 = lVar10;
    lVar3 = lVar19;
    goto joined_r0x00fda608;
  }
  nn::os::SignalLightEvent(pLVar11);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  local_a0 = *param_6;
  local_90 = 0;
  local_98 = (undefined8 *)0x0;
  FUN_00fd9730(&local_98,param_6 + 1);
  FUN_00fda9a0(param_1,PTR_DAT_047dc2d0,param_2,uVar5,uVar6,param_4,param_5,&local_a0,param_7);
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
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
        local_68 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_00fda6dc;
  }
  plVar22 = (long *)0x0;
  bVar13 = true;
LAB_00fda48c:
  if (!bVar12) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar13) {
    return;
  }
  do {
    lVar10 = *plVar22;
    lVar19 = plVar22[1];
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar12) {
      *plVar22 = lVar10;
      plVar22[1] = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar20 = *plVar22;
    lVar3 = plVar22[1];
    if (lVar20 != lVar10 || lVar3 != lVar19) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto joined_r0x00fda4e0;
    }
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar12) {
      *plVar22 = lVar10;
      *(long *)((long)plVar22 + 4) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar12 = true;
joined_r0x00fda4e0:
  do {
    if (bVar12) {
      nn::os::SignalLightEvent((LightEventType *)(plVar22 + 2));
      return;
    }
    do {
      lVar10 = *plVar22;
      lVar19 = plVar22[1];
      if (lVar10 != lVar20 || lVar19 != lVar3) {
        bVar12 = false;
        ClearExclusiveLocal();
        lVar20 = lVar10;
        lVar3 = lVar19;
        goto joined_r0x00fda4e0;
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar20;
        *(long *)((long)plVar22 + 4) = lVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar12 = true;
    lVar20 = lVar10;
    lVar3 = lVar19;
  } while( true );
code_r0x00fda0e8:
  cVar7 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar12) {
    *plVar18 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00fda0f0;
  goto LAB_00fda0e0;
code_r0x00fda168:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar13) {
    *plVar14 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00fda170;
  goto LAB_00fda160;
code_r0x00fda3e8:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar13) {
    *plVar21 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00fda3f0;
  goto LAB_00fda3e0;
code_r0x00fda234:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar13) {
    *plVar14 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto code_r0x00fda23c;
  goto LAB_00fda22c;
code_r0x00fda23c:
  bVar13 = false;
  goto LAB_00fda328;
}


