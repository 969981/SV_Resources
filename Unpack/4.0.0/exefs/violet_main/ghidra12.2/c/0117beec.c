/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117beec; name: FUN_0117beec
 */


void FUN_0117beec(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  long *plVar9;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (lVar6 = *param_1, lVar6 != 0)) &&
     (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0117bf60;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0117bf60:
        bVar5 = false;
      }
      if (bVar5) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar9 = (long *)(lVar6 + 0x120);
        lVar8 = *plVar9;
        lVar4 = nn::os::GetCurrentThread();
        if (lVar4 != lVar8) {
          lVar4 = nn::os::GetCurrentThread();
          goto LAB_0117bf98;
        }
        bVar5 = true;
        goto LAB_0117bfa8;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_0117bf98:
  if (*plVar9 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x128));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x128));
          while (*plVar9 == 0) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              bVar5 = false;
              goto LAB_0117bfa8;
            }
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = false;
LAB_0117bfa8:
    plVar9 = *(long **)(lVar6 + 0x110);
    if (plVar9 != (long *)0x0) {
      *(undefined8 *)(lVar6 + 0x110) = 0;
      *(undefined8 *)(lVar6 + 0x148) = 0xffffffffffffffff;
    }
    if (!bVar5) {
      *(undefined8 *)(lVar6 + 0x120) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x128));
    }
    if (plVar9 != (long *)0x0) {
      FUN_011d775c(plVar9);
      lVar4 = plVar9[6];
      psVar1 = (short *)(lVar4 + 0x1a);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar4 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar7 == 0) goto LAB_0117c028;
    }
    lVar4 = *(long *)(lVar6 + 0x70);
    psVar1 = (short *)(lVar4 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0117c0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
      return;
    }
    if (sVar7 != 0) {
      return;
    }
LAB_0117c028:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  cVar3 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  bVar5 = false;
  if (cVar3 == '\0') goto LAB_0117bfa8;
  goto LAB_0117bf98;
}


