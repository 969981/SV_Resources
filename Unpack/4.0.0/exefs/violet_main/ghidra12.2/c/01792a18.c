/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01792a18; name: FUN_01792a18
 */


void FUN_01792a18(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = (long *)FUN_01792b3c();
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar5 = *(long **)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar7;
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 5;
    do {
      lVar7 = *plVar6;
      iVar2 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar7 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar7 + 0x178);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar7 + 0x180);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar7 + 0x188);
  plVar5 = *(long **)(lVar7 + 400);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = *(long **)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar5;
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01792ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))();
  return;
}


