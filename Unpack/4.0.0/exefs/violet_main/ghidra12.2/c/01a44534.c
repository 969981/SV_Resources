/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a44534; name: FUN_01a44534
 */


void FUN_01a44534(char *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  cVar4 = *param_1;
  if (cVar4 == '\x01') {
    FUN_01cb1988(param_1 + 8);
    return;
  }
  if (cVar4 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_01a44654;
    }
    lVar8 = lVar8 + -0x28;
    plVar7 = *(long **)(lVar8 + param_2);
    *(long *)(lVar8 + param_2) = lVar9;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar1 = plVar7 + 5;
    do {
      iVar3 = (int)*plVar1;
      iVar6 = iVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (cVar4 != '\0') {
      return;
    }
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = *param_3;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) {
LAB_01a44654:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar7 = *(long **)(lVar8 + param_2);
    *(long *)(lVar8 + param_2) = lVar9;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar1 = plVar7 + 5;
    do {
      iVar3 = (int)*plVar1;
      iVar6 = iVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a445b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x10))();
    return;
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


