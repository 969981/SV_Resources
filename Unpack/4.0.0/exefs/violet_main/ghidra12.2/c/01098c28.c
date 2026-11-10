/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01098c28; name: FUN_01098c28
 */


void FUN_01098c28(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_28 [8];
  
  lVar6 = FUN_01097d8c(auStack_28,*(undefined8 *)(param_1 + 8));
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x68) + param_2 * 0x48 + 0x20);
  plVar7 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar10 = lVar6;
  lVar8 = *(long *)(*(long *)(param_1 + 0x68) + param_2 * 0x48 + 0x20);
  plVar7 = (long *)(lVar8 + 0x30);
  lVar9 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    FUN_01e36038(lVar8,param_3);
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01098cb4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x38));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x38));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01098cb4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01098cb4:
  FUN_0109a508(lVar8,param_3);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x38));
  return;
}


