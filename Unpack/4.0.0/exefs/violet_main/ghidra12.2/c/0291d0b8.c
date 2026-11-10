/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291d0b8; name: FUN_0291d0b8
 */


void FUN_0291d0b8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *local_68;
  long *local_48;
  
  lVar10 = param_1[0x66];
  *param_1 = &PTR_FUN_045ee4a8;
  param_1[0x66] = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar3 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    plVar15 = (long *)param_1[0x67];
    uVar12 = param_1[0x68];
    uVar13 = param_1[0x69];
    uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar15,lVar10,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[99];
    uVar12 = param_1[100];
    uVar13 = param_1[0x65];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x5e];
  param_1[0x5e] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x5f];
    uVar12 = param_1[0x60];
    uVar13 = param_1[0x61];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x5a];
  param_1[0x5a] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x5b];
    uVar12 = param_1[0x5c];
    uVar13 = param_1[0x5d];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x57];
    uVar12 = param_1[0x58];
    uVar13 = param_1[0x59];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  puVar11 = (undefined8 *)param_1[0x52];
  param_1[0x52] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar15 = (long *)param_1[0x53];
    uVar12 = param_1[0x54];
    uVar13 = param_1[0x55];
    uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar11,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar15,puVar11,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x4e];
  param_1[0x4e] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x4f];
    uVar12 = param_1[0x50];
    uVar13 = param_1[0x51];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x4a];
  param_1[0x4a] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x4b];
    uVar12 = param_1[0x4c];
    uVar13 = param_1[0x4d];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x46];
  param_1[0x46] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x47];
    uVar12 = param_1[0x48];
    uVar13 = param_1[0x49];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x42];
  param_1[0x42] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x43];
    uVar12 = param_1[0x44];
    uVar13 = param_1[0x45];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x3e];
  param_1[0x3e] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x3f];
    uVar12 = param_1[0x40];
    uVar13 = param_1[0x41];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x3a];
  param_1[0x3a] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    puVar5 = PTR_DAT_047e2650;
    lVar10 = plVar15[2];
    plVar15[10] = 0;
    *plVar15 = (long)(puVar5 + 0x10);
    plVar15[1] = 0;
    if (lVar10 != 0) {
      lVar7 = plVar15[4];
      plVar16 = (long *)plVar15[5];
      uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar10,lVar7 << 3,1);
      }
      else {
        FUN_00c48fe8(plVar16,lVar10,lVar7 << 3,1);
      }
    }
    plVar16 = (long *)param_1[0x3b];
    uVar12 = param_1[0x3c];
    uVar13 = param_1[0x3d];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x37];
    uVar12 = param_1[0x38];
    uVar13 = param_1[0x39];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x33];
    uVar12 = param_1[0x34];
    uVar13 = param_1[0x35];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x2f];
    uVar12 = param_1[0x30];
    uVar13 = param_1[0x31];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x2b];
    uVar12 = param_1[0x2c];
    uVar13 = param_1[0x2d];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x26];
  param_1[0x26] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x27];
    uVar12 = param_1[0x28];
    uVar13 = param_1[0x29];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x23];
    uVar12 = param_1[0x24];
    uVar13 = param_1[0x25];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x1f];
    uVar12 = param_1[0x20];
    uVar13 = param_1[0x21];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x1b];
    uVar12 = param_1[0x1c];
    uVar13 = param_1[0x1d];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x17];
    uVar12 = param_1[0x18];
    uVar13 = param_1[0x19];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0x13];
    uVar12 = param_1[0x14];
    uVar13 = param_1[0x15];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0xf];
    uVar12 = param_1[0x10];
    uVar13 = param_1[0x11];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[0xb];
    uVar12 = param_1[0xc];
    uVar13 = param_1[0xd];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[7];
    uVar12 = param_1[8];
    uVar13 = param_1[9];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar3 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar16 = (long *)param_1[3];
    uVar12 = param_1[4];
    uVar13 = param_1[5];
    uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar15,uVar12,uVar13);
    }
    else {
      FUN_00c48fe8(plVar16,plVar15,uVar12,uVar13);
    }
    lVar10 = FUN_00c4e600();
    iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_68 = plVar15 + plVar15[600] * 3;
        local_48 = plVar15;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar15;
        plVar16 = plVar15;
        if (plVar15[600] != 0) {
          plVar16 = plVar15 + plVar15[600] * 3;
        }
        if (plVar16 == plVar15) {
          uVar17 = 0;
          uVar8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
            plVar14 = (long *)*plVar15;
          }
          plVar2 = plVar15 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar8 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar6 = (long *)*plVar2 != plVar14;
            if (bVar6) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
              plVar14 = (long *)plVar15[3];
            }
            uVar17 = (ulong)bVar6;
            plVar2 = plVar15 + 6;
            if (plVar16 == plVar2) {
              uVar8 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 6);
                plVar14 = (long *)plVar15[6];
                uVar17 = 2;
              }
              plVar2 = plVar15 + 9;
              if (plVar16 == plVar2) {
                uVar8 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 9);
                  plVar14 = (long *)plVar15[9];
                  uVar17 = 3;
                }
                plVar2 = plVar15 + 0xc;
                if (plVar16 == plVar2) {
                  uVar8 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xc);
                    plVar14 = (long *)plVar15[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar15 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar8 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + 0xf);
                      plVar14 = (long *)plVar15[0xf];
                      uVar17 = 5;
                    }
                    uVar8 = 6;
                    for (plVar2 = plVar15 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar17 = uVar8;
                      }
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar17 * 3,plVar15 + uVar8 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
    do {
      lVar10 = *plVar16;
      iVar1 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))();
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


