/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5ea58; name: FUN_00d5ea58
 */


void FUN_00d5ea58(long param_1,byte param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *local_48;
  
  plVar7 = (long *)(param_1 + 0x140);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00d5ea98;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d5ea98;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d5ea98:
  plVar7 = *(long **)(param_1 + 0x178);
  plVar3 = *(long **)(param_1 + 0x180);
  if (plVar7 == plVar3) {
LAB_00d5eab8:
    if ((plVar7 != plVar3) && (*plVar7 != 0)) {
      FUN_00d5ebbc(&local_48);
      if (local_48 != (long *)0x0) {
        *(byte *)(local_48 + 0x1c) = param_2 & 1;
        lVar6 = local_48[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_48 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_00d5eb04;
    }
  }
  else {
    do {
      if (*(long *)(*plVar7 + 0x1d0) == *param_3) goto LAB_00d5eab8;
      plVar7 = plVar7 + 1;
    } while (plVar3 != plVar7);
  }
  local_48 = (long *)0x0;
LAB_00d5eb04:
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return;
}


