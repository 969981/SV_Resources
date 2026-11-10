/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e7a84; name: FUN_013e7a84
 */


void FUN_013e7a84(long param_1)

{
  long *plVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  short sVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 200);
  if (lVar12 == 0) goto LAB_013e7d30;
  plVar9 = (long *)(lVar12 + 8);
  lVar11 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar11) {
    lVar6 = nn::os::GetCurrentThread();
LAB_013e7ac4:
    if (*plVar9 == 0) goto code_r0x013e7acc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x10));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x10));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_013e7ad4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_013e7ad4:
    bVar10 = false;
    goto LAB_013e7ad8;
  }
  bVar10 = true;
LAB_013e7ad8:
  plVar9 = *(long **)(lVar12 + 0x20);
  plVar3 = *(long **)(lVar12 + 0x28);
  if (plVar9 == plVar3) {
LAB_013e7c00:
    plVar9 = *(long **)(lVar12 + 0x58);
    plVar3 = *(long **)(lVar12 + 0x60);
    if (plVar9 != plVar3) {
      lVar6 = *plVar9;
      if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
         (uVar7 = (**(code **)(*(long *)*plVar9 + 0xc0))(), (uVar7 & 1) == 0)) {
        (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
      }
      plVar1 = plVar9 + 1;
      if (plVar1 != plVar3) {
        lVar6 = *plVar1;
        if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
           (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
          (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
        }
        plVar1 = plVar9 + 2;
        if (plVar1 != plVar3) {
          lVar6 = *plVar1;
          if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
             (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
            (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
          }
          plVar1 = plVar9 + 3;
          if (plVar1 != plVar3) {
            lVar6 = *plVar1;
            if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
               (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
              (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
            }
            plVar1 = plVar9 + 4;
            if (plVar1 != plVar3) {
              lVar6 = *plVar1;
              if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
                 (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
                (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
              }
              for (plVar9 = plVar9 + 5; plVar9 != plVar3; plVar9 = plVar9 + 1) {
                lVar6 = *plVar9;
                if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
                   (uVar7 = (**(code **)(*(long *)*plVar9 + 0xc0))(), (uVar7 & 1) == 0)) {
                  (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar9;
    if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
       (uVar7 = (**(code **)(*(long *)*plVar9 + 0xc0))(), (uVar7 & 1) == 0)) {
      (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
    }
    plVar1 = plVar9 + 1;
    if (plVar1 != plVar3) {
      lVar6 = *plVar1;
      if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
         (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
        (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
      }
      plVar1 = plVar9 + 2;
      if (plVar1 != plVar3) {
        lVar6 = *plVar1;
        if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
           (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
          (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
        }
        plVar1 = plVar9 + 3;
        if (plVar1 != plVar3) {
          lVar6 = *plVar1;
          if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
             (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
            (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
          }
          plVar1 = plVar9 + 4;
          if (plVar1 != plVar3) {
            lVar6 = *plVar1;
            if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
               (uVar7 = (**(code **)(*(long *)*plVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
              (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
            }
            for (plVar9 = plVar9 + 5; plVar9 != plVar3; plVar9 = plVar9 + 1) {
              lVar6 = *plVar9;
              if (((lVar6 != 0) && (uVar7 = FUN_013e7f90(lVar6 + 8), (uVar7 & 1) != 0)) &&
                 (uVar7 = (**(code **)(*(long *)*plVar9 + 0xc0))(), (uVar7 & 1) == 0)) {
                (**(code **)(*(long *)(lVar6 + -0x20) + 0x130))();
              }
            }
          }
        }
      }
    }
    if ((plVar3 == *(long **)(lVar12 + 0x28)) || (*plVar3 == 0)) goto LAB_013e7c00;
  }
  if (!bVar10) {
    *(undefined8 *)(lVar12 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x10));
  }
LAB_013e7d30:
  lVar12 = *(long *)(param_1 + 0x1a8);
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar12 + 0x1a);
    sVar8 = *(short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_013e7ee0;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_013e7ee0:
        bVar10 = false;
      }
      if (bVar10) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        plVar9 = (long *)(lVar12 + -0x28);
        FUN_00d3cc80(plVar9);
        lVar12 = *(long *)(lVar12 + 0x70);
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar10) {
            *psVar2 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x013e7f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  return;
code_r0x013e7acc:
  cVar5 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar10) {
    *plVar9 = lVar6;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_013e7ad4;
  goto LAB_013e7ac4;
}


