/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f50e68; name: FUN_00f50e68
 */


void FUN_00f50e68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 0x130) == 3) {
    puVar7 = (undefined8 *)FUN_00cb7028(param_1,param_4);
    plVar9 = (long *)*puVar7;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar2 = (long *)plVar9[0x1b];
      for (plVar10 = (long *)plVar9[0x1a]; plVar10 != plVar2; plVar10 = plVar10 + 1) {
        lVar6 = *plVar10 + 0x68;
        lVar11 = *(long *)(*plVar10 + 0x70);
        if (lVar11 != lVar6) {
          if ((*(char *)param_5[1] == '\0') ||
             (*(long *)(*(long *)(lVar11 + 0x10) + 0x30) == *param_5)) {
            plVar8 = (long *)(*(long *)(*(long *)(lVar11 + 0x10) + 0x100) + 0x30);
            (**(code **)(*plVar8 + 0x58))(plVar8,param_2,param_3);
          }
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 != lVar6) {
            if ((*(char *)param_5[1] == '\0') ||
               (*(long *)(*(long *)(lVar11 + 0x10) + 0x30) == *param_5)) {
              plVar8 = (long *)(*(long *)(*(long *)(lVar11 + 0x10) + 0x100) + 0x30);
              (**(code **)(*plVar8 + 0x58))(plVar8,param_2,param_3);
            }
            lVar11 = *(long *)(lVar11 + 8);
            if (lVar11 != lVar6) {
              if ((*(char *)param_5[1] == '\0') ||
                 (*(long *)(*(long *)(lVar11 + 0x10) + 0x30) == *param_5)) {
                plVar8 = (long *)(*(long *)(*(long *)(lVar11 + 0x10) + 0x100) + 0x30);
                (**(code **)(*plVar8 + 0x58))(plVar8,param_2,param_3);
              }
              lVar11 = *(long *)(lVar11 + 8);
              if (lVar11 != lVar6) {
                if ((*(char *)param_5[1] == '\0') ||
                   (*(long *)(*(long *)(lVar11 + 0x10) + 0x30) == *param_5)) {
                  plVar8 = (long *)(*(long *)(*(long *)(lVar11 + 0x10) + 0x100) + 0x30);
                  (**(code **)(*plVar8 + 0x58))(plVar8,param_2,param_3);
                }
                while (lVar11 = *(long *)(lVar11 + 8), lVar11 != lVar6) {
                  if ((*(char *)param_5[1] == '\0') ||
                     (*(long *)(*(long *)(lVar11 + 0x10) + 0x30) == *param_5)) {
                    plVar8 = (long *)(*(long *)(*(long *)(lVar11 + 0x10) + 0x100) + 0x30);
                    (**(code **)(*plVar8 + 0x58))(plVar8,param_2,param_3);
                  }
                }
              }
            }
          }
        }
      }
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00f51050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
      if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


