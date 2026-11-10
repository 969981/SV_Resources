/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dff9e8; name: FUN_00dff9e8
 */


void FUN_00dff9e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  while (lVar8 != lVar7) {
    param_1[2] = lVar8 + -8;
    plVar9 = *(long **)(lVar8 + -8);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar8 = *plVar1;
        iVar4 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar8 = param_1[2];
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return;
  }
  lVar8 = param_1[3];
  plVar9 = *(long **)param_1[4];
  uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar9,lVar7,lVar8 - lVar7,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00dffa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar8 - lVar7,8);
  return;
}


