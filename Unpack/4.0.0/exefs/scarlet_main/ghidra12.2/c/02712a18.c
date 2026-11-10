/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02712a18; name: FUN_02712a18
 */


void FUN_02712a18(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_045d10b0;
  param_1[4] = &PTR_LAB_045d10e8;
  plVar5 = (long *)param_1[0x24];
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
  FUN_00ff9cb8(param_1 + 0x1c);
  lVar9 = param_1[0x14];
  if (lVar9 != 0) {
    lVar8 = param_1[0x15];
    if (lVar8 == lVar9) {
      lVar8 = lVar9;
    }
    else {
      do {
        if (*(long **)(lVar8 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x28) + 0x20))();
        }
        if (*(long **)(lVar8 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x48) + 0x20))();
        }
        if (*(long **)(lVar8 + -0x68) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x68) + 0x20))();
        }
        if (*(long **)(lVar8 + -0x88) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x88) + 0x20))();
        }
        plVar5 = (long *)(lVar8 + -0xa8);
        lVar8 = lVar8 + -0xc0;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar9 != lVar8);
      lVar8 = param_1[0x14];
    }
    lVar7 = param_1[0x16];
    plVar5 = (long *)param_1[0x17];
    param_1[0x15] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar7 - lVar8,0x10);
        goto LAB_02712a74;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar7 - lVar8,0x10);
  }
LAB_02712a74:
  lVar9 = param_1[0xd];
  if (lVar9 != 0) {
    lVar8 = param_1[0xf];
    plVar5 = (long *)param_1[0x10];
    param_1[0xe] = lVar9;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,0x10);
        goto LAB_02712a7c;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,0x10);
  }
LAB_02712a7c:
  lVar9 = param_1[6];
  if (lVar9 == 0) {
    return;
  }
  lVar8 = param_1[7];
  if (lVar8 == lVar9) {
    lVar8 = lVar9;
  }
  else {
    do {
      if (*(long **)(lVar8 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar8 + -0x98) + 0x20))();
      }
      plVar5 = (long *)(lVar8 + -0xb8);
      lVar8 = lVar8 + -0xd0;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
      }
    } while (lVar9 != lVar8);
    lVar8 = param_1[6];
  }
  param_1[7] = lVar9;
  lVar9 = param_1[8];
  plVar5 = (long *)param_1[9];
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00c4e600();
    if (0 < *(int *)(lVar7 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02712b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,0x10);
  return;
}


