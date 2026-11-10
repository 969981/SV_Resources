/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0128e4e0; name: FUN_0128e4e0
 */


void FUN_0128e4e0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
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
  uVar10 = param_1[1];
  if (0x17 < uVar10) {
    uVar10 = uVar10 / 0x18;
    uVar12 = 0;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    do {
      plVar8 = *(long **)(param_2 + uVar12 * 0x18);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 5;
        do {
          lVar7 = *plVar3;
          iVar1 = (int)lVar7 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar1;
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
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
    uVar10 = param_1[1];
  }
  plVar8 = (long *)*param_1;
  uVar9 = param_1[2];
  uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar12 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2,uVar10,uVar9);
  }
  else {
    FUN_00c48fe8(plVar8,param_2,uVar10,uVar9);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar8 = (long *)FUN_00c4e600();
    if (plVar8[600] != 0) {
      local_60 = plVar8 + plVar8[600] * 3;
      plStack_58 = plVar8;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar11 = (long *)*plVar8;
      plVar3 = plVar8;
      if (plVar8[600] != 0) {
        plVar3 = plVar8 + plVar8[600] * 3;
      }
      if (plVar3 == plVar8) {
        uVar12 = 0;
        uVar10 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar8 + 0xd0))();
        if ((long *)*plVar8 != plVar11) {
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8);
          plVar11 = (long *)*plVar8;
        }
        plVar2 = plVar8 + 3;
        if (plVar3 == plVar2) {
          uVar12 = 0;
          uVar10 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar6 = (long *)*plVar2 != plVar11;
          if (bVar6) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8 + 3);
            plVar11 = (long *)plVar8[3];
          }
          uVar12 = (ulong)bVar6;
          plVar2 = plVar8 + 6;
          if (plVar3 == plVar2) {
            uVar10 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar12 * 3,plVar8 + 6);
              plVar11 = (long *)plVar8[6];
              uVar12 = 2;
            }
            plVar2 = plVar8 + 9;
            if (plVar3 == plVar2) {
              uVar10 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar12 * 3,plVar8 + 9);
                plVar11 = (long *)plVar8[9];
                uVar12 = 3;
              }
              plVar2 = plVar8 + 0xc;
              if (plVar3 == plVar2) {
                uVar10 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar12 * 3,plVar8 + 0xc);
                  plVar11 = (long *)plVar8[0xc];
                  uVar12 = 4;
                }
                plVar2 = plVar8 + 0xf;
                if (plVar3 == plVar2) {
                  uVar10 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar12 * 3,plVar8 + 0xf);
                    plVar11 = (long *)plVar8[0xf];
                    uVar12 = 5;
                  }
                  uVar10 = 6;
                  for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar12 * 3,plVar2);
                      plVar11 = (long *)*plVar2;
                      uVar12 = uVar10;
                    }
                    uVar10 = uVar10 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + uVar12 * 3,plVar8 + uVar10 * 3);
      plVar8[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


