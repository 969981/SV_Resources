/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01699100; name: FUN_01699100
 */


ulong FUN_01699100(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  uVar6 = FUN_016992e0();
  lVar9 = *param_3;
  if (*(uint *)(*param_4 + 0x1f8) < *(uint *)(lVar9 + 0x1f8)) {
    *param_3 = 0;
    lVar7 = *param_4;
    *param_4 = 0;
    *param_3 = lVar7;
    plVar8 = (long *)*param_4;
    *param_4 = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar7 = *plVar1;
        iVar5 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar6 = uVar6 & 0xffffffff;
      }
      else if ((int)lVar7 == 0) goto LAB_016992ac;
    }
    *param_4 = lVar9;
    lVar9 = *param_2;
    iVar5 = (int)uVar6;
    if (*(uint *)(lVar9 + 0x1f8) <= *(uint *)(*param_3 + 0x1f8)) {
      return (ulong)(iVar5 + 1);
    }
    *param_2 = 0;
    lVar7 = *param_3;
    *param_3 = 0;
    *param_2 = lVar7;
    plVar8 = (long *)*param_3;
    *param_3 = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if ((int)lVar7 == 0) goto LAB_016992ac;
    }
    *param_3 = lVar9;
    lVar9 = *param_1;
    if (*(uint *)(*param_2 + 0x1f8) < *(uint *)(lVar9 + 0x1f8)) {
      *param_1 = 0;
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      plVar8 = (long *)*param_2;
      *param_2 = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar7 = *plVar1;
          iVar4 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        else if ((int)lVar7 == 0) {
LAB_016992ac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      uVar6 = (ulong)(iVar5 + 3);
      *param_2 = lVar9;
    }
    else {
      uVar6 = (ulong)(iVar5 + 2);
    }
  }
  return uVar6;
}


