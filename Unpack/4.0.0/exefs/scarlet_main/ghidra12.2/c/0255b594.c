/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255b594; name: FUN_0255b594
 */


void FUN_0255b594(long param_1,void *param_2)

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
  long *local_28;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0255b5d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x288) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0255b5d0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0255b5d0:
  FUN_00f72bac(&local_28,param_1,*(undefined4 *)(param_1 + 0x270));
  if (local_28 != (long *)0x0) {
    memcpy(local_28 + 0x2c,param_2,0x28);
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
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
      (**(code **)(*local_28 + 0x50))(local_28);
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
    lVar6 = *(long *)(param_1 + 0x288);
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x288) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x288);
    if (lVar3 != lVar8 || lVar4 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_0255b6a4;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x284) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_0255b6a4:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x288);
      if (lVar8 != lVar3 || lVar6 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x0255b708;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x284) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar9 = true;
joined_r0x0255b708:
    if (!bVar9) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x288);
        if (lVar3 != lVar8 || lVar4 != lVar6) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x0255b708;
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x284) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar9 = true;
      lVar8 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x0255b708;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return;
}


