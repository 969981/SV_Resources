/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255b770; name: FUN_0255b770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255b770(undefined8 *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long *local_28;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar1;
    lVar13 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_2 + 0x288) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0255b7a8:
  while ((lVar12 != 0 && (lVar10 != lVar12))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
    do {
      lVar12 = *plVar1;
      lVar13 = *(long *)(param_2 + 0x288);
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar12;
        *(long *)(param_2 + 0x288) = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar12 || *(long *)(param_2 + 0x288) != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0255b7d8;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_2 + 0x284) = lVar13 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_0255b7d8:
  if (!bVar11) {
    lVar12 = lVar3;
    lVar13 = *(long *)(param_2 + 0x288);
    goto LAB_0255b7a8;
  }
  FUN_00f72bac(&local_28,param_2,*(undefined4 *)(param_2 + 0x270));
  uVar9 = _UNK_03cabe58;
  uVar8 = _DAT_03cabe50;
  if (local_28 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    uVar7 = _UNK_03caa988;
    uVar6 = _DAT_03caa980;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
  }
  else {
    memcpy(param_1,local_28 + 0x32,0x40);
    lVar10 = local_28[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))(local_28);
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
    lVar10 = *plVar1;
    lVar12 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x288) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar13 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x288);
    if (lVar13 != lVar10 || lVar3 != lVar12) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0255b874;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x284) = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_0255b874:
  if (!bVar11) {
    do {
      lVar10 = *plVar1;
      lVar12 = *(long *)(param_2 + 0x288);
      if (lVar10 != lVar13 || lVar12 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x0255b91c;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar13;
        *(long *)(param_2 + 0x284) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
joined_r0x0255b91c:
    if (!bVar11) {
      do {
        lVar13 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x288);
        if (lVar13 != lVar10 || lVar3 != lVar12) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x0255b91c;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar10;
          *(long *)(param_2 + 0x284) = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar11 = true;
      lVar10 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x0255b91c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  return;
}


