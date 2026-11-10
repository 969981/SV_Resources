/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010de998; name: FUN_010de998
 */


void FUN_010de998(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *local_88;
  ulong local_80;
  long *local_70;
  long *plStack_68;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar5 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  plVar10 = (long *)*(long *)(param_2 + 0x108);
  while (plVar10 != (long *)0x0) {
    puVar13 = (undefined8 *)plVar10[6];
    plVar10[6] = 0;
    plVar17 = (long *)*plVar10;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar13)(puVar13);
      plVar9 = (long *)plVar10[7];
      uVar4 = plVar10[8];
      uVar15 = plVar10[9];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar13,uVar4,uVar15);
      }
      else {
        FUN_00c48fe8(plVar9,puVar13,uVar4,uVar15);
      }
      lVar7 = FUN_00c4e600();
      iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar16 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            local_80 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9);
              plVar16 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              local_80 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar16;
              if (bVar6) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9 + 3);
                plVar16 = (long *)plVar9[3];
              }
              local_80 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 6);
                  plVar16 = (long *)plVar9[6];
                  local_80 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 9);
                    plVar16 = (long *)plVar9[9];
                    local_80 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 0xc);
                      plVar16 = (long *)plVar9[0xc];
                      local_80 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 0xf);
                        plVar16 = (long *)plVar9[0xf];
                        local_80 = 5;
                      }
                      local_88 = plVar9 + 0x12;
                      uVar8 = 6;
                      if (plVar3 != local_88) {
                        do {
                          (**(code **)(*(long *)*local_88 + 0xd0))();
                          if ((long *)*local_88 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,local_88);
                            plVar16 = (long *)*local_88;
                            local_80 = uVar8;
                          }
                          local_88 = local_88 + 3;
                          uVar8 = uVar8 + 1;
                        } while (plVar3 != local_88);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar9 = *(long **)(param_2 + 0x110);
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,0x50,8);
      plVar10 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar9,plVar10,0x50,8);
      plVar10 = plVar17;
    }
  }
  lVar7 = *(long *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  if (lVar7 != 0) {
    plVar10 = *(long **)(param_2 + 0xe8);
    lVar12 = *(long *)(param_2 + 0xe0) << 3;
    uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar7,lVar12,8);
    }
  }
  plVar10 = (long *)*(long *)(param_2 + 0xa0);
  while (plVar10 != (long *)0x0) {
    puVar13 = (undefined8 *)plVar10[6];
    plVar10[6] = 0;
    plVar17 = (long *)*plVar10;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar13)(puVar13);
      plVar9 = (long *)plVar10[7];
      uVar4 = plVar10[8];
      uVar15 = plVar10[9];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar13,uVar4,uVar15);
      }
      else {
        FUN_00c48fe8(plVar9,puVar13,uVar4,uVar15);
      }
      lVar7 = FUN_00c4e600();
      iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar16 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            local_80 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9);
              plVar16 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              local_80 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar16;
              if (bVar6) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9 + 3);
                plVar16 = (long *)plVar9[3];
              }
              local_80 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 6);
                  plVar16 = (long *)plVar9[6];
                  local_80 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 9);
                    plVar16 = (long *)plVar9[9];
                    local_80 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 0xc);
                      plVar16 = (long *)plVar9[0xc];
                      local_80 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 0xf);
                        plVar16 = (long *)plVar9[0xf];
                        local_80 = 5;
                      }
                      local_88 = plVar9 + 0x12;
                      uVar8 = 6;
                      if (plVar3 != local_88) {
                        do {
                          (**(code **)(*(long *)*local_88 + 0xd0))();
                          if ((long *)*local_88 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,local_88);
                            plVar16 = (long *)*local_88;
                            local_80 = uVar8;
                          }
                          local_88 = local_88 + 3;
                          uVar8 = uVar8 + 1;
                        } while (plVar3 != local_88);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar9 = *(long **)(param_2 + 0xa8);
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,0x50,8);
      plVar10 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar9,plVar10,0x50,8);
      plVar10 = plVar17;
    }
  }
  lVar7 = *(long *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  if (lVar7 != 0) {
    plVar10 = *(long **)(param_2 + 0x80);
    lVar12 = *(long *)(param_2 + 0x78) << 3;
    uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar7,lVar12,8);
    }
  }
  plVar10 = (long *)*(long *)(param_2 + 0x38);
  while (plVar10 != (long *)0x0) {
    puVar13 = (undefined8 *)plVar10[6];
    plVar10[6] = 0;
    plVar17 = (long *)*plVar10;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar13)(puVar13);
      plVar9 = (long *)plVar10[7];
      uVar4 = plVar10[8];
      uVar15 = plVar10[9];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar13,uVar4,uVar15);
      }
      else {
        FUN_00c48fe8(plVar9,puVar13,uVar4,uVar15);
      }
      lVar7 = FUN_00c4e600();
      iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar16 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            local_80 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9);
              plVar16 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              local_80 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar16;
              if (bVar6) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9 + 3);
                plVar16 = (long *)plVar9[3];
              }
              local_80 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 6);
                  plVar16 = (long *)plVar9[6];
                  local_80 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 9);
                    plVar16 = (long *)plVar9[9];
                    local_80 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 0xc);
                      plVar16 = (long *)plVar9[0xc];
                      local_80 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + 0xf);
                        plVar16 = (long *)plVar9[0xf];
                        local_80 = 5;
                      }
                      local_88 = plVar9 + 0x12;
                      if (plVar3 == local_88) {
                        uVar8 = 6;
                      }
                      else {
                        uVar8 = 6;
                        do {
                          (**(code **)(*(long *)*local_88 + 0xd0))();
                          if ((long *)*local_88 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,local_88);
                            plVar16 = (long *)*local_88;
                            local_80 = uVar8;
                          }
                          local_88 = local_88 + 3;
                          uVar8 = uVar8 + 1;
                        } while (plVar3 != local_88);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + local_80 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar9 = *(long **)(param_2 + 0x40);
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,0x50,8);
      plVar10 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar9,plVar10,0x50,8);
      plVar10 = plVar17;
    }
  }
  lVar7 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar7 != 0) {
    plVar10 = *(long **)(param_2 + 0x18);
    lVar12 = *(long *)(param_2 + 0x10) << 3;
    uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar7,lVar12,8);
    }
  }
  plVar10 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar15 = param_1[2];
  uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar4,uVar15);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar4,uVar15);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar10 = (long *)FUN_00c4e600();
    if (plVar10[600] != 0) {
      local_70 = plVar10 + plVar10[600] * 3;
      plStack_68 = plVar10;
      FUN_00c4ea30(&plStack_68,&local_70);
      plVar9 = (long *)*plVar10;
      plVar17 = plVar10;
      if (plVar10[600] != 0) {
        plVar17 = plVar10 + plVar10[600] * 3;
      }
      if (plVar17 == plVar10) {
        uVar14 = 0;
        uVar8 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar9) {
          (**(code **)(*plVar9 + 0x100))(plVar9,plVar10,plVar10);
          plVar9 = (long *)*plVar10;
        }
        plVar3 = plVar10 + 3;
        if (plVar17 == plVar3) {
          uVar14 = 0;
          uVar8 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar3 + 0xd0))();
          bVar6 = (long *)*plVar3 != plVar9;
          if (bVar6) {
            (**(code **)(*plVar9 + 0x100))(plVar9,plVar10,plVar10 + 3);
            plVar9 = (long *)plVar10[3];
          }
          uVar14 = (ulong)bVar6;
          plVar3 = plVar10 + 6;
          if (plVar17 == plVar3) {
            uVar8 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            if ((long *)*plVar3 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + uVar14 * 3,plVar10 + 6);
              plVar9 = (long *)plVar10[6];
              uVar14 = 2;
            }
            plVar3 = plVar10 + 9;
            if (plVar17 == plVar3) {
              uVar8 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar9) {
                (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + uVar14 * 3,plVar10 + 9);
                plVar9 = (long *)plVar10[9];
                uVar14 = 3;
              }
              plVar3 = plVar10 + 0xc;
              if (plVar17 == plVar3) {
                uVar8 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar9) {
                  (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + uVar14 * 3,plVar10 + 0xc);
                  plVar9 = (long *)plVar10[0xc];
                  uVar14 = 4;
                }
                plVar3 = plVar10 + 0xf;
                if (plVar17 == plVar3) {
                  uVar8 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar9) {
                    (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + uVar14 * 3,plVar10 + 0xf);
                    plVar9 = (long *)plVar10[0xf];
                    uVar14 = 5;
                  }
                  uVar8 = 6;
                  for (plVar3 = plVar10 + 0x12; plVar17 != plVar3; plVar3 = plVar3 + 3) {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar9) {
                      (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + uVar14 * 3,plVar3);
                      plVar9 = (long *)*plVar3;
                      uVar14 = uVar8;
                    }
                    uVar8 = uVar8 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + uVar14 * 3,plVar10 + uVar8 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


