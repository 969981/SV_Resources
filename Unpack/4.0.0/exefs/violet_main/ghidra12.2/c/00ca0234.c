/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca0234; name: FUN_00ca0234
 */


void FUN_00ca0234(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *local_28;
  
  FUN_00ca03fc(&local_28);
  if (local_28 != (long *)0x0) {
    lVar8 = *(long *)(param_1 + 0x38);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00ca02ec;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00ca02ec:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 != 0) {
            plVar2 = (long *)(lVar8 + 0x18);
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_00ca0318;
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
LAB_00ca0264:
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar9 == 0) {
LAB_00ca0364:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_00ca0318:
  if (*plVar2 == 0) goto code_r0x00ca0320;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x20));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x20));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ca0328;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ca0328:
  cVar4 = *(char *)(lVar8 + 0x3c);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x20));
  if (cVar4 == '\0') {
    bVar6 = FUN_01f872c0(local_28);
    *(byte *)(lVar8 + 0x268) = bVar6 & 1;
  }
  lVar7 = *(long *)(lVar8 + 8);
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
  }
  else if (sVar9 == 0) goto LAB_00ca0364;
  goto LAB_00ca0264;
code_r0x00ca0320:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00ca0328;
  goto LAB_00ca0318;
}


