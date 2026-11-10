/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e52258; name: FUN_00e52258
 */


void FUN_00e52258(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = param_1[0x22];
  *param_1 = &DAT_045d2888;
  param_1[4] = &PTR_LAB_045d28c0;
  if (lVar11 != 0) {
    lVar10 = param_1[0x23];
    if (lVar10 == lVar11) {
      lVar10 = lVar11;
    }
    else {
      do {
        plVar5 = (long *)(lVar10 + -8);
        lVar10 = lVar10 + -0x20;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      } while (lVar11 != lVar10);
      lVar10 = param_1[0x22];
    }
    lVar8 = param_1[0x24];
    plVar5 = (long *)param_1[0x25];
    param_1[0x23] = lVar11;
    uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar8 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar10,lVar8 - lVar10,8);
    }
  }
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 0x20))();
  }
  plVar5 = (long *)param_1[0x1b];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar11 = *plVar9;
      iVar4 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00e52554;
  }
  plVar5 = (long *)param_1[0x19];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar11 = *plVar9;
      iVar4 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00e52554;
  }
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    plVar9 = (long *)param_1[0x13];
    if (plVar9 == plVar5) {
      plVar9 = plVar5;
    }
    else {
      do {
        plVar9 = plVar9 + -1;
        plVar6 = (long *)*plVar9;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 5;
          do {
            lVar11 = *plVar1;
            iVar4 = (int)lVar11 + -1;
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
          else if ((int)lVar11 == 0) goto LAB_00e52554;
        }
      } while (plVar9 != plVar5);
      plVar9 = (long *)param_1[0x12];
    }
    lVar11 = param_1[0x14];
    plVar6 = (long *)param_1[0x15];
    param_1[0x13] = plVar5;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar9,lVar11 - (long)plVar9,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar9,lVar11 - (long)plVar9,8);
    }
  }
  if (param_1[0xb] != 0) {
    FUN_00e5257c();
    lVar10 = param_1[0xb];
    lVar11 = param_1[0xd];
    plVar5 = (long *)param_1[0xe];
    uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar11 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar10,lVar11 - lVar10,8);
    }
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 5;
    do {
      lVar11 = *plVar9;
      iVar4 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e524b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if ((int)lVar11 == 0) {
LAB_00e52554:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


