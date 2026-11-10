/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6fa08; name: FUN_00c6fa08
 */


void FUN_00c6fa08(long param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  
  iVar5 = *(int *)(param_1 + 0x194);
  if (iVar5 == param_2) {
    return;
  }
  *(int *)(param_1 + 0x194) = param_2;
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x1b8);
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x1b8) = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00c6fa60:
  while ((lVar10 != 0 && (lVar8 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x1b8);
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x1b8) = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar10 || *(long *)(param_1 + 0x1b8) != lVar11) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00c6fa90;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x1b4) = lVar11 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_00c6fa90:
  if (!bVar9) {
    lVar10 = lVar3;
    lVar11 = *(long *)(param_1 + 0x1b8);
    goto LAB_00c6fa60;
  }
  plVar4 = *(long **)(param_1 + 0x1e0);
  for (plVar14 = *(long **)(param_1 + 0x1d8); plVar14 != plVar4; plVar14 = plVar14 + 2) {
    lVar8 = *plVar14;
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar8 + 0x1a);
      sVar12 = *(short *)(lVar8 + 0x1a);
      do {
        sVar6 = *psVar2;
        if (sVar6 == sVar12) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_00c6fbfc;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00c6fbfc:
          bVar9 = false;
        }
        if (bVar9) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 != 0) {
            plVar13 = (long *)(lVar8 + -0x28);
            (**(code **)(*(long *)(lVar8 + -0x28) + 0x68))(plVar13,param_4,iVar5,param_2,param_3);
            lVar8 = *(long *)(lVar8 + 8);
            psVar2 = (short *)(lVar8 + 0x1a);
            do {
              sVar12 = *psVar2;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar9) {
                *psVar2 = sVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))(plVar13);
            }
            else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar12 = sVar6;
      } while (sVar6 != 0);
    }
  }
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x1b8);
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x1b8) = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x1b8);
    if (lVar11 != lVar8 || lVar3 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00c6fb18;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x1b4) = lVar10 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_00c6fb18:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x1b8);
      if (lVar8 != lVar11 || lVar10 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c6fb84;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x1b4) = lVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar9 = true;
joined_r0x00c6fb84:
    if (!bVar9) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x1b8);
        if (lVar11 != lVar8 || lVar3 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar11;
          lVar10 = lVar3;
          goto joined_r0x00c6fb84;
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x1b4) = lVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar9 = true;
      lVar8 = lVar11;
      lVar10 = lVar3;
      goto joined_r0x00c6fb84;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


