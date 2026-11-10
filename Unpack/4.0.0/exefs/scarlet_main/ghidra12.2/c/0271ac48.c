/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271ac48; name: FUN_0271ac48
 */


void FUN_0271ac48(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_045d3008;
  param_1[4] = &PTR_LAB_045d3040;
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if ((long *)param_1[0x22] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x22] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  lVar9 = param_1[0x17];
  if (lVar9 != 0) {
    lVar2 = param_1[0x19];
    plVar7 = (long *)param_1[0x1a];
    param_1[0x18] = lVar9;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar9,lVar2 - lVar9,4);
        goto LAB_0271acc8;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar2 - lVar9,4);
  }
LAB_0271acc8:
  lVar9 = param_1[0x10];
  if (lVar9 != 0) {
    lVar2 = param_1[0x12];
    plVar7 = (long *)param_1[0x13];
    param_1[0x11] = lVar9;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar9,lVar2 - lVar9,4);
        goto LAB_0271ad0c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar2 - lVar9,4);
  }
LAB_0271ad0c:
  lVar9 = param_1[7];
  if (lVar9 != 0) {
    lVar2 = param_1[9];
    plVar7 = (long *)param_1[10];
    param_1[8] = lVar9;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar9,lVar2 - lVar9,4);
        goto LAB_0271ad50;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar2 - lVar9,4);
  }
LAB_0271ad50:
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar9 = *plVar1;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0271ada8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


