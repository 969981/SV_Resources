/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bbd790; name: FUN_02bbd790
 */


void FUN_02bbd790(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[0xf];
  *param_1 = &PTR_FUN_045d5230;
  if (lVar9 != 0) {
    lVar8 = param_1[0x10];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        plVar7 = (long *)(lVar8 + -8);
        lVar8 = lVar8 + -0x20;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x20))();
        }
      } while (lVar9 != lVar8);
      lVar8 = param_1[0xf];
    }
    lVar2 = param_1[0x11];
    plVar7 = (long *)param_1[0x12];
    param_1[0x10] = lVar9;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar8,lVar2 - lVar8,8);
        goto LAB_02bbd838;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar2 - lVar8,8);
  }
LAB_02bbd838:
  plVar7 = (long *)param_1[0xe];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar9 = *plVar1;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_02712434(param_1 + 1);
  return;
}


