/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255f818; name: FUN_0255f818
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255f818(undefined8 *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long *local_28;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x288) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0255f850:
  while ((lVar10 != 0 && (lVar8 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x288);
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x288) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar10 || *(long *)(param_2 + 0x288) != lVar11) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_0255f880;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x284) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_0255f880:
  if (!bVar9) {
    lVar10 = lVar3;
    lVar11 = *(long *)(param_2 + 0x288);
    goto LAB_0255f850;
  }
  FUN_00d34858(&local_28,param_2,*(undefined4 *)(param_2 + 0x270));
  uVar7 = _UNK_03cabe68;
  uVar6 = _DAT_03cabe60;
  if (local_28 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
  }
  else {
    memcpy(param_1,local_28 + 0x26,0x40);
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
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
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x288) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x288);
    if (lVar11 != lVar8 || lVar3 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_0255f91c;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x284) = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_0255f91c:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x288);
      if (lVar8 != lVar11 || lVar10 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x0255f9b8;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x284) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
joined_r0x0255f9b8:
    if (!bVar9) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x288);
        if (lVar11 != lVar8 || lVar3 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar11;
          lVar10 = lVar3;
          goto joined_r0x0255f9b8;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar8;
          *(long *)(param_2 + 0x284) = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar8 = lVar11;
      lVar10 = lVar3;
      goto joined_r0x0255f9b8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  return;
}


