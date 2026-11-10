/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e0ddc; name: FUN_029e0ddc
 */


uint FUN_029e0ddc(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *local_28;
  
  plVar8 = (long *)(param_1 + 0x140);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_029e0e14;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_029e0e14;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_029e0e14:
  plVar8 = *(long **)(param_1 + 0x178);
  plVar3 = *(long **)(param_1 + 0x180);
  if (plVar8 == plVar3) {
LAB_029e0e34:
    if ((plVar8 != plVar3) && (*plVar8 != 0)) {
      FUN_00d5ebbc(&local_28);
      plVar8 = local_28;
      if (local_28 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_029e0f50(local_28);
        lVar7 = plVar8[6];
        psVar1 = (short *)(lVar7 + 0x1a);
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
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_029e0e84;
    }
  }
  else {
    do {
      if (*(long *)(*plVar8 + 0x1d0) == *param_2) goto LAB_029e0e34;
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
  }
  uVar6 = 0;
  local_28 = (long *)0x0;
LAB_029e0e84:
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return uVar6 & 1;
}


