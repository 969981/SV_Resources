/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebcc38; name: FUN_01ebcc38
 */


void FUN_01ebcc38(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  bool bVar8;
  long lVar9;
  
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
        if (cVar3 != '\0') goto LAB_01ebcc94;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ebcc94:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar5 = (long *)(lVar6 + 0xe8);
        lVar9 = *plVar5;
        lVar4 = nn::os::GetCurrentThread();
        if (lVar4 == lVar9) {
          bVar8 = true;
          goto LAB_01ebcce0;
        }
        lVar4 = nn::os::GetCurrentThread();
        goto LAB_01ebcccc;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01ebcccc:
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
            if (cVar3 == '\0') goto LAB_01ebccdc;
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
LAB_01ebccdc:
    bVar8 = false;
LAB_01ebcce0:
    plVar5 = (long *)FUN_01834580(*(undefined8 *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0x108));
    if ((*(long **)(lVar6 + 0x108) == plVar5) || (*plVar5 == 0)) {
      plVar5 = (long *)FUN_01834580(*(undefined8 *)(lVar6 + 0x138),*(undefined8 *)(lVar6 + 0x140));
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
    if (lVar4 != 0) {
      FUN_01ebcf2c(lVar4);
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
                    /* WARNING: Could not recover jumptable at 0x01ebcddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
      return;
    }
    if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar3 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar8) {
    *plVar5 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01ebccdc;
  goto LAB_01ebcccc;
}


