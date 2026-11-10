/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02de4b94; name: FUN_02de4b94
 */


void FUN_02de4b94(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long local_60;
  long lStack_58;
  
  plVar2 = (long *)(param_1 + 0x530);
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar2 != 0 || *(long *)(param_1 + 0x538) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x540));
        while (*plVar2 == 0 && *(long *)(param_1 + 0x538) == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar11) {
            *plVar2 = lVar7;
            *(undefined8 *)(param_1 + 0x538) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02de4bdc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar7;
      *(undefined8 *)(param_1 + 0x538) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02de4bdc:
  plVar16 = (long *)(param_1 + 0x6d8);
  lVar15 = *plVar16;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar15) {
    plVar16 = (long *)0x0;
    bVar11 = true;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar16 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6e0));
          while (*plVar16 == 0) {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar11) {
              *plVar16 = lVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02de4c08;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = lVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02de4c08:
    bVar11 = false;
  }
  plVar9 = *(long **)(param_1 + 0x6f0);
  uVar8 = *(ulong *)(param_1 + 0x728);
  if ((uVar8 == 0) || (*plVar9 == param_2)) {
    plVar10 = plVar9;
  }
  else {
    lVar7 = uVar8 * 0x10;
    plVar13 = plVar9;
    do {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) {
        plVar10 = plVar9 + uVar8 * 2;
        break;
      }
      plVar14 = plVar13 + 2;
      plVar10 = plVar13 + 2;
      plVar13 = plVar13 + 2;
    } while (*plVar14 != param_2);
  }
  if (plVar9 + uVar8 * 2 == plVar10) {
LAB_02de4e74:
    if (bVar11) goto LAB_02de4e84;
  }
  else {
    uVar12 = (long)plVar10 - (long)plVar9 >> 4;
    if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("index < m_end","erase",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                 ,0x391,"FlatHashTable::erase iterator out of bounds");
    }
    uVar3 = uVar12 + 1;
    if (uVar3 < (ulong)(*(long *)(param_1 + 0x6f8) - (long)plVar9 >> 4)) {
      memmove(plVar9 + uVar12 * 2,plVar9 + uVar3 * 2,(uVar8 - uVar3) * 0x10);
      uVar8 = *(ulong *)(param_1 + 0x728);
    }
    *(ulong *)(param_1 + 0x728) = uVar8 - 1;
    if (!bVar11) {
      *plVar16 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
    }
    plVar16 = (long *)(param_1 + 0x948);
    lVar15 = *plVar16;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar15) {
      plVar16 = (long *)0x0;
      bVar11 = true;
    }
    else {
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x950));
            while (*plVar16 == 0) {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar11) {
                *plVar16 = lVar7;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                bVar11 = false;
                goto LAB_02de4cd8;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
        bVar11 = false;
      } while (cVar6 != '\0');
    }
LAB_02de4cd8:
    plVar9 = *(long **)(param_1 + 0x960);
    lVar7 = *(long *)(param_1 + 0x998);
    if ((lVar7 == 0) || (*plVar9 == param_3)) {
      plVar10 = plVar9;
    }
    else {
      lVar15 = lVar7 * 0x10;
      plVar13 = plVar9;
      do {
        lVar15 = lVar15 + -0x10;
        if (lVar15 == 0) goto LAB_02de4cfc;
        plVar10 = plVar13 + 2;
        plVar14 = plVar13 + 2;
        plVar13 = plVar10;
      } while (*plVar14 != param_3);
    }
    if (plVar10 != plVar9 + lVar7 * 2) {
      *(undefined1 *)(plVar10 + 1) = 1;
    }
LAB_02de4cfc:
    if (!bVar11) {
      *plVar16 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
    }
    plVar16 = (long *)(param_1 + 0x8f0);
    lVar15 = *plVar16;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar15) {
      plVar16 = (long *)0x0;
      bVar11 = true;
    }
    else {
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8f8));
            while (*plVar16 == 0) {
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar11) {
                *plVar16 = lVar7;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02de4d38;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = lVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02de4d38:
      bVar11 = false;
    }
    plVar10 = *(long **)(param_1 + 0x908);
    lVar7 = *(long *)(param_1 + 0x940);
    plVar9 = plVar10 + lVar7 * 2;
    if ((lVar7 == 0) || (*plVar10 == param_2)) {
      plVar13 = plVar10;
    }
    else {
      lVar15 = lVar7 * 0x10;
      plVar14 = plVar10;
      do {
        lVar15 = lVar15 + -0x10;
        if (lVar15 == 0) {
          plVar13 = plVar9;
          break;
        }
        plVar1 = plVar14 + 2;
        plVar13 = plVar14 + 2;
        plVar14 = plVar14 + 2;
      } while (*plVar1 != param_2);
    }
    local_60 = param_2;
    lStack_58 = param_3;
    if (plVar9 == plVar13) {
      if (lVar7 == *(long *)(param_1 + 0x910) - (long)plVar10 >> 4) {
        FUN_0103c76c(param_1 + 0x908,&local_60);
      }
      else {
        *plVar9 = param_2;
        plVar9[1] = param_3;
      }
      *(long *)(param_1 + 0x940) = *(long *)(param_1 + 0x940) + 1;
      goto LAB_02de4e74;
    }
    *plVar13 = param_2;
    plVar13[1] = param_3;
    if (bVar11) goto LAB_02de4e84;
  }
  *plVar16 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
LAB_02de4e84:
  do {
    lVar7 = *plVar2;
    lVar15 = *(long *)(param_1 + 0x538);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar7;
      *(long *)(param_1 + 0x538) = lVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar4 = *plVar2;
    lVar5 = *(long *)(param_1 + 0x538);
    if (lVar4 != lVar7 || lVar5 != lVar15) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x02de4ec0;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = 0;
      *(long *)(param_1 + 0x534) = lVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
joined_r0x02de4ec0:
  do {
    if (bVar11) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x540));
      return;
    }
    do {
      lVar7 = *plVar2;
      lVar15 = *(long *)(param_1 + 0x538);
      if (lVar7 != lVar4 || lVar15 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar4 = lVar7;
        lVar5 = lVar15;
        goto joined_r0x02de4ec0;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = 0;
        *(long *)(param_1 + 0x534) = lVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
    lVar4 = lVar7;
    lVar5 = lVar15;
  } while( true );
}


