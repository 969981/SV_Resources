/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0a738; name: FUN_00f0a738
 */


void FUN_00f0a738(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7)

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
  
  plVar22 = (long *)(param_2 + 0x530);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar19 = *plVar22;
    lVar20 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar8) {
      *plVar22 = lVar19;
      *(long *)(param_2 + 0x538) = lVar20;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  pLVar12 = (LightEventType *)(param_2 + 0x540);
  do {
    while ((lVar19 != 0 && (lVar11 != lVar19))) {
      nn::os::WaitLightEvent(pLVar12);
      do {
        lVar19 = *plVar22;
        lVar20 = *(long *)(param_2 + 0x538);
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *plVar22 = lVar19;
          *(long *)(param_2 + 0x538) = lVar20;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    while( true ) {
      if (*plVar22 != lVar19 || *(long *)(param_2 + 0x538) != lVar20) break;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *plVar22 = lVar19;
        *(long *)(param_2 + 0x534) = lVar20 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        if (*(char *)(param_2 + 0x550) != '\0') goto LAB_00f0a804;
        plVar18 = (long *)(param_2 + 0x60);
        lVar11 = nn::os::GetCurrentThread();
        goto LAB_00f0a84c;
      }
    }
    ClearExclusiveLocal();
    lVar19 = *plVar22;
    lVar20 = *(long *)(param_2 + 0x538);
  } while( true );
LAB_00f0a804:
  do {
    lVar11 = *plVar22;
    lVar19 = *(long *)(param_2 + 0x538);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar8) {
      *plVar22 = lVar11;
      *(long *)(param_2 + 0x538) = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  while( true ) {
    lVar20 = *plVar22;
    lVar14 = *(long *)(param_2 + 0x538);
    if (lVar20 != lVar11 || lVar14 != lVar19) break;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar8) {
      *plVar22 = lVar11;
      *(long *)(param_2 + 0x534) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00f0aa00;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar22;
      if (lVar11 != lVar20 || *(long *)(param_2 + 0x538) != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_00f0a9f4;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *plVar22 = lVar20;
        *(long *)(param_2 + 0x534) = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar8 = true;
LAB_00f0a9f4:
    lVar20 = lVar11;
    lVar14 = *(long *)(param_2 + 0x538);
  } while (!bVar8);
LAB_00f0aa00:
  nn::os::SignalLightEvent(pLVar12);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  local_88 = *param_6;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  FUN_00fd9730(&local_80,param_6 + 1);
  FUN_01fef0b0(param_1,PTR_DAT_047dbe50,param_2,uVar5,uVar6,param_4,param_5,&local_88,param_7);
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
  goto LAB_00f0aa7c;
  while( true ) {
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar15) {
      *plVar21 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') break;
LAB_00f0ac48:
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(plVar21 + 1));
        while (*plVar21 == 0) {
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar15) {
            *plVar21 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f0ac58;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00f0ac58:
  *(undefined8 *)(plVar21[3] + param_3[1] * 8) = local_a8;
  *plVar21 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
LAB_00f0ac78:
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
      goto joined_r0x00f0ad88;
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
joined_r0x00f0ad88:
  if (!bVar15) {
    do {
      lVar11 = *plVar13;
      lVar19 = *(long *)(param_2 + 0x298);
      if (lVar11 != lVar20 || lVar19 != lVar14) {
        bVar15 = false;
        ClearExclusiveLocal();
        lVar20 = lVar11;
        lVar14 = lVar19;
        goto joined_r0x00f0ad88;
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
    goto joined_r0x00f0ad88;
  }
  goto LAB_00f0adcc;
code_r0x00f0ac04:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar15) {
    *plVar22 = lVar11;
    *(long *)(param_2 + 0x534) = lVar19 + -1;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f0acf4;
  goto LAB_00f0abf0;
  while( true ) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') break;
LAB_00f0a84c:
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar18 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f0a85c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00f0a85c:
  plVar18 = (long *)(param_2 + 0x2f0);
  lVar19 = *plVar18;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar19) {
    plVar18 = (long *)0x0;
    bVar8 = true;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar18 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar18 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar8) {
              *plVar18 = lVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00f0a88c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *plVar18 = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00f0a88c:
    bVar8 = false;
  }
  plVar13 = *(long **)(param_2 + 0x308);
  lVar11 = *(long *)(param_2 + 0x340);
  if ((lVar11 == 0) || (*plVar13 == param_5)) {
    plVar21 = plVar13;
  }
  else {
    lVar19 = lVar11 * 0x40;
    plVar16 = plVar13;
    do {
      lVar19 = lVar19 + -0x40;
      if (lVar19 == 0) goto LAB_00f0aaa4;
      plVar17 = plVar16 + 8;
      plVar21 = plVar16 + 8;
      plVar16 = plVar16 + 8;
    } while (*plVar17 != param_5);
  }
  if (plVar21 != plVar13 + lVar11 * 8) {
    lVar19 = plVar21[2];
    plVar13 = (long *)(lVar19 + 0x30);
    lVar20 = *plVar13;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar20) {
      local_a8 = FUN_01ff4dd0(param_1,lVar19,param_6,param_7);
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
              if (cVar7 == '\0') goto LAB_00f0a90c;
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
LAB_00f0a90c:
      local_a8 = FUN_00e93240(param_1,lVar19,param_6,param_7);
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
          plVar21 = (long *)*param_3;
          lVar19 = *plVar21;
          lVar11 = nn::os::GetCurrentThread();
          if (lVar11 == lVar19) {
            *(undefined8 *)(plVar21[3] + param_3[1] * 8) = local_a8;
            goto LAB_00f0ac78;
          }
          lVar11 = nn::os::GetCurrentThread();
          goto LAB_00f0ac48;
        }
      }
      ClearExclusiveLocal();
      lVar19 = *plVar13;
      lVar20 = *(long *)(param_2 + 0x298);
    } while( true );
  }
LAB_00f0aaa4:
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
              goto LAB_00f0ab78;
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
LAB_00f0ab78:
  plVar21 = *(long **)(param_2 + 0x748);
  lVar11 = *(long *)(param_2 + 0x780);
  if ((lVar11 == 0) || (*plVar21 == param_5)) {
    plVar16 = plVar21;
  }
  else {
    lVar19 = lVar11 * 0x10;
    plVar17 = plVar21;
    do {
      lVar19 = lVar19 + -0x10;
      if (lVar19 == 0) goto LAB_00f0ac18;
      plVar1 = plVar17 + 2;
      plVar16 = plVar17 + 2;
      plVar17 = plVar17 + 2;
    } while (*plVar1 != param_5);
  }
  if (plVar16 != plVar21 + lVar11 * 2) {
    lVar11 = plVar16[1];
    if (!bVar15) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
    if (lVar11 != 0) {
      do {
        lVar11 = *plVar22;
        lVar19 = *(long *)(param_2 + 0x538);
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar15) {
          *plVar22 = lVar11;
          *(long *)(param_2 + 0x538) = lVar19;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00f0abf0:
      lVar20 = *plVar22;
      lVar14 = *(long *)(param_2 + 0x538);
      if (lVar20 == lVar11 && lVar14 == lVar19) goto code_r0x00f0ac04;
      ClearExclusiveLocal();
      do {
        do {
          lVar11 = *plVar22;
          if (lVar11 != lVar20 || *(long *)(param_2 + 0x538) != lVar14) {
            bVar15 = false;
            ClearExclusiveLocal();
            goto LAB_00f0ace8;
          }
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar15) {
            *plVar22 = lVar20;
            *(long *)(param_2 + 0x534) = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar15 = true;
LAB_00f0ace8:
        lVar20 = lVar11;
        lVar14 = *(long *)(param_2 + 0x538);
      } while (!bVar15);
LAB_00f0acf4:
      nn::os::SignalLightEvent(pLVar12);
      uVar5 = *param_3;
      uVar6 = param_3[1];
      local_a0 = *param_6;
      local_90 = 0;
      local_98 = (undefined8 *)0x0;
      FUN_00fd9730(&local_98,param_6 + 1);
      FUN_01fef0b0(param_1,PTR_DAT_047dbe50,param_2,uVar5,uVar6,param_4,param_5,&local_a0,param_7);
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
LAB_00f0aa7c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      plVar22 = (long *)0x0;
      bVar15 = true;
      goto joined_r0x00f0ad78;
    }
    goto LAB_00f0add0;
  }
LAB_00f0ac18:
  if (bVar15) goto LAB_00f0add0;
  pLVar12 = (LightEventType *)(plVar13 + 1);
  *plVar13 = 0;
LAB_00f0adcc:
  nn::os::SignalLightEvent(pLVar12);
LAB_00f0add0:
  bVar15 = false;
joined_r0x00f0ad78:
  if (!bVar8) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  if (bVar15) {
    return;
  }
  do {
    lVar11 = *plVar22;
    lVar19 = plVar22[1];
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar8) {
      *plVar22 = lVar11;
      plVar22[1] = lVar19;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  while( true ) {
    lVar20 = *plVar22;
    lVar14 = plVar22[1];
    if (lVar20 != lVar11 || lVar14 != lVar19) break;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar8) {
      *plVar22 = lVar11;
      *(long *)((long)plVar22 + 4) = lVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00f0ae78;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar22;
      if (lVar11 != lVar20 || plVar22[1] != lVar14) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_00f0ae6c;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *plVar22 = lVar20;
        *(long *)((long)plVar22 + 4) = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar8 = true;
LAB_00f0ae6c:
    lVar20 = lVar11;
    lVar14 = plVar22[1];
  } while (!bVar8);
LAB_00f0ae78:
  nn::os::SignalLightEvent((LightEventType *)(plVar22 + 2));
  return;
}


