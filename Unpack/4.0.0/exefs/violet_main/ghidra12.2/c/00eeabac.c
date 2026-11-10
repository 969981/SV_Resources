/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eeabac; name: FUN_00eeabac
 */


void FUN_00eeabac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((char)param_1[0x1c] != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if ((char)param_1[0x1b] != '\0') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  lVar7 = param_1[0x11];
  if (lVar7 != 0) {
    lVar8 = param_1[0x13];
    plVar6 = (long *)param_1[0x14];
    param_1[0x12] = lVar7;
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar5 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar7,lVar8 - lVar7,4);
        goto LAB_00eeac14;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar8 - lVar7,4);
  }
LAB_00eeac14:
  lVar7 = param_1[10];
  if (lVar7 != 0) {
    lVar8 = param_1[0xc];
    plVar6 = (long *)param_1[0xd];
    param_1[0xb] = lVar7;
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar5 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar7,lVar8 - lVar7,4);
        goto LAB_00eeac1c;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar8 - lVar7,4);
  }
LAB_00eeac1c:
  plVar6 = (long *)param_1[7];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_00eeadd8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return;
  }
  lVar9 = param_1[1];
  lVar8 = lVar7;
  if (lVar9 != lVar7) {
    do {
      plVar6 = *(long **)(lVar9 + -0x20);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
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
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_00eeadd8;
      }
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != lVar7);
    lVar8 = *param_1;
  }
  param_1[1] = lVar7;
  lVar7 = param_1[2];
  plVar6 = (long *)param_1[3];
  uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar5 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar6,lVar8,lVar7 - lVar8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00eeace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar7 - lVar8,8);
  return;
}


