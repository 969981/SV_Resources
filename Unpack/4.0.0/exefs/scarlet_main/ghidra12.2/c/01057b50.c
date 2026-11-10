/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01057b50; name: FUN_01057b50
 */


void FUN_01057b50(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  plVar22 = (long *)(param_2 + 0x530);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar22;
    lVar21 = *(long *)(param_2 + 0x538);
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar18;
      *(long *)(param_2 + 0x538) = lVar21;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar18 != 0 && (lVar12 != lVar18))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar18 = *plVar22;
        lVar21 = *(long *)(param_2 + 0x538);
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *plVar22 = lVar18;
          *(long *)(param_2 + 0x538) = lVar21;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    while( true ) {
      if (*plVar22 != lVar18 || *(long *)(param_2 + 0x538) != lVar21) break;
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *plVar22 = lVar18;
        *(long *)(param_2 + 0x534) = lVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_01057c24;
        plVar3 = (long *)(param_2 + 0x60);
        lVar12 = nn::os::GetCurrentThread();
        goto LAB_01057c70;
      }
    }
    ClearExclusiveLocal();
    lVar18 = *plVar22;
    lVar21 = *(long *)(param_2 + 0x538);
  } while( true );
  while( true ) {
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar17) {
      *plVar3 = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') break;
LAB_01057c70:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar17) {
            *plVar3 = lVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_01057c80;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01057c80:
  plVar3 = (long *)(param_2 + 0x290);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar3;
    lVar21 = *(long *)(param_2 + 0x298);
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar17) {
      *plVar3 = lVar18;
      *(long *)(param_2 + 0x298) = lVar21;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    while ((lVar18 != 0 && (lVar12 != lVar18))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
      do {
        lVar18 = *plVar3;
        lVar21 = *(long *)(param_2 + 0x298);
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar17) {
          *plVar3 = lVar18;
          *(long *)(param_2 + 0x298) = lVar21;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    while( true ) {
      if (*plVar3 != lVar18 || *(long *)(param_2 + 0x298) != lVar21) break;
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar17) {
        *plVar3 = lVar18;
        *(long *)(param_2 + 0x294) = lVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        plVar14 = *(long **)(param_2 + 0x2b0);
        lVar12 = *(long *)(param_2 + 0x2e8);
        if ((lVar12 == 0) || (*plVar14 == param_5)) {
          plVar20 = plVar14;
          goto LAB_01057d48;
        }
        lVar18 = lVar12 * 0x20;
        plVar15 = plVar14;
        goto LAB_01057d2c;
      }
    }
    ClearExclusiveLocal();
    lVar18 = *plVar3;
    lVar21 = *(long *)(param_2 + 0x298);
  } while( true );
  while (plVar19 = plVar15 + 4, plVar20 = plVar15 + 4, plVar15 = plVar15 + 4, *plVar19 != param_5) {
LAB_01057d2c:
    lVar18 = lVar18 + -0x20;
    if (lVar18 == 0) goto LAB_01057f30;
  }
LAB_01057d48:
  if (plVar20 == plVar14 + lVar12 * 4) {
LAB_01057f30:
    plVar14 = (long *)(param_2 + 0x948);
    lVar18 = *plVar14;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar18) {
      plVar14 = (long *)0x0;
      bVar9 = true;
    }
    else {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
            while (*plVar14 == 0) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar17) {
                *plVar14 = lVar12;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01057f64;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar17) {
          *plVar14 = lVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01057f64:
      bVar9 = false;
    }
    plVar15 = *(long **)(param_2 + 0x960);
    lVar12 = *(long *)(param_2 + 0x998);
    if ((lVar12 == 0) || (*plVar15 == param_5)) {
      plVar19 = plVar15;
    }
    else {
      lVar18 = lVar12 * 0x10;
      plVar20 = plVar15;
      do {
        lVar18 = lVar18 + -0x10;
        if (lVar18 == 0) goto LAB_010580b4;
        plVar19 = plVar20 + 2;
        plVar1 = plVar20 + 2;
        plVar20 = plVar19;
      } while (*plVar1 != param_5);
    }
    if (plVar19 == plVar15 + lVar12 * 2) {
LAB_010580b4:
      do {
        lVar12 = *plVar22;
        lVar18 = *(long *)(param_2 + 0x538);
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *plVar22 = lVar12;
          *(long *)(param_2 + 0x538) = lVar18;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        lVar21 = *plVar22;
        lVar16 = *(long *)(param_2 + 0x538);
        if (lVar21 != lVar12 || lVar16 != lVar18) {
          bVar17 = false;
          ClearExclusiveLocal();
          goto joined_r0x010580f0;
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *plVar22 = lVar12;
          *(long *)(param_2 + 0x534) = lVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar17 = true;
joined_r0x010580f0:
      if (!bVar17) {
        do {
          lVar12 = *plVar22;
          lVar18 = *(long *)(param_2 + 0x538);
          if (lVar12 != lVar21 || lVar18 != lVar16) {
            bVar17 = false;
            ClearExclusiveLocal();
            lVar21 = lVar12;
            lVar16 = lVar18;
            goto joined_r0x010580f0;
          }
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar17) {
            *plVar22 = lVar21;
            *(long *)(param_2 + 0x534) = lVar16 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar17 = true;
        lVar21 = lVar12;
        lVar16 = lVar18;
        goto joined_r0x010580f0;
      }
      nn::os::SignalLightEvent(pLVar2);
      uVar13 = *param_3;
      uVar7 = param_3[1];
      local_a0 = *param_6;
      local_90 = 0;
      local_98 = (undefined8 *)0x0;
      FUN_00fd9730(&local_98,param_6 + 1);
      FUN_02a645ec(param_1,PTR_DAT_047dc098,param_2,uVar13,uVar7,param_4,param_5,&local_a0,param_7,
                   param_8);
      puVar10 = local_98;
      if (local_98 == (undefined8 *)0x0) {
        plVar22 = (long *)0x0;
        bVar17 = false;
      }
      else {
        psVar4 = (short *)(local_98 + 3);
        do {
          sVar6 = *psVar4;
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar17) {
            *psVar4 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          piVar5 = (int *)((long)local_98 + 0x1c);
          do {
            iVar11 = *piVar5;
            cVar8 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar17) {
              *piVar5 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
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
        else if (sVar6 == 0) goto LAB_01057edc;
        plVar22 = (long *)0x0;
        bVar17 = false;
      }
    }
    else {
      bVar17 = true;
      *(undefined1 *)(plVar19 + 1) = 1;
    }
    if (!bVar9) {
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(param_2 + 0x348) + plVar20[3] * 0x130 + 0x118);
    plVar14 = (long *)(lVar18 + 0x30);
    lVar21 = *plVar14;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar21) {
      uVar13 = FUN_01ff99b4(param_1,lVar18,param_6,param_7);
    }
    else {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x38));
            while (*plVar14 == 0) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar17) {
                *plVar14 = lVar12;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01057d98;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar17) {
          *plVar14 = lVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01057d98:
      uVar13 = FUN_00f785e4(param_1,lVar18,param_6,param_7);
      *(undefined8 *)(lVar18 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x38));
    }
    plVar14 = (long *)*param_3;
    lVar18 = *plVar14;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 == lVar18) {
      *(undefined8 *)(plVar14[3] + param_3[1] * 8) = uVar13;
    }
    else {
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar14 + 1));
            while (*plVar14 == 0) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar17) {
                *plVar14 = lVar12;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01057df0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar17) {
          *plVar14 = lVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01057df0:
      *(undefined8 *)(plVar14[3] + param_3[1] * 8) = uVar13;
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
    bVar17 = true;
  }
  do {
    lVar12 = *plVar3;
    lVar18 = *(long *)(param_2 + 0x298);
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar12;
      *(long *)(param_2 + 0x298) = lVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  while( true ) {
    lVar21 = *plVar3;
    lVar16 = *(long *)(param_2 + 0x298);
    if (lVar21 != lVar12 || lVar16 != lVar18) break;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar12;
      *(long *)(param_2 + 0x294) = lVar18 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_01058228;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar12 = *plVar3;
      if (lVar12 != lVar21 || *(long *)(param_2 + 0x298) != lVar16) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_0105821c;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = lVar21;
        *(long *)(param_2 + 0x294) = lVar16 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar9 = true;
LAB_0105821c:
    lVar21 = lVar12;
    lVar16 = *(long *)(param_2 + 0x298);
  } while (!bVar9);
LAB_01058228:
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (!bVar17) {
    return;
  }
  do {
    lVar12 = *plVar22;
    lVar18 = plVar22[1];
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar12;
      plVar22[1] = lVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  while( true ) {
    lVar21 = *plVar22;
    lVar16 = plVar22[1];
    if (lVar21 != lVar12 || lVar16 != lVar18) break;
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar12;
      *(long *)((long)plVar22 + 4) = lVar18 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_010582c4;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar12 = *plVar22;
      if (lVar12 != lVar21 || plVar22[1] != lVar16) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto LAB_010582b8;
      }
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *plVar22 = lVar21;
        *(long *)((long)plVar22 + 4) = lVar16 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar17 = true;
LAB_010582b8:
    lVar21 = lVar12;
    lVar16 = plVar22[1];
  } while (!bVar17);
LAB_010582c4:
  nn::os::SignalLightEvent((LightEventType *)(plVar22 + 2));
  return;
LAB_01057c24:
  do {
    lVar12 = *plVar22;
    lVar18 = *(long *)(param_2 + 0x538);
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar12;
      *(long *)(param_2 + 0x538) = lVar18;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar21 = *plVar22;
    lVar16 = *(long *)(param_2 + 0x538);
    if (lVar21 != lVar12 || lVar16 != lVar18) {
      bVar17 = false;
      ClearExclusiveLocal();
      goto joined_r0x01057e20;
    }
    cVar8 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar12;
      *(long *)(param_2 + 0x534) = lVar18 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar17 = true;
joined_r0x01057e20:
  if (!bVar17) {
    do {
      lVar12 = *plVar22;
      lVar18 = *(long *)(param_2 + 0x538);
      if (lVar12 != lVar21 || lVar18 != lVar16) {
        bVar17 = false;
        ClearExclusiveLocal();
        lVar21 = lVar12;
        lVar16 = lVar18;
        goto joined_r0x01057e20;
      }
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *plVar22 = lVar21;
        *(long *)(param_2 + 0x534) = lVar16 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar17 = true;
    lVar21 = lVar12;
    lVar16 = lVar18;
    goto joined_r0x01057e20;
  }
  nn::os::SignalLightEvent(pLVar2);
  uVar13 = *param_3;
  uVar7 = param_3[1];
  local_88 = *param_6;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  FUN_00fd9730(&local_80,param_6 + 1);
  FUN_02a645ec(param_1,PTR_DAT_047dc098,param_2,uVar13,uVar7,param_4,param_5,&local_88,param_7,
               param_8);
  puVar10 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar4 = (short *)(local_80 + 3);
    do {
      sVar6 = *psVar4;
      cVar8 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar17) {
        *psVar4 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)local_80 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar17) {
          *piVar5 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
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
    else if (sVar6 == 0) {
LAB_01057edc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


