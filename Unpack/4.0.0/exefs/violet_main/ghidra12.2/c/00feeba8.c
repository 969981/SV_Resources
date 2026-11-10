/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00feeba8; name: FUN_00feeba8
 */


void FUN_00feeba8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &DAT_045d2188;
  param_1[4] = &PTR_LAB_045d21c0;
  if (param_1[6] != 0) {
    lVar9 = param_1[0xe];
    lVar8 = param_1[0xf];
    if ((((lVar9 != lVar8) && (FUN_00feee04(param_1[6],lVar9), lVar9 + 0x28 != lVar8)) &&
        (FUN_00feee04(param_1[6]), lVar9 + 0x50 != lVar8)) &&
       (FUN_00feee04(param_1[6]), lVar9 + 0x78 != lVar8)) {
      FUN_00feee04(param_1[6]);
      for (lVar9 = lVar9 + 0xa0; lVar9 != lVar8; lVar9 = lVar9 + 0x28) {
        FUN_00feee04(param_1[6],lVar9);
      }
    }
  }
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 0x20))();
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar9 = *plVar1;
      iVar4 = (int)lVar9 + -1;
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
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (param_1[0xe] != 0) {
    FUN_00fef244();
    lVar8 = param_1[0xe];
    lVar9 = param_1[0x10];
    plVar5 = (long *)param_1[0x11];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,8);
    }
  }
  lVar9 = param_1[7];
  if (lVar9 != 0) {
    lVar8 = param_1[8];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        lVar8 = lVar8 + -0x40;
        FUN_00f91cdc(lVar8);
      } while (lVar9 != lVar8);
      lVar8 = param_1[7];
    }
    lVar7 = param_1[9];
    plVar5 = (long *)param_1[10];
    param_1[8] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar7 - lVar8,8);
    }
  }
  if (param_1[6] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00feecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1[6] + 0x20) + 0x18))();
  return;
}


