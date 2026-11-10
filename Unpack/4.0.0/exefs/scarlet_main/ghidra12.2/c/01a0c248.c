/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0c248; name: FUN_01a0c248
 */


void FUN_01a0c248(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *local_70;
  long *plStack_68;
  
  lVar10 = *(long *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x1d8);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    uVar12 = *(undefined8 *)(param_1 + 0x1e8);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x1b8);
    uVar2 = *(undefined8 *)(param_1 + 0x1c0);
    uVar12 = *(undefined8 *)(param_1 + 0x1c8);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0x198);
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x178);
    uVar2 = *(undefined8 *)(param_1 + 0x180);
    uVar12 = *(undefined8 *)(param_1 + 0x188);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x158);
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    uVar12 = *(undefined8 *)(param_1 + 0x168);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    FUN_01a0ff8c(lVar10);
    plVar8 = *(long **)(param_1 + 0x138);
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0x118);
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    uVar12 = *(undefined8 *)(param_1 + 0x128);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0xf8);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    uVar12 = *(undefined8 *)(param_1 + 0x108);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0xd8);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    uVar12 = *(undefined8 *)(param_1 + 0xe8);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    puVar11 = *(undefined8 **)(lVar10 + 0x58);
    *(undefined8 *)(lVar10 + 0x58) = 0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar4 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar11)(puVar11);
      plVar8 = *(long **)(lVar10 + 0x60);
      uVar2 = *(undefined8 *)(lVar10 + 0x68);
      uVar12 = *(undefined8 *)(lVar10 + 0x70);
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
      }
      else {
        FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          plStack_68 = plVar8;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar13 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            uVar15 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
              plVar13 = (long *)*plVar8;
            }
            plVar14 = plVar8 + 3;
            if (plVar3 == plVar14) {
              uVar15 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              bVar5 = (long *)*plVar14 != plVar13;
              if (bVar5) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                plVar13 = (long *)plVar8[3];
              }
              uVar15 = (ulong)bVar5;
              plVar14 = plVar8 + 6;
              if (plVar3 == plVar14) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                  plVar13 = (long *)plVar8[6];
                  uVar15 = 2;
                }
                plVar14 = plVar8 + 9;
                if (plVar3 == plVar14) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                    plVar13 = (long *)plVar8[9];
                    uVar15 = 3;
                  }
                  plVar14 = plVar8 + 0xc;
                  if (plVar3 == plVar14) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                      plVar13 = (long *)plVar8[0xc];
                      uVar15 = 4;
                    }
                    plVar14 = plVar8 + 0xf;
                    if (plVar3 == plVar14) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                        plVar13 = (long *)plVar8[0xf];
                        uVar15 = 5;
                      }
                      uVar7 = 6;
                      for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                        (**(code **)(*(long *)*plVar14 + 0xd0))();
                        if ((long *)*plVar14 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                          plVar13 = (long *)*plVar14;
                          uVar15 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    puVar11 = *(undefined8 **)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x38) = 0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar4 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar11)(puVar11);
      plVar8 = *(long **)(lVar10 + 0x40);
      uVar2 = *(undefined8 *)(lVar10 + 0x48);
      uVar12 = *(undefined8 *)(lVar10 + 0x50);
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
      }
      else {
        FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          plStack_68 = plVar8;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar13 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            uVar15 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
              plVar13 = (long *)*plVar8;
            }
            plVar14 = plVar8 + 3;
            if (plVar3 == plVar14) {
              uVar15 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              bVar5 = (long *)*plVar14 != plVar13;
              if (bVar5) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                plVar13 = (long *)plVar8[3];
              }
              uVar15 = (ulong)bVar5;
              plVar14 = plVar8 + 6;
              if (plVar3 == plVar14) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                  plVar13 = (long *)plVar8[6];
                  uVar15 = 2;
                }
                plVar14 = plVar8 + 9;
                if (plVar3 == plVar14) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                    plVar13 = (long *)plVar8[9];
                    uVar15 = 3;
                  }
                  plVar14 = plVar8 + 0xc;
                  if (plVar3 == plVar14) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                      plVar13 = (long *)plVar8[0xc];
                      uVar15 = 4;
                    }
                    plVar14 = plVar8 + 0xf;
                    if (plVar3 == plVar14) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                        plVar13 = (long *)plVar8[0xf];
                        uVar15 = 5;
                      }
                      uVar7 = 6;
                      for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                        (**(code **)(*(long *)*plVar14 + 0xd0))();
                        if ((long *)*plVar14 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                          plVar13 = (long *)*plVar14;
                          uVar15 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
    plVar8 = *(long **)(param_1 + 0xb8);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar12 = *(undefined8 *)(param_1 + 200);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar12 = *(undefined8 *)(param_1 + 0xa8);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0x78);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar8 = *(long **)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar11,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,puVar11,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar8 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    plVar3 = (long *)plVar8[6];
    while (plVar3 != (long *)0x0) {
      plVar13 = (long *)plVar8[7];
      plVar14 = (long *)*plVar3;
      uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar3,0x18,2);
        plVar3 = plVar14;
      }
      else {
        FUN_00c48fe8(plVar13,plVar3,0x18,2);
        plVar3 = plVar14;
      }
    }
    lVar10 = *plVar8;
    *plVar8 = 0;
    if (lVar10 != 0) {
      lVar6 = plVar8[1];
      plVar3 = (long *)plVar8[2];
      uVar7 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar10,lVar6 << 3,2);
      }
      else {
        FUN_00c48fe8(plVar3,lVar10,lVar6 << 3,2);
      }
    }
    plVar3 = *(long **)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar3 + 0x18))(plVar3,plVar8,uVar2,uVar12);
    }
    else {
      FUN_00c48fe8(plVar3,plVar8,uVar2,uVar12);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar14 = plVar8 + 3;
          if (plVar3 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar13;
            if (bVar5) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar8 + 6;
            if (plVar3 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar15 = 2;
              }
              plVar14 = plVar8 + 9;
              if (plVar3 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar15 = 3;
                }
                plVar14 = plVar8 + 0xc;
                if (plVar3 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar8 + 0xf;
                  if (plVar3 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar8 + 0x12; plVar3 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar14);
                        plVar13 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar15 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  return;
}


