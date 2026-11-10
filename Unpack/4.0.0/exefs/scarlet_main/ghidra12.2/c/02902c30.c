/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02902c30; name: FUN_02902c30
 */


void FUN_02902c30(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *local_68;
  long *local_48;
  
  puVar11 = (undefined8 *)param_1[0xb];
  *param_1 = &PTR_FUN_045ed908;
  param_1[4] = &PTR_LAB_045ed940;
  param_1[0xb] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar6 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar6;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar6;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = (long *)param_1[0xc];
    uVar3 = param_1[0xd];
    uVar12 = param_1[0xe];
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar3,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar3,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar6 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_48 = plVar8;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar8;
        plVar2 = plVar8;
        if (plVar8[600] != 0) {
          plVar2 = plVar8 + plVar8[600] * 3;
        }
        if (plVar2 == plVar8) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar1 = plVar8 + 3;
          if (plVar2 == plVar1) {
            uVar14 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar13;
            if (bVar7) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar14 = (ulong)bVar7;
            plVar1 = plVar8 + 6;
            if (plVar2 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar14 = 2;
              }
              plVar1 = plVar8 + 9;
              if (plVar2 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar14 = 3;
                }
                plVar1 = plVar8 + 0xc;
                if (plVar2 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar14 = 4;
                  }
                  plVar1 = plVar8 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar14 = 5;
                    }
                    uVar9 = 6;
                    for (plVar1 = plVar8 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar1);
                        plVar13 = (long *)*plVar1;
                        uVar14 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar9 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = param_1[7];
  param_1[7] = 0;
  if (lVar10 != 0) {
    FUN_010aa124(param_1 + 8);
  }
  plVar8 = (long *)param_1[6];
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar10 = *plVar2;
      iVar6 = (int)lVar10 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


