/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02900cb0; name: FUN_02900cb0
 */


void FUN_02900cb0(long param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *local_70;
  long *plStack_68;
  
  uVar9 = *param_2;
  *param_2 = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = uVar9;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar3 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar3;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar3;
    }
    (**(code **)*puVar11)(puVar11);
    plVar7 = *(long **)(param_1 + 600);
    uVar9 = *(undefined8 *)(param_1 + 0x260);
    uVar12 = *(undefined8 *)(param_1 + 0x268);
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar11,uVar9,uVar12);
    }
    else {
      FUN_00c48fe8(plVar7,puVar11,uVar9,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar3;
    if (iVar3 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_70 = plVar7 + plVar7[600] * 3;
        plStack_68 = plVar7;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          uVar15 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar7 + 0xd0))();
          if ((long *)*plVar7 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar7,plVar7);
            plVar13 = (long *)*plVar7;
          }
          plVar14 = plVar7 + 3;
          if (plVar2 == plVar14) {
            uVar15 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar6 = (long *)*plVar14 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar7,plVar7 + 3);
              plVar13 = (long *)plVar7[3];
            }
            uVar15 = (ulong)bVar6;
            plVar14 = plVar7 + 6;
            if (plVar2 == plVar14) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar15 * 3,plVar7 + 6);
                plVar13 = (long *)plVar7[6];
                uVar15 = 2;
              }
              plVar14 = plVar7 + 9;
              if (plVar2 == plVar14) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar15 * 3,plVar7 + 9);
                  plVar13 = (long *)plVar7[9];
                  uVar15 = 3;
                }
                plVar14 = plVar7 + 0xc;
                if (plVar2 == plVar14) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar15 * 3,plVar7 + 0xc);
                    plVar13 = (long *)plVar7[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar7 + 0xf;
                  if (plVar2 == plVar14) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar15 * 3,plVar7 + 0xf);
                      plVar13 = (long *)plVar7[0xf];
                      uVar15 = 5;
                    }
                    uVar8 = 6;
                    for (plVar14 = plVar7 + 0x12; plVar2 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar15 * 3,plVar7 + uVar8 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  uVar9 = param_2[1];
  uVar12 = param_2[2];
  *(undefined8 *)(param_1 + 0x268) = param_2[3];
  *(undefined8 *)(param_1 + 0x260) = uVar12;
  *(undefined8 *)(param_1 + 600) = uVar9;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0x270);
  *(long *)(param_1 + 0x270) = lVar10;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar10 = *plVar2;
      iVar3 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


