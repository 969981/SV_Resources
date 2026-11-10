/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f730b4; name: FUN_00f730b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00f730b4(long param_1)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [16];
  long lVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long local_60;
  long lStack_58;
  long *local_38;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x288) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f730e8:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x288);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x288) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_1 + 0x288) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00f73118;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x284) = lVar10 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00f73118:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar10 = *(long *)(param_1 + 0x288);
    goto LAB_00f730e8;
  }
  FUN_00f72bac(&local_38,param_1,*(undefined4 *)(param_1 + 0x270));
  if (local_38 == (long *)0x0) {
    lStack_58 = 0;
    local_60 = 0;
  }
  else {
    lStack_58 = local_38[0x27];
    local_60 = local_38[0x26];
    lVar7 = local_38[6];
    psVar2 = (short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
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
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x288) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x288);
    if (lVar10 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x00f731c4;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x284) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
joined_r0x00f731c4:
  do {
    if (bVar8) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
      auVar6._8_8_ = lStack_58;
      auVar6._0_8_ = local_60;
      return auVar6;
    }
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x288);
      if (lVar7 != lVar10 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar10 = lVar7;
        lVar3 = lVar9;
        goto joined_r0x00f731c4;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x284) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
    lVar10 = lVar7;
    lVar3 = lVar9;
  } while( true );
}


