/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271617c; name: FUN_0271617c
 */


void FUN_0271617c(undefined8 *param_1)

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
  long lVar10;
  long lVar11;
  
  *param_1 = &PTR_FUN_045d2120;
  param_1[4] = &PTR_LAB_045d2158;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x20))();
  }
  if (param_1[0xf] != 0) {
    lVar10 = param_1[0xd];
    plVar3 = (long *)param_1[0xe];
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(lVar10 + 8);
    **(long **)(lVar10 + 8) = *plVar3;
    param_1[0xf] = 0;
    while (plVar3 != param_1 + 0xd) {
      plVar2 = (long *)plVar3[1];
      plVar9 = (long *)plVar3[2];
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
        do {
          lVar10 = *plVar1;
          iVar6 = (int)lVar10 + -1;
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
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar9 = (long *)param_1[0x10];
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar3,0x18,8);
        plVar3 = plVar2;
      }
      else {
        FUN_00c48fe8(plVar9,plVar3,0x18,8);
        plVar3 = plVar2;
      }
    }
  }
  lVar10 = param_1[6];
  if (lVar10 == 0) {
    return;
  }
  lVar11 = param_1[7];
  lVar8 = lVar10;
  if (lVar11 != lVar10) {
    FUN_00eccf20(lVar11 + -0x40);
    if ((lVar11 + -0x40 != lVar10) && (FUN_00eccf20(lVar11 + -0x80), lVar11 + -0x80 != lVar10)) {
      do {
        FUN_00eccf20(lVar11 + -0xc0);
        lVar11 = lVar11 + -0x40;
      } while (lVar10 + 0x80 != lVar11);
    }
    lVar8 = param_1[6];
  }
  param_1[7] = lVar10;
  lVar10 = param_1[8];
  plVar3 = (long *)param_1[9];
  uVar7 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x027162a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar8,lVar10 - lVar8,8);
    return;
  }
  FUN_00c48fe8(plVar3,lVar8,lVar10 - lVar8,8);
  return;
}


