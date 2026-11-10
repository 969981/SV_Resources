/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272a0bc; name: FUN_0272a0bc
 */


void FUN_0272a0bc(long param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *local_38;
  
  uVar5 = *param_2;
  local_38 = (long *)**(long **)(param_1 + 0x38);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) goto LAB_0272a270;
  }
  FUN_00c4b998(uVar5,param_3,4,&local_38);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar4 = *plVar6;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_0272a298;
  }
  uVar5 = *param_2;
  local_38 = (long *)**(long **)(param_1 + 0x58);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) goto LAB_0272a270;
  }
  FUN_00c4b998(uVar5,param_3,5,&local_38);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar4 = *plVar6;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_0272a298;
  }
  uVar5 = *param_2;
  local_38 = (long *)**(long **)(param_1 + 0x78);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
LAB_0272a270:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_00c4b998(uVar5,param_3,9,&local_38);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar4 = *plVar6;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_0272a298:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x1d0) != 0)) {
    plVar6 = (long *)(*(long *)(param_1 + 0x1d0) + 0x30);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  }
  return;
}


