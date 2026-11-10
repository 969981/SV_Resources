/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02709ebc; name: FUN_02709ebc
 */


void FUN_02709ebc(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_045d07d8;
  param_1[4] = &PTR_LAB_045d0810;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5e));
  lVar8 = param_1[0x56];
  if (lVar8 != 0) {
    lVar9 = param_1[0x58];
    param_1[0x57] = lVar8;
    plVar5 = (long *)param_1[0x59];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_02709ef4;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_02709ef4:
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x54));
  FUN_0270a178(param_1 + 0x4a);
  if (*(char *)(param_1 + 0x49) != '\0') {
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  lVar8 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar8 != 0) {
    FUN_0270a220(param_1 + 0x45);
  }
  plVar5 = (long *)param_1[0x42];
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
    else if ((int)lVar8 == 0) goto LAB_0270a048;
  }
  lVar8 = param_1[0x3d];
  param_1[0x3d] = 0;
  if (lVar8 != 0) {
    FUN_0270a5d4(param_1 + 0x3e);
  }
  FUN_00ee99ec(param_1 + 0x33);
  FUN_00ee99ec(param_1 + 0x2a);
  FUN_0170bd4c(param_1 + 0x22);
  lVar8 = param_1[0x1b];
  if (lVar8 != 0) {
    lVar9 = param_1[0x1d];
    plVar5 = (long *)param_1[0x1e];
    param_1[0x1c] = lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,8);
        goto LAB_02709f64;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,8);
  }
LAB_02709f64:
  lVar8 = param_1[0x14];
  if (lVar8 != 0) {
    lVar9 = param_1[0x16];
    plVar5 = (long *)param_1[0x17];
    param_1[0x15] = lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_02709fa8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_02709fa8:
  FUN_0270a988(param_1 + 0xc);
  plVar5 = (long *)param_1[0xb];
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
    else if ((int)lVar8 == 0) {
LAB_0270a048:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[10] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0270a084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[10] + 0x20))();
  return;
}


