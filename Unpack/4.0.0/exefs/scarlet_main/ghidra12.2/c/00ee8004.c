/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee8004; name: FUN_00ee8004
 */


void FUN_00ee8004(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  LightEventType *pLVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar1 = (long *)(param_1 + 0x90);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      return;
    }
    *(char *)(param_1 + 0xa8) = '\x01';
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x98));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00ee8050;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00ee8050:
    if (*(char *)(param_1 + 0xa8) != '\0') {
      pLVar4 = (LightEventType *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = 0;
      goto LAB_00ee8454;
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x98));
  }
  plVar8 = (long *)(param_1 + 0x78);
  lVar3 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ee80cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00ee80cc:
  plVar8 = (long *)(param_1 + 0x658);
  lVar3 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x660));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ee80f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00ee80f0:
  lVar5 = *(long *)(param_1 + 0x6b8);
  *(ulong *)(param_1 + 0x6b8) = (ulong)~(uint)lVar5 & 1;
  *(undefined8 *)(param_1 + 0x658) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x660));
  plVar8 = (long *)(param_1 + 0x670);
  lVar3 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x678));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ee8134;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00ee8134:
  uVar9 = *(ulong *)(param_1 + 0x6c0);
  *(ulong *)(param_1 + 0x6c0) = uVar9 & 1 ^ 3;
  *(undefined8 *)(param_1 + 0x670) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x678));
  plVar8 = (long *)(param_1 + 0x688);
  lVar3 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x690));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ee8178;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00ee8178:
  uVar10 = *(ulong *)(param_1 + 0x6c8);
  *(ulong *)(param_1 + 0x6c8) = uVar10 & 1 ^ 5;
  *(undefined8 *)(param_1 + 0x688) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x690));
  plVar8 = (long *)(param_1 + 0x6a0);
  lVar3 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6a8));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ee81c0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar7) {
      *plVar8 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00ee81c0:
  uVar6 = *(ulong *)(param_1 + 0x6d0);
  *(ulong *)(param_1 + 0x6d0) = uVar6 & 1 ^ 7;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6a8));
  if (*(long *)(param_1 + 0x1d0) != 0) {
    lVar3 = *(long *)(*(long *)(**(long **)(param_1 + 0x1e8) + 0x400) +
                     (*(long **)(param_1 + 0x1e8))[2] * 8);
    *(bool *)(param_1 + 0x58) =
         (ulong)(*(long *)(lVar3 + 0x3b8) - *(long *)(lVar3 + 0x3b0) >> 3) < 0x101;
    lVar3 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f0) + 0x400) +
                     (*(long **)(param_1 + 0x1f0))[2] * 8);
    *(bool *)(param_1 + 0x59) =
         (ulong)(*(long *)(lVar3 + 0x3b8) - *(long *)(lVar3 + 0x3b0) >> 3) < 0x101;
    lVar3 = *(long *)(*(long *)(**(long **)(param_1 + 0x1f8) + 0x400) +
                     (*(long **)(param_1 + 0x1f8))[2] * 8);
    *(bool *)(param_1 + 0x5a) =
         (ulong)(*(long *)(lVar3 + 0x3b8) - *(long *)(lVar3 + 0x3b0) >> 3) < 0x101;
  }
  *(undefined4 *)(param_1 + 0x520) = 0x3dcccccd;
  lVar3 = param_1 + 0x558;
  FUN_00d7576c(*(undefined8 *)(lVar3 + lVar5 * 0x20));
  *(undefined4 *)(param_1 + 0x524) = 0x3dcccccd;
  FUN_00d7576c(*(undefined8 *)(lVar3 + uVar9 * 0x20));
  *(undefined4 *)(param_1 + 0x528) = 0x3dcccccd;
  FUN_00d7576c(*(undefined8 *)(lVar3 + uVar10 * 0x20));
  *(undefined4 *)(param_1 + 0x52c) = 0x3dcccccd;
  FUN_00d7576c(*(undefined8 *)(lVar3 + uVar6 * 0x20));
  plVar8 = (long *)(param_1 + 0x948);
  lVar5 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar8 = (long *)0x0;
    bVar7 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x950));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00ee82fc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00ee82fc:
    bVar7 = false;
  }
  if (*(long *)(param_1 + 0x998) != 0) {
    lVar3 = *(long *)(param_1 + 0x960);
    do {
      if (*(char *)(lVar3 + 8) == '\0') {
        lVar3 = FUN_02de539c(param_1 + 0x960);
      }
      else {
        *(undefined1 *)(lVar3 + 8) = 0;
        lVar3 = lVar3 + 0x10;
      }
    } while (*(long *)(param_1 + 0x960) + *(long *)(param_1 + 0x998) * 0x10 != lVar3);
  }
  if (!bVar7) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  plVar8 = (long *)(param_1 + 0x730);
  lVar5 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar8 = (long *)0x0;
    bVar7 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x738));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00ee8380;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00ee8380:
    bVar7 = false;
  }
  uVar9 = *(ulong *)(param_1 + 0x780);
  if (uVar9 != 0) {
    lVar5 = *(long *)(param_1 + 0x748);
    lVar3 = lVar5;
    do {
      if (*(long *)(lVar3 + 8) == 0) {
        uVar10 = lVar3 - lVar5 >> 4;
        if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("index < m_end","erase",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
                     ,0x391,"FlatHashTable::erase iterator out of bounds");
        }
        uVar6 = uVar10 + 1;
        if (uVar6 < (ulong)(*(long *)(param_1 + 0x750) - lVar5 >> 4)) {
          memmove((void *)(lVar5 + uVar10 * 0x10),(void *)(lVar5 + uVar6 * 0x10),
                  (uVar9 - uVar6) * 0x10);
          uVar9 = *(ulong *)(param_1 + 0x780);
          lVar5 = *(long *)(param_1 + 0x748);
        }
        uVar9 = uVar9 - 1;
        *(ulong *)(param_1 + 0x780) = uVar9;
        lVar3 = lVar5 + uVar10 * 0x10;
      }
      else {
        lVar3 = lVar3 + 0x10;
      }
    } while (lVar5 + uVar9 * 0x10 != lVar3);
  }
  if (!bVar7) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x98));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00ee8434;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00ee8434:
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x98));
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  pLVar4 = (LightEventType *)(param_1 + 0x80);
LAB_00ee8454:
  nn::os::SignalLightEvent(pLVar4);
  return;
}


