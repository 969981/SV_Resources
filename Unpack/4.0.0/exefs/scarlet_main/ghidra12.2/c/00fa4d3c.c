/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa4d3c; name: FUN_00fa4d3c
 */


void FUN_00fa4d3c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 == plVar10) {
    plVar9 = plVar10;
  }
  else {
    do {
      plVar9 = plVar9 + -1;
      plVar6 = (long *)*plVar9;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    } while (plVar9 != plVar10);
    plVar9 = (long *)*param_1;
  }
  param_1[1] = plVar10;
  lVar5 = param_1[2];
  plVar10 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00c4e600();
    if (0 < *(int *)(lVar8 + 0x12c8)) {
      FUN_00c48fe8(plVar10,plVar9,lVar5 - (long)plVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00fa4dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,lVar5 - (long)plVar9,8);
  return;
}


