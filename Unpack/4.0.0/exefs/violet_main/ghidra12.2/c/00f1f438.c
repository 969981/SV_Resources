/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1f438; name: FUN_00f1f438
 */


void FUN_00f1f438(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *local_60;
  long *plStack_58;
  
  (**(code **)(param_1[4] + 0x70))(param_1 + 4);
  if (*(char *)((long)param_1 + 0x11d) == '\0') {
    plVar12 = (long *)param_1[1];
    uVar4 = param_1[2];
    uVar6 = *(undefined2 *)(param_1 + 3);
    uVar7 = *(undefined2 *)((long)param_1 + 0x1a);
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar5 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*param_1)(param_1);
    uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,uVar4,uVar6,uVar7);
    }
    else {
      FUN_00c48fe8(plVar12,uVar4,uVar6,uVar7);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_60 = plVar12 + plVar12[600] * 3;
        plStack_58 = plVar12;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar13 = (long *)*plVar12;
        plVar3 = plVar12;
        if (plVar12[600] != 0) {
          plVar3 = plVar12 + plVar12[600] * 3;
        }
        if (plVar3 == plVar12) {
          uVar14 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar12,plVar12);
            plVar13 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar13;
            if (bVar9) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar12,plVar12 + 3);
              plVar13 = (long *)plVar12[3];
            }
            uVar14 = (ulong)bVar9;
            plVar2 = plVar12 + 6;
            if (plVar3 == plVar2) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar14 * 3,plVar12 + 6);
                plVar13 = (long *)plVar12[6];
                uVar14 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar3 == plVar2) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar14 * 3,plVar12 + 9);
                  plVar13 = (long *)plVar12[9];
                  uVar14 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar3 == plVar2) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar14 * 3,plVar12 + 0xc);
                    plVar13 = (long *)plVar12[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar14 * 3,plVar12 + 0xf);
                      plVar13 = (long *)plVar12[0xf];
                      uVar14 = 5;
                    }
                    uVar11 = 6;
                    for (plVar2 = plVar12 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar14 * 3,plVar2);
                        plVar13 = (long *)*plVar2;
                        uVar14 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar12 + uVar14 * 3,plVar12 + uVar11 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  else {
    FUN_00f1f8b0(*(undefined8 *)PTR_DAT_047e24d0,param_1);
    (**(code **)(*(long *)param_1[1] + 200))();
    plVar12 = (long *)param_1[0x1d];
    param_1[0x1d] = 0;
    if (plVar12 != (long *)0x0) {
      plVar3 = plVar12 + 5;
      do {
        lVar10 = *plVar3;
        iVar1 = (int)lVar10 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *(int *)plVar3 = iVar1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00f1f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x10))();
        return;
      }
      if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


