/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01430c10; name: FUN_01430c10
 */


void FUN_01430c10(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  *param_1 = 0;
  if (lVar8 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    plVar5 = *(long **)(lVar8 + 0x30);
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
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (*(long **)(lVar8 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar8 + 0x28) + 0x20))();
    }
  }
  plVar5 = *(long **)param_1[1];
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00c4e600();
    if (0 < *(int *)(lVar7 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar8,0x40,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01430ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,0x40,8);
  return;
}


