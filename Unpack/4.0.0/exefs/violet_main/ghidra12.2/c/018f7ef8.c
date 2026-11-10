/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f7ef8; name: FUN_018f7ef8
 */


undefined4 FUN_018f7ef8(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_018f7f5c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018f7f5c:
        bVar10 = false;
      }
      if (bVar10) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return 1;
        }
        plVar6 = (long *)(lVar7 + 0xe8);
        lVar9 = *plVar6;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar9) {
          bVar10 = true;
          goto LAB_018f7fa8;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_018f7f94;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 1;
LAB_018f7f94:
  if (*plVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar10) {
              *plVar6 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_018f7fa4;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_018f7fa4:
    bVar10 = false;
LAB_018f7fa8:
    plVar6 = (long *)FUN_01834580(*(undefined8 *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0x108));
    if ((*(long **)(lVar7 + 0x108) == plVar6) || (*plVar6 == 0)) {
      plVar6 = (long *)FUN_01834580(*(undefined8 *)(lVar7 + 0x138),*(undefined8 *)(lVar7 + 0x140));
      if (*(long **)(lVar7 + 0x140) == plVar6) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*plVar6 != 0) {
          lVar5 = *plVar6 + -0x20;
        }
      }
    }
    else {
      lVar5 = *plVar6 + -0x20;
    }
    if (!bVar10) {
      *(undefined8 *)(lVar7 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xf0));
    }
    if (lVar5 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_01ebcf38(lVar5);
    }
    lVar5 = *(long *)(lVar7 + 8);
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
      return uVar4;
    }
    if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return uVar4;
  }
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar10) {
    *plVar6 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_018f7fa4;
  goto LAB_018f7f94;
}


