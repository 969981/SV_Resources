/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01075cb4; name: FUN_01075cb4
 */


void FUN_01075cb4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[1];
  plVar8 = plVar9;
  if (plVar10 != plVar9) {
    do {
      plVar10 = plVar10 + -1;
      plVar8 = (long *)*plVar10;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar2 = *plVar1;
          iVar5 = (int)lVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    } while (plVar10 != plVar9);
    plVar8 = (long *)*param_1;
  }
  param_1[1] = plVar9;
  lVar2 = param_1[2];
  plVar9 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01075d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,lVar2 - (long)plVar8,8);
    return;
  }
  FUN_00c48fe8(plVar9,plVar8,lVar2 - (long)plVar8,8);
  return;
}


