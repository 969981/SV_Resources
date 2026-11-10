/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297c918; name: FUN_0297c918
 */


void FUN_0297c918(undefined8 *param_1)

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
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *local_68;
  long *local_48;
  
  puVar11 = (undefined8 *)param_1[0xd];
  *param_1 = &PTR_FUN_045fccf0;
  param_1[0xd] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar5 = *(int *)(lVar12 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
      *(int *)(lVar12 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar9 = (long *)param_1[0xe];
    uVar4 = param_1[0xf];
    uVar10 = param_1[0x10];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,puVar11,uVar4,uVar10);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
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
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  puVar11 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar5 = *(int *)(lVar12 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
      *(int *)(lVar12 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar9 = (long *)param_1[10];
    uVar4 = param_1[0xb];
    uVar10 = param_1[0xc];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,puVar11,uVar4,uVar10);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
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
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  lVar12 = param_1[5];
  param_1[5] = 0;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar1;
    if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
      *(int *)(lVar7 + 0x12cc) = iVar1;
    }
    plVar9 = (long *)param_1[6];
    uVar4 = param_1[7];
    uVar10 = param_1[8];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar12,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar12,uVar4,uVar10);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
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
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  puVar11 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar5 = *(int *)(lVar12 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
      *(int *)(lVar12 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar11)(puVar11);
    plVar9 = (long *)param_1[2];
    uVar4 = param_1[3];
    uVar10 = param_1[4];
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar11,uVar4,uVar10);
    }
    else {
      FUN_00c48fe8(plVar9,puVar11,uVar4,uVar10);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
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
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  return;
}


