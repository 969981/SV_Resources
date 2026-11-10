/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01291fa0; name: FUN_01291fa0
 */


void FUN_01291fa0(undefined8 *param_1)

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
  
  *param_1 = &DAT_045d1048;
  param_1[4] = &PTR_LAB_045d1080;
  FUN_012921a0();
  lVar8 = param_1[0x16];
  if (lVar8 != 0) {
    lVar9 = param_1[0x17];
    lVar7 = lVar8;
    if (lVar9 != lVar8) {
      do {
        plVar5 = *(long **)(lVar9 + -8);
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 5;
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
            (**(code **)(*plVar5 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_01292178;
        }
        plVar5 = (long *)(lVar9 + -0x10);
        lVar9 = lVar9 + -0x30;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar9 != lVar8);
      lVar7 = param_1[0x16];
    }
    lVar9 = param_1[0x18];
    plVar5 = (long *)param_1[0x19];
    param_1[0x17] = lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar7,lVar9 - lVar7,8);
        goto LAB_01291fd4;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar9 - lVar7,8);
  }
LAB_01291fd4:
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x20))();
  }
  lVar8 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar8 != 0) {
    FUN_011ea2d8(param_1 + 0xd);
  }
  lVar8 = param_1[8];
  param_1[8] = 0;
  if (lVar8 != 0) {
    FUN_011ea2d8(param_1 + 9);
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
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_01292178;
  }
  plVar5 = (long *)param_1[6];
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
                    /* WARNING: Could not recover jumptable at 0x012920d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if ((int)lVar8 == 0) {
LAB_01292178:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


