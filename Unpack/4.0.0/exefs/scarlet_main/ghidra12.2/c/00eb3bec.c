/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb3bec; name: FUN_00eb3bec
 */


void FUN_00eb3bec(long param_1,byte param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar15 = *(long *)(param_1 + 0x180);
  if (lVar15 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    plVar13 = local_90;
    local_90 = (long *)0x0;
    lVar15 = *(long *)(param_1 + 0x180);
    *(long **)(param_1 + 0x180) = plVar13;
    if (lVar15 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
      local_90 = (long *)0x0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar2 = *(int *)(lVar7 + 0x12c8);
      iVar5 = iVar2 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar5;
      if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
        *(int *)(lVar7 + 0x12cc) = iVar5;
      }
      FUN_00eea34c(lVar15);
      plVar13 = *(long **)(param_1 + 0x188);
      uVar11 = *(undefined8 *)(param_1 + 400);
      uVar12 = *(undefined8 *)(param_1 + 0x198);
      uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar15,uVar11,uVar12);
      }
      else {
        FUN_00c48fe8(plVar13,lVar15,uVar11,uVar12);
      }
      lVar15 = FUN_00c4e600();
      iVar5 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          local_68 = plVar13;
          FUN_00c4ea30(&local_68,&local_70);
          plVar14 = (long *)*plVar13;
          plVar10 = plVar13;
          if (plVar13[600] != 0) {
            plVar10 = plVar13 + plVar13[600] * 3;
          }
          if (plVar10 == plVar13) {
            uVar19 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
              plVar14 = (long *)*plVar13;
            }
            plVar17 = plVar13 + 3;
            if (plVar10 == plVar17) {
              uVar19 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar17 + 0xd0))();
              bVar4 = (long *)*plVar17 != plVar14;
              if (bVar4) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
                plVar14 = (long *)plVar13[3];
              }
              uVar19 = (ulong)bVar4;
              plVar17 = plVar13 + 6;
              if (plVar10 == plVar17) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar17 + 0xd0))();
                if ((long *)*plVar17 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 6);
                  plVar14 = (long *)plVar13[6];
                  uVar19 = 2;
                }
                plVar17 = plVar13 + 9;
                if (plVar10 == plVar17) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar17 + 0xd0))();
                  if ((long *)*plVar17 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 9);
                    plVar14 = (long *)plVar13[9];
                    uVar19 = 3;
                  }
                  plVar17 = plVar13 + 0xc;
                  if (plVar10 == plVar17) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar17 + 0xd0))();
                    if ((long *)*plVar17 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 0xc);
                      plVar14 = (long *)plVar13[0xc];
                      uVar19 = 4;
                    }
                    plVar17 = plVar13 + 0xf;
                    if (plVar10 == plVar17) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar17 + 0xd0))();
                      if ((long *)*plVar17 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 0xf);
                        plVar14 = (long *)plVar13[0xf];
                        uVar19 = 5;
                      }
                      uVar9 = 6;
                      for (plVar17 = plVar13 + 0x12; plVar10 != plVar17; plVar17 = plVar17 + 3) {
                        (**(code **)(*(long *)*plVar17 + 0xd0))();
                        if ((long *)*plVar17 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar17);
                          plVar14 = (long *)*plVar17;
                          uVar19 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + uVar9 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar15 + 0x12cc) = 0;
      }
      plVar13 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar15 = FUN_00c4e600();
        iVar2 = *(int *)(lVar15 + 0x12c8);
        iVar5 = iVar2 + 1;
        *(int *)(lVar15 + 0x12c8) = iVar5;
        if (*(int *)(lVar15 + 0x12cc) <= iVar2) {
          *(int *)(lVar15 + 0x12cc) = iVar5;
        }
        FUN_00eea34c(plVar13);
        uVar9 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar9 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,plVar13,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,plVar13,local_80,local_78);
        }
        lVar15 = FUN_00c4e600();
        iVar5 = *(int *)(lVar15 + 0x12c8) + -1;
        *(int *)(lVar15 + 0x12c8) = iVar5;
        if (iVar5 == 0) {
          plVar13 = (long *)FUN_00c4e600();
          if (plVar13[600] != 0) {
            local_70 = plVar13 + plVar13[600] * 3;
            local_68 = plVar13;
            FUN_00c4ea30(&local_68,&local_70);
            plVar14 = (long *)*plVar13;
            plVar10 = plVar13;
            if (plVar13[600] != 0) {
              plVar10 = plVar13 + plVar13[600] * 3;
            }
            if (plVar10 == plVar13) {
              uVar19 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
                plVar14 = (long *)*plVar13;
              }
              plVar17 = plVar13 + 3;
              if (plVar10 == plVar17) {
                uVar19 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar17 + 0xd0))();
                bVar4 = (long *)*plVar17 != plVar14;
                if (bVar4) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
                  plVar14 = (long *)plVar13[3];
                }
                uVar19 = (ulong)bVar4;
                plVar17 = plVar13 + 6;
                if (plVar10 == plVar17) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar17 + 0xd0))();
                  if ((long *)*plVar17 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 6);
                    plVar14 = (long *)plVar13[6];
                    uVar19 = 2;
                  }
                  plVar17 = plVar13 + 9;
                  if (plVar10 == plVar17) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar17 + 0xd0))();
                    if ((long *)*plVar17 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 9);
                      plVar14 = (long *)plVar13[9];
                      uVar19 = 3;
                    }
                    plVar17 = plVar13 + 0xc;
                    if (plVar10 == plVar17) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar17 + 0xd0))();
                      if ((long *)*plVar17 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + 0xc);
                        plVar14 = (long *)plVar13[0xc];
                        uVar19 = 4;
                      }
                      plVar17 = plVar13 + 0xf;
                      if (plVar10 == plVar17) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar17 + 0xd0))();
                        if ((long *)*plVar17 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))
                                    (plVar14,plVar13 + uVar19 * 3,plVar13 + 0xf);
                          plVar14 = (long *)plVar13[0xf];
                          uVar19 = 5;
                        }
                        uVar9 = 6;
                        for (plVar17 = plVar13 + 0x12; plVar10 != plVar17; plVar17 = plVar17 + 3) {
                          (**(code **)(*(long *)*plVar17 + 0xd0))();
                          if ((long *)*plVar17 != plVar14) {
                            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar17);
                            plVar14 = (long *)*plVar17;
                            uVar19 = uVar9;
                          }
                          uVar9 = uVar9 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar19 * 3,plVar13 + uVar9 * 3);
            plVar13[600] = 0;
          }
          *(undefined4 *)(lVar15 + 0x12cc) = 0;
        }
      }
    }
    lVar15 = *(long *)(param_1 + 0x180);
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar7 = lVar15;
  if (*(long *)(lVar15 + 0x58) == 0) {
    plVar13 = *(long **)(param_1 + 8);
    puVar6 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x2c,4);
    if (puVar6 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar12 = 0;
      uVar11 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar13;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar6 = 0;
      puVar6[1] = 0x800000000;
      *(undefined2 *)puVar6 = 0x101;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)((long)puVar6 + 4) = 5;
      puVar6[2] = 0x100000001;
      puVar6[3] = 0x800000001;
      puVar6[4] = 0x100000001;
      *(undefined4 *)(puVar6 + 5) = 1;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      uVar11 = 4;
      uVar12 = 0x2c;
    }
    lVar7 = *(long *)(lVar15 + 0x58);
    *(undefined8 **)(lVar15 + 0x58) = puVar6;
    if (lVar7 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar2 = *(int *)(lVar8 + 0x12c8);
      iVar5 = iVar2 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar5;
      if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
        *(int *)(lVar8 + 0x12cc) = iVar5;
      }
      plVar10 = *(long **)(lVar15 + 0x60);
      uVar1 = *(undefined8 *)(lVar15 + 0x68);
      uVar16 = *(undefined8 *)(lVar15 + 0x70);
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,uVar1,uVar16);
      }
      else {
        FUN_00c48fe8(plVar10,lVar7,uVar1,uVar16);
      }
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_68 = plVar10 + plVar10[600] * 3;
          local_90 = plVar10;
          FUN_00c4ea30(&local_90,&local_68);
          plVar17 = (long *)*plVar10;
          plVar14 = plVar10;
          if (plVar10[600] != 0) {
            plVar14 = plVar10 + plVar10[600] * 3;
          }
          if (plVar14 == plVar10) {
            uVar19 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10);
              plVar17 = (long *)*plVar10;
            }
            plVar18 = plVar10 + 3;
            if (plVar14 == plVar18) {
              uVar19 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              bVar3 = (long *)*plVar18 != plVar17;
              if (bVar3) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10 + 3);
                plVar17 = (long *)plVar10[3];
              }
              uVar19 = (ulong)bVar3;
              plVar18 = plVar10 + 6;
              if (plVar14 == plVar18) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                if ((long *)*plVar18 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 6);
                  plVar17 = (long *)plVar10[6];
                  uVar19 = 2;
                }
                plVar18 = plVar10 + 9;
                if (plVar14 == plVar18) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 9);
                    plVar17 = (long *)plVar10[9];
                    uVar19 = 3;
                  }
                  plVar18 = plVar10 + 0xc;
                  if (plVar14 == plVar18) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 0xc);
                      plVar17 = (long *)plVar10[0xc];
                      uVar19 = 4;
                    }
                    plVar18 = plVar10 + 0xf;
                    if (plVar14 == plVar18) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 0xf);
                        plVar17 = (long *)plVar10[0xf];
                        uVar19 = 5;
                      }
                      uVar9 = 6;
                      for (plVar18 = plVar10 + 0x12; plVar14 != plVar18; plVar18 = plVar18 + 3) {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar18);
                          plVar17 = (long *)*plVar18;
                          uVar19 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + uVar9 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(lVar15 + 0x70) = uVar11;
    *(undefined1 *)(lVar15 + 0x9c) = 1;
    *(long **)(lVar15 + 0x60) = plVar13;
    *(undefined8 *)(lVar15 + 0x68) = uVar12;
    lVar7 = *(long *)(param_1 + 0x180);
  }
  if (**(byte **)(lVar7 + 0x58) == (param_2 & 1)) {
    if ((*(char *)(lVar15 + 0x9c) == '\0') && (bVar4)) {
      return;
    }
  }
  else {
    **(byte **)(lVar7 + 0x58) = param_2 & 1;
    *(undefined1 *)(lVar15 + 0x9c) = 1;
  }
  lVar15 = *(long *)(param_1 + 0x208);
  lVar7 = *(long *)(param_1 + 0x210);
  if (((lVar15 != lVar7) && (*(undefined1 *)(lVar15 + 0x10) = 1, lVar15 + 0x18 != lVar7)) &&
     (*(undefined1 *)(lVar15 + 0x28) = 1, lVar15 + 0x30 != lVar7)) {
    *(undefined1 *)(lVar15 + 0x40) = 1;
    for (lVar15 = lVar15 + 0x48; lVar15 != lVar7; lVar15 = lVar15 + 0x18) {
      *(undefined1 *)(lVar15 + 0x10) = 1;
    }
  }
  return;
}


