/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f72edc; name: FUN_00f72edc
 */


void FUN_00f72edc(long *param_1,long param_2)

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
  long *local_28;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x288) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f72f14:
  while ((lVar9 != 0 && (lVar6 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
    do {
      lVar9 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x288);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x288) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_2 + 0x288) != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00f72f44;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x284) = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00f72f44:
  if (!bVar7) {
    lVar9 = lVar3;
    lVar8 = *(long *)(param_2 + 0x288);
    goto LAB_00f72f14;
  }
  FUN_00f72bac(&local_28,param_2,*(undefined4 *)(param_2 + 0x270));
  if (local_28 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar9 = local_28[0x23];
    param_1[3] = local_28[0x25];
    lVar6 = local_28[0x24];
    *param_1 = local_28[0x22];
    param_1[1] = lVar9;
    param_1[2] = lVar6;
    lVar6 = local_28[6];
    psVar2 = (short *)(lVar6 + 0x1a);
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
      (**(code **)(*local_28 + 0x50))();
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
    lVar6 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x288) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar8 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x288);
    if (lVar8 != lVar6 || lVar3 != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x00f72ff8;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x284) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
joined_r0x00f72ff8:
  do {
    if (bVar7) {
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
      return;
    }
    do {
      lVar6 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x288);
      if (lVar6 != lVar8 || lVar9 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar8 = lVar6;
        lVar3 = lVar9;
        goto joined_r0x00f72ff8;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x284) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
    lVar8 = lVar6;
    lVar3 = lVar9;
  } while( true );
}


