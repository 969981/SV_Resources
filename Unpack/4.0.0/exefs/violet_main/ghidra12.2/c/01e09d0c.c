/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e09d0c; name: FUN_01e09d0c
 */


void FUN_01e09d0c(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  short sVar13;
  long lVar14;
  bool bVar15;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return;
  }
  lVar8 = *param_1;
  if (*(short *)(lVar5 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar5 + 0x1a);
  sVar13 = *(short *)(lVar5 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar13) {
      cVar3 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01e09d80;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e09d80:
      bVar15 = false;
    }
    if (bVar15) {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        return;
      }
      uVar7 = 0;
      if (*param_2 != 0) {
        lVar6 = *(long *)(*param_2 + 0x10);
        uVar7 = 0;
        if (lVar6 != 0) {
          uVar7 = lVar6 - 0x28;
        }
      }
      uVar10 = *(ulong *)(lVar8 + 200);
      if (uVar10 == 0) goto LAB_01e09e68;
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & uVar7;
      }
      else if (uVar7 < uVar10) {
        uVar12 = uVar7;
      }
      else {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar7 / uVar10;
        }
        uVar12 = uVar7 - uVar12 * uVar10;
      }
      plVar9 = *(long **)(*(long *)(lVar8 + 0xc0) + uVar12 * 8);
      if ((plVar9 == (long *)0x0) || (plVar9 = (long *)*plVar9, plVar9 == (long *)0x0))
      goto LAB_01e09e68;
      if (1 < uVar11) break;
      goto LAB_01e09f1c;
    }
    sVar13 = sVar2;
    if (sVar2 == 0) {
      return;
    }
  } while( true );
  do {
    uVar11 = plVar9[1];
    if (uVar11 == uVar7) {
      if (plVar9[2] == uVar7) goto LAB_01e09e40;
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
    plVar9 = (long *)*plVar9;
  } while (plVar9 != (long *)0x0);
  goto LAB_01e09e68;
  while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
LAB_01e09f1c:
    if (plVar9[1] == uVar7) {
      if (plVar9[2] == uVar7) goto LAB_01e09e40;
    }
    else if ((plVar9[1] & uVar10 - 1) != uVar12) break;
  }
  goto LAB_01e09e68;
LAB_01e09fc4:
  if (*plVar9 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
          while (*plVar9 == 0) {
            cVar3 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar15) {
              *plVar9 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01e09fd4;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar15) {
        *plVar9 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e09fd4:
    bVar15 = false;
LAB_01e09fd8:
    plVar9 = (long *)FUN_01174b20(*(undefined8 *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0x108));
    if ((*(long **)(lVar8 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_01174b20(*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140));
      if (*(long **)(lVar8 + 0x140) == plVar9) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (*plVar9 != 0) {
          lVar6 = *plVar9 + -0x20;
        }
      }
    }
    else {
      lVar6 = *plVar9 + -0x20;
    }
    if (!bVar15) {
      *(undefined8 *)(lVar8 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
    }
    if (lVar6 != 0) {
      FUN_01e0a0b0(lVar6,1);
    }
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
    goto LAB_01e09e68;
  }
  cVar3 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar15) {
    *plVar9 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e09fd4;
  goto LAB_01e09fc4;
LAB_01e09e40:
  if ((((*(uint *)((long)plVar9 + 0x3c) < 0x10) &&
       ((1 << (ulong)(*(uint *)((long)plVar9 + 0x3c) & 0x1f) & 0xfe36U) != 0)) &&
      (lVar8 = plVar9[5], lVar8 != 0)) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar13 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e09f8c;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e09f8c:
        bVar15 = false;
      }
      if (bVar15) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xe8);
          lVar14 = *plVar9;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 == lVar14) {
            bVar15 = true;
            goto LAB_01e09fd8;
          }
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_01e09fc4;
        }
        break;
      }
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
LAB_01e09e68:
  FUN_00dec528(lVar5 + 0x18,param_1[1]);
  lVar8 = *(long *)(lVar5 + 8);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar3 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e09f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
    return;
  }
  if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


