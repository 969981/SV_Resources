/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01671bb4; name: FUN_01671bb4
 */


void FUN_01671bb4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *local_68;
  long *local_48;
  
  *param_1 = &DAT_0460a7b8;
  *(undefined1 *)((long)param_1 + 0x11e) = 0;
  param_1[4] = &PTR_LAB_0460a908;
  param_1[5] = &DAT_0460aa30;
  param_1[6] = &PTR_LAB_0460aa88;
  param_1[7] = &PTR_LAB_0460aab0;
  lVar9 = param_1[0x5a];
  if ((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0x18), plVar10 != (long *)0x0)) {
    lVar9 = *(long *)(lVar9 + 0x10);
    puVar3 = *(undefined8 **)(lVar9 + 0x130);
    puVar11 = *(undefined8 **)(lVar9 + 0x128);
    if (*(undefined8 **)(lVar9 + 0x128) != puVar3) {
      do {
        puVar12 = puVar11 + 0x10;
        local_48 = plVar10;
        (*(code *)*puVar11)(puVar11 + 4,&local_48);
        puVar11 = puVar12;
      } while (puVar12 != puVar3);
      lVar9 = *(long *)(param_1[0x5a] + 0x10);
      plVar10 = *(long **)(param_1[0x5a] + 0x18);
    }
    plVar14 = (long *)param_1[1];
    uVar13 = *(undefined8 *)(lVar9 + 0x160);
    uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar10,uVar13,0x10);
    }
    else {
      FUN_00c48fe8(plVar14,plVar10,uVar13,0x10);
    }
    *(undefined8 *)(param_1[0x5a] + 0x18) = 0;
  }
  plVar10 = (long *)param_1[0x5e];
  if (plVar10 != (long *)0x0) {
    plVar14 = plVar10 + 5;
    do {
      lVar9 = *plVar14;
      iVar1 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar9 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar4 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    FUN_01672468(lVar9);
    plVar10 = (long *)param_1[0x5b];
    uVar13 = param_1[0x5c];
    uVar15 = param_1[0x5d];
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,uVar13,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,uVar13,uVar15);
    }
    lVar9 = FUN_00c4e600();
    iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar10;
        plVar14 = plVar10;
        if (plVar10[600] != 0) {
          plVar14 = plVar10 + plVar10[600] * 3;
        }
        if (plVar14 == plVar10) {
          uVar17 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar14 == plVar2) {
            uVar17 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar16;
            if (bVar6) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar10 + 6;
            if (plVar14 == plVar2) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar14 == plVar2) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar14 == plVar2) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar14 == plVar2) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar7 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar14 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar2);
                        plVar16 = (long *)*plVar2;
                        uVar17 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar7 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  lVar9 = param_1[0x56];
  param_1[0x56] = 0;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar4 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    FUN_00e45164(lVar9);
    plVar10 = (long *)param_1[0x57];
    uVar13 = param_1[0x58];
    uVar15 = param_1[0x59];
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,uVar13,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,uVar13,uVar15);
    }
    lVar9 = FUN_00c4e600();
    iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar10;
        plVar14 = plVar10;
        if (plVar10[600] != 0) {
          plVar14 = plVar10 + plVar10[600] * 3;
        }
        if (plVar14 == plVar10) {
          uVar17 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar14 == plVar2) {
            uVar17 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar16;
            if (bVar6) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar10 + 6;
            if (plVar14 == plVar2) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar14 == plVar2) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar14 == plVar2) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar14 == plVar2) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar7 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar14 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar2);
                        plVar16 = (long *)*plVar2;
                        uVar17 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar7 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  FUN_013d75b8(param_1 + 0x24);
  FUN_00e6bfa4(param_1);
  return;
}


