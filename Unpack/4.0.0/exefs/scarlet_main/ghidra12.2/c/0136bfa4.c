/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136bfa4; name: FUN_0136bfa4
 */


void FUN_0136bfa4(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong local_110;
  long *local_108;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  long *local_70 [2];
  
  *param_1 = param_2[1];
  param_1[1] = param_2[2];
  plVar17 = param_1 + 2;
  memset(plVar17,0,0x1e0);
  plVar16 = (long *)*param_2;
  plVar6 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x2590,8);
  if (plVar6 == (long *)0x0) {
    plVar16 = (long *)0x0;
    lVar22 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
    puVar1 = PTR_DAT_047e25d8 + 0x10;
    lVar22 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar6 = (long)puVar1;
    do {
      pvVar11 = (void *)((long)plVar6 + lVar22);
      memset(pvVar11,0,0x180);
      *(undefined1 *)((long)pvVar11 + 0x160) = 5;
      lVar22 = lVar22 + 0x180;
      *(undefined8 *)((long)pvVar11 + 0x164) = 0;
      *(undefined1 *)((long)pvVar11 + 0x16c) = 0;
      *(undefined2 *)((long)pvVar11 + 0x16e) = 10;
      *(undefined4 *)((long)pvVar11 + 0x170) = 0xa0a0a0a;
      *(undefined1 *)((long)pvVar11 + 0x174) = 10;
      *(undefined2 *)((long)pvVar11 + 0x178) = 0;
      *(undefined1 *)((long)pvVar11 + 0x17a) = 0;
      *(undefined2 *)((long)pvVar11 + 0x17c) = 0;
    } while ((long *)((long)pvVar11 + 0x180) != plVar6 + 0x4b1);
    FUN_013702c0(plVar6 + 1);
    FUN_013702c0(plVar6 + 1);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = 8;
    lVar22 = 0x2590;
  }
  puVar18 = (undefined8 *)param_1[0x32];
  param_1[0x32] = (long)plVar6;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar6 = (long *)param_1[0x33];
    lVar8 = param_1[0x34];
    lVar10 = param_1[0x35];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar18,lVar8,lVar10);
    }
    else {
      FUN_00c48fe8(plVar6,puVar18,lVar8,lVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar19 = (long *)*plVar6;
        plVar21 = plVar6;
        if (plVar6[600] != 0) {
          plVar21 = plVar6 + plVar6[600] * 3;
        }
        if (plVar21 == plVar6) {
          uVar13 = 0;
          local_110 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6);
            plVar19 = (long *)*plVar6;
          }
          plVar15 = plVar6 + 3;
          if (plVar21 == plVar15) {
            uVar13 = 0;
            local_110 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar4 = (long *)*plVar15 != plVar19;
            if (bVar4) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6 + 3);
              plVar19 = (long *)plVar6[3];
            }
            uVar13 = (ulong)bVar4;
            plVar15 = plVar6 + 6;
            if (plVar21 == plVar15) {
              local_110 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 6);
                plVar19 = (long *)plVar6[6];
                uVar13 = 2;
              }
              plVar15 = plVar6 + 9;
              if (plVar21 == plVar15) {
                local_110 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 9);
                  plVar19 = (long *)plVar6[9];
                  uVar13 = 3;
                }
                plVar15 = plVar6 + 0xc;
                if (plVar21 == plVar15) {
                  local_110 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xc);
                    plVar19 = (long *)plVar6[0xc];
                    uVar13 = 4;
                  }
                  plVar15 = plVar6 + 0xf;
                  if (plVar21 == plVar15) {
                    local_110 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xf);
                      plVar19 = (long *)plVar6[0xf];
                      uVar13 = 5;
                    }
                    plVar15 = plVar6 + 0x12;
                    local_110 = 6;
                    if (plVar21 != plVar15) {
                      local_110 = 6;
                      do {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar15);
                          plVar19 = (long *)*plVar15;
                          uVar13 = local_110;
                        }
                        plVar15 = plVar15 + 3;
                        local_110 = local_110 + 1;
                      } while (plVar21 != plVar15);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + local_110 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x33] = (long)plVar16;
  param_1[0x34] = lVar22;
  param_1[0x35] = lVar7;
  plVar16 = (long *)*param_2;
  plVar6 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x80,8);
  if (plVar6 == (long *)0x0) {
    plVar16 = (long *)0x0;
    lVar22 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar7 = param_2[2];
    *plVar6 = param_2[1];
    plVar6[1] = lVar7;
    memset(plVar6 + 2,0,0x4a);
    *(undefined1 *)((long)plVar6 + 0x5c) = 0;
    *(undefined4 *)(plVar6 + 0xc) = 0;
    *(undefined1 *)((long)plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0xd) = 0;
    *(undefined1 *)((long)plVar6 + 0x6c) = 0;
    *(undefined4 *)(plVar6 + 0xe) = 0;
    *(undefined1 *)((long)plVar6 + 0x74) = 0;
    *(undefined4 *)(plVar6 + 0xf) = 0;
    memcpy(plVar6 + 2,(void *)(*(long *)(lVar7 + 0x310) + 0x1c),0x4a);
    *(undefined1 *)((long)plVar6 + 0x5c) = 0;
    lVar7 = 8;
    lVar22 = 0x80;
    *(undefined4 *)(plVar6 + 0xc) = 0;
    *(undefined1 *)((long)plVar6 + 100) = 0;
    *(undefined4 *)(plVar6 + 0xd) = 0;
    *(undefined1 *)((long)plVar6 + 0x6c) = 0;
    *(undefined4 *)(plVar6 + 0xe) = 0;
    *(undefined1 *)((long)plVar6 + 0x74) = 0;
    plVar6[0xf] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x36];
  param_1[0x36] = (long)plVar6;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    FUN_0291c4a0(lVar8);
    plVar6 = (long *)param_1[0x37];
    lVar10 = param_1[0x38];
    lVar12 = param_1[0x39];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,lVar12);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,lVar10,lVar12);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar19 = (long *)*plVar6;
        plVar21 = plVar6;
        if (plVar6[600] != 0) {
          plVar21 = plVar6 + plVar6[600] * 3;
        }
        if (plVar21 == plVar6) {
          uVar13 = 0;
          local_110 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6);
            plVar19 = (long *)*plVar6;
          }
          plVar15 = plVar6 + 3;
          if (plVar21 == plVar15) {
            uVar13 = 0;
            local_110 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar4 = (long *)*plVar15 != plVar19;
            if (bVar4) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6 + 3);
              plVar19 = (long *)plVar6[3];
            }
            uVar13 = (ulong)bVar4;
            plVar15 = plVar6 + 6;
            if (plVar21 == plVar15) {
              local_110 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 6);
                plVar19 = (long *)plVar6[6];
                uVar13 = 2;
              }
              plVar15 = plVar6 + 9;
              if (plVar21 == plVar15) {
                local_110 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 9);
                  plVar19 = (long *)plVar6[9];
                  uVar13 = 3;
                }
                plVar15 = plVar6 + 0xc;
                if (plVar21 == plVar15) {
                  local_110 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xc);
                    plVar19 = (long *)plVar6[0xc];
                    uVar13 = 4;
                  }
                  plVar15 = plVar6 + 0xf;
                  if (plVar21 == plVar15) {
                    local_110 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xf);
                      plVar19 = (long *)plVar6[0xf];
                      uVar13 = 5;
                    }
                    plVar15 = plVar6 + 0x12;
                    local_110 = 6;
                    if (plVar21 != plVar15) {
                      local_110 = 6;
                      do {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar15);
                          plVar19 = (long *)*plVar15;
                          uVar13 = local_110;
                        }
                        plVar15 = plVar15 + 3;
                        local_110 = local_110 + 1;
                      } while (plVar21 != plVar15);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + local_110 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x37] = (long)plVar16;
  param_1[0x38] = lVar22;
  param_1[0x39] = lVar7;
  plVar16 = (long *)*param_2;
  plVar6 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x78,8);
  if (plVar6 == (long *)0x0) {
    plVar16 = (long *)0x0;
    lVar22 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar7 = param_2[1];
    lVar22 = param_2[2];
    *plVar6 = lVar7;
    plVar6[1] = lVar22;
    memset((void *)((long)plVar6 + 0x2c),0,0x4a);
    memcpy((void *)((long)plVar6 + 0x2c),(void *)(*(long *)(lVar7 + 0x38) + 0x568),0x4a);
    *(undefined8 *)((long)plVar6 + 0x24) = 0;
    lVar7 = 8;
    *(undefined8 *)((long)plVar6 + 0x1c) = 0;
    lVar22 = 0x78;
    plVar6[2] = 0xffffffff;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x3a];
  param_1[0x3a] = (long)plVar6;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    FUN_0291c4a4(lVar8);
    plVar6 = (long *)param_1[0x3b];
    lVar10 = param_1[0x3c];
    lVar12 = param_1[0x3d];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,lVar12);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,lVar10,lVar12);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar19 = (long *)*plVar6;
        plVar21 = plVar6;
        if (plVar6[600] != 0) {
          plVar21 = plVar6 + plVar6[600] * 3;
        }
        if (plVar21 == plVar6) {
          uVar13 = 0;
          local_110 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6);
            plVar19 = (long *)*plVar6;
          }
          plVar15 = plVar6 + 3;
          if (plVar21 == plVar15) {
            uVar13 = 0;
            local_110 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar4 = (long *)*plVar15 != plVar19;
            if (bVar4) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6 + 3);
              plVar19 = (long *)plVar6[3];
            }
            uVar13 = (ulong)bVar4;
            plVar15 = plVar6 + 6;
            if (plVar21 == plVar15) {
              local_110 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 6);
                plVar19 = (long *)plVar6[6];
                uVar13 = 2;
              }
              plVar15 = plVar6 + 9;
              if (plVar21 == plVar15) {
                local_110 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 9);
                  plVar19 = (long *)plVar6[9];
                  uVar13 = 3;
                }
                plVar15 = plVar6 + 0xc;
                if (plVar21 == plVar15) {
                  local_110 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xc);
                    plVar19 = (long *)plVar6[0xc];
                    uVar13 = 4;
                  }
                  plVar15 = plVar6 + 0xf;
                  if (plVar21 == plVar15) {
                    local_110 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xf);
                      plVar19 = (long *)plVar6[0xf];
                      uVar13 = 5;
                    }
                    plVar15 = plVar6 + 0x12;
                    local_110 = 6;
                    if (plVar21 != plVar15) {
                      local_110 = 6;
                      do {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar15);
                          plVar19 = (long *)*plVar15;
                          uVar13 = local_110;
                        }
                        plVar15 = plVar15 + 3;
                        local_110 = local_110 + 1;
                      } while (plVar21 != plVar15);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + local_110 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x3b] = (long)plVar16;
  param_1[0x3c] = lVar22;
  param_1[0x3d] = lVar7;
  plVar16 = (long *)*param_2;
  plVar6 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x20,8);
  if (plVar6 == (long *)0x0) {
    plVar16 = (long *)0x0;
    lVar22 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar7 = 8;
    lVar22 = param_2[1];
    lVar10 = param_2[2];
    plVar6[2] = 0;
    *plVar6 = lVar22;
    plVar6[1] = lVar10;
    *(undefined4 *)(plVar6 + 3) = 0;
    lVar22 = 0x20;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x2a];
  param_1[0x2a] = (long)plVar6;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    plVar6 = (long *)param_1[0x2b];
    lVar10 = param_1[0x2c];
    lVar12 = param_1[0x2d];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,lVar12);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,lVar10,lVar12);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar19 = (long *)*plVar6;
        plVar21 = plVar6;
        if (plVar6[600] != 0) {
          plVar21 = plVar6 + plVar6[600] * 3;
        }
        if (plVar21 == plVar6) {
          uVar13 = 0;
          local_110 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6);
            plVar19 = (long *)*plVar6;
          }
          plVar15 = plVar6 + 3;
          if (plVar21 == plVar15) {
            uVar13 = 0;
            local_110 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar4 = (long *)*plVar15 != plVar19;
            if (bVar4) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar6,plVar6 + 3);
              plVar19 = (long *)plVar6[3];
            }
            uVar13 = (ulong)bVar4;
            plVar15 = plVar6 + 6;
            if (plVar21 == plVar15) {
              local_110 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 6);
                plVar19 = (long *)plVar6[6];
                uVar13 = 2;
              }
              plVar15 = plVar6 + 9;
              if (plVar21 == plVar15) {
                local_110 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 9);
                  plVar19 = (long *)plVar6[9];
                  uVar13 = 3;
                }
                plVar15 = plVar6 + 0xc;
                if (plVar21 == plVar15) {
                  local_110 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xc);
                    plVar19 = (long *)plVar6[0xc];
                    uVar13 = 4;
                  }
                  plVar15 = plVar6 + 0xf;
                  if (plVar21 == plVar15) {
                    local_110 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + 0xf);
                      plVar19 = (long *)plVar6[0xf];
                      uVar13 = 5;
                    }
                    plVar15 = plVar6 + 0x12;
                    local_110 = 6;
                    if (plVar21 != plVar15) {
                      local_110 = 6;
                      do {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar15);
                          plVar19 = (long *)*plVar15;
                          uVar13 = local_110;
                        }
                        plVar15 = plVar15 + 3;
                        local_110 = local_110 + 1;
                      } while (plVar21 != plVar15);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar6 + uVar13 * 3,plVar6 + local_110 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x2b] = (long)plVar16;
  param_1[0x2c] = lVar22;
  param_1[0x2d] = lVar7;
  plVar6 = (long *)*param_2;
  puVar18 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,4);
  if (puVar18 == (undefined8 *)0x0) {
    plVar6 = (long *)0x0;
    lVar22 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar6;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar7 = 4;
    puVar18[4] = 0;
    puVar18[5] = 0;
    lVar22 = 0x30;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x2e];
  param_1[0x2e] = (long)puVar18;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    plVar16 = (long *)param_1[0x2f];
    lVar10 = param_1[0x30];
    lVar12 = param_1[0x31];
    uVar13 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar8,lVar10,lVar12);
    }
    else {
      FUN_00c48fe8(plVar16,lVar8,lVar10,lVar12);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar16 = (long *)FUN_00c4e600();
      if (plVar16[600] != 0) {
        local_70[0] = plVar16 + plVar16[600] * 3;
        local_f0 = plVar16;
        FUN_00c4ea30(&local_f0,local_70);
        plVar19 = (long *)*plVar16;
        plVar21 = plVar16;
        if (plVar16[600] != 0) {
          plVar21 = plVar16 + plVar16[600] * 3;
        }
        if (plVar21 == plVar16) {
          uVar13 = 0;
          local_110 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar16 + 0xd0))();
          if ((long *)*plVar16 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar16,plVar16);
            plVar19 = (long *)*plVar16;
          }
          plVar15 = plVar16 + 3;
          if (plVar21 == plVar15) {
            uVar13 = 0;
            local_110 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar4 = (long *)*plVar15 != plVar19;
            if (bVar4) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar16,plVar16 + 3);
              plVar19 = (long *)plVar16[3];
            }
            uVar13 = (ulong)bVar4;
            plVar15 = plVar16 + 6;
            if (plVar21 == plVar15) {
              local_110 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar16 + uVar13 * 3,plVar16 + 6);
                plVar19 = (long *)plVar16[6];
                uVar13 = 2;
              }
              plVar15 = plVar16 + 9;
              if (plVar21 == plVar15) {
                local_110 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar16 + uVar13 * 3,plVar16 + 9);
                  plVar19 = (long *)plVar16[9];
                  uVar13 = 3;
                }
                plVar15 = plVar16 + 0xc;
                if (plVar21 == plVar15) {
                  local_110 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar16 + uVar13 * 3,plVar16 + 0xc);
                    plVar19 = (long *)plVar16[0xc];
                    uVar13 = 4;
                  }
                  plVar15 = plVar16 + 0xf;
                  if (plVar21 == plVar15) {
                    local_110 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar16 + uVar13 * 3,plVar16 + 0xf);
                      plVar19 = (long *)plVar16[0xf];
                      uVar13 = 5;
                    }
                    plVar15 = plVar16 + 0x12;
                    local_110 = 6;
                    if (plVar21 != plVar15) {
                      local_110 = 6;
                      do {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar16 + uVar13 * 3,plVar15);
                          plVar19 = (long *)*plVar15;
                          uVar13 = local_110;
                        }
                        plVar15 = plVar15 + 3;
                        local_110 = local_110 + 1;
                      } while (plVar21 != plVar15);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar16 + uVar13 * 3,plVar16 + local_110 * 3);
        plVar16[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x2f] = (long)plVar6;
  param_1[0x30] = lVar22;
  param_1[0x31] = lVar7;
  plVar6 = (long *)*param_2;
  puVar18 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x4e90,8);
  if (puVar18 == (undefined8 *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_e8 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar22 = *param_2;
    puVar18[3] = 0x3fffffffffffffff;
    puVar18[4] = 0;
    puVar18[8] = 0x3fffffffffffffff;
    puVar18[9] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined4 *)(puVar18 + 5) = 0;
    *(undefined4 *)(puVar18 + 10) = 0;
    puVar18[0xb] = 0;
    *(undefined4 *)(puVar18 + 0xc) = 0x3f800000;
    puVar18[2] = lVar22;
    puVar18[6] = 0;
    puVar18[7] = lVar22;
    memset(puVar18 + 0xd,0,0x4e28);
    lVar22 = 0;
    do {
      uVar3 = (&DAT_03d6abe6)[lVar22];
      puVar9 = (undefined1 *)FUN_010af09c(puVar18);
      lVar22 = lVar22 + 4;
      *puVar9 = uVar3;
    } while (lVar22 != 0x340);
    local_e0 = 0x4e90;
    local_d8 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_e8 = plVar6;
  }
  local_f0 = (long *)0x0;
  lVar7 = *plVar17;
  *plVar17 = (long)puVar18;
  if (lVar7 == 0) {
    param_1[4] = local_e0;
    param_1[5] = local_d8;
    param_1[3] = (long)local_e8;
    local_f0 = (long *)0x0;
  }
  else {
    FUN_015c1218(param_1 + 3);
    plVar17 = local_f0;
    param_1[3] = (long)local_e8;
    param_1[4] = local_e0;
    param_1[5] = local_d8;
    local_f0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      FUN_015c1218(&local_e8);
    }
  }
  plVar17 = (long *)*param_2;
  lVar7 = (**(code **)(*plVar17 + 0x10))(plVar17,0x2428,8);
  if (lVar7 == 0) {
    plVar17 = (long *)0x0;
    lVar22 = 0;
    lVar8 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar17;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_013708f4(lVar7);
    lVar8 = 8;
    lVar22 = 0x2428;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[0x1e];
  param_1[0x1e] = lVar7;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar2 = *(int *)(lVar7 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar5;
    if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
      *(int *)(lVar7 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar6 = (long *)param_1[0x1f];
    lVar7 = param_1[0x20];
    lVar10 = param_1[0x21];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar18,lVar7,lVar10);
    }
    else {
      FUN_00c48fe8(plVar6,puVar18,lVar7,lVar10);
    }
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar6;
        plVar16 = plVar6;
        if (plVar6[600] != 0) {
          plVar16 = plVar6 + plVar6[600] * 3;
        }
        if (plVar16 == plVar6) {
          local_f8 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar6,plVar6);
            plVar21 = (long *)*plVar6;
          }
          plVar19 = plVar6 + 3;
          if (plVar16 == plVar19) {
            local_f8 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar6,plVar6 + 3);
              plVar21 = (long *)plVar6[3];
            }
            local_f8 = (long *)(ulong)bVar4;
            plVar19 = plVar6 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 6);
                plVar21 = (long *)plVar6[6];
                local_f8 = (long *)0x2;
              }
              plVar19 = plVar6 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 9);
                  plVar21 = (long *)plVar6[9];
                  local_f8 = (long *)0x3;
                }
                plVar19 = plVar6 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 0xc);
                    plVar21 = (long *)plVar6[0xc];
                    local_f8 = (long *)0x4;
                  }
                  plVar19 = plVar6 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 0xf);
                      plVar21 = (long *)plVar6[0xf];
                      local_f8 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (local_108 = plVar6 + 0x12; plVar16 != local_108; local_108 = local_108 + 3)
                    {
                      (**(code **)(*(long *)*local_108 + 0xd0))();
                      if ((long *)*local_108 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar6 + (long)local_f8 * 3,local_108);
                        plVar21 = (long *)*local_108;
                        local_f8 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_f8 * 3,plVar6 + uVar13 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  param_1[0x1f] = (long)plVar17;
  param_1[0x20] = lVar22;
  param_1[0x21] = lVar8;
  plVar17 = (long *)*param_2;
  pvVar11 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,0x1fa0,8);
  if (pvVar11 == (void *)0x0) {
    plVar17 = (long *)0x0;
    lVar7 = 0;
    lVar22 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar17;
    lVar7 = 0x1fa0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    memset(pvVar11,0,0x1fa0);
    lVar22 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x26];
  param_1[0x26] = (long)pvVar11;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    FUN_01a0ff8c(lVar8);
    plVar6 = (long *)param_1[0x27];
    lVar10 = param_1[0x28];
    lVar12 = param_1[0x29];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,lVar12);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,lVar10,lVar12);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar6;
        plVar16 = plVar6;
        if (plVar6[600] != 0) {
          plVar16 = plVar6 + plVar6[600] * 3;
        }
        if (plVar16 == plVar6) {
          local_108 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar6,plVar6);
            plVar21 = (long *)*plVar6;
          }
          plVar19 = plVar6 + 3;
          if (plVar16 == plVar19) {
            local_108 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar6,plVar6 + 3);
              plVar21 = (long *)plVar6[3];
            }
            local_108 = (long *)(ulong)bVar4;
            plVar19 = plVar6 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_108 * 3,plVar6 + 6);
                plVar21 = (long *)plVar6[6];
                local_108 = (long *)0x2;
              }
              plVar19 = plVar6 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_108 * 3,plVar6 + 9);
                  plVar21 = (long *)plVar6[9];
                  local_108 = (long *)0x3;
                }
                plVar19 = plVar6 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar6 + (long)local_108 * 3,plVar6 + 0xc);
                    plVar21 = (long *)plVar6[0xc];
                    local_108 = (long *)0x4;
                  }
                  plVar19 = plVar6 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar6 + (long)local_108 * 3,plVar6 + 0xf);
                      plVar21 = (long *)plVar6[0xf];
                      local_108 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (plVar19 = plVar6 + 0x12; plVar16 != plVar19; plVar19 = plVar19 + 3) {
                      (**(code **)(*(long *)*plVar19 + 0xd0))();
                      if ((long *)*plVar19 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar6 + (long)local_108 * 3,plVar19);
                        plVar21 = (long *)*plVar19;
                        local_108 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_108 * 3,plVar6 + uVar13 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x27] = (long)plVar17;
  param_1[0x28] = lVar7;
  param_1[0x29] = lVar22;
  plVar17 = (long *)*param_2;
  local_78 = plVar17;
  lVar7 = (**(code **)(*plVar17 + 0x10))(plVar17,0x188,8);
  if (lVar7 == 0) {
    plVar17 = (long *)0x0;
    lVar22 = 0;
    lVar8 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar17;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_01372468(lVar7,&local_78);
    lVar8 = 8;
    lVar22 = 0x188;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[0x22];
  param_1[0x22] = lVar7;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar2 = *(int *)(lVar7 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar5;
    if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
      *(int *)(lVar7 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar6 = (long *)param_1[0x23];
    lVar7 = param_1[0x24];
    lVar10 = param_1[0x25];
    uVar13 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar18,lVar7,lVar10);
    }
    else {
      FUN_00c48fe8(plVar6,puVar18,lVar7,lVar10);
    }
    lVar7 = FUN_00c4e600();
    iVar5 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar6 = (long *)FUN_00c4e600();
      if (plVar6[600] != 0) {
        local_70[0] = plVar6 + plVar6[600] * 3;
        local_f0 = plVar6;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar6;
        plVar16 = plVar6;
        if (plVar6[600] != 0) {
          plVar16 = plVar6 + plVar6[600] * 3;
        }
        if (plVar16 == plVar6) {
          local_f8 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar6 + 0xd0))();
          if ((long *)*plVar6 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar6,plVar6);
            plVar21 = (long *)*plVar6;
          }
          plVar19 = plVar6 + 3;
          if (plVar16 == plVar19) {
            local_f8 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar6,plVar6 + 3);
              plVar21 = (long *)plVar6[3];
            }
            local_f8 = (long *)(ulong)bVar4;
            plVar19 = plVar6 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 6);
                plVar21 = (long *)plVar6[6];
                local_f8 = (long *)0x2;
              }
              plVar19 = plVar6 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 9);
                  plVar21 = (long *)plVar6[9];
                  local_f8 = (long *)0x3;
                }
                plVar19 = plVar6 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 0xc);
                    plVar21 = (long *)plVar6[0xc];
                    local_f8 = (long *)0x4;
                  }
                  plVar19 = plVar6 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar6 + (long)local_f8 * 3,plVar6 + 0xf);
                      plVar21 = (long *)plVar6[0xf];
                      local_f8 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (local_108 = plVar6 + 0x12; plVar16 != local_108; local_108 = local_108 + 3)
                    {
                      (**(code **)(*(long *)*local_108 + 0xd0))();
                      if ((long *)*local_108 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar6 + (long)local_f8 * 3,local_108);
                        plVar21 = (long *)*local_108;
                        local_f8 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar6 + (long)local_f8 * 3,plVar6 + uVar13 * 3);
        plVar6[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  param_1[0x23] = (long)plVar17;
  param_1[0x24] = lVar22;
  local_e8 = (long *)*param_1;
  param_1[0x25] = lVar8;
  plVar17 = (long *)*param_2;
  local_e0 = param_1[1];
  local_d8 = param_1[0x1e];
  local_d0 = param_1[0x2a];
  lStack_c8 = param_1[0x2e];
  local_c0 = param_1[0x26];
  lStack_b8 = param_1[0x22];
  local_f0 = plVar17;
  lVar7 = (**(code **)(*plVar17 + 0x10))(plVar17,0x88,8);
  if (lVar7 == 0) {
    plVar17 = (long *)0x0;
    lVar8 = 0;
    lVar22 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar17;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    FUN_0137102c(lVar7,&local_f0);
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    lVar22 = 8;
    lVar8 = 0x88;
  }
  lVar10 = param_1[0x16];
  param_1[0x16] = lVar7;
  if (lVar10 != 0) {
    FUN_01525f6c(param_1 + 0x17);
    lVar7 = param_1[0x16];
  }
  param_1[0x17] = (long)plVar17;
  param_1[0x18] = lVar8;
  lVar8 = *param_1;
  lVar10 = param_1[1];
  param_1[0x19] = lVar22;
  plVar6 = (long *)*param_2;
  plVar17 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,8);
  if (plVar17 == (long *)0x0) {
    plVar6 = (long *)0x0;
    lVar7 = 0;
    lVar22 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar6;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    puVar1 = PTR_DAT_047e25e0;
    plVar17[2] = lVar7;
    plVar17[3] = lVar10;
    *plVar17 = (long)(puVar1 + 0x10);
    plVar17[1] = lVar8;
    lVar22 = 8;
    lVar7 = 0x20;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[0x1a];
  param_1[0x1a] = (long)plVar17;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar17 = (long *)param_1[0x1b];
    lVar8 = param_1[0x1c];
    lVar10 = param_1[0x1d];
    uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar18,lVar8,lVar10);
    }
    else {
      FUN_00c48fe8(plVar17,puVar18,lVar8,lVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar17 = (long *)FUN_00c4e600();
      if (plVar17[600] != 0) {
        local_70[0] = plVar17 + plVar17[600] * 3;
        local_f0 = plVar17;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar17;
        plVar16 = plVar17;
        if (plVar17[600] != 0) {
          plVar16 = plVar17 + plVar17[600] * 3;
        }
        if (plVar16 == plVar17) {
          local_f8 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar17 + 0xd0))();
          if ((long *)*plVar17 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17);
            plVar21 = (long *)*plVar17;
          }
          plVar19 = plVar17 + 3;
          if (plVar16 == plVar19) {
            local_f8 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17 + 3);
              plVar21 = (long *)plVar17[3];
            }
            local_f8 = (long *)(ulong)bVar4;
            plVar19 = plVar17 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 6);
                plVar21 = (long *)plVar17[6];
                local_f8 = (long *)0x2;
              }
              plVar19 = plVar17 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 9);
                  plVar21 = (long *)plVar17[9];
                  local_f8 = (long *)0x3;
                }
                plVar19 = plVar17 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xc);
                    plVar21 = (long *)plVar17[0xc];
                    local_f8 = (long *)0x4;
                  }
                  plVar19 = plVar17 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xf);
                      plVar21 = (long *)plVar17[0xf];
                      local_f8 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (local_108 = plVar17 + 0x12; plVar16 != local_108; local_108 = local_108 + 3
                        ) {
                      (**(code **)(*(long *)*local_108 + 0xd0))();
                      if ((long *)*local_108 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar17 + (long)local_f8 * 3,local_108);
                        plVar21 = (long *)*local_108;
                        local_f8 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + uVar13 * 3);
        plVar17[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x1b] = (long)plVar6;
  param_1[0x1c] = lVar7;
  lVar10 = param_1[0x16];
  lVar7 = *param_1;
  lVar8 = param_1[1];
  param_1[0x1d] = lVar22;
  plVar6 = (long *)*param_2;
  lVar22 = param_1[0x32];
  plVar17 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x28,8);
  if (plVar17 == (long *)0x0) {
    plVar6 = (long *)0x0;
    lVar7 = 0;
    lVar22 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar6;
    puVar1 = PTR_DAT_047e25e8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar17[4] = lVar22;
    plVar17[2] = lVar8;
    plVar17[3] = lVar10;
    lVar22 = 8;
    *plVar17 = (long)(puVar1 + 0x10);
    plVar17[1] = lVar7;
    lVar7 = 0x28;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[0x12];
  param_1[0x12] = (long)plVar17;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar17 = (long *)param_1[0x13];
    lVar8 = param_1[0x14];
    lVar10 = param_1[0x15];
    uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar18,lVar8,lVar10);
    }
    else {
      FUN_00c48fe8(plVar17,puVar18,lVar8,lVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar17 = (long *)FUN_00c4e600();
      if (plVar17[600] != 0) {
        local_70[0] = plVar17 + plVar17[600] * 3;
        local_f0 = plVar17;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar17;
        plVar16 = plVar17;
        if (plVar17[600] != 0) {
          plVar16 = plVar17 + plVar17[600] * 3;
        }
        if (plVar16 == plVar17) {
          local_f8 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar17 + 0xd0))();
          if ((long *)*plVar17 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17);
            plVar21 = (long *)*plVar17;
          }
          plVar19 = plVar17 + 3;
          if (plVar16 == plVar19) {
            local_f8 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17 + 3);
              plVar21 = (long *)plVar17[3];
            }
            local_f8 = (long *)(ulong)bVar4;
            plVar19 = plVar17 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 6);
                plVar21 = (long *)plVar17[6];
                local_f8 = (long *)0x2;
              }
              plVar19 = plVar17 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 9);
                  plVar21 = (long *)plVar17[9];
                  local_f8 = (long *)0x3;
                }
                plVar19 = plVar17 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xc);
                    plVar21 = (long *)plVar17[0xc];
                    local_f8 = (long *)0x4;
                  }
                  plVar19 = plVar17 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xf);
                      plVar21 = (long *)plVar17[0xf];
                      local_f8 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (local_108 = plVar17 + 0x12; plVar16 != local_108; local_108 = local_108 + 3
                        ) {
                      (**(code **)(*(long *)*local_108 + 0xd0))();
                      if ((long *)*local_108 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar17 + (long)local_f8 * 3,local_108);
                        plVar21 = (long *)*local_108;
                        local_f8 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + uVar13 * 3);
        plVar17[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0x13] = (long)plVar6;
  param_1[0x14] = lVar7;
  lVar8 = *param_1;
  lVar10 = param_1[0x12];
  param_1[0x15] = lVar22;
  plVar6 = (long *)*param_2;
  lVar7 = param_1[1];
  lVar22 = param_1[2];
  plVar17 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x28,8);
  if (plVar17 == (long *)0x0) {
    plVar6 = (long *)0x0;
    lVar7 = 0;
    lVar22 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar6;
    puVar1 = PTR_DAT_047e25f0;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar17[4] = lVar10;
    plVar17[2] = lVar7;
    plVar17[3] = lVar22;
    lVar22 = 8;
    *plVar17 = (long)(puVar1 + 0x10);
    plVar17[1] = lVar8;
    lVar7 = 0x28;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[10];
  param_1[10] = (long)plVar17;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar17 = (long *)param_1[0xb];
    lVar8 = param_1[0xc];
    lVar10 = param_1[0xd];
    uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar18,lVar8,lVar10);
    }
    else {
      FUN_00c48fe8(plVar17,puVar18,lVar8,lVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar17 = (long *)FUN_00c4e600();
      if (plVar17[600] != 0) {
        local_70[0] = plVar17 + plVar17[600] * 3;
        local_f0 = plVar17;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar17;
        plVar16 = plVar17;
        if (plVar17[600] != 0) {
          plVar16 = plVar17 + plVar17[600] * 3;
        }
        if (plVar16 == plVar17) {
          local_f8 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar17 + 0xd0))();
          if ((long *)*plVar17 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17);
            plVar21 = (long *)*plVar17;
          }
          plVar19 = plVar17 + 3;
          if (plVar16 == plVar19) {
            local_f8 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17 + 3);
              plVar21 = (long *)plVar17[3];
            }
            local_f8 = (long *)(ulong)bVar4;
            plVar19 = plVar17 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 6);
                plVar21 = (long *)plVar17[6];
                local_f8 = (long *)0x2;
              }
              plVar19 = plVar17 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 9);
                  plVar21 = (long *)plVar17[9];
                  local_f8 = (long *)0x3;
                }
                plVar19 = plVar17 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xc);
                    plVar21 = (long *)plVar17[0xc];
                    local_f8 = (long *)0x4;
                  }
                  plVar19 = plVar17 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xf);
                      plVar21 = (long *)plVar17[0xf];
                      local_f8 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (local_108 = plVar17 + 0x12; plVar16 != local_108; local_108 = local_108 + 3
                        ) {
                      (**(code **)(*(long *)*local_108 + 0xd0))();
                      if ((long *)*local_108 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar17 + (long)local_f8 * 3,local_108);
                        plVar21 = (long *)*local_108;
                        local_f8 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + uVar13 * 3);
        plVar17[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[0xb] = (long)plVar6;
  param_1[0xc] = lVar7;
  lVar7 = param_1[2];
  lVar8 = param_1[10];
  param_1[0xd] = lVar22;
  plVar6 = (long *)*param_2;
  plVar17 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
  if (plVar17 == (long *)0x0) {
    plVar6 = (long *)0x0;
    lVar7 = 0;
    lVar22 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0136f344;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar6;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar1 = PTR_DAT_047e25f8;
    plVar17[2] = lVar8;
    *plVar17 = (long)(puVar1 + 0x10);
    plVar17[1] = lVar7;
    lVar22 = 8;
    lVar7 = 0x18;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[0xe];
  param_1[0xe] = (long)plVar17;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar18)(puVar18);
    plVar17 = (long *)param_1[0xf];
    lVar8 = param_1[0x10];
    lVar10 = param_1[0x11];
    uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar18,lVar8,lVar10);
    }
    else {
      FUN_00c48fe8(plVar17,puVar18,lVar8,lVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar17 = (long *)FUN_00c4e600();
      if (plVar17[600] != 0) {
        local_70[0] = plVar17 + plVar17[600] * 3;
        local_f0 = plVar17;
        FUN_00c4ea30(&local_f0,local_70);
        plVar21 = (long *)*plVar17;
        plVar16 = plVar17;
        if (plVar17[600] != 0) {
          plVar16 = plVar17 + plVar17[600] * 3;
        }
        if (plVar16 == plVar17) {
          local_f8 = (long *)0x0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar17 + 0xd0))();
          if ((long *)*plVar17 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17);
            plVar21 = (long *)*plVar17;
          }
          plVar19 = plVar17 + 3;
          if (plVar16 == plVar19) {
            local_f8 = (long *)0x0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            bVar4 = (long *)*plVar19 != plVar21;
            if (bVar4) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar17,plVar17 + 3);
              plVar21 = (long *)plVar17[3];
            }
            local_f8 = (long *)(ulong)bVar4;
            plVar19 = plVar17 + 6;
            if (plVar16 == plVar19) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 6);
                plVar21 = (long *)plVar17[6];
                local_f8 = (long *)0x2;
              }
              plVar19 = plVar17 + 9;
              if (plVar16 == plVar19) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 9);
                  plVar21 = (long *)plVar17[9];
                  local_f8 = (long *)0x3;
                }
                plVar19 = plVar17 + 0xc;
                if (plVar16 == plVar19) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xc);
                    plVar21 = (long *)plVar17[0xc];
                    local_f8 = (long *)0x4;
                  }
                  plVar19 = plVar17 + 0xf;
                  if (plVar16 == plVar19) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar17 + (long)local_f8 * 3,plVar17 + 0xf);
                      plVar21 = (long *)plVar17[0xf];
                      local_f8 = (long *)0x5;
                    }
                    uVar13 = 6;
                    for (local_108 = plVar17 + 0x12; plVar16 != local_108; local_108 = local_108 + 3
                        ) {
                      (**(code **)(*(long *)*local_108 + 0xd0))();
                      if ((long *)*local_108 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar17 + (long)local_f8 * 3,local_108);
                        plVar21 = (long *)*local_108;
                        local_f8 = (long *)uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar17 + (long)local_f8 * 3,plVar17 + uVar13 * 3);
        plVar17[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  local_f0 = (long *)*param_1;
  param_1[0xf] = (long)plVar6;
  param_1[0x10] = lVar7;
  local_e8 = (long *)param_1[1];
  param_1[0x11] = lVar22;
  local_e0 = param_1[2];
  local_d8 = param_1[10];
  local_d0 = param_1[0xe];
  lStack_c8 = param_1[0x16];
  local_c0 = param_1[0x1a];
  lStack_b8 = param_1[0x22];
  local_b0 = param_1[0x1e];
  lStack_a8 = param_1[0x2a];
  local_a0 = param_1[0x2e];
  lStack_98 = param_1[0x32];
  local_90 = param_1[0x36];
  lStack_88 = param_1[0x3a];
  local_80 = param_1[0x26];
  FUN_0137f998(local_80,*param_2,&local_f0);
  param_2 = (long *)*param_2;
  lVar7 = *param_1;
  lVar22 = param_1[1];
  lVar8 = param_1[2];
  lVar10 = param_1[0x26];
  plVar17 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  if (plVar17 == (long *)0x0) {
    param_2 = (long *)0x0;
    lVar22 = 0;
    lVar7 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_0136f344:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *plVar17 = lVar7;
    plVar17[1] = lVar22;
    plVar17[2] = lVar8;
    plVar17[3] = lVar10;
    lVar7 = 8;
    lVar22 = 0x20;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  lVar8 = param_1[6];
  param_1[6] = (long)plVar17;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    plVar17 = (long *)param_1[7];
    lVar10 = param_1[8];
    lVar12 = param_1[9];
    uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,lVar10,lVar12);
    }
    else {
      FUN_00c48fe8(plVar17,lVar8,lVar10,lVar12);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar17 = (long *)FUN_00c4e600();
      if (plVar17[600] != 0) {
        local_70[0] = plVar17 + plVar17[600] * 3;
        local_f0 = plVar17;
        FUN_00c4ea30(&local_f0,local_70);
        plVar16 = (long *)*plVar17;
        plVar6 = plVar17;
        if (plVar17[600] != 0) {
          plVar6 = plVar17 + plVar17[600] * 3;
        }
        if (plVar6 == plVar17) {
          uVar20 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar17 + 0xd0))();
          if ((long *)*plVar17 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar17,plVar17);
            plVar16 = (long *)*plVar17;
          }
          plVar21 = plVar17 + 3;
          if (plVar6 == plVar21) {
            uVar20 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar21 + 0xd0))();
            bVar4 = (long *)*plVar21 != plVar16;
            if (bVar4) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar17,plVar17 + 3);
              plVar16 = (long *)plVar17[3];
            }
            uVar20 = (ulong)bVar4;
            plVar21 = plVar17 + 6;
            if (plVar6 == plVar21) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar21 + 0xd0))();
              if ((long *)*plVar21 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar20 * 3,plVar17 + 6);
                plVar16 = (long *)plVar17[6];
                uVar20 = 2;
              }
              plVar21 = plVar17 + 9;
              if (plVar6 == plVar21) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar21 + 0xd0))();
                if ((long *)*plVar21 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar20 * 3,plVar17 + 9);
                  plVar16 = (long *)plVar17[9];
                  uVar20 = 3;
                }
                plVar21 = plVar17 + 0xc;
                if (plVar6 == plVar21) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar21 + 0xd0))();
                  if ((long *)*plVar21 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar20 * 3,plVar17 + 0xc);
                    plVar16 = (long *)plVar17[0xc];
                    uVar20 = 4;
                  }
                  plVar21 = plVar17 + 0xf;
                  if (plVar6 == plVar21) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar21 + 0xd0))();
                    if ((long *)*plVar21 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar20 * 3,plVar17 + 0xf);
                      plVar16 = (long *)plVar17[0xf];
                      uVar20 = 5;
                    }
                    uVar13 = 6;
                    for (local_f8 = plVar17 + 0x12; plVar6 != local_f8; local_f8 = local_f8 + 3) {
                      (**(code **)(*(long *)*local_f8 + 0xd0))();
                      if ((long *)*local_f8 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar20 * 3,local_f8);
                        plVar16 = (long *)*local_f8;
                        uVar20 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar20 * 3,plVar17 + uVar13 * 3);
        plVar17[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  param_1[7] = (long)param_2;
  param_1[8] = lVar22;
  param_1[9] = lVar7;
  return;
}


