/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0273898c; name: FUN_0273898c
 */


void FUN_0273898c(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_045d8360;
  param_1[4] = &PTR_LAB_045d8398;
  FUN_02738bd8(DAT_0485a0e8,param_1 + 0x19);
  plVar5 = (long *)param_1[0x18];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar8 = *plVar9;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_02738bb0;
  }
  if (param_1[0x13] != 0) {
    lVar8 = param_1[0x11];
    plVar5 = (long *)param_1[0x12];
    *(undefined8 *)(*plVar5 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = *plVar5;
    param_1[0x13] = 0;
    while (plVar5 != param_1 + 0x11) {
      plVar10 = (long *)plVar5[1];
      FUN_01445aac(plVar5 + 2);
      plVar9 = (long *)param_1[0x14];
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar5,0x40,8);
        plVar5 = plVar10;
      }
      else {
        FUN_00c48fe8(plVar9,plVar5,0x40,8);
        plVar5 = plVar10;
      }
    }
  }
  plVar5 = (long *)param_1[0xf];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar8 = *plVar9;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_02738bb0;
  }
  plVar5 = (long *)param_1[0xd];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar8 = *plVar9;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_02738bb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar8 = param_1[6];
  if (lVar8 == 0) {
    return;
  }
  lVar1 = param_1[8];
  plVar5 = (long *)param_1[9];
  param_1[7] = lVar8;
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02738aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar1 - lVar8,4);
    return;
  }
  FUN_00c48fe8(plVar5,lVar8,lVar1 - lVar8,4);
  return;
}


