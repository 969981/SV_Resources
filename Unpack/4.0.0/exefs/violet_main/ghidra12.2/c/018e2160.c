/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e2160; name: FUN_018e2160
 */


void FUN_018e2160(undefined8 *param_1)

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
  
  *param_1 = &DAT_045ee330;
  param_1[4] = &PTR_LAB_045ee368;
  FUN_018e2638(param_1 + 0x42);
  FUN_018e2638(param_1 + 0x41);
  plVar5 = (long *)param_1[0x40];
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
    else if ((int)lVar9 == 0) goto LAB_018e24e0;
  }
  plVar5 = (long *)param_1[0x3f];
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
    else if ((int)lVar9 == 0) goto LAB_018e24e0;
  }
  plVar5 = (long *)param_1[0x3e];
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
    else if ((int)lVar9 == 0) goto LAB_018e24e0;
  }
  plVar5 = (long *)param_1[0x3d];
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
    else if ((int)lVar9 == 0) goto LAB_018e24e0;
  }
  plVar5 = (long *)param_1[0x3c];
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
    else if ((int)lVar9 == 0) goto LAB_018e24e0;
  }
  plVar5 = (long *)param_1[0x3b];
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
LAB_018e24e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00db239c(param_1 + 0x33);
  FUN_00db239c(param_1 + 0x2b);
  lVar9 = param_1[0x24];
  if (lVar9 != 0) {
    lVar8 = param_1[0x25];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        lVar8 = lVar8 + -0x40;
        FUN_00db239c(lVar8);
      } while (lVar9 != lVar8);
      lVar8 = param_1[0x24];
    }
    lVar7 = param_1[0x26];
    plVar5 = (long *)param_1[0x27];
    param_1[0x25] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar9 = param_1[0x1d];
  if (lVar9 != 0) {
    lVar8 = param_1[0x1e];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        lVar8 = lVar8 + -0x40;
        FUN_00db239c(lVar8);
      } while (lVar9 != lVar8);
      lVar8 = param_1[0x1d];
    }
    lVar7 = param_1[0x1f];
    plVar5 = (long *)param_1[0x20];
    param_1[0x1e] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar9 = param_1[0x16];
  if (lVar9 != 0) {
    lVar8 = param_1[0x17];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        lVar8 = lVar8 + -0x40;
        FUN_00db239c(lVar8);
      } while (lVar9 != lVar8);
      lVar8 = param_1[0x16];
    }
    lVar7 = param_1[0x18];
    plVar5 = (long *)param_1[0x19];
    param_1[0x17] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar9 = param_1[0xf];
  if (lVar9 != 0) {
    lVar8 = param_1[0x10];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        lVar8 = lVar8 + -0x40;
        FUN_00db239c(lVar8);
      } while (lVar9 != lVar8);
      lVar8 = param_1[0xf];
    }
    lVar7 = param_1[0x11];
    plVar5 = (long *)param_1[0x12];
    param_1[0x10] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar9 = param_1[8];
  if (lVar9 == 0) {
    return;
  }
  lVar8 = param_1[9];
  if (lVar8 == lVar9) {
    lVar8 = lVar9;
  }
  else {
    do {
      lVar8 = lVar8 + -0x40;
      FUN_00db239c(lVar8);
    } while (lVar9 != lVar8);
    lVar8 = param_1[8];
  }
  param_1[9] = lVar9;
  lVar9 = param_1[10];
  plVar5 = (long *)param_1[0xb];
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x018e23e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,8);
    return;
  }
  FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,8);
  return;
}


