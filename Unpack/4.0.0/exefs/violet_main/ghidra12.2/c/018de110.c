/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018de110; name: FUN_018de110
 */


void FUN_018de110(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = &DAT_045d1bb8;
  param_1[4] = &PTR_LAB_045d1bf0;
  plVar6 = (long *)param_1[0xd];
  while (plVar6 != (long *)0x0) {
    plVar8 = (long *)*plVar6;
    if ((long *)plVar6[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[5] + 0x20))();
    }
    plVar7 = (long *)param_1[0xe];
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x38,8);
      plVar6 = plVar8;
    }
    else {
      FUN_00c48fe8(plVar7,plVar6,0x38,8);
      plVar6 = plVar8;
    }
  }
  FUN_018de240(param_1 + 7);
  plVar6 = (long *)param_1[6];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 5;
    do {
      lVar5 = *plVar8;
      iVar3 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x018de214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
    if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


