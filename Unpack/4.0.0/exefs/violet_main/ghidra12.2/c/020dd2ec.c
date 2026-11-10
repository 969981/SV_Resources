/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020dd2ec; name: FUN_020dd2ec
 */


void FUN_020dd2ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  puVar7 = (undefined8 *)param_1[0x4c];
  *param_1 = &PTR_FUN_0457f710;
  param_1[6] = &PTR_LAB_0457f7b8;
  param_1[4] = &PTR_LAB_0457f770;
  param_1[5] = &PTR_LAB_0457f790;
  if (puVar7 != (undefined8 *)0x0) {
    plVar9 = (long *)*puVar7;
    if ((long *)puVar7[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar7[3] + 0x20))();
    }
    plVar8 = (long *)param_1[0x4d];
    uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar7,0x20,8);
    }
    else {
      FUN_00c48fe8(plVar8,puVar7,0x20,8);
    }
    if (plVar9 != (long *)0x0) {
      plVar8 = (long *)*plVar9;
      if ((long *)plVar9[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[3] + 0x20))();
      }
      plVar10 = (long *)param_1[0x4d];
      uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar10,plVar9,0x20,8);
      }
      while (plVar8 != (long *)0x0) {
        plVar9 = (long *)*plVar8;
        if ((long *)plVar8[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[3] + 0x20))();
        }
        plVar10 = (long *)param_1[0x4d];
        uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,0x20,8);
          plVar8 = plVar9;
        }
        else {
          FUN_00c48fe8(plVar10,plVar8,0x20,8);
          plVar8 = plVar9;
        }
      }
    }
  }
  lVar6 = param_1[0x46];
  param_1[0x46] = 0;
  if (lVar6 != 0) {
    FUN_020dd608(param_1 + 0x47);
  }
  FUN_020dd690(param_1 + 0x39);
  plVar9 = (long *)param_1[0x31];
  if (plVar9 != (long *)0x0) {
    plVar8 = (long *)param_1[0x32];
    if (plVar8 == plVar9) {
      plVar8 = plVar9;
    }
    else {
      do {
        plVar8 = plVar8 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x20))();
        }
      } while (plVar9 != plVar8);
      plVar8 = (long *)param_1[0x31];
    }
    lVar6 = param_1[0x33];
    plVar10 = (long *)param_1[0x34];
    param_1[0x32] = plVar9;
    uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,lVar6 - (long)plVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,plVar8,lVar6 - (long)plVar8,8);
    }
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 0x20))();
  }
  plVar9 = (long *)param_1[0x2f];
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar6 = *plVar8;
      iVar3 = (int)lVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2b));
  FUN_00db239c(param_1 + 0x23);
  FUN_020dd6b8(param_1 + 0x16);
  FUN_020dd6e0(param_1 + 9);
  return;
}


