/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f57574; name: FUN_00f57574
 */


void FUN_00f57574(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  
  if (*(char *)(param_1 + 0x139) != '\0') {
    lVar7 = *(long *)(param_1 + 0x28);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f575ec;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f575ec:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            plVar2 = (long *)(lVar7 + 0x18);
            lVar6 = nn::os::GetCurrentThread();
            goto LAB_00f57620;
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
LAB_00f575ac:
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  return;
LAB_00f57620:
  if (*plVar2 == 0) goto code_r0x00f57628;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x20));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x20));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f57630;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f57630:
  cVar4 = *(char *)(lVar7 + 0x3c);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x20));
  if ((cVar4 == '\0') && (1 < *(uint *)(lVar7 + 0x40))) {
    *(undefined4 *)(lVar7 + 0x44) = 0;
  }
  lVar6 = *(long *)(lVar7 + 8);
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar8 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar8 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
  }
  else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00f575ac;
code_r0x00f57628:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f57630;
  goto LAB_00f57620;
}


