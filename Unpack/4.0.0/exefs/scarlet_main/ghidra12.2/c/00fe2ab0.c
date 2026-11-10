/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe2ab0; name: FUN_00fe2ab0
 */


void FUN_00fe2ab0(undefined8 *param_1)

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
      if ((char)plVar10[-5] != '\0') {
        if ((long *)plVar10[-1] != (long *)0x0) {
          (**(code **)(*(long *)plVar10[-1] + 0x20))();
        }
        *(undefined1 *)(plVar10 + -5) = 0;
      }
      plVar8 = plVar10 + -0xf;
      if ((char)plVar10[-10] != '\0') {
        if ((long *)plVar10[-6] != (long *)0x0) {
          (**(code **)(*(long *)plVar10[-6] + 0x20))();
        }
        *(undefined1 *)(plVar10 + -10) = 0;
      }
      if ((long *)plVar10[-0xb] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[-0xb] + 0x20))();
      }
      plVar10 = (long *)*plVar8;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 5;
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
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar10 = plVar8;
    } while (plVar8 != plVar9);
    plVar8 = (long *)*param_1;
  }
  lVar2 = param_1[2];
  plVar10 = (long *)param_1[3];
  param_1[1] = plVar9;
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00fe2b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,lVar2 - (long)plVar8,8);
    return;
  }
  FUN_00c48fe8(plVar10,plVar8,lVar2 - (long)plVar8,8);
  return;
}


