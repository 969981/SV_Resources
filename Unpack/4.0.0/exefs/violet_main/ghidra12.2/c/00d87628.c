/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d87628; name: FUN_00d87628
 */


void FUN_00d87628(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if (param_1[2] != 0) {
    lVar8 = *param_1;
    plVar2 = (long *)param_1[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = *plVar2;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar9 = (long *)plVar2[1];
      FUN_00d8a3cc(plVar2 + 5);
      FUN_00d8a360(plVar2 + 4);
      plVar6 = (long *)plVar2[3];
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar8 = *plVar1;
          iVar5 = (int)lVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar6 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar2,0x38,8);
        plVar2 = plVar9;
      }
      else {
        FUN_00c48fe8(plVar6,plVar2,0x38,8);
        plVar2 = plVar9;
      }
    }
  }
  return;
}


