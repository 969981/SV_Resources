/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01018028; name: FUN_01018028
 */


void FUN_01018028(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    plVar6 = (long *)0x0;
LAB_0101804c:
    plVar7 = (long *)0x0;
    bVar8 = true;
  }
  else {
    plVar7 = *(long **)(param_2 + 0x100);
    plVar6 = plVar7;
    if (plVar7 == (long *)0x0) goto LAB_0101804c;
    plVar5 = plVar7 + 5;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *(int *)plVar5 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
LAB_01018168:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *(int *)plVar5 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) goto LAB_01018168;
    bVar8 = false;
  }
  plVar5 = (long *)param_1[0x1d];
  param_1[0x1d] = (long)plVar7;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_01018138;
  }
  if (!bVar8) {
    plVar7 = plVar6 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    else if ((int)lVar4 == 0) {
LAB_01018138:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010180b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)((long)param_1 + 0x114));
  return;
}


