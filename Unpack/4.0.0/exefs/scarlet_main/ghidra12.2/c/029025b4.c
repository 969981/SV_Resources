/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029025b4; name: FUN_029025b4
 */


void FUN_029025b4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  *param_1 = &PTR_FUN_045ed7c0;
  param_1[4] = &PTR_LAB_045ed7f8;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xf));
  plVar8 = (long *)param_1[0xd];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar1 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_029026b4;
  }
  plVar8 = (long *)param_1[0xc];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar1 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_029026b4;
  }
  plVar8 = (long *)param_1[0xb];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar1 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_029026b4;
  }
  plVar8 = (long *)param_1[10];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar1 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_029026b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar8 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar8 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar5 = *(int *)(lVar9 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
      *(int *)(lVar9 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar3 = (long *)param_1[7];
    uVar4 = param_1[8];
    uVar11 = param_1[9];
    uVar10 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar8,uVar4,uVar11);
    }
    else {
      FUN_00c48fe8(plVar3,plVar8,uVar4,uVar11);
    }
    lVar9 = FUN_00c4e600();
    iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_60 = plVar8 + plVar8[600] * 3;
        plStack_58 = plVar8;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar12 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar13 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8);
            plVar12 = (long *)*plVar8;
          }
          plVar2 = plVar8 + 3;
          if (plVar3 == plVar2) {
            uVar13 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar7 = (long *)*plVar2 != plVar12;
            if (bVar7) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8 + 3);
              plVar12 = (long *)plVar8[3];
            }
            uVar13 = (ulong)bVar7;
            plVar2 = plVar8 + 6;
            if (plVar3 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 6);
                plVar12 = (long *)plVar8[6];
                uVar13 = 2;
              }
              plVar2 = plVar8 + 9;
              if (plVar3 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 9);
                  plVar12 = (long *)plVar8[9];
                  uVar13 = 3;
                }
                plVar2 = plVar8 + 0xc;
                if (plVar3 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 0xc);
                    plVar12 = (long *)plVar8[0xc];
                    uVar13 = 4;
                  }
                  plVar2 = plVar8 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 0xf);
                      plVar12 = (long *)plVar8[0xf];
                      uVar13 = 5;
                    }
                    uVar10 = 6;
                    for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar2);
                        plVar12 = (long *)*plVar2;
                        uVar13 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + uVar10 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  return;
}


