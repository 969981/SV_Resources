/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255c254; name: FUN_0255c254
 */


void FUN_0255c254(long *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long *local_28;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar7 = nn::os::GetCurrentThread();
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
LAB_0255c28c:
  while ((lVar10 != 0 && (lVar7 != lVar10))) {
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
      goto LAB_0255c2bc;
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
LAB_0255c2bc:
  if (!bVar9) {
    lVar10 = lVar3;
    lVar11 = *(long *)(param_2 + 0x288);
    goto LAB_0255c28c;
  }
  FUN_00f72bac(&local_28,param_2,*(undefined4 *)(param_2 + 0x270));
  plVar6 = local_28;
  if (local_28 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar7 = local_28[0x3a];
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar8;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    *(int *)(param_1 + 1) = (int)plVar6[0x3b];
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
      psVar2 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(param_2 + 0x288);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x288) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x288);
    if (lVar11 != lVar7 || lVar3 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_0255c370;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x284) = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_0255c370:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x288);
      if (lVar7 != lVar11 || lVar10 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x0255c450;
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
joined_r0x0255c450:
    if (!bVar9) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x288);
        if (lVar11 != lVar7 || lVar3 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar10 = lVar3;
          goto joined_r0x0255c450;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0x284) = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar7 = lVar11;
      lVar10 = lVar3;
      goto joined_r0x0255c450;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  return;
}


