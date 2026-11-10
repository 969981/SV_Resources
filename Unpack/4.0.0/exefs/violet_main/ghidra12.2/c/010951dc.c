/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010951dc; name: FUN_010951dc
 */


void FUN_010951dc(undefined8 *param_1)

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
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[1];
  plVar6 = plVar9;
  if (plVar10 != plVar9) {
    do {
      plVar10 = plVar10 + -2;
      plVar6 = (long *)*plVar10;
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
    } while (plVar10 != plVar9);
    plVar6 = (long *)*param_1;
  }
  param_1[1] = plVar9;
  lVar5 = param_1[2];
  plVar9 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00c4e600();
    if (0 < *(int *)(lVar8 + 0x12c8)) {
      FUN_00c48fe8(plVar9,plVar6,lVar5 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0109527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar6,lVar5 - (long)plVar6,8);
  return;
}


