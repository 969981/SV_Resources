/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02559ea0; name: FUN_02559ea0
 */


undefined4 FUN_02559ea0(long param_1)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long *local_38;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x288) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02559ed4:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x288);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x288) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_1 + 0x288) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_02559f04;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x284) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_02559f04:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar9 = *(long *)(param_1 + 0x288);
    goto LAB_02559ed4;
  }
  FUN_00f72bac(&local_38,param_1,*(undefined4 *)(param_1 + 0x270));
  if (local_38 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    lVar6 = local_38[6];
    psVar2 = (short *)(lVar6 + 0x1a);
    uVar10 = *(undefined4 *)((long)local_38 + 0xe4);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x288) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar9 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x288);
    if (lVar9 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_02559f94;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x284) = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_02559f94:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x288);
      if (lVar6 != lVar9 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x0255a014;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x284) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x0255a014:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar9 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar3;
          goto joined_r0x0255a014;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x284) = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar3;
      goto joined_r0x0255a014;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return uVar10;
}


