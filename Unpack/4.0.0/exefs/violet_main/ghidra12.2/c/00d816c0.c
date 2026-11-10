/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d816c0; name: FUN_00d816c0
 */


void FUN_00d816c0(long *param_1,long param_2,char *param_3,ulong *param_4)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  if (*param_3 == '\0') {
    *param_1 = 0;
    return;
  }
  plVar1 = (long *)(param_2 + 0xd70);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_2 + 0xd78);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0xd78) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8170c:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xd80));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_2 + 0xd78);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0xd78) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_2 + 0xd78) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00d8173c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0xd74) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00d8173c:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar11 = *(long *)(param_2 + 0xd78);
    goto LAB_00d8170c;
  }
  uVar12 = *(ulong *)(*(long *)(param_2 + 0x38) + (long)*(int *)(param_3 + 4) * 0x1d0 + 0x158);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar10 = *param_4;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & uVar10;
    }
    else if (uVar10 < uVar12) {
      uVar14 = uVar10;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar10 / uVar12;
      }
      uVar14 = uVar10 - uVar14 * uVar12;
    }
    plVar15 = *(long **)(*(long *)(*(long *)(param_2 + 0x38) + (long)*(int *)(param_3 + 4) * 0x1d0 +
                                  0x150) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_00d81860;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_00d81860;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar6 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_00d81888:
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0xd78);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xd78) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_2 + 0xd78);
    if (lVar11 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00d818c4;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xd74) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00d818c4:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0xd78);
      if (lVar7 != lVar11 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d8192c;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0xd74) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x00d8192c:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_2 + 0xd78);
        if (lVar11 != lVar7 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar9 = lVar3;
          goto joined_r0x00d8192c;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0xd74) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar9 = lVar3;
      goto joined_r0x00d8192c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xd80));
  return;
LAB_00d81860:
  lVar7 = plVar15[6];
  *param_1 = lVar7;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  goto LAB_00d81888;
}


