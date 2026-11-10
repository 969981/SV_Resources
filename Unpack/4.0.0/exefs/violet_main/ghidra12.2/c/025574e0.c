/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025574e0; name: FUN_025574e0
 */


void FUN_025574e0(undefined1 param_1 [16],long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  long *local_38;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_2 + 0x288) == 0) {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_2 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0255751c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
        while (*plVar1 == 0 && *(long *)(param_2 + 0x288) == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_2 + 0x288) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0255751c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_2 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0255751c:
  FUN_00d52e08(&local_38,param_2,*(undefined4 *)(param_2 + 0x270));
  if (local_38 != (long *)0x0) {
    *(undefined1 *)((long)local_38 + 0x7a) = 0;
    *(undefined1 *)(local_38 + 0xf) = 1;
    lVar8 = local_38[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    local_38[0x11] = param_1._8_8_;
    local_38[0x10] = param_1._0_8_;
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  do {
    lVar8 = *plVar1;
    lVar6 = *(long *)(param_2 + 0x288);
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x288) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_2 + 0x288);
    if (lVar3 != lVar8 || lVar4 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_025575f4;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_2 + 0x284) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_025575f4:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar6 = *(long *)(param_2 + 0x288);
      if (lVar8 != lVar3 || lVar6 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x02557654;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_2 + 0x284) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar9 = true;
joined_r0x02557654:
    if (!bVar9) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_2 + 0x288);
        if (lVar3 != lVar8 || lVar4 != lVar6) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x02557654;
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_2 + 0x284) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar9 = true;
      lVar8 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x02557654;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  return;
}


