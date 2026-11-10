/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb10d8; name: FUN_00eb10d8
 */


void FUN_00eb10d8(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00eb1114;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00eb1114;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00eb1114:
  plVar12 = *(long **)(param_1 + 0x170);
  param_2 = (long *)*param_2;
  plVar8 = *(long **)(param_1 + 0x168);
  do {
    plVar11 = plVar8;
    if (plVar12 == plVar11) goto LAB_00eb1214;
    plVar8 = plVar11 + 1;
  } while ((long *)*plVar11 != param_2);
  plVar10 = plVar11;
  if (plVar12 == plVar8) goto LAB_00eb126c;
  while( true ) {
    *plVar10 = 0;
    if (param_2 != (long *)0x0) {
      plVar11 = param_2 + 5;
      do {
        lVar7 = *plVar11;
        iVar6 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *(int *)plVar11 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*param_2 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_00eb11e0;
    }
    lVar7 = *plVar8;
    *plVar8 = 0;
    plVar11 = plVar10 + 1;
    *plVar10 = lVar7;
    if (plVar8 + 1 == plVar12) break;
    param_2 = (long *)*plVar11;
    plVar10 = plVar11;
    plVar8 = plVar8 + 1;
  }
  plVar12 = *(long **)(param_1 + 0x170);
  while (plVar12 != plVar11) {
LAB_00eb126c:
    plVar12 = plVar12 + -1;
    plVar8 = (long *)*plVar12;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar7 = *plVar10;
        iVar6 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar9) {
          *(int *)plVar10 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
LAB_00eb11e0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  *(long **)(param_1 + 0x170) = plVar11;
LAB_00eb1214:
  do {
    lVar7 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b8) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x1b8);
    if (lVar2 != lVar7 || lVar3 != lVar4) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00eb1250;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_00eb1250:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x1b8);
      if (lVar7 != lVar2 || lVar4 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eb12d0;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
joined_r0x00eb12d0:
    if (!bVar9) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x1b8);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00eb12d0;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00eb12d0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


