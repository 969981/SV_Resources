/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2c7e4; name: FUN_00d2c7e4
 */


void FUN_00d2c7e4(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *local_38;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x180);
  *(long *)(param_1 + 0x180) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar7 = *plVar2;
      iVar3 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar7 == 0) goto LAB_00d2c920;
    lVar7 = *(long *)(param_1 + 0x180);
  }
  *(bool *)(param_1 + 0x1c9) = lVar7 != 0;
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
    uVar6 = (**(code **)(*(long *)(lVar7 + 0x30) + 0x28))();
    (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x30) + 0x20))(&local_38);
    FUN_00c4b998(uVar9,1,uVar6,&local_38);
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 5;
      do {
        lVar7 = *plVar8;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
LAB_00d2c920:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  FUN_00d2c970(param_1 + 0x188,param_3);
  *(byte *)(param_1 + 0x1c9) =
       *(byte *)(param_1 + 0x1c9) & *(long *)(param_1 + 400) != *(long *)(param_1 + 0x188);
  return;
}


