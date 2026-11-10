/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e29aac; name: FUN_01e29aac
 */


void FUN_01e29aac(long param_1,ulong *param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  bool bVar18;
  
  plVar8 = (long *)(param_1 + 0x178);
  lVar17 = *plVar8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar17) {
    lVar6 = nn::os::GetCurrentThread();
LAB_01e29c84:
    if (*plVar8 == 0) goto code_r0x01e29c8c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
          while (*plVar8 == 0) {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar16) {
              *plVar8 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01e29c94;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar16) {
        *plVar8 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e29c94:
    bVar16 = false;
    goto LAB_01e29aec;
  }
  plVar8 = (long *)0x0;
  bVar16 = true;
LAB_01e29aec:
  uVar10 = *(ulong *)(param_1 + 0x30);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x28) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01e29be0;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == uVar9) {
            if (plVar14[2] == uVar9) goto LAB_01e29be0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_01e29b4c;
code_r0x01e29c8c:
  cVar3 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar16) {
    *plVar8 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e29c94;
  goto LAB_01e29c84;
LAB_01e29d0c:
  if (*plVar7 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xf0));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xf0));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar18) {
              *plVar7 = lVar17;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01e29d1c;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar18) {
        *plVar7 = lVar17;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e29d1c:
    bVar18 = false;
LAB_01e29d20:
    plVar7 = (long *)FUN_01e29e60(*(undefined8 *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0x108));
    if ((*(long **)(lVar6 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_01e29e60(*(undefined8 *)(lVar6 + 0x138),*(undefined8 *)(lVar6 + 0x140));
      if (*(long **)(lVar6 + 0x140) == plVar7) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*plVar7 != 0) {
          lVar17 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar17 = *plVar7 + -0x20;
    }
    if (!bVar18) {
      *(undefined8 *)(lVar6 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xf0));
    }
    uVar5 = FUN_00e97824(*(undefined8 *)(plVar14[6] + 8));
    FUN_01e29f74(lVar17,param_3 & 1,uVar5);
    lVar17 = *(long *)(lVar6 + 8);
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar3 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_01e29b4c;
  }
  cVar3 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar18) {
    *plVar7 = lVar17;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e29d1c;
  goto LAB_01e29d0c;
LAB_01e29be0:
  lVar6 = *(long *)(plVar14[6] + 0x28);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar13 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e29c24;
        bVar18 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e29c24:
        bVar18 = false;
      }
      if (bVar18) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xe8);
          lVar15 = *plVar7;
          lVar17 = nn::os::GetCurrentThread();
          if (lVar17 != lVar15) {
            lVar17 = nn::os::GetCurrentThread();
            goto LAB_01e29d0c;
          }
          bVar18 = true;
          goto LAB_01e29d20;
        }
        break;
      }
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
LAB_01e29b4c:
  if (!bVar16) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    return;
  }
  return;
}


