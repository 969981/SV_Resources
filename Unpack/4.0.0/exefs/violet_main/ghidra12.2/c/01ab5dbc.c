/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab5dbc; name: FUN_01ab5dbc
 */


void FUN_01ab5dbc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  undefined1 **ppuStack_40;
  undefined1 *local_38;
  
  *param_1 = &DAT_0459de20;
  param_1[4] = &PTR_LAB_0459dfa0;
  param_1[5] = &DAT_0459e0c8;
  param_1[0x24] = &PTR_LAB_0459e180;
  param_1[6] = &PTR_LAB_0459e120;
  param_1[7] = &PTR_LAB_0459e148;
  FUN_00c9e664(&local_58,param_1 + 0x1d);
  if (local_58 != (long *)0x0) {
    local_48 = 0;
    if (local_50 != (long *)0x0) {
      local_48 = local_50[9];
    }
    local_48 = local_48 + 0x108;
    ppuStack_40 = &local_38;
    local_60 = param_1;
    local_38 = (undefined1 *)&local_60;
    FUN_01ab631c(local_48,&local_48);
  }
  if (local_50 != (long *)0x0) {
    plVar11 = local_50 + 5;
    do {
      lVar10 = *plVar11;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01ab61b4;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x60))();
  }
  lVar10 = param_1[0xa4];
  if (lVar10 != 0) {
    lVar8 = param_1[0xa5];
    if (lVar8 == lVar10) {
      lVar8 = lVar10;
    }
    else {
      do {
        if (*(long **)(lVar8 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x10) + 0x20))();
        }
        if (*(long **)(lVar8 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x30) + 0x20))();
        }
        if (*(long **)(lVar8 + -0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x40) + 0x20))();
        }
        plVar11 = (long *)(lVar8 + -0x60);
        lVar8 = lVar8 + -0x60;
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 0x20))();
        }
      } while (lVar10 != lVar8);
      lVar8 = param_1[0xa4];
    }
    lVar6 = param_1[0xa6];
    param_1[0xa5] = lVar10;
    plVar11 = (long *)param_1[0xa7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar8,lVar6 - lVar8,8);
        goto LAB_01ab5f18;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar6 - lVar8,8);
  }
LAB_01ab5f18:
  pcVar7 = (code *)param_1[0x93];
  if (pcVar7 != (code *)0x0) {
    param_1[0x95] = 0;
    param_1[0x94] = 0;
    param_1[0x93] = 0;
    param_1[0x92] = 0;
    (*pcVar7)(param_1 + 0x96);
  }
  pcVar7 = (code *)param_1[0x83];
  if (pcVar7 != (code *)0x0) {
    param_1[0x85] = 0;
    param_1[0x84] = 0;
    param_1[0x83] = 0;
    param_1[0x82] = 0;
    (*pcVar7)(param_1 + 0x86);
  }
  pcVar7 = (code *)param_1[0x71];
  if (pcVar7 != (code *)0x0) {
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    (*pcVar7)(param_1 + 0x74);
  }
  pcVar7 = (code *)param_1[0x61];
  if (pcVar7 != (code *)0x0) {
    param_1[99] = 0;
    param_1[0x62] = 0;
    param_1[0x61] = 0;
    param_1[0x60] = 0;
    (*pcVar7)(param_1 + 100);
  }
  pcVar7 = (code *)param_1[0x4f];
  if (pcVar7 != (code *)0x0) {
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    (*pcVar7)(param_1 + 0x52);
  }
  lVar10 = param_1[0x44];
  if (lVar10 != 0) {
    lVar8 = param_1[0x46];
    param_1[0x45] = lVar10;
    plVar11 = (long *)param_1[0x47];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar10,lVar8 - lVar10,8);
        goto LAB_01ab5fa0;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar8 - lVar10,8);
  }
LAB_01ab5fa0:
  lVar10 = param_1[0x3d];
  if (lVar10 != 0) {
    lVar8 = param_1[0x3f];
    plVar11 = (long *)param_1[0x40];
    param_1[0x3e] = lVar10;
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar10,lVar8 - lVar10,8);
        goto LAB_01ab5fe4;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar8 - lVar10,8);
  }
LAB_01ab5fe4:
  plVar11 = (long *)param_1[0x36];
  if (plVar11 != (long *)0x0) {
    plVar9 = (long *)param_1[0x37];
    if (plVar9 == plVar11) {
      plVar9 = plVar11;
    }
    else {
      do {
        plVar9 = plVar9 + -1;
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x60))();
        }
      } while (plVar11 != plVar9);
      plVar9 = (long *)param_1[0x36];
    }
    lVar10 = param_1[0x38];
    plVar1 = (long *)param_1[0x39];
    param_1[0x37] = plVar11;
    uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar5 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar1,plVar9,lVar10 - (long)plVar9,8);
        goto LAB_01ab6054;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar9,lVar10 - (long)plVar9,8);
  }
LAB_01ab6054:
  lVar10 = param_1[0x2f];
  if (lVar10 != 0) {
    lVar8 = param_1[0x31];
    plVar11 = (long *)param_1[0x32];
    param_1[0x30] = lVar10;
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar10,lVar8 - lVar10,8);
        goto LAB_01ab605c;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar8 - lVar10,8);
  }
LAB_01ab605c:
  lVar10 = param_1[0x28];
  if (lVar10 != 0) {
    lVar8 = param_1[0x2a];
    plVar11 = (long *)param_1[0x2b];
    param_1[0x29] = lVar10;
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar10,lVar8 - lVar10,8);
        goto LAB_01ab60a0;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar8 - lVar10,8);
  }
LAB_01ab60a0:
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 0x60))();
  }
  plVar11 = (long *)param_1[0x26];
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 5;
    do {
      lVar10 = *plVar9;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_01ab61b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


