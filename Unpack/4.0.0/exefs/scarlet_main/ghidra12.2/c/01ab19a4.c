/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ab19a4; name: FUN_01ab19a4
 */


void FUN_01ab19a4(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &DAT_045d5038;
  param_1[4] = &PTR_LAB_045d5128;
  param_1[6] = &PTR_LAB_045d5158;
  plVar5 = (long *)param_1[0x3a];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 5;
    do {
      lVar8 = *plVar10;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar5 = (long *)param_1[0x33];
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar11 = (long *)param_1[0x34];
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar5,0x70,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar5,0x70,8);
    }
    while (plVar10 != (long *)0x0) {
      plVar5 = (long *)*plVar10;
      if ((long *)plVar10[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[5] + 0x20))();
      }
      plVar11 = (long *)param_1[0x34];
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x70,8);
        plVar10 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar11,plVar10,0x70,8);
        plVar10 = plVar5;
      }
    }
  }
  lVar8 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar8 != 0) {
    FUN_01ab1f1c(param_1 + 0x2e);
  }
  puVar9 = (undefined8 *)param_1[0x26];
  if (puVar9 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar9;
    if ((long *)puVar9[5] != (long *)0x0) {
      (**(code **)(*(long *)puVar9[5] + 0x20))();
    }
    plVar10 = (long *)param_1[0x27];
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar9,0x40,8);
    }
    else {
      FUN_00c48fe8(plVar10,puVar9,0x40,8);
    }
    if (plVar5 != (long *)0x0) {
      plVar10 = (long *)*plVar5;
      if ((long *)plVar5[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[5] + 0x20))();
      }
      plVar11 = (long *)param_1[0x27];
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar5,0x40,8);
      }
      else {
        FUN_00c48fe8(plVar11,plVar5,0x40,8);
      }
      while (plVar10 != (long *)0x0) {
        plVar5 = (long *)*plVar10;
        if ((long *)plVar10[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar10[5] + 0x20))();
        }
        plVar11 = (long *)param_1[0x27];
        uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x40,8);
          plVar10 = plVar5;
        }
        else {
          FUN_00c48fe8(plVar11,plVar10,0x40,8);
          plVar10 = plVar5;
        }
      }
    }
  }
  lVar8 = param_1[0x20];
  param_1[0x20] = 0;
  if (lVar8 != 0) {
    lVar1 = param_1[0x21];
    plVar5 = (long *)param_1[0x22];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar1 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar1 << 3,8);
    }
  }
  plVar5 = (long *)param_1[0x19];
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar11 = (long *)param_1[0x1a];
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar5,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar5,0x38,8);
    }
    while (plVar10 != (long *)0x0) {
      plVar5 = (long *)*plVar10;
      if ((long *)plVar10[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[5] + 0x20))();
      }
      plVar11 = (long *)param_1[0x1a];
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x38,8);
        plVar10 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar11,plVar10,0x38,8);
        plVar10 = plVar5;
      }
    }
  }
  lVar8 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar8 != 0) {
    lVar1 = param_1[0x14];
    plVar5 = (long *)param_1[0x15];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar1 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar1 << 3,8);
    }
  }
  lVar8 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar8 != 0) {
    FUN_00d599b4(param_1 + 0x10);
  }
  lVar8 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar8 != 0) {
    FUN_00d595a4(param_1 + 0xc);
  }
  lVar8 = param_1[7];
  param_1[7] = 0;
  if (lVar8 == 0) {
    return;
  }
  FUN_00d59194(param_1 + 8);
  return;
}


