/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebc6a0; name: FUN_01ebc6a0
 */


undefined4 FUN_01ebc6a0(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01ebc700;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ebc700:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return 0;
        }
        plVar5 = (long *)(lVar6 + 0xe8);
        lVar10 = *plVar5;
        lVar4 = nn::os::GetCurrentThread();
        if (lVar4 == lVar10) {
          bVar8 = true;
          goto LAB_01ebc750;
        }
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_01ebc73c;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
LAB_01ebc73c:
  if (*plVar5 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xf0));
    do {
      if (*plVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xf0));
          while (*plVar5 == 0) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar8) {
              *plVar5 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01ebc74c;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *plVar5 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01ebc74c:
    bVar8 = false;
LAB_01ebc750:
    plVar5 = (long *)FUN_018348f0(*(undefined8 *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0x108));
    if ((*(long **)(lVar6 + 0x108) == plVar5) || (*plVar5 == 0)) {
      plVar5 = (long *)FUN_018348f0(*(undefined8 *)(lVar6 + 0x138),*(undefined8 *)(lVar6 + 0x140));
      if (*(long **)(lVar6 + 0x140) == plVar5) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*plVar5 != 0) {
          lVar4 = *plVar5 + -0x20;
        }
      }
    }
    else {
      lVar4 = *plVar5 + -0x20;
    }
    if (!bVar8) {
      *(undefined8 *)(lVar6 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xf0));
    }
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(lVar4 + 0x148);
    }
    lVar4 = *(long *)(lVar6 + 8);
    psVar1 = (short *)(lVar4 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
      (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
      return uVar9;
    }
    if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return uVar9;
  }
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar8) {
    *plVar5 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01ebc74c;
  goto LAB_01ebc73c;
}


