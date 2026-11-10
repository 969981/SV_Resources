/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4fd68; name: FUN_01b4fd68
 */


void FUN_01b4fd68(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar4 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar4 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  plVar10 = param_2 + 0x140;
  do {
    plVar8 = plVar10 + -9;
    plVar10 = plVar10 + -0x10;
    if ((long *)*plVar8 != (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0x20))();
    }
    plVar8 = (long *)*plVar10;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar7 = *plVar12;
        iVar1 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = iVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  } while (plVar10 != param_2);
  plVar10 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar11 = param_1[2];
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar3,uVar11);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar3,uVar11);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar10 = (long *)FUN_00c4e600();
    if (plVar10[600] != 0) {
      local_60 = plVar10 + plVar10[600] * 3;
      plStack_58 = plVar10;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar12 = (long *)*plVar10;
      plVar8 = plVar10;
      if (plVar10[600] != 0) {
        plVar8 = plVar10 + plVar10[600] * 3;
      }
      if (plVar8 == plVar10) {
        uVar13 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
          plVar12 = (long *)*plVar10;
        }
        plVar2 = plVar10 + 3;
        if (plVar8 == plVar2) {
          uVar13 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar6 = (long *)*plVar2 != plVar12;
          if (bVar6) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
            plVar12 = (long *)plVar10[3];
          }
          uVar13 = (ulong)bVar6;
          plVar2 = plVar10 + 6;
          if (plVar8 == plVar2) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 6);
              plVar12 = (long *)plVar10[6];
              uVar13 = 2;
            }
            plVar2 = plVar10 + 9;
            if (plVar8 == plVar2) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 9);
                plVar12 = (long *)plVar10[9];
                uVar13 = 3;
              }
              plVar2 = plVar10 + 0xc;
              if (plVar8 == plVar2) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 0xc);
                  plVar12 = (long *)plVar10[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar10 + 0xf;
                if (plVar8 == plVar2) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + 0xf);
                    plVar12 = (long *)plVar10[0xf];
                    uVar13 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar10 + 0x12; plVar8 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar13 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar13 * 3,plVar10 + uVar9 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


