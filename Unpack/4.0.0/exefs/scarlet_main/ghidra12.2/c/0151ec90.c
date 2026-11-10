/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151ec90; name: FUN_0151ec90
 */


void FUN_0151ec90(long param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *local_38;
  
  lVar8 = *param_2;
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
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar3 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_0151ed90;
  }
  uVar9 = *(undefined8 *)(param_1 + 200);
  uVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x30) + 0x28))();
  (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x30) + 0x20))(&local_38);
  FUN_00c4b998(uVar9,param_3,uVar6,&local_38);
  if (local_38 != (long *)0x0) {
    plVar7 = local_38 + 5;
    do {
      lVar8 = *plVar7;
      iVar3 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_0151ed90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


