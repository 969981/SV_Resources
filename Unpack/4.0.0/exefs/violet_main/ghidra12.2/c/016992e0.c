/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016992e0; name: FUN_016992e0
 */


undefined8 FUN_016992e0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_2;
  lVar8 = *param_1;
  uVar2 = *(uint *)(lVar9 + 0x1f8);
  uVar3 = *(uint *)(*param_3 + 0x1f8);
  if (uVar2 < *(uint *)(lVar8 + 0x1f8)) {
    *param_1 = 0;
    if (uVar3 < uVar2) {
      lVar9 = *param_3;
      *param_3 = 0;
      *param_1 = lVar9;
      plVar7 = (long *)*param_3;
      *param_3 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
LAB_01699510:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *param_3 = lVar8;
    }
    else {
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      plVar7 = (long *)*param_2;
      *param_2 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_01699510;
      }
      *param_2 = lVar8;
      if (*(uint *)(*param_3 + 0x1f8) < *(uint *)(lVar8 + 0x1f8)) {
        *param_2 = 0;
        lVar9 = *param_3;
        *param_3 = 0;
        *param_2 = lVar9;
        plVar7 = (long *)*param_3;
        *param_3 = 0;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar9 = *plVar1;
            iVar6 = (int)lVar9 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar9 == 0) goto LAB_01699510;
        }
        *param_3 = lVar8;
        return 2;
      }
    }
  }
  else {
    if (uVar2 <= uVar3) {
      return 0;
    }
    *param_2 = 0;
    lVar8 = *param_3;
    *param_3 = 0;
    *param_2 = lVar8;
    plVar7 = (long *)*param_3;
    *param_3 = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar8 = *plVar1;
        iVar6 = (int)lVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_01699510;
    }
    *param_3 = lVar9;
    lVar8 = *param_1;
    if (*(uint *)(*param_2 + 0x1f8) < *(uint *)(lVar8 + 0x1f8)) {
      *param_1 = 0;
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      plVar7 = (long *)*param_2;
      *param_2 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_01699510;
      }
      *param_2 = lVar8;
      return 2;
    }
  }
  return 1;
}


