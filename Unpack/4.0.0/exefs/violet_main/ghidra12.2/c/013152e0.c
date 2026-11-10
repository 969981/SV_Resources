/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013152e0; name: FUN_013152e0
 */


void FUN_013152e0(undefined8 *param_1)

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
  
  *param_1 = &DAT_045d6d08;
  param_1[4] = &PTR_LAB_045d6da0;
  param_1[6] = &PTR_LAB_045d6dd0;
  FUN_00f31ad0(param_1 + 0x31);
  plVar5 = (long *)param_1[0x30];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
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
    else if ((int)lVar8 == 0) goto LAB_01315504;
  }
  lVar8 = param_1[0x29];
  if (lVar8 != 0) {
    lVar9 = param_1[0x2b];
    plVar5 = (long *)param_1[0x2c];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 << 3,1);
        goto LAB_01315344;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 << 3,1);
  }
LAB_01315344:
  lVar8 = param_1[0x22];
  if (lVar8 != 0) {
    lVar9 = param_1[0x24];
    plVar5 = (long *)param_1[0x25];
    param_1[0x23] = lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_01315388;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_01315388:
  lVar8 = param_1[0x1b];
  if (lVar8 != 0) {
    lVar9 = param_1[0x1d];
    plVar5 = (long *)param_1[0x1e];
    param_1[0x1c] = lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_013153cc;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_013153cc:
  plVar5 = (long *)param_1[0x1a];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
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
    else if ((int)lVar8 == 0) goto LAB_01315504;
  }
  if (param_1[0x12] != 0) {
    FUN_01315688();
    lVar9 = param_1[0x12];
    lVar8 = param_1[0x14];
    plVar5 = (long *)param_1[0x15];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
        goto LAB_0131543c;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
  }
LAB_0131543c:
  if (param_1[10] != 0) {
    FUN_01315688();
    lVar9 = param_1[10];
    lVar8 = param_1[0xc];
    plVar5 = (long *)param_1[0xd];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
        goto LAB_01315488;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
  }
LAB_01315488:
  plVar5 = (long *)param_1[9];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
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
    else if ((int)lVar8 == 0) goto LAB_01315504;
  }
  plVar5 = (long *)param_1[8];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
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
    else if ((int)lVar8 == 0) goto LAB_01315504;
  }
  plVar5 = (long *)param_1[7];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0131565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if ((int)lVar8 == 0) {
LAB_01315504:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


