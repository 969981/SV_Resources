/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270efd4; name: FUN_0270efd4
 */


void FUN_0270efd4(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_045d0ac0;
  param_1[4] = &PTR_LAB_045d0af8;
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 0x20))();
  }
  FUN_0270f220(param_1 + 0x22);
  lVar7 = param_1[0x1b];
  if (lVar7 != 0) {
    lVar1 = param_1[0x1d];
    plVar9 = (long *)param_1[0x1e];
    param_1[0x1c] = lVar7;
    uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar1 - lVar7,4);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,lVar1 - lVar7,4);
    }
  }
  plVar9 = (long *)param_1[0x14];
  if (plVar9 != (long *)0x0) {
    plVar8 = (long *)*plVar9;
    if ((long *)plVar9[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[5] + 0x20))();
    }
    plVar10 = (long *)param_1[0x15];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar10,plVar9,0x38,8);
    }
    while (plVar8 != (long *)0x0) {
      plVar9 = (long *)*plVar8;
      if ((long *)plVar8[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[5] + 0x20))();
      }
      plVar10 = (long *)param_1[0x15];
      uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,0x38,8);
        plVar8 = plVar9;
      }
      else {
        FUN_00c48fe8(plVar10,plVar8,0x38,8);
        plVar8 = plVar9;
      }
    }
  }
  lVar7 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar7 != 0) {
    FUN_0270f260(param_1 + 0xf);
  }
  FUN_0270f2e8(param_1 + 7);
  plVar9 = (long *)param_1[6];
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar7 = *plVar8;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0270f0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))();
      return;
    }
    if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


