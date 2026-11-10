/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01957028; name: FUN_01957028
 */


void FUN_01957028(undefined8 *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_68;
  long *local_48;
  
  plVar12 = (long *)param_1[0x2e];
  *param_1 = &DAT_045ff468;
  param_1[4] = &PTR_LAB_045ff4a0;
  param_1[0x2e] = 0;
  if (plVar12 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar6 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plVar4 = (long *)param_1[0x2f];
    uVar5 = param_1[0x30];
    uVar13 = param_1[0x31];
    uVar10 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar12,uVar5,uVar13);
    }
    else {
      FUN_00c48fe8(plVar4,plVar12,uVar5,uVar13);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar12[600] != 0) {
          plVar4 = plVar12 + plVar12[600] * 3;
        }
        if (plVar4 == plVar12) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar4 == plVar2) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar14;
            if (bVar9) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            uVar15 = (ulong)bVar9;
            plVar2 = plVar12 + 6;
            if (plVar4 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                uVar15 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar4 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  uVar15 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar4 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    uVar15 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (plVar2 = plVar12 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  plVar12 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar12 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar6 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plVar4 = (long *)param_1[0x2b];
    uVar5 = param_1[0x2c];
    uVar13 = param_1[0x2d];
    uVar10 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar12,uVar5,uVar13);
    }
    else {
      FUN_00c48fe8(plVar4,plVar12,uVar5,uVar13);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar12[600] != 0) {
          plVar4 = plVar12 + plVar12[600] * 3;
        }
        if (plVar4 == plVar12) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar4 == plVar2) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar14;
            if (bVar9) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            uVar15 = (ulong)bVar9;
            plVar2 = plVar12 + 6;
            if (plVar4 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                uVar15 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar4 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  uVar15 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar4 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    uVar15 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (plVar2 = plVar12 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  plVar12 = (long *)param_1[0x35];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x34];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x33];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x32];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (plVar12 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar6 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plVar4 = (long *)param_1[0x2f];
    uVar5 = param_1[0x30];
    uVar13 = param_1[0x31];
    uVar10 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar12,uVar5,uVar13);
    }
    else {
      FUN_00c48fe8(plVar4,plVar12,uVar5,uVar13);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar12[600] != 0) {
          plVar4 = plVar12 + plVar12[600] * 3;
        }
        if (plVar4 == plVar12) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar4 == plVar2) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar14;
            if (bVar9) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            uVar15 = (ulong)bVar9;
            plVar2 = plVar12 + 6;
            if (plVar4 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                uVar15 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar4 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  uVar15 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar4 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    uVar15 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (plVar2 = plVar12 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  plVar12 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar12 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar6 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plVar4 = (long *)param_1[0x2b];
    uVar5 = param_1[0x2c];
    uVar13 = param_1[0x2d];
    uVar10 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar12,uVar5,uVar13);
    }
    else {
      FUN_00c48fe8(plVar4,plVar12,uVar5,uVar13);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar14 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar12[600] != 0) {
          plVar4 = plVar12 + plVar12[600] * 3;
        }
        if (plVar4 == plVar12) {
          uVar15 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar4 == plVar2) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar14;
            if (bVar9) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            uVar15 = (ulong)bVar9;
            plVar2 = plVar12 + 6;
            if (plVar4 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                uVar15 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar4 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  uVar15 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar4 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    uVar15 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      uVar15 = 5;
                    }
                    uVar10 = 6;
                    for (plVar2 = plVar12 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar2);
                        plVar14 = (long *)*plVar2;
                        uVar15 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar15 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  FUN_01958568(param_1 + 0x29);
  FUN_019584f0(param_1 + 0x28);
  plVar12 = (long *)param_1[0x27];
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01957334;
  }
  plVar12 = (long *)param_1[0x26];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x25];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  FUN_017b1314(param_1 + 0x24);
  plVar12 = (long *)param_1[0x23];
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01957334;
  }
  plVar12 = (long *)param_1[0x22];
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01957334;
  }
  plVar12 = (long *)param_1[0x21];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x20];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x1f];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x1e];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x1d];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x1c];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x1b];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x1a];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x19];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x18];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x17];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x16];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[0x15];
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01957334:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar12 = (long *)param_1[9];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[8];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01957278;
  }
  plVar12 = (long *)param_1[7];
  if (plVar12 != (long *)0x0) {
    plVar4 = plVar12 + 5;
    do {
      lVar11 = *plVar4;
      iVar8 = (int)lVar11 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = iVar8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_01957278:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


