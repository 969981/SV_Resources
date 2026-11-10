/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013692f8; name: FUN_013692f8
 */


undefined8 FUN_013692f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar7 = FUN_013696b8(param_3);
  FUN_01369540(&local_30,uVar7);
  local_28 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_01369498(&local_28);
  uVar7 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  FUN_01369498(&local_30);
  local_28 = CONCAT44(local_28._4_4_,0x100);
  lVar8 = FUN_0152bfac(&local_30,param_3,&local_28);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_01369470;
  }
  plVar9 = *(long **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar6 = *plVar2;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01369428;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  *(long *)(param_1 + 0x140) = lVar8;
  local_38 = *(long **)(param_1 + 0x30);
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 5;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) {
LAB_01369470:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_01369510(uVar7,&local_38,param_1);
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 5;
    do {
      lVar8 = *plVar9;
      iVar3 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_01369428:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 1;
}


