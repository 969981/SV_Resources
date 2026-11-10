/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02713e9c; name: FUN_02713e9c
 */


void FUN_02713e9c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar8 = (long *)*param_2;
      plVar5 = (long *)param_2[4];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 5;
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
          (**(code **)(*plVar5 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_02713fa0;
      }
      plVar5 = (long *)param_2[3];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 5;
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
          (**(code **)(*plVar5 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_02713fa0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar5 = *(long **)(param_1 + 0x38);
      uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x30,8);
      }
      else {
        FUN_00c48fe8(plVar5,param_2,0x30,8);
      }
      param_2 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


