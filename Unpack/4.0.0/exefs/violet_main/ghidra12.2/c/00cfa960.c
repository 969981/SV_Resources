/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cfa960; name: FUN_00cfa960
 */


void FUN_00cfa960(undefined4 *param_1,long param_2,long param_3,long param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *local_68;
  
  plVar1 = (long *)(param_2 + 0x10);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar1;
    lVar13 = *(long *)(param_2 + 0x18);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar15;
      *(long *)(param_2 + 0x18) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00cfa9b0:
  while ((lVar15 != 0 && (lVar9 != lVar15))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x20));
    do {
      lVar15 = *plVar1;
      lVar13 = *(long *)(param_2 + 0x18);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar15;
        *(long *)(param_2 + 0x18) = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar15 || *(long *)(param_2 + 0x18) != lVar13) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cfa9e0;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar15;
      *(long *)(param_2 + 0x14) = lVar13 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00cfa9e0:
  if (!bVar8) {
    lVar15 = lVar4;
    lVar13 = *(long *)(param_2 + 0x18);
    goto LAB_00cfa9b0;
  }
  uVar14 = *(ulong *)(param_2 + 0xa8);
  if (uVar14 != 0) {
    uVar16 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar12 = *(ulong *)(param_3 + 8);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar14 - 1 & uVar12;
    }
    else if (uVar12 < uVar14) {
      uVar17 = uVar12;
    }
    else {
      uVar17 = 0;
      if (uVar14 != 0) {
        uVar17 = uVar12 / uVar14;
      }
      uVar17 = uVar12 - uVar17 * uVar14;
    }
    plVar18 = *(long **)(*(long *)(param_2 + 0xa0) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == uVar12) {
            if (plVar18[2] == uVar12) goto LAB_00cfab0c;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar12) {
            if (plVar18[2] == uVar12) goto LAB_00cfab0c;
          }
          else {
            if (uVar14 <= uVar16) {
              uVar7 = 0;
              if (uVar14 != 0) {
                uVar7 = uVar16 / uVar14;
              }
              uVar16 = uVar16 - uVar7 * uVar14;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  local_68 = (long *)0x0;
  goto LAB_00cfaaa4;
code_r0x00cfab2c:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00cfab34;
  goto LAB_00cfab24;
LAB_00cfab0c:
  plVar18 = (long *)plVar18[3];
  local_68 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 5;
    lVar9 = nn::os::GetCurrentThread();
LAB_00cfab24:
    if (*plVar2 == 0) goto code_r0x00cfab2c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar18 + 6));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar18 + 6));
          while (*plVar2 == 0) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00cfab34;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00cfab34:
    if (plVar18[3] != 0) {
      plVar18[3] = plVar18[3] + -1;
    }
    lVar9 = plVar18[8];
    if (lVar9 == 0) {
LAB_00cfab6c:
      uVar14 = plVar18[2];
      if (lVar9 + 1U <= uVar14) {
        plVar18[8] = lVar9 + 1U;
        plVar18[lVar9 + 9] = param_4;
        uVar14 = plVar18[2];
      }
      if (uVar14 == 0) {
        bVar8 = false;
      }
      else {
        bVar8 = plVar18[8] == uVar14;
      }
    }
    else {
      lVar15 = 0;
      while (plVar18[lVar15 + 9] != param_4) {
        lVar15 = lVar15 + 1;
        if (lVar9 == lVar15) goto LAB_00cfab6c;
      }
      bVar8 = plVar18[2] != 0 && lVar9 == plVar18[2];
    }
    plVar18[5] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 6));
    lVar15 = param_2 + (long)param_5 * 0x38;
    lVar9 = lVar15 + 0x1e8;
    if (!bVar8) {
      lVar9 = lVar15 + 0x108;
    }
    FUN_00cfade8(lVar9,&local_68);
    uVar11 = 1;
    if ((*(byte *)(*plVar18 + 0x1e8) & 1) == 0) {
      uVar11 = 2;
    }
    *param_1 = uVar11;
    lVar9 = *local_68;
    *(long *)(param_1 + 2) = lVar9;
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar3 = (short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar10;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    goto LAB_00cfac28;
  }
LAB_00cfaaa4:
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
LAB_00cfac28:
  do {
    lVar9 = *plVar1;
    lVar15 = *(long *)(param_2 + 0x18);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x18) = lVar15;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar13 = *plVar1;
    lVar4 = *(long *)(param_2 + 0x18);
    if (lVar13 != lVar9 || lVar4 != lVar15) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cfac64;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x14) = lVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00cfac64:
  if (!bVar8) {
    do {
      lVar9 = *plVar1;
      lVar15 = *(long *)(param_2 + 0x18);
      if (lVar9 != lVar13 || lVar15 != lVar4) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cfad40;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13;
        *(long *)(param_2 + 0x14) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x00cfad40:
    if (!bVar8) {
      do {
        lVar13 = *plVar1;
        lVar4 = *(long *)(param_2 + 0x18);
        if (lVar13 != lVar9 || lVar4 != lVar15) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar9 = lVar13;
          lVar15 = lVar4;
          goto joined_r0x00cfad40;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x14) = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar9 = lVar13;
      lVar15 = lVar4;
      goto joined_r0x00cfad40;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x20));
  return;
}


