/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105843c; name: FUN_0105843c
 */


void FUN_0105843c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  LightEventType *pLVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
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
  
  plVar18 = (long *)(param_2 + 0x530);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar19 = *plVar18;
    lVar20 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar19;
      *(long *)(param_2 + 0x538) = lVar20;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  pLVar12 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar19 != 0 && (lVar11 != lVar19))) {
      nn::os::WaitLightEvent(pLVar12);
      do {
        lVar19 = *plVar18;
        lVar20 = *(long *)(param_2 + 0x538);
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar8) {
          *plVar18 = lVar19;
          *(long *)(param_2 + 0x538) = lVar20;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    while( true ) {
      if (*plVar18 != lVar19 || *(long *)(param_2 + 0x538) != lVar20) break;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *plVar18 = lVar19;
        *(long *)(param_2 + 0x534) = lVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_0105850c;
        plVar21 = (long *)(param_2 + 0x60);
        lVar11 = nn::os::GetCurrentThread();
        goto LAB_01058558;
      }
    }
    ClearExclusiveLocal();
    lVar19 = *plVar18;
    lVar20 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_0105850c:
  do {
    lVar11 = *plVar18;
    lVar19 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      *(long *)(param_2 + 0x538) = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  while( true ) {
    lVar20 = *plVar18;
    lVar14 = *(long *)(param_2 + 0x538);
    if (lVar20 != lVar11 || lVar14 != lVar19) break;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      *(long *)(param_2 + 0x534) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0105870c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar18;
      if (lVar11 != lVar20 || *(long *)(param_2 + 0x538) != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_01058700;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *plVar18 = lVar20;
        *(long *)(param_2 + 0x534) = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar8 = true;
LAB_01058700:
    lVar20 = lVar11;
    lVar14 = *(long *)(param_2 + 0x538);
  } while (!bVar8);
LAB_0105870c:
  nn::os::SignalLightEvent(pLVar12);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  local_88 = *param_6;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  FUN_00fd9730(&local_80,param_6 + 1);
  FUN_02a5f810(param_1,PTR_DAT_047dc090,param_2,uVar5,uVar6,param_4,param_5,&local_88,param_7,
               param_8);
  puVar9 = local_80;
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  psVar2 = (short *)(local_80 + 3);
  do {
    sVar4 = *psVar2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar8) {
      *psVar2 = sVar4 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar4 == 1) {
    piVar3 = (int *)((long)local_80 + 0x1c);
    do {
      iVar10 = *piVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
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
  if (sVar4 != 0) {
    return;
  }
  goto LAB_0105878c;
  while( true ) {
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar15) {
      *plVar22 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') break;
LAB_01058958:
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(plVar22 + 1));
        while (*plVar22 == 0) {
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar15) {
            *plVar22 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01058968;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01058968:
  *(undefined8 *)(plVar22[3] + param_3[1] * 8) = local_a8;
  *plVar22 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
LAB_01058988:
  do {
    lVar11 = *plVar13;
    lVar19 = *(long *)(param_2 + 0x298);
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar15) {
      *plVar13 = lVar11;
      *(long *)(param_2 + 0x298) = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar20 = *plVar13;
    lVar14 = *(long *)(param_2 + 0x298);
    if (lVar20 != lVar11 || lVar14 != lVar19) {
      bVar15 = false;
      ClearExclusiveLocal();
      goto joined_r0x01058a9c;
    }
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar15) {
      *plVar13 = lVar11;
      *(long *)(param_2 + 0x294) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar15 = true;
joined_r0x01058a9c:
  if (!bVar15) {
    do {
      lVar11 = *plVar13;
      lVar19 = *(long *)(param_2 + 0x298);
      if (lVar11 != lVar20 || lVar19 != lVar14) {
        bVar15 = false;
        ClearExclusiveLocal();
        lVar20 = lVar11;
        lVar14 = lVar19;
        goto joined_r0x01058a9c;
      }
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar15) {
        *plVar13 = lVar20;
        *(long *)(param_2 + 0x294) = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar15 = true;
    lVar20 = lVar11;
    lVar14 = lVar19;
    goto joined_r0x01058a9c;
  }
  goto LAB_01058ae0;
code_r0x01058914:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar15) {
    *plVar18 = lVar11;
    *(long *)(param_2 + 0x534) = lVar19 + -1;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01058a04;
  goto LAB_01058900;
  while( true ) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar8) {
      *plVar21 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') break;
LAB_01058558:
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar21 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01058568;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01058568:
  plVar21 = (long *)(param_2 + 0x2f0);
  lVar19 = *plVar21;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar19) {
    plVar21 = (long *)0x0;
    bVar8 = true;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar21 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar8) {
              *plVar21 = lVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01058598;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar8) {
        *plVar21 = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01058598:
    bVar8 = false;
  }
  plVar13 = *(long **)(param_2 + 0x308);
  lVar11 = *(long *)(param_2 + 0x340);
  if ((lVar11 == 0) || (*plVar13 == param_5)) {
    plVar22 = plVar13;
  }
  else {
    lVar19 = lVar11 * 0x40;
    plVar16 = plVar13;
    do {
      lVar19 = lVar19 + -0x40;
      if (lVar19 == 0) goto LAB_010587b4;
      plVar17 = plVar16 + 8;
      plVar22 = plVar16 + 8;
      plVar16 = plVar16 + 8;
    } while (*plVar17 != param_5);
  }
  if (plVar22 != plVar13 + lVar11 * 8) {
    lVar19 = plVar22[3];
    plVar13 = (long *)(lVar19 + 0x30);
    lVar20 = *plVar13;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar20) {
      local_a8 = FUN_01ff99b4(param_1,lVar19,param_6,param_7);
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
            while (*plVar13 == 0) {
              cVar7 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar15) {
                *plVar13 = lVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01058618;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar15) {
          *plVar13 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_01058618:
      local_a8 = FUN_00f785e4(param_1,lVar19,param_6,param_7);
      *(undefined8 *)(lVar19 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x38));
    }
    plVar13 = (long *)(param_2 + 0x290);
    lVar11 = nn::os::GetCurrentThread();
    do {
      lVar19 = *plVar13;
      lVar20 = *(long *)(param_2 + 0x298);
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar15) {
        *plVar13 = lVar19;
        *(long *)(param_2 + 0x298) = lVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    pLVar12 = (LightEventType *)(param_2 + 0x2a0);
    do {
      while ((lVar19 != 0 && (lVar11 != lVar19))) {
        nn::os::WaitLightEvent(pLVar12);
        do {
          lVar19 = *plVar13;
          lVar20 = *(long *)(param_2 + 0x298);
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar15) {
            *plVar13 = lVar19;
            *(long *)(param_2 + 0x298) = lVar20;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      while( true ) {
        if (*plVar13 != lVar19 || *(long *)(param_2 + 0x298) != lVar20) break;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar15) {
          *plVar13 = lVar19;
          *(long *)(param_2 + 0x294) = lVar20 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          plVar22 = (long *)*param_3;
          lVar19 = *plVar22;
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 == lVar19) {
            *(undefined8 *)(plVar22[3] + param_3[1] * 8) = local_a8;
            goto LAB_01058988;
          }
          lVar11 = nn::os::GetCurrentThread();
          goto LAB_01058958;
        }
      }
      ClearExclusiveLocal();
      lVar19 = *plVar13;
      lVar20 = *(long *)(param_2 + 0x298);
    } while( true );
  }
LAB_010587b4:
  plVar13 = (long *)(param_2 + 0x730);
  lVar19 = *plVar13;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar19) {
    plVar13 = (long *)0x0;
    bVar15 = true;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar13 == 0) {
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar15) {
              *plVar13 = lVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') {
              bVar15 = false;
              goto LAB_01058888;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar15) {
        *plVar13 = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar15 = false;
  }
LAB_01058888:
  plVar22 = *(long **)(param_2 + 0x748);
  lVar11 = *(long *)(param_2 + 0x780);
  if ((lVar11 == 0) || (*plVar22 == param_5)) {
    plVar16 = plVar22;
  }
  else {
    lVar19 = lVar11 * 0x10;
    plVar17 = plVar22;
    do {
      lVar19 = lVar19 + -0x10;
      if (lVar19 == 0) goto LAB_01058928;
      plVar1 = plVar17 + 2;
      plVar16 = plVar17 + 2;
      plVar17 = plVar17 + 2;
    } while (*plVar1 != param_5);
  }
  if ((plVar16 != plVar22 + lVar11 * 2) && (plVar16[1] != 0)) {
    if (!bVar15) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
    do {
      lVar11 = *plVar18;
      lVar19 = *(long *)(param_2 + 0x538);
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar15) {
        *plVar18 = lVar11;
        *(long *)(param_2 + 0x538) = lVar19;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01058900:
    lVar20 = *plVar18;
    lVar14 = *(long *)(param_2 + 0x538);
    if (lVar20 == lVar11 && lVar14 == lVar19) goto code_r0x01058914;
    ClearExclusiveLocal();
    do {
      do {
        lVar11 = *plVar18;
        if (lVar11 != lVar20 || *(long *)(param_2 + 0x538) != lVar14) {
          bVar15 = false;
          ClearExclusiveLocal();
          goto LAB_010589f8;
        }
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar15) {
          *plVar18 = lVar20;
          *(long *)(param_2 + 0x534) = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar15 = true;
LAB_010589f8:
      lVar20 = lVar11;
      lVar14 = *(long *)(param_2 + 0x538);
    } while (!bVar15);
LAB_01058a04:
    nn::os::SignalLightEvent(pLVar12);
    uVar5 = *param_3;
    uVar6 = param_3[1];
    local_a0 = *param_6;
    local_90 = 0;
    local_98 = (undefined8 *)0x0;
    FUN_00fd9730(&local_98,param_6 + 1);
    FUN_02a5f810(param_1,PTR_DAT_047dc090,param_2,uVar5,uVar6,param_4,param_5,&local_a0,param_7,
                 param_8);
    puVar9 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_98 + 3);
      do {
        sVar4 = *psVar2;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar15) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
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
      else if (sVar4 == 0) {
LAB_0105878c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    plVar18 = (long *)0x0;
    bVar15 = true;
    goto joined_r0x01058a8c;
  }
LAB_01058928:
  if (bVar15) goto LAB_01058ae4;
  *plVar13 = 0;
  pLVar12 = (LightEventType *)(plVar13 + 1);
LAB_01058ae0:
  nn::os::SignalLightEvent(pLVar12);
LAB_01058ae4:
  bVar15 = false;
joined_r0x01058a8c:
  if (!bVar8) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar15) {
    return;
  }
  do {
    lVar11 = *plVar18;
    lVar19 = plVar18[1];
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      plVar18[1] = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  while( true ) {
    lVar20 = *plVar18;
    lVar14 = plVar18[1];
    if (lVar20 != lVar11 || lVar14 != lVar19) break;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      *(long *)((long)plVar18 + 4) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_01058b8c;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar18;
      if (lVar11 != lVar20 || plVar18[1] != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_01058b80;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *plVar18 = lVar20;
        *(long *)((long)plVar18 + 4) = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar8 = true;
LAB_01058b80:
    lVar20 = lVar11;
    lVar14 = plVar18[1];
  } while (!bVar8);
LAB_01058b8c:
  nn::os::SignalLightEvent((LightEventType *)(plVar18 + 2));
  return;
}


