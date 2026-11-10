/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159ae74; name: FUN_0159ae74
 */


void FUN_0159ae74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if (param_1[2] != 0) {
    lVar8 = *param_1;
    plVar3 = (long *)param_1[1];
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = *plVar3;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar2 = (long *)plVar3[1];
      plVar9 = (long *)plVar3[2];
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
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
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar9 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar3,0x18,8);
        plVar3 = plVar2;
      }
      else {
        FUN_00c48fe8(plVar9,plVar3,0x18,8);
        plVar3 = plVar2;
      }
    }
  }
  return;
}


