/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cc070; name: FUN_019cc070
 */


uint FUN_019cc070(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  long *local_28;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_019cc0ac;
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
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_1 + 0x288) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_019cc0ac;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_019cc0ac:
  FUN_00f72bac(&local_28,param_1,*(undefined4 *)(param_1 + 0x270));
  if (local_28 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_019cc258(local_28,param_2 & 1);
    if (local_28 != (long *)0x0) {
      lVar9 = local_28[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  do {
    lVar9 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x288);
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x288) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x288);
    if (lVar3 != lVar9 || lVar4 != lVar6) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_019cc160;
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x284) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar10 = true;
LAB_019cc160:
  if (!bVar10) {
    do {
      lVar9 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x288);
      if (lVar9 != lVar3 || lVar6 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x019cc218;
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x284) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar10 = true;
joined_r0x019cc218:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x288);
        if (lVar3 != lVar9 || lVar4 != lVar6) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x019cc218;
        }
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x284) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar10 = true;
      lVar9 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x019cc218;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return uVar8 & 1;
}


