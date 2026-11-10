/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a98b8; name: FUN_010a98b8
 */


void FUN_010a98b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  long *local_18;
  
  local_50 = *(long **)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(undefined1 *)(param_1 + 0xe2);
  local_38 = param_2;
  FUN_010a9b60(*(undefined8 *)(param_1 + 0x48),&local_50);
  uVar6 = FUN_010a9b4c(*(undefined8 *)(param_1 + 0x30),0x400);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x36c) == 2) {
      FUN_010a9134(&local_50,*(undefined8 *)(param_1 + 8));
      FUN_010a9200(param_1 + 0x50,&local_50);
      if (local_50 != (long *)0x0) {
        plVar7 = local_50 + 5;
        do {
          lVar5 = *plVar7;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        else if ((int)lVar5 == 0) goto LAB_010a9ab8;
      }
      local_50 = *(long **)(param_1 + 0x30);
      uStack_48 = *(undefined8 *)(param_1 + 0x38);
      local_40 = 1;
      local_38 = param_2;
      FUN_010a9b60(*(undefined8 *)(param_1 + 0x50),&local_50);
    }
  }
  else {
    FUN_010a9134(&local_50,*(undefined8 *)(param_1 + 8));
    FUN_010a9200(param_1 + 0x50,&local_50);
    if (local_50 != (long *)0x0) {
      plVar7 = local_50 + 5;
      do {
        lVar5 = *plVar7;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_010a9ab8;
    }
    local_50 = *(long **)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    local_40 = 1;
    local_38 = param_2;
    FUN_010a9b60(*(undefined8 *)(param_1 + 0x50),&local_50);
    plVar7 = (long *)FUN_010ad860(*(undefined8 *)(param_1 + 8));
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_010a9b24;
    }
    local_50 = *(long **)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    local_40 = 1;
    FUN_010a9edc(plVar7,&local_50);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    local_18 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
LAB_010a9b24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_010aac98(uVar8,&local_18);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_010a9ab8;
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar5 == 0) {
LAB_010a9ab8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


