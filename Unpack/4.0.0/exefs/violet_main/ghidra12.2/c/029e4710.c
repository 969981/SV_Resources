/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e4710; name: FUN_029e4710
 */


void FUN_029e4710(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  FUN_029e40e0(param_1,param_1 + 1,param_1 + 2);
  plVar6 = param_1 + 2;
  plVar4 = param_1 + 3;
  do {
    if (plVar4 == param_2) {
      return;
    }
    lVar9 = *plVar4;
    if (*(uint *)(lVar9 + 0x1f8) < *(uint *)(*plVar6 + 0x1f8)) {
      plVar5 = (long *)0x0;
      *plVar4 = 0;
      plVar10 = plVar4;
      while( true ) {
        plVar8 = plVar6;
        *plVar10 = 0;
        if (plVar5 != (long *)0x0) {
          plVar6 = plVar5 + 5;
          do {
            lVar7 = *plVar6;
            iVar3 = (int)lVar7 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *(int *)plVar6 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_029e4848;
        }
        lVar7 = *plVar8;
        *plVar8 = 0;
        *plVar10 = lVar7;
        if (plVar8 == param_1) break;
        if (*(uint *)(plVar8[-1] + 0x1f8) <= *(uint *)(lVar9 + 0x1f8)) goto LAB_029e47d4;
        plVar5 = (long *)*plVar8;
        plVar6 = plVar8 + -1;
        plVar10 = plVar8;
      }
      plVar8 = param_1;
LAB_029e47d4:
      plVar6 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar6 != (long *)0x0) {
        plVar10 = plVar6 + 5;
        do {
          lVar7 = *plVar10;
          iVar3 = (int)lVar7 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *(int *)plVar10 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_029e4848:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *plVar8 = lVar9;
    }
    plVar6 = plVar4;
    plVar4 = plVar4 + 1;
  } while( true );
}


