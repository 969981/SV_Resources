/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e4870; name: FUN_029e4870
 */


bool FUN_029e4870(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar11 = *param_1;
    if (*(uint *)(param_2[-1] + 0x1f8) < *(uint *)(lVar11 + 0x1f8)) {
      *param_1 = 0;
      lVar7 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar7;
      plVar5 = (long *)param_2[-1];
      param_2[-1] = 0;
      if (plVar5 != (long *)0x0) {
        plVar8 = plVar5 + 5;
        do {
          lVar7 = *plVar8;
          iVar10 = (int)lVar7 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *(int *)plVar8 = iVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_029e4ab0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      param_2[-1] = lVar11;
    }
    break;
  case 3:
    FUN_029e40e0(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_029e4330(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_029e44e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_029e40e0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      iVar10 = 0;
      plVar5 = param_1 + 3;
      plVar8 = param_1 + 2;
      do {
        plVar6 = plVar5;
        lVar11 = *plVar6;
        if (*(uint *)(lVar11 + 0x1f8) < *(uint *)(*plVar8 + 0x1f8)) {
          plVar4 = (long *)0x0;
          *plVar6 = 0;
          plVar5 = plVar6;
          while( true ) {
            plVar9 = plVar8;
            *plVar5 = 0;
            if (plVar4 != (long *)0x0) {
              plVar8 = plVar4 + 5;
              do {
                lVar7 = *plVar8;
                iVar3 = (int)lVar7 + -1;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar2) {
                  *(int *)plVar8 = iVar3;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))();
              }
              else if ((int)lVar7 == 0) goto LAB_029e4ab0;
            }
            lVar7 = *plVar9;
            *plVar9 = 0;
            *plVar5 = lVar7;
            if (plVar9 == param_1) break;
            if (*(uint *)(plVar9[-1] + 0x1f8) <= *(uint *)(lVar11 + 0x1f8)) goto LAB_029e49d8;
            plVar4 = (long *)*plVar9;
            plVar8 = plVar9 + -1;
            plVar5 = plVar9;
          }
          plVar9 = param_1;
LAB_029e49d8:
          plVar5 = (long *)*plVar9;
          *plVar9 = 0;
          if (plVar5 != (long *)0x0) {
            plVar8 = plVar5 + 5;
            do {
              lVar7 = *plVar8;
              iVar3 = (int)lVar7 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *(int *)plVar8 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
            else if ((int)lVar7 == 0) goto LAB_029e4ab0;
          }
          iVar10 = iVar10 + 1;
          *plVar9 = lVar11;
          if (iVar10 == 8) {
            return plVar6 + 1 == param_2;
          }
        }
        plVar5 = plVar6 + 1;
        plVar8 = plVar6;
      } while (plVar6 + 1 != param_2);
    }
  }
  return true;
}


