/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e0c6c; name: FUN_029e0c6c
 */


bool FUN_029e0c6c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *local_28;
  
  plVar8 = (long *)(param_1 + 0x140);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_029e0ca4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar8 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_029e0ca4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_029e0ca4:
  plVar8 = *(long **)(param_1 + 0x178);
  plVar3 = *(long **)(param_1 + 0x180);
  if (plVar8 == plVar3) {
LAB_029e0cc4:
    if ((plVar8 != plVar3) && (*plVar8 != 0)) {
      FUN_00d5ebbc(&local_28);
      if (local_28 == (long *)0x0) {
        bVar6 = false;
      }
      else {
        bVar6 = (char)local_28[0x1c] != '\0';
        lVar7 = local_28[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_029e0d14;
    }
  }
  else {
    do {
      if (*(long *)(*plVar8 + 0x1d0) == *param_2) goto LAB_029e0cc4;
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
  }
  bVar6 = false;
  local_28 = (long *)0x0;
LAB_029e0d14:
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return bVar6;
}


