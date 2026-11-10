/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01195e64; name: FUN_01195e64
 */


void FUN_01195e64(undefined8 *param_1)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *local_68;
  long *local_48;
  
  lVar11 = param_1[6];
  *param_1 = &DAT_045a9218;
  param_1[4] = &PTR_LAB_045a9258;
  param_1[6] = 0;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    plVar9 = (long *)param_1[7];
    uVar4 = param_1[8];
    uVar10 = param_1[9];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,uVar4,uVar10);
    }
    lVar11 = FUN_00c4e600();
    iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar9;
        plVar3 = plVar9;
        if (plVar9[600] != 0) {
          plVar3 = plVar9 + plVar9[600] * 3;
        }
        if (plVar3 == plVar9) {
          uVar14 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
            plVar13 = (long *)*plVar9;
          }
          plVar2 = plVar9 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
              plVar13 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar6;
            plVar2 = plVar9 + 6;
            if (plVar3 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                plVar13 = (long *)plVar9[6];
                uVar14 = 2;
              }
              plVar2 = plVar9 + 9;
              if (plVar3 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                  plVar13 = (long *)plVar9[9];
                  uVar14 = 3;
                }
                plVar2 = plVar9 + 0xc;
                if (plVar3 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                    plVar13 = (long *)plVar9[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar9 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar13 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                        plVar13 = (long *)*plVar2;
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
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  lVar11 = param_1[10];
  param_1[10] = 0;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    plVar9 = (long *)param_1[0xb];
    uVar4 = param_1[0xc];
    uVar10 = param_1[0xd];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,uVar4,uVar10);
    }
    lVar11 = FUN_00c4e600();
    iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar9;
        plVar3 = plVar9;
        if (plVar9[600] != 0) {
          plVar3 = plVar9 + plVar9[600] * 3;
        }
        if (plVar3 == plVar9) {
          uVar14 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
            plVar13 = (long *)*plVar9;
          }
          plVar2 = plVar9 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
              plVar13 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar6;
            plVar2 = plVar9 + 6;
            if (plVar3 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                plVar13 = (long *)plVar9[6];
                uVar14 = 2;
              }
              plVar2 = plVar9 + 9;
              if (plVar3 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                  plVar13 = (long *)plVar9[9];
                  uVar14 = 3;
                }
                plVar2 = plVar9 + 0xc;
                if (plVar3 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                    plVar13 = (long *)plVar9[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar9 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar13 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                        plVar13 = (long *)*plVar2;
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
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  puVar12 = (undefined8 *)param_1[0xe];
  param_1[0xe] = 0;
  if (puVar12 == (undefined8 *)0x0) {
    param_1[0xe] = 0;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar5 = *(int *)(lVar11 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
      *(int *)(lVar11 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar12)(puVar12);
    plVar9 = (long *)param_1[0xf];
    uVar4 = param_1[0x10];
    uVar10 = param_1[0x11];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar12,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,puVar12,uVar4,uVar10);
    }
    lVar11 = FUN_00c4e600();
    iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar9;
        plVar3 = plVar9;
        if (plVar9[600] != 0) {
          plVar3 = plVar9 + plVar9[600] * 3;
        }
        if (plVar3 == plVar9) {
          uVar14 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
            plVar13 = (long *)*plVar9;
          }
          plVar2 = plVar9 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
              plVar13 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar6;
            plVar2 = plVar9 + 6;
            if (plVar3 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                plVar13 = (long *)plVar9[6];
                uVar14 = 2;
              }
              plVar2 = plVar9 + 9;
              if (plVar3 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                  plVar13 = (long *)plVar9[9];
                  uVar14 = 3;
                }
                plVar2 = plVar9 + 0xc;
                if (plVar3 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                    plVar13 = (long *)plVar9[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar9 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar13 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                        plVar13 = (long *)*plVar2;
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
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
    puVar12 = (undefined8 *)param_1[0xe];
    param_1[0xe] = 0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar5 = *(int *)(lVar11 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
        *(int *)(lVar11 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar12)(puVar12);
      plVar9 = (long *)param_1[0xf];
      uVar4 = param_1[0x10];
      uVar10 = param_1[0x11];
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar12,uVar4,uVar10);
      }
      else {
        FUN_00c48fe8(plVar9,puVar12,uVar4,uVar10);
      }
      lVar11 = FUN_00c4e600();
      iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_68 = plVar9 + plVar9[600] * 3;
          local_48 = plVar9;
          FUN_00c4ea30(&local_48,&local_68);
          plVar13 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            uVar14 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
              plVar13 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              uVar14 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar13;
              if (bVar6) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
                plVar13 = (long *)plVar9[3];
              }
              uVar14 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                  plVar13 = (long *)plVar9[6];
                  uVar14 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                    plVar13 = (long *)plVar9[9];
                    uVar14 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                      plVar13 = (long *)plVar9[0xc];
                      uVar14 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                        plVar13 = (long *)plVar9[0xf];
                        uVar14 = 5;
                      }
                      uVar8 = 6;
                      for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                          plVar13 = (long *)*plVar2;
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
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
    }
  }
  lVar11 = param_1[10];
  param_1[10] = 0;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    plVar9 = (long *)param_1[0xb];
    uVar4 = param_1[0xc];
    uVar10 = param_1[0xd];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,uVar4,uVar10);
    }
    lVar11 = FUN_00c4e600();
    iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar9;
        plVar3 = plVar9;
        if (plVar9[600] != 0) {
          plVar3 = plVar9 + plVar9[600] * 3;
        }
        if (plVar3 == plVar9) {
          uVar14 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
            plVar13 = (long *)*plVar9;
          }
          plVar2 = plVar9 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
              plVar13 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar6;
            plVar2 = plVar9 + 6;
            if (plVar3 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                plVar13 = (long *)plVar9[6];
                uVar14 = 2;
              }
              plVar2 = plVar9 + 9;
              if (plVar3 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                  plVar13 = (long *)plVar9[9];
                  uVar14 = 3;
                }
                plVar2 = plVar9 + 0xc;
                if (plVar3 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                    plVar13 = (long *)plVar9[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar9 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar13 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                        plVar13 = (long *)*plVar2;
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
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  lVar11 = param_1[6];
  param_1[6] = 0;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    plVar9 = (long *)param_1[7];
    uVar4 = param_1[8];
    uVar10 = param_1[9];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,uVar4,uVar10);
    }
    lVar11 = FUN_00c4e600();
    iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar13 = (long *)*plVar9;
        plVar3 = plVar9;
        if (plVar9[600] != 0) {
          plVar3 = plVar9 + plVar9[600] * 3;
        }
        if (plVar3 == plVar9) {
          uVar14 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
            plVar13 = (long *)*plVar9;
          }
          plVar2 = plVar9 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
              plVar13 = (long *)plVar9[3];
            }
            uVar14 = (ulong)bVar6;
            plVar2 = plVar9 + 6;
            if (plVar3 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
                plVar13 = (long *)plVar9[6];
                uVar14 = 2;
              }
              plVar2 = plVar9 + 9;
              if (plVar3 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                  plVar13 = (long *)plVar9[9];
                  uVar14 = 3;
                }
                plVar2 = plVar9 + 0xc;
                if (plVar3 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                    plVar13 = (long *)plVar9[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar9 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                      plVar13 = (long *)plVar9[0xf];
                      uVar14 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                        plVar13 = (long *)*plVar2;
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
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  return;
}


