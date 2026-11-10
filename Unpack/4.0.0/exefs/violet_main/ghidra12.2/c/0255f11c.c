/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255f11c; name: FUN_0255f11c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255f11c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long *local_28;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar12 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      *(long *)(param_2 + 0x288) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0255f154:
  while ((lVar11 != 0 && (lVar9 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
    do {
      lVar11 = *plVar1;
      lVar12 = *(long *)(param_2 + 0x288);
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x288) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar11 || *(long *)(param_2 + 0x288) != lVar12) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_0255f184;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      *(long *)(param_2 + 0x284) = lVar12 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_0255f184:
  if (!bVar10) {
    lVar11 = lVar3;
    lVar12 = *(long *)(param_2 + 0x288);
    goto LAB_0255f154;
  }
  FUN_00d34858(&local_28,param_2,*(undefined4 *)(param_2 + 0x270));
  uVar8 = _UNK_03cabe68;
  uVar7 = _DAT_03cabe60;
  uVar6 = _DAT_03caa5b0;
  if (local_28 == (long *)0x0) {
    param_1[3] = _UNK_03caa5b8;
    param_1[2] = uVar6;
    param_1[5] = uVar8;
    param_1[4] = uVar7;
    *param_1 = 0x42c800003f800000;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
  }
  else {
    memcpy(param_1,local_28 + 0x1a,0x60);
    lVar9 = local_28[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
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
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x288) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar12 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x288);
    if (lVar12 != lVar9 || lVar3 != lVar11) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_0255f220;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x284) = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_0255f220:
  if (!bVar10) {
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x288);
      if (lVar9 != lVar12 || lVar11 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x0255f2d0;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar12;
        *(long *)(param_2 + 0x284) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x0255f2d0:
    if (!bVar10) {
      do {
        lVar12 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x288);
        if (lVar12 != lVar9 || lVar3 != lVar11) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar12;
          lVar11 = lVar3;
          goto joined_r0x0255f2d0;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x284) = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar9 = lVar12;
      lVar11 = lVar3;
      goto joined_r0x0255f2d0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  return;
}


