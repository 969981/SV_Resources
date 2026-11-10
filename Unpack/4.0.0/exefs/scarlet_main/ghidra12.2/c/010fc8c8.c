/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010fc8c8; name: FUN_010fc8c8
 */


/* WARNING: Removing unreachable block (ram,0x010fc948) */

void FUN_010fc8c8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  short sVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  LightEventType *pLVar16;
  long lVar17;
  LightEventType *pLVar18;
  void *pvVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  float *pfVar25;
  bool bVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  bool bVar32;
  long *plVar33;
  ulong *puVar34;
  ulong uVar35;
  undefined8 uVar36;
  ulong uVar37;
  long local_130;
  long lStack_128;
  long local_120;
  ulong *local_118 [2];
  ulong *local_108;
  undefined8 *local_100;
  char local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  float local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  long local_88;
  undefined8 *puStack_80;
  long local_68;
  
  plVar31 = (long *)(param_1 + 0x530);
  local_68 = param_3;
  lVar13 = nn::os::GetCurrentThread();
  do {
    lVar30 = *plVar31;
    lVar22 = *(long *)(param_1 + 0x538);
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar26) {
      *plVar31 = lVar30;
      *(long *)(param_1 + 0x538) = lVar22;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  pLVar18 = (LightEventType *)(param_1 + 0x540);
  do {
    while ((lVar30 != 0 && (lVar13 != lVar30))) {
      nn::os::WaitLightEvent(pLVar18);
      do {
        lVar30 = *plVar31;
        lVar22 = *(long *)(param_1 + 0x538);
        cVar9 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar26) {
          *plVar31 = lVar30;
          *(long *)(param_1 + 0x538) = lVar22;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    while( true ) {
      if (*plVar31 != lVar30 || *(long *)(param_1 + 0x538) != lVar22) break;
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar26) {
        *plVar31 = lVar30;
        *(long *)(param_1 + 0x534) = lVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 == '\0') {
        if (*(char *)(param_1 + 0x550) != '\0') goto LAB_010fc984;
        plVar33 = (long *)(param_1 + 0x60);
        lVar13 = nn::os::GetCurrentThread();
        goto LAB_010fc9c4;
      }
    }
    ClearExclusiveLocal();
    lVar30 = *plVar31;
    lVar22 = *(long *)(param_1 + 0x538);
  } while( true );
  while( true ) {
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar26) {
      *plVar33 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') break;
LAB_010fc9c4:
    if (*plVar33 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar33 == 0) {
          cVar9 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar26) {
            *plVar33 = lVar13;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_010fc9d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_010fc9d4:
  plVar33 = (long *)(param_1 + 0x2f0);
  lVar30 = *plVar33;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar30) {
    plVar33 = (long *)0x0;
    bVar26 = true;
  }
  else {
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar33 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
          while (*plVar33 == 0) {
            cVar9 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar26) {
              *plVar33 = lVar13;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_010fca00;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar26) {
        *plVar33 = lVar13;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_010fca00:
    bVar26 = false;
  }
  plVar20 = *(long **)(param_1 + 0x308);
  lVar13 = *(long *)(param_1 + 0x340);
  if ((lVar13 == 0) || (*plVar20 == local_68)) {
    plVar24 = plVar20;
  }
  else {
    lVar30 = lVar13 * 0x40;
    plVar21 = plVar20;
    do {
      lVar30 = lVar30 + -0x40;
      if (lVar30 == 0) goto LAB_010fccbc;
      plVar24 = plVar21 + 8;
      plVar28 = plVar21 + 8;
      plVar21 = plVar24;
    } while (*plVar28 != local_68);
  }
  if (plVar24 == plVar20 + lVar13 * 8) {
LAB_010fccbc:
    plVar20 = (long *)(param_1 + 0x730);
    lVar30 = *plVar20;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar30) {
      plVar20 = (long *)0x0;
      bVar32 = true;
    }
    else {
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar20 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x738));
            while (*plVar20 == 0) {
              cVar9 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar32) {
                *plVar20 = lVar13;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_010fcce8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar9 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar32) {
          *plVar20 = lVar13;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_010fcce8:
      bVar32 = false;
    }
    plVar24 = *(long **)(param_1 + 0x748);
    uVar14 = *(ulong *)(param_1 + 0x780);
    if ((uVar14 == 0) || (*plVar24 == param_2)) {
      plVar21 = plVar24;
    }
    else {
      lVar13 = uVar14 * 0x10;
      plVar28 = plVar24;
      do {
        lVar13 = lVar13 + -0x10;
        if (lVar13 == 0) {
          plVar21 = plVar24 + uVar14 * 2;
          break;
        }
        plVar27 = plVar28 + 2;
        plVar21 = plVar28 + 2;
        plVar28 = plVar28 + 2;
      } while (*plVar27 != param_2);
    }
    if (plVar24 + uVar14 * 2 != plVar21) {
      puVar34 = (ulong *)(plVar21 + 1);
      uVar29 = *puVar34;
      if (*puVar34 == 0) {
        uVar29 = (long)plVar21 - (long)plVar24 >> 4;
        if (uVar14 <= uVar29) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("index < m_end","erase",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                     ,0x391,"FlatHashTable::erase iterator out of bounds");
        }
        uVar15 = uVar29 + 1;
        puVar34 = (ulong *)(param_1 + 0x780);
        if (uVar15 < (ulong)(*(long *)(param_1 + 0x750) - (long)plVar24 >> 4)) {
          memmove(plVar24 + uVar29 * 2,plVar24 + uVar15 * 2,(uVar14 - uVar15) * 0x10);
          uVar29 = *puVar34;
        }
        else {
          uVar29 = uVar14;
        }
      }
      *puVar34 = uVar29 - 1;
    }
    if (bVar32) goto joined_r0x010fcd9c;
    *plVar20 = 0;
    pLVar16 = (LightEventType *)(plVar20 + 1);
  }
  else {
    lVar13 = plVar24[1];
    plVar24[1] = lVar13 + -1;
    if (lVar13 + -1 != 0) goto joined_r0x010fcd9c;
    plVar20 = (long *)(param_1 + 0x290);
    lVar13 = nn::os::GetCurrentThread();
    do {
      lVar30 = *plVar20;
      lVar22 = *(long *)(param_1 + 0x298);
      cVar9 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar32) {
        *plVar20 = lVar30;
        *(long *)(param_1 + 0x298) = lVar22;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    pLVar16 = (LightEventType *)(param_1 + 0x2a0);
    do {
      while ((lVar30 != 0 && (lVar13 != lVar30))) {
        nn::os::WaitLightEvent(pLVar16);
        do {
          lVar30 = *plVar20;
          lVar22 = *(long *)(param_1 + 0x298);
          cVar9 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar32) {
            *plVar20 = lVar30;
            *(long *)(param_1 + 0x298) = lVar22;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      do {
        lVar17 = *plVar20;
        if (lVar17 != lVar30 || *(long *)(param_1 + 0x298) != lVar22) {
          bVar32 = false;
          ClearExclusiveLocal();
          goto LAB_010fd8b4;
        }
        cVar9 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar32) {
          *plVar20 = lVar30;
          *(long *)(param_1 + 0x294) = lVar22 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar32 = true;
LAB_010fd8b4:
      lVar30 = lVar17;
      lVar22 = *(long *)(param_1 + 0x298);
    } while (!bVar32);
    plVar21 = *(long **)(param_1 + 0x2b0);
    lVar13 = *(long *)(param_1 + 0x2e8);
    if ((lVar13 == 0) || (*plVar21 == local_68)) {
      plVar28 = plVar21;
    }
    else {
      lVar30 = lVar13 * 0x20;
      plVar27 = plVar21;
      do {
        lVar30 = lVar30 + -0x20;
        if (lVar30 == 0) goto LAB_010fd984;
        plVar28 = plVar27 + 4;
        plVar1 = plVar27 + 4;
        plVar27 = plVar28;
      } while (*plVar1 != local_68);
    }
    if (plVar28 != plVar21 + lVar13 * 4) {
      if (((char)plVar28[1] != '\0') && (plVar28[2] == 0)) {
        do {
          lVar13 = *plVar20;
          lVar30 = *(long *)(param_1 + 0x298);
          cVar9 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar32) {
            *plVar20 = lVar13;
            *(long *)(param_1 + 0x298) = lVar30;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        do {
          lVar22 = *plVar20;
          lVar17 = *(long *)(param_1 + 0x298);
          if (lVar22 != lVar13 || lVar17 != lVar30) {
            bVar32 = false;
            ClearExclusiveLocal();
            goto joined_r0x010fda14;
          }
          cVar9 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar32) {
            *plVar20 = lVar13;
            *(long *)(param_1 + 0x294) = lVar30 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar32 = true;
joined_r0x010fda14:
        if (!bVar32) {
          do {
            lVar13 = *plVar20;
            lVar30 = *(long *)(param_1 + 0x298);
            if (lVar13 != lVar22 || lVar30 != lVar17) {
              bVar32 = false;
              ClearExclusiveLocal();
              lVar22 = lVar13;
              lVar17 = lVar30;
              goto joined_r0x010fda14;
            }
            cVar9 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar32) {
              *plVar20 = lVar22;
              *(long *)(param_1 + 0x294) = lVar17 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          bVar32 = true;
          lVar22 = lVar13;
          lVar17 = lVar30;
          goto joined_r0x010fda14;
        }
        nn::os::SignalLightEvent(pLVar16);
        FUN_011a6f34(param_1,local_68);
        if ((*(char *)(param_1 + 0x238) != '\0') &&
           ((*(long *)(param_1 + 0x350) - *(long *)(param_1 + 0x348) >> 4) * -0x79435e50d79435e5 ==
            *(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 3)) {
          FUN_02de25c4(param_1);
        }
        FUN_00e33d50(param_1 + 0x308,&local_68);
        goto joined_r0x010fcd9c;
      }
      if (plVar24[5] != -1) {
        FUN_00e2b4fc(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar28[3] * 0x130 + 0x110));
      }
      if (plVar24[6] != -1) {
        FUN_00e2b4fc(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar28[3] * 0x130 + 0x118));
      }
      if (plVar24[7] != -1) {
        FUN_00ffb5e8(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar28[3] * 0x130 + 0x120));
      }
    }
LAB_010fd984:
    FUN_00e33d50(param_1 + 0x308,&local_68);
    do {
      lVar13 = *plVar20;
      lVar30 = *(long *)(param_1 + 0x298);
      cVar9 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar32) {
        *plVar20 = lVar13;
        *(long *)(param_1 + 0x298) = lVar30;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      lVar22 = *plVar20;
      lVar17 = *(long *)(param_1 + 0x298);
      if (lVar22 != lVar13 || lVar17 != lVar30) {
        bVar32 = false;
        ClearExclusiveLocal();
        goto joined_r0x010fda00;
      }
      cVar9 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar32) {
        *plVar20 = lVar13;
        *(long *)(param_1 + 0x294) = lVar30 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar32 = true;
joined_r0x010fda00:
    if (!bVar32) {
      do {
        lVar13 = *plVar20;
        lVar30 = *(long *)(param_1 + 0x298);
        if (lVar13 != lVar22 || lVar30 != lVar17) {
          bVar32 = false;
          ClearExclusiveLocal();
          lVar22 = lVar13;
          lVar17 = lVar30;
          goto joined_r0x010fda00;
        }
        cVar9 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar32) {
          *plVar20 = lVar22;
          *(long *)(param_1 + 0x294) = lVar17 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar32 = true;
      lVar22 = lVar13;
      lVar17 = lVar30;
      goto joined_r0x010fda00;
    }
  }
  nn::os::SignalLightEvent(pLVar16);
joined_r0x010fcd9c:
  if (!bVar26) {
    *plVar33 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar33 + 1));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  do {
    lVar13 = *plVar31;
    lVar30 = *(long *)(param_1 + 0x538);
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar26) {
      *plVar31 = lVar13;
      *(long *)(param_1 + 0x538) = lVar30;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar31;
    lVar17 = *(long *)(param_1 + 0x538);
    if (lVar22 != lVar13 || lVar17 != lVar30) {
      bVar26 = false;
      ClearExclusiveLocal();
      goto joined_r0x010fcff8;
    }
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar26) {
      *plVar31 = lVar13;
      *(long *)(param_1 + 0x534) = lVar30 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar26 = true;
joined_r0x010fcff8:
  do {
    if (bVar26) {
      nn::os::SignalLightEvent(pLVar18);
      return;
    }
    do {
      lVar13 = *plVar31;
      lVar30 = *(long *)(param_1 + 0x538);
      if (lVar13 != lVar22 || lVar30 != lVar17) {
        bVar26 = false;
        ClearExclusiveLocal();
        lVar22 = lVar13;
        lVar17 = lVar30;
        goto joined_r0x010fcff8;
      }
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar26) {
        *plVar31 = lVar22;
        *(long *)(param_1 + 0x534) = lVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar26 = true;
    lVar22 = lVar13;
    lVar17 = lVar30;
  } while( true );
LAB_010fc984:
  do {
    lVar13 = *plVar31;
    lVar30 = *(long *)(param_1 + 0x538);
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar26) {
      *plVar31 = lVar13;
      *(long *)(param_1 + 0x538) = lVar30;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar22 = *plVar31;
    lVar17 = *(long *)(param_1 + 0x538);
    if (lVar22 != lVar13 || lVar17 != lVar30) {
      bVar26 = false;
      ClearExclusiveLocal();
      goto joined_r0x010fca90;
    }
    cVar9 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar26) {
      *plVar31 = lVar13;
      *(long *)(param_1 + 0x534) = lVar30 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar26 = true;
joined_r0x010fca90:
  if (!bVar26) {
    do {
      lVar13 = *plVar31;
      lVar30 = *(long *)(param_1 + 0x538);
      if (lVar13 != lVar22 || lVar30 != lVar17) {
        bVar26 = false;
        ClearExclusiveLocal();
        lVar22 = lVar13;
        lVar17 = lVar30;
        goto joined_r0x010fca90;
      }
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar26) {
        *plVar31 = lVar22;
        *(long *)(param_1 + 0x534) = lVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar26 = true;
    lVar22 = lVar13;
    lVar17 = lVar30;
    goto joined_r0x010fca90;
  }
  nn::os::SignalLightEvent(pLVar18);
  local_120 = local_68;
  local_130 = param_1;
  lStack_128 = param_2;
  FUN_00d5f508(local_118,param_2);
  FUN_00f338dc(&local_108,param_1);
  puVar34 = local_108 + 0x33;
  fVar6 = *(float *)(param_1 + 0x520);
  uVar29 = *puVar34;
  uVar14 = nn::os::GetCurrentThread();
  if (uVar14 == uVar29) {
    puVar34 = (ulong *)0x0;
    bVar26 = true;
  }
  else {
    uVar14 = nn::os::GetCurrentThread();
    do {
      if (*puVar34 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(local_108 + 0x34));
          while (*puVar34 == 0) {
            cVar9 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(puVar34,0x10);
            if (bVar26) {
              *puVar34 = uVar14;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_010fcb00;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(puVar34,0x10);
      if (bVar26) {
        *puVar34 = uVar14;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_010fcb00:
    bVar26 = false;
  }
  uVar14 = *local_108;
  plVar31 = (long *)(uVar14 + 0x30);
  lVar30 = *plVar31;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar30) {
    if (*(long *)(uVar14 + 0x1f8) == 0) {
      local_a0 = *(long *)(uVar14 + 8);
      FUN_0103caf0(&local_f0,local_a0,&local_a0);
      uVar29 = local_f0;
      local_f0 = 0;
      lVar13 = *(long *)(uVar14 + 0x1f8);
      *(ulong *)(uVar14 + 0x1f8) = uVar29;
      if (lVar13 == 0) {
        *(long *)(uVar14 + 0x210) = local_d8;
        *(ulong *)(uVar14 + 0x208) = local_e0;
        *(ulong *)(uVar14 + 0x200) = local_e8;
      }
      else {
        FUN_0103e9d8(uVar14 + 0x200);
        uVar29 = local_f0;
        *(long *)(uVar14 + 0x210) = local_d8;
        *(ulong *)(uVar14 + 0x208) = local_e0;
        *(ulong *)(uVar14 + 0x200) = local_e8;
        local_f0 = 0;
        if (uVar29 != 0) {
          FUN_0103e9d8(&local_e8);
        }
      }
    }
    local_f0 = 0xffffffff00000003;
    uVar29 = FUN_0103b2e0(uVar14 + 0xe8,&local_f0);
    plVar31 = (long *)(uVar14 + 0x48);
    lVar30 = *plVar31;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar30) {
      plVar31 = (long *)0x0;
      bVar32 = true;
    }
    else {
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar31 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(uVar14 + 0x50));
            while (*plVar31 == 0) {
              cVar9 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar32) {
                *plVar31 = lVar13;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_010fce88;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar9 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar32) {
          *plVar31 = lVar13;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_010fce88:
      bVar32 = false;
    }
    local_d8 = local_130;
    local_d0 = lStack_128;
    local_c8 = local_120;
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    local_f0 = uVar14;
    local_e8 = uVar29;
    local_e0 = uVar14;
    FUN_00f34110(&local_c0,local_118);
    local_a8 = 1;
    puVar5 = *(undefined8 **)(uVar14 + 0x68);
    local_b0 = fVar6;
    if (puVar5 < *(undefined8 **)(uVar14 + 0x70)) {
      uVar36 = *(undefined8 *)(uVar14 + 0x78);
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 != 0) {
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010fd820;
        *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar36;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      }
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = local_f0;
      puVar5[5] = local_e8;
      puVar5[8] = local_d0;
      puVar5[9] = local_c8;
      puVar5[0xb] = 0;
      puVar5[6] = local_e0;
      puVar5[7] = local_d8;
      puVar5[10] = 0;
      FUN_00fd9730(puVar5 + 10,&local_c0);
      puVar5[0xc] = CONCAT44(uStack_ac,local_b0);
      puVar5[0xd] = local_a8;
      *puVar5 = &LAB_02df37d0;
      puVar5[1] = &LAB_02df3a50;
      puVar5[2] = &LAB_02df41c0;
      puVar5[3] = &LAB_02df421c;
      if (lVar13 != 0) {
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      *(undefined8 **)(uVar14 + 0x68) = puVar5 + 0x20;
    }
    else {
      puVar2 = (undefined8 *)(uVar14 + 0x78);
      lVar22 = FUN_0103b290(uVar14 + 0x60,((long)puVar5 - *(long *)(uVar14 + 0x60) >> 8) + 1);
      lVar13 = *(long *)(uVar14 + 0x60);
      lVar30 = *(long *)(uVar14 + 0x68);
      local_88 = 0;
      puStack_80 = puVar2;
      if (lVar22 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,lVar22 << 8,0x10);
        if (lVar17 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xe8))();
        }
      }
      puVar5 = (undefined8 *)(lVar17 + (lVar30 - lVar13 >> 8) * 0x100);
      local_88 = lVar17 + lVar22 * 0x100;
      uVar36 = *puVar2;
      local_a0 = lVar17;
      puStack_98 = puVar5;
      local_90 = puVar5;
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 != 0) {
        if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_010fd820:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar36;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      }
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = local_f0;
      puVar5[5] = local_e8;
      puVar5[6] = local_e0;
      puVar5[10] = 0;
      puVar5[7] = local_d8;
      puVar5[0xb] = 0;
      puVar5[8] = local_d0;
      puVar5[9] = local_c8;
      FUN_00fd9730(puVar5 + 10,&local_c0);
      puVar5[0xc] = CONCAT44(uStack_ac,local_b0);
      puVar5[0xd] = local_a8;
      *puVar5 = &LAB_02df37d0;
      puVar5[1] = &LAB_02df3a50;
      puVar5[2] = &LAB_02df41c0;
      puVar5[3] = &LAB_02df421c;
      if (lVar13 != 0) {
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      local_90 = local_90 + 0x20;
      FUN_0103b38c(uVar14 + 0x60,&local_a0);
      FUN_0103bbd0(&local_a0);
    }
    plVar33 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar20 = local_c0 + 3;
      do {
        sVar7 = (short)*plVar20;
        cVar9 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar8) {
          *(short *)plVar20 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        piVar3 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar12 = *piVar3;
          cVar9 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_a0 = *plVar33;
          FUN_00c44438(lVar13 + 0x8040,&local_a0);
        }
      }
      else if (sVar7 == 0) goto LAB_010fd7f8;
    }
    if (!bVar32) {
      *plVar31 = 0;
      pLVar18 = (LightEventType *)(plVar31 + 1);
      goto LAB_010fd428;
    }
  }
  else {
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar31 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(uVar14 + 0x38));
          while (*plVar31 == 0) {
            cVar9 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar32) {
              *plVar31 = lVar13;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_010fcb3c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar32) {
        *plVar31 = lVar13;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_010fcb3c:
    lVar13 = *(long *)(uVar14 + 0x1f8);
    if (lVar13 == 0) {
      local_a0 = *(long *)(uVar14 + 8);
      FUN_0103caf0(&local_f0,local_a0,&local_a0);
      uVar29 = local_f0;
      local_f0 = 0;
      lVar13 = *(long *)(uVar14 + 0x1f8);
      *(ulong *)(uVar14 + 0x1f8) = uVar29;
      if (lVar13 == 0) {
        *(long *)(uVar14 + 0x210) = local_d8;
        *(ulong *)(uVar14 + 0x208) = local_e0;
        *(ulong *)(uVar14 + 0x200) = local_e8;
        local_f0 = 0;
      }
      else {
        FUN_0103e9d8(uVar14 + 0x200);
        uVar29 = local_f0;
        *(long *)(uVar14 + 0x210) = local_d8;
        *(ulong *)(uVar14 + 0x208) = local_e0;
        *(ulong *)(uVar14 + 0x200) = local_e8;
        local_f0 = 0;
        if (uVar29 != 0) {
          FUN_0103e9d8(&local_e8);
        }
      }
      lVar13 = *(long *)(uVar14 + 0x1f8);
    }
    local_a0 = CONCAT44(local_a0._4_4_,fVar6);
    uVar15 = FUN_02df4278(lVar13 + 8,&local_130);
    plVar31 = (long *)(lVar13 + 0xc0);
    lVar30 = *plVar31;
    lVar22 = *(long *)(lVar13 + 200) - lVar30 >> 3;
    uVar29 = lVar22 * -0x5555555555555555;
    local_f0 = uVar15;
    if (uVar29 <= uVar15) {
      uVar35 = uVar15 + 1;
      lVar22 = uVar35 + lVar22 * 0x5555555555555555;
      if (uVar35 < uVar29 || lVar22 == 0) {
        if (uVar35 < uVar29) {
          *(ulong *)(lVar13 + 200) = lVar30 + uVar35 * 0x18;
        }
      }
      else {
        FUN_00e93f30(plVar31,lVar22);
        lVar30 = *plVar31;
      }
    }
    *(undefined1 *)(lVar30 + uVar15 * 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar13 + 0xc0) + uVar15 * 0x18 + 8) = 1;
    uVar10 = (undefined4)local_a0;
    *(undefined4 *)(*(long *)(lVar13 + 0xc0) + uVar15 * 0x18 + 0x10) = (undefined4)local_a0;
    uVar35 = *(ulong *)(lVar13 + 0x130);
    uVar29 = uVar35 + 1;
    plVar31 = (long *)(lVar13 + 0xf8);
    *(ulong *)(lVar13 + 0x130) = uVar29;
    if (uVar35 == 0) {
      if (*(long *)(lVar13 + 0x100) - (long)*(ulong **)(lVar13 + 0xf8) >> 4 == 0) {
        FUN_0103e0a0(plVar31,&local_f0,&local_a0);
      }
      else {
        **(ulong **)(lVar13 + 0xf8) = uVar15;
        *(undefined4 *)(*plVar31 + 8) = (undefined4)local_a0;
      }
    }
    else {
      pvVar19 = *(void **)(lVar13 + 0xf8);
      uVar23 = *(long *)(lVar13 + 0x100) - (long)pvVar19 >> 4;
      if (*(float *)((long)pvVar19 + (uVar35 - 1) * 0x10 + 8) <= fVar6) {
        if (uVar23 < uVar29) {
          FUN_0103e0a0(plVar31,&local_f0,&local_a0);
          goto LAB_010fd23c;
        }
        *(ulong *)((long)pvVar19 + uVar35 * 0x10) = uVar15;
        lVar13 = *plVar31 + uVar35 * 0x10;
      }
      else {
        if (uVar23 <= uVar29 && uVar29 - uVar23 != 0) {
          FUN_0103e51c(plVar31,uVar29 - uVar23);
          pvVar19 = (void *)*plVar31;
        }
        if (*(float *)((long)pvVar19 + 8) <= fVar6) {
          uVar11 = uVar35 - 1;
          uVar23 = uVar35 - 2;
          uVar29 = 1;
          while (uVar37 = uVar11, 2 < uVar23) {
            uVar4 = uVar29 + (long)((float)uVar23 * 0.5);
            uVar11 = uVar4;
            uVar23 = (long)((float)uVar23 * 0.5);
            if (*(float *)((long)pvVar19 + uVar4 * 0x10 + 8) <= fVar6) {
              uVar11 = uVar37;
              uVar23 = uVar37 - uVar4;
              uVar29 = uVar4;
            }
          }
          if (uVar37 <= uVar35 && uVar29 <= uVar37) {
            pfVar25 = (float *)((long)pvVar19 + uVar37 * 0x10 + 8);
            while (fVar6 < *pfVar25) {
              uVar37 = uVar37 - 1;
              if ((uVar37 < uVar29) || (pfVar25 = pfVar25 + -4, uVar35 < uVar37)) goto LAB_010fd200;
            }
            uVar37 = uVar37 + 1;
          }
LAB_010fd200:
          if (uVar37 <= uVar35 && uVar29 <= uVar37) {
            uVar29 = uVar37;
          }
          pvVar19 = (void *)((long)pvVar19 + uVar29 * 0x10);
          memmove((void *)((long)pvVar19 + 0x10),pvVar19,(uVar35 - uVar29) * 0x10);
          *(ulong *)(*plVar31 + uVar29 * 0x10) = uVar15;
          lVar13 = *plVar31 + uVar29 * 0x10;
        }
        else {
          memmove((void *)((long)pvVar19 + 0x10),pvVar19,uVar35 << 4);
          *(ulong *)*plVar31 = uVar15;
          lVar13 = *plVar31;
        }
      }
      *(undefined4 *)(lVar13 + 8) = uVar10;
    }
LAB_010fd23c:
    local_f0 = 3;
    do {
      lVar13 = *(long *)(uVar14 + 0x160) - *(long *)(uVar14 + 0x158);
      local_e8 = uVar15;
      if (lVar13 == 0) {
        uVar29 = *(long *)(uVar14 + 0xf0) - *(long *)(uVar14 + 0xe8) >> 4;
        FUN_0103b268(uVar14 + 0xe8,&local_f0);
        goto LAB_010fd2d4;
      }
      uVar29 = *(ulong *)(*(long *)(uVar14 + 0x160) + -8);
      *(long *)(uVar14 + 0x160) = lVar13 + *(long *)(uVar14 + 0x158) + -8;
      uVar35 = uVar29 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(*(long *)(uVar14 + 0x120) + uVar35) =
           *(ulong *)(*(long *)(uVar14 + 0x120) + uVar35) &
           (1L << (uVar29 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((ulong)(*(long *)(uVar14 + 0xf0) - *(long *)(uVar14 + 0xe8) >> 4) <= uVar29);
    puVar5 = (undefined8 *)(*(long *)(uVar14 + 0xe8) + uVar29 * 0x10);
    *puVar5 = 3;
    puVar5[1] = uVar15;
    if (*(ulong *)(uVar14 + 400) <= uVar29) {
LAB_010fd2d4:
      *(ulong *)(uVar14 + 400) = uVar29 + 1;
    }
    pLVar18 = (LightEventType *)(uVar14 + 0x38);
    *(undefined8 *)(uVar14 + 0x30) = 0;
LAB_010fd428:
    nn::os::SignalLightEvent(pLVar18);
  }
  local_f0 = uVar29;
  FUN_0103bd9c(local_108 + 0x36,&local_f0);
  if (!bVar26) {
    *puVar34 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar34 + 1));
  }
  *(float *)(param_1 + 0x520) = fVar6 + 0.01;
  if (local_f8 != '\0') {
    *local_100 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_100 + 1));
  }
  if (local_118[0] != (ulong *)0x0) {
    puVar34 = local_118[0] + 3;
    do {
      sVar7 = (short)*puVar34;
      cVar9 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(puVar34,0x10);
      if (bVar26) {
        *(short *)puVar34 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar3 = (int *)((long)local_118[0] + 0x1c);
      do {
        iVar12 = *piVar3;
        cVar9 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar26) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_f0 = *local_118[0];
        FUN_00c44438(lVar13 + 0x8040,&local_f0);
      }
    }
    else if (sVar7 == 0) {
LAB_010fd7f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


