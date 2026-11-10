/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c62b84; name: FUN_01c62b84
 */


void FUN_01c62b84(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar8 = FUN_00c4e600();
  iVar5 = *(int *)(lVar8 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
    *(int *)(lVar8 + 0x12cc) = iVar1;
  }
  plVar9 = *(long **)(param_2 + 0x18);
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 5;
    do {
      lVar8 = *plVar3;
      iVar1 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar9 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar11 = param_1[2];
  uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar4,uVar11);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,uVar4,uVar11);
  }
  lVar8 = FUN_00c4e600();
  iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar9 = (long *)FUN_00c4e600();
    if (plVar9[600] != 0) {
      local_60 = plVar9 + plVar9[600] * 3;
      plStack_58 = plVar9;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar12 = (long *)*plVar9;
      plVar3 = plVar9;
      if (plVar9[600] != 0) {
        plVar3 = plVar9 + plVar9[600] * 3;
      }
      if (plVar3 == plVar9) {
        uVar13 = 0;
        uVar10 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar9 + 0xd0))();
        if ((long *)*plVar9 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
          plVar12 = (long *)*plVar9;
        }
        plVar2 = plVar9 + 3;
        if (plVar3 == plVar2) {
          uVar13 = 0;
          uVar10 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar12;
          if (bVar7) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
            plVar12 = (long *)plVar9[3];
          }
          uVar13 = (ulong)bVar7;
          plVar2 = plVar9 + 6;
          if (plVar3 == plVar2) {
            uVar10 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 6);
              plVar12 = (long *)plVar9[6];
              uVar13 = 2;
            }
            plVar2 = plVar9 + 9;
            if (plVar3 == plVar2) {
              uVar10 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 9);
                plVar12 = (long *)plVar9[9];
                uVar13 = 3;
              }
              plVar2 = plVar9 + 0xc;
              if (plVar3 == plVar2) {
                uVar10 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xc);
                  plVar12 = (long *)plVar9[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar9 + 0xf;
                if (plVar3 == plVar2) {
                  uVar10 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xf);
                    plVar12 = (long *)plVar9[0xf];
                    uVar13 = 5;
                  }
                  uVar10 = 6;
                  for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar2);
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
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + uVar10 * 3);
      plVar9[600] = 0;
    }
    *(undefined4 *)(lVar8 + 0x12cc) = 0;
  }
  return;
}


