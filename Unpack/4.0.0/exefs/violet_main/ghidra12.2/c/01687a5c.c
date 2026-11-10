/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01687a5c; name: FUN_01687a5c
 */


void FUN_01687a5c(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long local_50;
  undefined4 local_48;
  
  puVar7 = PTR_DAT_047db018;
  uVar8 = FUN_01687cb0(*(undefined8 *)PTR_DAT_047db018);
  *(undefined8 *)(param_1 + 0x6098) = uVar8;
  if (*param_2 != 0) {
    local_50 = param_1 + 0x10;
    local_48 = 0x22;
    plVar12 = *(long **)(*(long *)puVar7 + 0x10);
    lVar9 = FUN_01687e24(*(undefined8 *)(*(long *)puVar7 + 8),param_1 + 8,param_2,&local_50);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_01687c88;
    }
    plVar10 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
      do {
        lVar11 = *plVar2;
        iVar3 = (int)lVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_01687c30;
    }
    *plVar12 = lVar9;
  }
  if (param_2[1] != 0) {
    local_50 = param_1 + 0x10;
    local_48 = 0xa1;
    lVar9 = *(long *)(*(long *)puVar7 + 0x10);
    lVar11 = FUN_01687e24(*(undefined8 *)(*(long *)puVar7 + 8),param_1 + 8,param_2 + 1,&local_50);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_01687c88;
    }
    plVar12 = *(long **)(lVar9 + 0x10);
    *(undefined8 *)(lVar9 + 0x10) = 0;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 5;
      do {
        lVar6 = *plVar10;
        iVar3 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_01687c30;
    }
    *(long *)(lVar9 + 0x10) = lVar11;
  }
  if (param_2[2] != 0) {
    local_50 = param_1 + 0x10;
    local_48 = 0x12;
    lVar9 = *(long *)(*(long *)puVar7 + 0x10);
    lVar11 = FUN_01687e24(*(undefined8 *)(*(long *)puVar7 + 8),param_1 + 8,param_2 + 2,&local_50);
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x28);
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
LAB_01687c88:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar12 = *(long **)(lVar9 + 8);
    *(undefined8 *)(lVar9 + 8) = 0;
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 5;
      do {
        lVar6 = *plVar10;
        iVar3 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
LAB_01687c30:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(lVar9 + 8) = lVar11;
  }
  return;
}


