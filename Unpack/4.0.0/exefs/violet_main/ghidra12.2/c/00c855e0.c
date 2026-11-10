/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c855e0; name: FUN_00c855e0
 */


void FUN_00c855e0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar9 = FUN_00c4e600();
  iVar6 = *(int *)(lVar9 + 0x12c8);
  iVar1 = iVar6 + 1;
  *(int *)(lVar9 + 0x12c8) = iVar1;
  if (*(int *)(lVar9 + 0x12cc) <= iVar6) {
    *(int *)(lVar9 + 0x12cc) = iVar1;
  }
  plVar10 = (long *)param_2[7];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 5;
    do {
      lVar9 = *plVar3;
      iVar1 = (int)lVar9 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = iVar1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar9 = *param_2;
  if (lVar9 != 0) {
    lVar4 = param_2[2];
    plVar10 = (long *)param_2[3];
    param_2[1] = lVar9;
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar4 - lVar9,4);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,lVar4 - lVar9,4);
    }
  }
  plVar10 = (long *)*param_1;
  uVar5 = param_1[1];
  uVar13 = param_1[2];
  uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar5,uVar13);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar5,uVar13);
  }
  lVar9 = FUN_00c4e600();
  iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
  *(int *)(lVar9 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar10 = (long *)FUN_00c4e600();
    if (plVar10[600] != 0) {
      local_60 = plVar10 + plVar10[600] * 3;
      plStack_58 = plVar10;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar14 = (long *)*plVar10;
      plVar3 = plVar10;
      if (plVar10[600] != 0) {
        plVar3 = plVar10 + plVar10[600] * 3;
      }
      if (plVar3 == plVar10) {
        uVar15 = 0;
        uVar11 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar14) {
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10);
          plVar14 = (long *)*plVar10;
        }
        plVar2 = plVar10 + 3;
        if (plVar3 == plVar2) {
          uVar15 = 0;
          uVar11 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar8 = (long *)*plVar2 != plVar14;
          if (bVar8) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar10,plVar10 + 3);
            plVar14 = (long *)plVar10[3];
          }
          uVar15 = (ulong)bVar8;
          plVar2 = plVar10 + 6;
          if (plVar3 == plVar2) {
            uVar11 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 6);
              plVar14 = (long *)plVar10[6];
              uVar15 = 2;
            }
            plVar2 = plVar10 + 9;
            if (plVar3 == plVar2) {
              uVar11 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 9);
                plVar14 = (long *)plVar10[9];
                uVar15 = 3;
              }
              plVar2 = plVar10 + 0xc;
              if (plVar3 == plVar2) {
                uVar11 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xc);
                  plVar14 = (long *)plVar10[0xc];
                  uVar15 = 4;
                }
                plVar2 = plVar10 + 0xf;
                if (plVar3 == plVar2) {
                  uVar11 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + 0xf);
                    plVar14 = (long *)plVar10[0xf];
                    uVar15 = 5;
                  }
                  uVar11 = 6;
                  for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar2);
                      plVar14 = (long *)*plVar2;
                      uVar15 = uVar11;
                    }
                    uVar11 = uVar11 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar14 + 0x100))(plVar14,plVar10 + uVar15 * 3,plVar10 + uVar11 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar9 + 0x12cc) = 0;
  }
  return;
}


