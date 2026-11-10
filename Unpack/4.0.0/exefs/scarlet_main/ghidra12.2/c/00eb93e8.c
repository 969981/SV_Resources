/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb93e8; name: FUN_00eb93e8
 */


void FUN_00eb93e8(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long *local_e8;
  ulong local_e0;
  ulong local_d8;
  long *local_c8;
  long *local_c0;
  ulong local_b8;
  ulong local_b0;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar24 = *(long *)(param_1 + 0x180);
  if (lVar24 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    plVar21 = local_90;
    local_90 = (long *)0x0;
    lVar24 = *(long *)(param_1 + 0x180);
    *(long **)(param_1 + 0x180) = plVar21;
    if (lVar24 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
      local_90 = (long *)0x0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar20 = FUN_00c4e600();
      iVar4 = *(int *)(lVar20 + 0x12c8);
      iVar14 = iVar4 + 1;
      *(int *)(lVar20 + 0x12c8) = iVar14;
      if (*(int *)(lVar20 + 0x12cc) <= iVar4) {
        *(int *)(lVar20 + 0x12cc) = iVar14;
      }
      FUN_00eea34c(lVar24);
      plVar21 = *(long **)(param_1 + 0x188);
      uVar22 = *(undefined8 *)(param_1 + 400);
      uVar23 = *(undefined8 *)(param_1 + 0x198);
      uVar17 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar17 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar24,uVar22,uVar23);
      }
      else {
        FUN_00c48fe8(plVar21,lVar24,uVar22,uVar23);
      }
      lVar24 = FUN_00c4e600();
      iVar14 = *(int *)(lVar24 + 0x12c8) + -1;
      *(int *)(lVar24 + 0x12c8) = iVar14;
      if (iVar14 == 0) {
        plVar21 = (long *)FUN_00c4e600();
        if (plVar21[600] != 0) {
          local_70 = plVar21 + plVar21[600] * 3;
          local_68 = plVar21;
          FUN_00c4ea30(&local_68,&local_70);
          local_a0 = (long *)*plVar21;
          plVar18 = plVar21;
          if (plVar21[600] != 0) {
            plVar18 = plVar21 + plVar21[600] * 3;
          }
          if (plVar18 == plVar21) {
            local_b8 = 0;
            local_b0 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar21 + 0xd0))();
            if ((long *)*plVar21 != local_a0) {
              (**(code **)(*local_a0 + 0x100))(local_a0,plVar21,plVar21);
              local_a0 = (long *)*plVar21;
            }
            plVar2 = plVar21 + 3;
            if (plVar18 == plVar2) {
              local_b0 = 0;
              local_b8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar13 = (long *)*plVar2 != local_a0;
              if (bVar13) {
                (**(code **)(*local_a0 + 0x100))(local_a0,plVar21,plVar21 + 3);
                local_a0 = (long *)plVar21[3];
              }
              local_b0 = (ulong)bVar13;
              plVar2 = plVar21 + 6;
              if (plVar18 == plVar2) {
                local_b8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != local_a0) {
                  (**(code **)(*local_a0 + 0x100))(local_a0,plVar21 + local_b0 * 3,plVar21 + 6);
                  local_a0 = (long *)plVar21[6];
                  local_b0 = 2;
                }
                plVar2 = plVar21 + 9;
                if (plVar18 == plVar2) {
                  local_b8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != local_a0) {
                    (**(code **)(*local_a0 + 0x100))(local_a0,plVar21 + local_b0 * 3,plVar21 + 9);
                    local_a0 = (long *)plVar21[9];
                    local_b0 = 3;
                  }
                  plVar2 = plVar21 + 0xc;
                  if (plVar18 == plVar2) {
                    local_b8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != local_a0) {
                      (**(code **)(*local_a0 + 0x100))
                                (local_a0,plVar21 + local_b0 * 3,plVar21 + 0xc);
                      local_a0 = (long *)plVar21[0xc];
                      local_b0 = 4;
                    }
                    plVar2 = plVar21 + 0xf;
                    if (plVar18 == plVar2) {
                      local_b8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != local_a0) {
                        (**(code **)(*local_a0 + 0x100))
                                  (local_a0,plVar21 + local_b0 * 3,plVar21 + 0xf);
                        local_a0 = (long *)plVar21[0xf];
                        local_b0 = 5;
                      }
                      local_c0 = plVar21 + 0x12;
                      if (plVar18 == local_c0) {
                        local_b8 = 6;
                      }
                      else {
                        local_b8 = 6;
                        do {
                          (**(code **)(*(long *)*local_c0 + 0xd0))();
                          if ((long *)*local_c0 != local_a0) {
                            (**(code **)(*local_a0 + 0x100))
                                      (local_a0,plVar21 + local_b0 * 3,local_c0);
                            local_a0 = (long *)*local_c0;
                            local_b0 = local_b8;
                          }
                          local_b8 = local_b8 + 1;
                          local_c0 = local_c0 + 3;
                        } while (plVar18 != local_c0);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_a0 + 0x100))(local_a0,plVar21 + local_b0 * 3,plVar21 + local_b8 * 3);
          plVar21[600] = 0;
        }
        *(undefined4 *)(lVar24 + 0x12cc) = 0;
      }
      plVar21 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar24 = FUN_00c4e600();
        iVar4 = *(int *)(lVar24 + 0x12c8);
        iVar14 = iVar4 + 1;
        *(int *)(lVar24 + 0x12c8) = iVar14;
        if (*(int *)(lVar24 + 0x12cc) <= iVar4) {
          *(int *)(lVar24 + 0x12cc) = iVar14;
        }
        FUN_00eea34c(plVar21);
        uVar17 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,plVar21,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,plVar21,local_80,local_78);
        }
        lVar24 = FUN_00c4e600();
        iVar14 = *(int *)(lVar24 + 0x12c8) + -1;
        *(int *)(lVar24 + 0x12c8) = iVar14;
        if (iVar14 == 0) {
          plVar21 = (long *)FUN_00c4e600();
          if (plVar21[600] != 0) {
            local_70 = plVar21 + plVar21[600] * 3;
            local_68 = plVar21;
            FUN_00c4ea30(&local_68,&local_70);
            local_a0 = (long *)*plVar21;
            plVar18 = plVar21;
            if (plVar21[600] != 0) {
              plVar18 = plVar21 + plVar21[600] * 3;
            }
            if (plVar18 == plVar21) {
              local_b8 = 0;
              local_b0 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar21 + 0xd0))();
              if ((long *)*plVar21 != local_a0) {
                (**(code **)(*local_a0 + 0x100))(local_a0,plVar21,plVar21);
                local_a0 = (long *)*plVar21;
              }
              plVar2 = plVar21 + 3;
              if (plVar18 == plVar2) {
                local_b0 = 0;
                local_b8 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar13 = (long *)*plVar2 != local_a0;
                if (bVar13) {
                  (**(code **)(*local_a0 + 0x100))(local_a0,plVar21,plVar21 + 3);
                  local_a0 = (long *)plVar21[3];
                }
                local_b0 = (ulong)bVar13;
                plVar2 = plVar21 + 6;
                if (plVar18 == plVar2) {
                  local_b8 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != local_a0) {
                    (**(code **)(*local_a0 + 0x100))(local_a0,plVar21 + local_b0 * 3,plVar21 + 6);
                    local_a0 = (long *)plVar21[6];
                    local_b0 = 2;
                  }
                  plVar2 = plVar21 + 9;
                  if (plVar18 == plVar2) {
                    local_b8 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != local_a0) {
                      (**(code **)(*local_a0 + 0x100))(local_a0,plVar21 + local_b0 * 3,plVar21 + 9);
                      local_a0 = (long *)plVar21[9];
                      local_b0 = 3;
                    }
                    plVar2 = plVar21 + 0xc;
                    if (plVar18 == plVar2) {
                      local_b8 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != local_a0) {
                        (**(code **)(*local_a0 + 0x100))
                                  (local_a0,plVar21 + local_b0 * 3,plVar21 + 0xc);
                        local_a0 = (long *)plVar21[0xc];
                        local_b0 = 4;
                      }
                      plVar2 = plVar21 + 0xf;
                      if (plVar18 == plVar2) {
                        local_b8 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != local_a0) {
                          (**(code **)(*local_a0 + 0x100))
                                    (local_a0,plVar21 + local_b0 * 3,plVar21 + 0xf);
                          local_a0 = (long *)plVar21[0xf];
                          local_b0 = 5;
                        }
                        local_c0 = plVar21 + 0x12;
                        if (plVar18 == local_c0) {
                          local_b8 = 6;
                        }
                        else {
                          local_b8 = 6;
                          do {
                            (**(code **)(*(long *)*local_c0 + 0xd0))();
                            if ((long *)*local_c0 != local_a0) {
                              (**(code **)(*local_a0 + 0x100))
                                        (local_a0,plVar21 + local_b0 * 3,local_c0);
                              local_a0 = (long *)*local_c0;
                              local_b0 = local_b8;
                            }
                            local_b8 = local_b8 + 1;
                            local_c0 = local_c0 + 3;
                          } while (plVar18 != local_c0);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*local_a0 + 0x100))(local_a0,plVar21 + local_b0 * 3,plVar21 + local_b8 * 3)
            ;
            plVar21[600] = 0;
          }
          *(undefined4 *)(lVar24 + 0x12cc) = 0;
        }
      }
    }
    lVar24 = *(long *)(param_1 + 0x180);
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  lVar20 = lVar24;
  if (*(long *)(lVar24 + 0x58) == 0) {
    plVar21 = *(long **)(param_1 + 8);
    puVar15 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x2c,4);
    if (puVar15 == (undefined8 *)0x0) {
      plVar21 = (long *)0x0;
      uVar23 = 0;
      uVar22 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar20 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar20 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar21;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
      *puVar15 = 0;
      puVar15[1] = 0x800000000;
      *(undefined2 *)puVar15 = 0x101;
      *(undefined1 *)(puVar15 + 1) = 0;
      uVar22 = 4;
      *(undefined4 *)((long)puVar15 + 4) = 5;
      puVar15[4] = 0x100000001;
      puVar15[2] = 0x100000001;
      puVar15[3] = 0x800000001;
      *(undefined4 *)(puVar15 + 5) = 1;
      uVar23 = 0x2c;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
    }
    lVar20 = *(long *)(lVar24 + 0x58);
    *(undefined8 **)(lVar24 + 0x58) = puVar15;
    if (lVar20 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar16 = FUN_00c4e600();
      iVar4 = *(int *)(lVar16 + 0x12c8);
      iVar14 = iVar4 + 1;
      *(int *)(lVar16 + 0x12c8) = iVar14;
      if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
        *(int *)(lVar16 + 0x12cc) = iVar14;
      }
      plVar18 = *(long **)(lVar24 + 0x60);
      uVar3 = *(undefined8 *)(lVar24 + 0x68);
      uVar19 = *(undefined8 *)(lVar24 + 0x70);
      uVar17 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar17 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar20,uVar3,uVar19);
      }
      else {
        FUN_00c48fe8(plVar18,lVar20,uVar3,uVar19);
      }
      lVar20 = FUN_00c4e600();
      iVar14 = *(int *)(lVar20 + 0x12c8) + -1;
      *(int *)(lVar20 + 0x12c8) = iVar14;
      if (iVar14 == 0) {
        plVar18 = (long *)FUN_00c4e600();
        if (plVar18[600] != 0) {
          local_68 = plVar18 + plVar18[600] * 3;
          local_90 = plVar18;
          FUN_00c4ea30(&local_90,&local_68);
          local_c8 = (long *)*plVar18;
          plVar2 = plVar18;
          if (plVar18[600] != 0) {
            plVar2 = plVar18 + plVar18[600] * 3;
          }
          if (plVar2 == plVar18) {
            local_e0 = 0;
            local_d8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar18 + 0xd0))();
            if ((long *)*plVar18 != local_c8) {
              (**(code **)(*local_c8 + 0x100))(local_c8,plVar18,plVar18);
              local_c8 = (long *)*plVar18;
            }
            plVar1 = plVar18 + 3;
            if (plVar2 == plVar1) {
              local_d8 = 0;
              local_e0 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar5 = (long *)*plVar1 != local_c8;
              if (bVar5) {
                (**(code **)(*local_c8 + 0x100))(local_c8,plVar18,plVar18 + 3);
                local_c8 = (long *)plVar18[3];
              }
              local_d8 = (ulong)bVar5;
              plVar1 = plVar18 + 6;
              if (plVar2 == plVar1) {
                local_e0 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != local_c8) {
                  (**(code **)(*local_c8 + 0x100))(local_c8,plVar18 + local_d8 * 3,plVar18 + 6);
                  local_c8 = (long *)plVar18[6];
                  local_d8 = 2;
                }
                plVar1 = plVar18 + 9;
                if (plVar2 == plVar1) {
                  local_e0 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != local_c8) {
                    (**(code **)(*local_c8 + 0x100))(local_c8,plVar18 + local_d8 * 3,plVar18 + 9);
                    local_c8 = (long *)plVar18[9];
                    local_d8 = 3;
                  }
                  plVar1 = plVar18 + 0xc;
                  if (plVar2 == plVar1) {
                    local_e0 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != local_c8) {
                      (**(code **)(*local_c8 + 0x100))
                                (local_c8,plVar18 + local_d8 * 3,plVar18 + 0xc);
                      local_c8 = (long *)plVar18[0xc];
                      local_d8 = 4;
                    }
                    plVar1 = plVar18 + 0xf;
                    if (plVar2 == plVar1) {
                      local_e0 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != local_c8) {
                        (**(code **)(*local_c8 + 0x100))
                                  (local_c8,plVar18 + local_d8 * 3,plVar18 + 0xf);
                        local_c8 = (long *)plVar18[0xf];
                        local_d8 = 5;
                      }
                      local_e8 = plVar18 + 0x12;
                      if (plVar2 == local_e8) {
                        local_e0 = 6;
                      }
                      else {
                        local_e0 = 6;
                        do {
                          (**(code **)(*(long *)*local_e8 + 0xd0))();
                          if ((long *)*local_e8 != local_c8) {
                            (**(code **)(*local_c8 + 0x100))
                                      (local_c8,plVar18 + local_d8 * 3,local_e8);
                            local_c8 = (long *)*local_e8;
                            local_d8 = local_e0;
                          }
                          local_e0 = local_e0 + 1;
                          local_e8 = local_e8 + 3;
                        } while (plVar2 != local_e8);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_c8 + 0x100))(local_c8,plVar18 + local_d8 * 3,plVar18 + local_e0 * 3);
          plVar18[600] = 0;
        }
        *(undefined4 *)(lVar20 + 0x12cc) = 0;
      }
    }
    *(long **)(lVar24 + 0x60) = plVar21;
    *(undefined8 *)(lVar24 + 0x68) = uVar23;
    *(undefined8 *)(lVar24 + 0x70) = uVar22;
    *(undefined1 *)(lVar24 + 0x9c) = 1;
    lVar20 = *(long *)(param_1 + 0x180);
  }
  lVar20 = *(long *)(lVar20 + 0x58);
  bVar5 = *(int *)(lVar20 + 0xc) != param_2;
  if (bVar5) {
    *(int *)(lVar20 + 0xc) = param_2;
  }
  bVar6 = *(int *)(lVar20 + 0x10) != param_3;
  if (bVar6) {
    *(int *)(lVar20 + 0x10) = param_3;
  }
  bVar6 = bVar6 || bVar5;
  bVar7 = *(int *)(lVar20 + 0x14) != param_4;
  if (bVar7) {
    *(int *)(lVar20 + 0x14) = param_4;
  }
  bVar7 = bVar7 || bVar6;
  bVar8 = *(int *)(lVar20 + 0x18) != param_5;
  if (bVar8) {
    *(int *)(lVar20 + 0x18) = param_5;
  }
  bVar8 = bVar8 || bVar7;
  bVar9 = *(int *)(lVar20 + 0x1c) != param_6;
  if (bVar9) {
    *(int *)(lVar20 + 0x1c) = param_6;
  }
  bVar9 = bVar9 || bVar8;
  bVar10 = *(int *)(lVar20 + 0x20) != param_7;
  if (bVar10) {
    *(int *)(lVar20 + 0x20) = param_7;
  }
  bVar10 = bVar10 || bVar9;
  bVar11 = *(int *)(lVar20 + 0x24) != param_8;
  if (bVar11) {
    *(int *)(lVar20 + 0x24) = param_8;
  }
  bVar11 = bVar11 || bVar10;
  bVar12 = *(int *)(lVar20 + 0x28) != param_9;
  if (bVar12) {
    *(int *)(lVar20 + 0x28) = param_9;
  }
  if (bVar5 || (bVar6 || (bVar7 || (bVar8 || (bVar9 || (bVar10 || (bVar11 || (bVar12 || bVar11))))))
               )) {
    *(undefined1 *)(lVar24 + 0x9c) = 1;
  }
  else if ((*(char *)(lVar24 + 0x9c) == '\0') && (bVar13)) {
    return;
  }
  lVar24 = *(long *)(param_1 + 0x208);
  lVar20 = *(long *)(param_1 + 0x210);
  if (((lVar24 != lVar20) && (*(undefined1 *)(lVar24 + 0x10) = 1, lVar24 + 0x18 != lVar20)) &&
     (*(undefined1 *)(lVar24 + 0x28) = 1, lVar24 + 0x30 != lVar20)) {
    *(undefined1 *)(lVar24 + 0x40) = 1;
    for (lVar24 = lVar24 + 0x48; lVar24 != lVar20; lVar24 = lVar24 + 0x18) {
      *(undefined1 *)(lVar24 + 0x10) = 1;
    }
  }
  return;
}


