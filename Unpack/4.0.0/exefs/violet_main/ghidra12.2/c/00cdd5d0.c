/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cdd5d0; name: FUN_00cdd5d0
 */


void FUN_00cdd5d0(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_18;
  
  lVar7 = FUN_00cdd77c();
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
    if (iVar3 == -1) goto LAB_00cdd6cc;
  }
  lVar9 = *param_3;
  FUN_00cdd71c(&local_18,lVar7);
  *(undefined8 *)(lVar9 + 0x118) = 0x3f;
  if (local_18 != (long *)0x0) {
    plVar8 = local_18 + 5;
    do {
      lVar6 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)lVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar6 == -1) {
LAB_00cdd6cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(lVar9 + 0x120);
  *(long **)(lVar9 + 0x120) = local_18;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar9 = *plVar2;
      iVar3 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_00cdd6f4;
  }
  if (local_18 != (long *)0x0) {
    plVar8 = local_18 + 5;
    do {
      lVar9 = *plVar8;
      iVar3 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_00cdd6f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *param_1 = lVar7;
  return;
}


