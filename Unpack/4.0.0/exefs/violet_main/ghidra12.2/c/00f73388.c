/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f73388; name: FUN_00f73388
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f73388(undefined8 *param_1,long param_2)

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
LAB_00f733c0:
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
      goto LAB_00f733f0;
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
LAB_00f733f0:
  if (!bVar9) {
    lVar10 = lVar3;
    lVar11 = *(long *)(param_2 + 0x288);
    goto LAB_00f733c0;
  }
  FUN_00f72bac(&local_28,param_2,*(undefined4 *)(param_2 + 0x270));
  uVar7 = _UNK_03cabe58;
  uVar6 = _DAT_03cabe50;
  if (local_28 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
  }
  else {
    memcpy(param_1,local_28 + 0x2c,0x30);
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
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
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
      goto joined_r0x00f73498;
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
joined_r0x00f73498:
  do {
    if (bVar9) {
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
      return;
    }
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x288);
      if (lVar8 != lVar11 || lVar10 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar11 = lVar8;
        lVar3 = lVar10;
        goto joined_r0x00f73498;
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
    lVar11 = lVar8;
    lVar3 = lVar10;
  } while( true );
}


