/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f31654; name: FUN_00f31654
 */


void FUN_00f31654(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  *param_1 = &DAT_045d1648;
  param_1[4] = &PTR_LAB_045d1680;
  FUN_00f31bf0(param_1 + 0x41);
  FUN_00f31ad0(param_1 + 0x3a);
  if ((long *)param_1[0x33] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 0x20))();
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x20))();
  }
  plVar5 = (long *)param_1[0x29];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 5;
    do {
      lVar9 = *plVar10;
      iVar4 = (int)lVar9 + -1;
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
    else if ((int)lVar9 == 0) goto LAB_00f31824;
  }
  plVar5 = (long *)param_1[0x21];
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)param_1[0x22];
    if ((long *)param_1[0x22] == plVar5) {
      plVar10 = plVar5;
    }
    else {
      do {
        plVar6 = (long *)plVar10[-2];
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 5;
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
            (**(code **)(*plVar6 + 0x10))();
          }
          else if ((int)lVar9 == 0) goto LAB_00f31824;
        }
        plVar6 = plVar10 + -9;
        lVar9 = *plVar6;
        if (lVar9 != 0) {
          lVar11 = plVar10[-7];
          plVar1 = (long *)plVar10[-6];
          plVar10[-8] = lVar9;
          uVar7 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if ((uVar7 & 1) != 0) {
            lVar8 = FUN_00c4e600();
            if (0 < *(int *)(lVar8 + 0x12c8)) {
              FUN_00c48fe8(plVar1,lVar9,lVar11 - lVar9,4);
              goto LAB_00f3170c;
            }
          }
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar11 - lVar9,4);
        }
LAB_00f3170c:
        plVar10 = plVar6;
      } while (plVar6 != plVar5);
      plVar10 = (long *)param_1[0x21];
    }
    lVar9 = param_1[0x23];
    plVar6 = (long *)param_1[0x24];
    param_1[0x22] = plVar5;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar11 = FUN_00c4e600();
      if (0 < *(int *)(lVar11 + 0x12c8)) {
        FUN_00c48fe8(plVar6,plVar10,lVar9 - (long)plVar10,8);
        goto LAB_00f31798;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar10,lVar9 - (long)plVar10,8);
  }
LAB_00f31798:
  plVar5 = (long *)param_1[0x20];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 5;
    do {
      lVar9 = *plVar10;
      iVar4 = (int)lVar9 + -1;
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
    else if ((int)lVar9 == 0) goto LAB_00f31824;
  }
  plVar5 = (long *)param_1[0x18];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 5;
    do {
      lVar9 = *plVar10;
      iVar4 = (int)lVar9 + -1;
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
    else if ((int)lVar9 == 0) {
LAB_00f31824:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar5 = (long *)param_1[0x11];
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)param_1[0x12];
    if (plVar10 == plVar5) {
      plVar10 = plVar5;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        plVar6 = (long *)*plVar10;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 5;
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
            (**(code **)(*plVar6 + 0x10))();
          }
          else if ((int)lVar9 == 0) goto LAB_00f31824;
        }
      } while (plVar10 != plVar5);
      plVar10 = (long *)param_1[0x11];
    }
    lVar9 = param_1[0x13];
    plVar6 = (long *)param_1[0x14];
    param_1[0x12] = plVar5;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar11 = FUN_00c4e600();
      if (0 < *(int *)(lVar11 + 0x12c8)) {
        FUN_00c48fe8(plVar6,plVar10,lVar9 - (long)plVar10,8);
        goto LAB_00f3188c;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar10,lVar9 - (long)plVar10,8);
  }
LAB_00f3188c:
  if (param_1[10] != 0) {
    FUN_00f31a30();
    lVar11 = param_1[10];
    lVar9 = param_1[0xc];
    plVar5 = (long *)param_1[0xd];
    uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar11,lVar9 - lVar11,8);
        goto LAB_00f318d8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,lVar9 - lVar11,8);
  }
LAB_00f318d8:
  if ((long *)param_1[9] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f3193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[9] + 0x20))();
  return;
}


