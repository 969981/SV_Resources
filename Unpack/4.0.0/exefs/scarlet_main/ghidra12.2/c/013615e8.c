/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013615e8; name: FUN_013615e8
 */


void FUN_013615e8(long *param_1,undefined2 param_2,undefined2 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_74;
  undefined8 local_72;
  long *local_68;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045a9218;
  param_1[1] = lVar6;
  param_1[4] = (long)&PTR_LAB_045a9258;
  memset(param_1 + 6,0,0x60);
  local_9e = 0;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0x3ffffffff;
  local_72 = 0x10001000100;
  local_98 = 0x1ffffffffff00ff;
  uStack_90 = 0xffffffffffffffff;
  local_88 = 0xffffffff;
  local_7c = 0xffff00000000;
  local_c8 = (long *)0x0;
  local_c0 = 0;
  local_74 = 0;
  local_84 = 0;
  local_a8 = param_4;
  local_a0 = param_2;
  local_9a = param_3;
  FUN_00eef2b8(&local_e8,lVar6,&local_c8);
  plVar7 = local_e8;
  local_e8 = (long *)0x0;
  lVar6 = param_1[6];
  param_1[6] = (long)plVar7;
  if (lVar6 == 0) {
    param_1[8] = local_d8;
    param_1[9] = local_d0;
    param_1[7] = (long)local_e0;
    local_e8 = (long *)0x0;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar2 = *(int *)(lVar16 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar5;
    if (*(int *)(lVar16 + 0x12cc) <= iVar2) {
      *(int *)(lVar16 + 0x12cc) = iVar5;
    }
    plVar7 = (long *)param_1[7];
    lVar16 = param_1[8];
    lVar8 = param_1[9];
    uVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar9 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar16,lVar8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar6,lVar16,lVar8);
    }
    lVar6 = FUN_00c4e600();
    iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_c8 = plVar7;
        FUN_00c4ea30(&local_c8,&local_68);
        plVar13 = (long *)*plVar7;
        plVar11 = plVar7;
        if (plVar7[600] != 0) {
          plVar11 = plVar7 + plVar7[600] * 3;
        }
        if (plVar11 == plVar7) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar7 + 0xd0))();
          if ((long *)*plVar7 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar7,plVar7);
            plVar13 = (long *)*plVar7;
          }
          plVar15 = plVar7 + 3;
          if (plVar11 == plVar15) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar4 = (long *)*plVar15 != plVar13;
            if (bVar4) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar7,plVar7 + 3);
              plVar13 = (long *)plVar7[3];
            }
            uVar17 = (ulong)bVar4;
            plVar15 = plVar7 + 6;
            if (plVar11 == plVar15) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 6);
                plVar13 = (long *)plVar7[6];
                uVar17 = 2;
              }
              plVar15 = plVar7 + 9;
              if (plVar11 == plVar15) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 9);
                  plVar13 = (long *)plVar7[9];
                  uVar17 = 3;
                }
                plVar15 = plVar7 + 0xc;
                if (plVar11 == plVar15) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 0xc);
                    plVar13 = (long *)plVar7[0xc];
                    uVar17 = 4;
                  }
                  plVar15 = plVar7 + 0xf;
                  if (plVar11 == plVar15) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 0xf);
                      plVar13 = (long *)plVar7[0xf];
                      uVar17 = 5;
                    }
                    uVar9 = 6;
                    for (plVar15 = plVar7 + 0x12; plVar11 != plVar15; plVar15 = plVar15 + 3) {
                      (**(code **)(*(long *)*plVar15 + 0xd0))();
                      if ((long *)*plVar15 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar15);
                        plVar13 = (long *)*plVar15;
                        uVar17 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + uVar9 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
    plVar7 = local_e8;
    param_1[7] = (long)local_e0;
    param_1[8] = local_d8;
    param_1[9] = local_d0;
    local_e8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar2 = *(int *)(lVar6 + 0x12c8);
      iVar5 = iVar2 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar5;
      if (*(int *)(lVar6 + 0x12cc) <= iVar2) {
        *(int *)(lVar6 + 0x12cc) = iVar5;
      }
      uVar9 = (**(code **)(*local_e0 + 0xf8))(local_e0);
      if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*local_e0 + 0x18))(local_e0,plVar7,local_d8,local_d0);
      }
      else {
        FUN_00c48fe8(local_e0,plVar7,local_d8,local_d0);
      }
      lVar6 = FUN_00c4e600();
      iVar5 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar7 = (long *)FUN_00c4e600();
        if (plVar7[600] != 0) {
          local_68 = plVar7 + plVar7[600] * 3;
          local_c8 = plVar7;
          FUN_00c4ea30(&local_c8,&local_68);
          plVar13 = (long *)*plVar7;
          plVar11 = plVar7;
          if (plVar7[600] != 0) {
            plVar11 = plVar7 + plVar7[600] * 3;
          }
          if (plVar11 == plVar7) {
            uVar17 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar7 + 0xd0))();
            if ((long *)*plVar7 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar7,plVar7);
              plVar13 = (long *)*plVar7;
            }
            plVar15 = plVar7 + 3;
            if (plVar11 == plVar15) {
              uVar17 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              bVar4 = (long *)*plVar15 != plVar13;
              if (bVar4) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar7,plVar7 + 3);
                plVar13 = (long *)plVar7[3];
              }
              uVar17 = (ulong)bVar4;
              plVar15 = plVar7 + 6;
              if (plVar11 == plVar15) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 6);
                  plVar13 = (long *)plVar7[6];
                  uVar17 = 2;
                }
                plVar15 = plVar7 + 9;
                if (plVar11 == plVar15) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 9);
                    plVar13 = (long *)plVar7[9];
                    uVar17 = 3;
                  }
                  plVar15 = plVar7 + 0xc;
                  if (plVar11 == plVar15) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 0xc);
                      plVar13 = (long *)plVar7[0xc];
                      uVar17 = 4;
                    }
                    plVar15 = plVar7 + 0xf;
                    if (plVar11 == plVar15) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar15 + 0xd0))();
                      if ((long *)*plVar15 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + 0xf);
                        plVar13 = (long *)plVar7[0xf];
                        uVar17 = 5;
                      }
                      uVar9 = 6;
                      for (plVar15 = plVar7 + 0x12; plVar11 != plVar15; plVar15 = plVar15 + 3) {
                        (**(code **)(*(long *)*plVar15 + 0xd0))();
                        if ((long *)*plVar15 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar15);
                          plVar13 = (long *)*plVar15;
                          uVar17 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar7 + uVar17 * 3,plVar7 + uVar9 * 3);
          plVar7[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
    }
  }
  plVar11 = (long *)param_1[1];
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
  if (plVar7 == (long *)0x0) {
    plVar11 = (long *)0x0;
    lVar16 = 0;
    lVar6 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar3 = PTR_DAT_047dda98;
    plVar7[4] = 0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *plVar7 = (long)(puVar3 + 0x10);
    plVar7[1] = 0;
    *(undefined4 *)((long)plVar7 + 0x34) = 1;
    nn::os::InitializeLightEvent(plVar7 + 5,0,1);
    *(undefined2 *)(plVar7 + 3) = 0;
    lVar6 = 8;
    lVar16 = 0x38;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  puVar12 = (undefined8 *)param_1[0xe];
  param_1[0xe] = (long)plVar7;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar2 = *(int *)(lVar8 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (*(int *)(lVar8 + 0x12cc) <= iVar2) {
      *(int *)(lVar8 + 0x12cc) = iVar5;
    }
    (**(code **)*puVar12)(puVar12);
    plVar7 = (long *)param_1[0xf];
    lVar8 = param_1[0x10];
    lVar14 = param_1[0x11];
    uVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar12,lVar8,lVar14);
    }
    else {
      FUN_00c48fe8(plVar7,puVar12,lVar8,lVar14);
    }
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_e8 = plVar7 + plVar7[600] * 3;
        local_c8 = plVar7;
        FUN_00c4ea30(&local_c8,&local_e8);
        plVar15 = (long *)*plVar7;
        plVar13 = plVar7;
        if (plVar7[600] != 0) {
          plVar13 = plVar7 + plVar7[600] * 3;
        }
        if (plVar13 == plVar7) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar7 + 0xd0))();
          if ((long *)*plVar7 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar7,plVar7);
            plVar15 = (long *)*plVar7;
          }
          plVar1 = plVar7 + 3;
          if (plVar13 == plVar1) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar4 = (long *)*plVar1 != plVar15;
            if (bVar4) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar7,plVar7 + 3);
              plVar15 = (long *)plVar7[3];
            }
            uVar17 = (ulong)bVar4;
            plVar1 = plVar7 + 6;
            if (plVar13 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar7 + uVar17 * 3,plVar7 + 6);
                plVar15 = (long *)plVar7[6];
                uVar17 = 2;
              }
              plVar1 = plVar7 + 9;
              if (plVar13 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar7 + uVar17 * 3,plVar7 + 9);
                  plVar15 = (long *)plVar7[9];
                  uVar17 = 3;
                }
                plVar1 = plVar7 + 0xc;
                if (plVar13 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar7 + uVar17 * 3,plVar7 + 0xc);
                    plVar15 = (long *)plVar7[0xc];
                    uVar17 = 4;
                  }
                  plVar1 = plVar7 + 0xf;
                  if (plVar13 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar7 + uVar17 * 3,plVar7 + 0xf);
                      plVar15 = (long *)plVar7[0xf];
                      uVar17 = 5;
                    }
                    uVar9 = 6;
                    for (local_f0 = plVar7 + 0x12; plVar13 != local_f0; local_f0 = local_f0 + 3) {
                      (**(code **)(*(long *)*local_f0 + 0xd0))();
                      if ((long *)*local_f0 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar7 + uVar17 * 3,local_f0);
                        plVar15 = (long *)*local_f0;
                        uVar17 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar7 + uVar17 * 3,plVar7 + uVar9 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
    plVar7 = (long *)param_1[0xe];
  }
  lVar8 = param_1[6];
  param_1[0xf] = (long)plVar11;
  param_1[0x10] = lVar16;
  param_1[0x11] = lVar6;
  plVar7[1] = 0;
  plVar7[2] = lVar8;
  *(undefined2 *)(plVar7 + 3) = 1;
  FUN_00eed650(param_1);
  FUN_00eed3ac(param_1);
  return;
}


