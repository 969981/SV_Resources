/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142e8ec; name: FUN_0142e8ec
 */


void FUN_0142e8ec(undefined8 *param_1)

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
  
  *param_1 = &DAT_045d6fb8;
  param_1[4] = &PTR_LAB_045d7058;
  plVar5 = (long *)param_1[0x27];
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
    else if ((int)lVar9 == 0) goto LAB_0142ea90;
  }
  if (param_1[0x1f] != 0) {
    FUN_0142ebdc();
    lVar8 = param_1[0x1f];
    lVar9 = param_1[0x21];
    plVar5 = (long *)param_1[0x22];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,8);
        goto LAB_0142e968;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,8);
  }
LAB_0142e968:
  plVar5 = (long *)param_1[0x1e];
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
    else if ((int)lVar9 == 0) goto LAB_0142ea90;
  }
  plVar5 = (long *)param_1[0x1d];
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
    else if ((int)lVar9 == 0) goto LAB_0142ea90;
  }
  lVar9 = param_1[0x16];
  if (lVar9 != 0) {
    lVar8 = param_1[0x18];
    plVar5 = (long *)param_1[0x19];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar9,lVar8 << 3,1);
        goto LAB_0142e9b8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 << 3,1);
  }
LAB_0142e9b8:
  lVar9 = param_1[0xf];
  if (lVar9 != 0) {
    lVar8 = param_1[0x11];
    plVar5 = (long *)param_1[0x12];
    param_1[0x10] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,4);
        goto LAB_0142e9fc;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,4);
  }
LAB_0142e9fc:
  lVar9 = param_1[8];
  if (lVar9 != 0) {
    lVar8 = param_1[10];
    plVar5 = (long *)param_1[0xb];
    param_1[9] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,4);
        goto LAB_0142ea40;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,4);
  }
LAB_0142ea40:
  plVar5 = (long *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x0142eb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if ((int)lVar9 == 0) {
LAB_0142ea90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


