/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01372468; name: FUN_01372468
 */


void FUN_01372468(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *local_88;
  ulong local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  plVar12 = param_1 + 1;
  *param_1 = &PTR_FUN_045fccf0;
  param_1[0x12] = 0;
  memset(plVar12,0,0x81);
  plVar11 = (long *)*param_2;
  lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x940,8);
  if (lVar7 == 0) {
    plVar11 = (long *)0x0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_013733ec;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_013739f4(lVar7);
    uVar19 = 8;
    uVar18 = 0x940;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  puVar15 = (undefined8 *)*plVar12;
  *plVar12 = lVar7;
  if (puVar15 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar3 = *(int *)(lVar7 + 0x12c8);
    iVar6 = iVar3 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
      *(int *)(lVar7 + 0x12cc) = iVar6;
    }
    (**(code **)*puVar15)(puVar15);
    plVar12 = (long *)param_1[2];
    uVar16 = param_1[3];
    uVar13 = param_1[4];
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar15,uVar16,uVar13);
    }
    else {
      FUN_00c48fe8(plVar12,puVar15,uVar16,uVar13);
    }
    lVar7 = FUN_00c4e600();
    iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        plStack_68 = plVar12;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar12;
        plVar2 = plVar12;
        if (plVar12[600] != 0) {
          plVar2 = plVar12 + plVar12[600] * 3;
        }
        if (plVar2 == plVar12) {
          local_80 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar1 = plVar12 + 3;
          if (plVar2 == plVar1) {
            local_80 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar14;
            if (bVar5) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            local_80 = (ulong)bVar5;
            plVar1 = plVar12 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                local_80 = 2;
              }
              plVar1 = plVar12 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  local_80 = 3;
                }
                plVar1 = plVar12 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    local_80 = 4;
                  }
                  plVar1 = plVar12 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      local_80 = 5;
                    }
                    local_88 = plVar12 + 0x12;
                    uVar10 = 6;
                    if (plVar2 != local_88) {
                      do {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,local_88);
                          plVar14 = (long *)*local_88;
                          local_80 = uVar10;
                        }
                        local_88 = local_88 + 3;
                        uVar10 = uVar10 + 1;
                      } while (plVar2 != local_88);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  param_1[2] = plVar11;
  param_1[3] = uVar18;
  param_1[4] = uVar19;
  plVar12 = (long *)*param_2;
  puVar9 = (undefined1 *)(**(code **)(*plVar12 + 0x10))(plVar12,1,1);
  if (puVar9 == (undefined1 *)0x0) {
    plVar12 = (long *)0x0;
    uVar18 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_013733ec;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar9 = 0;
    uVar18 = 1;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar7 = param_1[5];
  param_1[5] = puVar9;
  if (lVar7 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar3 = *(int *)(lVar8 + 0x12c8);
    iVar6 = iVar3 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar6;
    if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
      *(int *)(lVar8 + 0x12cc) = iVar6;
    }
    plVar11 = (long *)param_1[6];
    uVar19 = param_1[7];
    uVar16 = param_1[8];
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,uVar19,uVar16);
    }
    else {
      FUN_00c48fe8(plVar11,lVar7,uVar19,uVar16);
    }
    lVar7 = FUN_00c4e600();
    iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_70 = plVar11 + plVar11[600] * 3;
        plStack_68 = plVar11;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          local_80 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
            plVar14 = (long *)*plVar11;
          }
          plVar1 = plVar11 + 3;
          if (plVar2 == plVar1) {
            local_80 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar14;
            if (bVar5) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
              plVar14 = (long *)plVar11[3];
            }
            local_80 = (ulong)bVar5;
            plVar1 = plVar11 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + local_80 * 3,plVar11 + 6);
                plVar14 = (long *)plVar11[6];
                local_80 = 2;
              }
              plVar1 = plVar11 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + local_80 * 3,plVar11 + 9);
                  plVar14 = (long *)plVar11[9];
                  local_80 = 3;
                }
                plVar1 = plVar11 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + local_80 * 3,plVar11 + 0xc);
                    plVar14 = (long *)plVar11[0xc];
                    local_80 = 4;
                  }
                  plVar1 = plVar11 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + local_80 * 3,plVar11 + 0xf);
                      plVar14 = (long *)plVar11[0xf];
                      local_80 = 5;
                    }
                    local_88 = plVar11 + 0x12;
                    uVar10 = 6;
                    if (plVar2 != local_88) {
                      do {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + local_80 * 3,local_88);
                          plVar14 = (long *)*local_88;
                          local_80 = uVar10;
                        }
                        local_88 = local_88 + 3;
                        uVar10 = uVar10 + 1;
                      } while (plVar2 != local_88);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + local_80 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  param_1[6] = plVar12;
  param_1[7] = uVar18;
  param_1[8] = uVar18;
  plVar11 = (long *)*param_2;
  plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
  if (plVar12 == (long *)0x0) {
    plVar11 = (long *)0x0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_013733ec;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar12 = (long)(PTR_DAT_047e2f20 + 0x10);
    *(undefined4 *)(plVar12 + 1) = 0x5050505;
    *(undefined1 *)((long)plVar12 + 0xc) = 5;
    uVar19 = 8;
    uVar18 = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  puVar15 = (undefined8 *)param_1[9];
  param_1[9] = plVar12;
  if (puVar15 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar3 = *(int *)(lVar7 + 0x12c8);
    iVar6 = iVar3 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
      *(int *)(lVar7 + 0x12cc) = iVar6;
    }
    (**(code **)*puVar15)(puVar15);
    plVar12 = (long *)param_1[10];
    uVar16 = param_1[0xb];
    uVar13 = param_1[0xc];
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar15,uVar16,uVar13);
    }
    else {
      FUN_00c48fe8(plVar12,puVar15,uVar16,uVar13);
    }
    lVar7 = FUN_00c4e600();
    iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        plStack_68 = plVar12;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar12;
        plVar2 = plVar12;
        if (plVar12[600] != 0) {
          plVar2 = plVar12 + plVar12[600] * 3;
        }
        if (plVar2 == plVar12) {
          local_80 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar1 = plVar12 + 3;
          if (plVar2 == plVar1) {
            local_80 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar14;
            if (bVar5) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            local_80 = (ulong)bVar5;
            plVar1 = plVar12 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                local_80 = 2;
              }
              plVar1 = plVar12 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  local_80 = 3;
                }
                plVar1 = plVar12 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    local_80 = 4;
                  }
                  plVar1 = plVar12 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      local_80 = 5;
                    }
                    local_88 = plVar12 + 0x12;
                    uVar10 = 6;
                    if (plVar2 != local_88) {
                      do {
                        (**(code **)(*(long *)*local_88 + 0xd0))();
                        if ((long *)*local_88 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,local_88);
                          plVar14 = (long *)*local_88;
                          local_80 = uVar10;
                        }
                        local_88 = local_88 + 3;
                        uVar10 = uVar10 + 1;
                      } while (plVar2 != local_88);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + local_80 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  param_1[10] = plVar11;
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar19;
  plVar11 = (long *)*param_2;
  plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,8);
  if (plVar12 == (long *)0x0) {
    plVar11 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_013733ec:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar4 = PTR_DAT_047e2f28;
    plVar12[2] = 0;
    plVar12[3] = 0;
    *(undefined8 *)((long)plVar12 + 0x1e) = 0;
    *(undefined4 *)(plVar12 + 5) = 0;
    *plVar12 = (long)(puVar4 + 0x10);
    plVar12[1] = 0;
    uVar18 = 8;
    uVar19 = 0x30;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  puVar15 = (undefined8 *)param_1[0xd];
  param_1[0xd] = plVar12;
  if (puVar15 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar7 = FUN_00c4e600();
    iVar3 = *(int *)(lVar7 + 0x12c8);
    iVar6 = iVar3 + 1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (*(int *)(lVar7 + 0x12cc) <= iVar3) {
      *(int *)(lVar7 + 0x12cc) = iVar6;
    }
    (**(code **)*puVar15)(puVar15);
    plVar12 = (long *)param_1[0xe];
    uVar16 = param_1[0xf];
    uVar13 = param_1[0x10];
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar15,uVar16,uVar13);
    }
    else {
      FUN_00c48fe8(plVar12,puVar15,uVar16,uVar13);
    }
    lVar7 = FUN_00c4e600();
    iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
    *(int *)(lVar7 + 0x12c8) = iVar6;
    if (iVar6 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        plStack_68 = plVar12;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar14 = (long *)*plVar12;
        plVar2 = plVar12;
        if (plVar12[600] != 0) {
          plVar2 = plVar12 + plVar12[600] * 3;
        }
        if (plVar2 == plVar12) {
          uVar17 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar14) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12);
            plVar14 = (long *)*plVar12;
          }
          plVar1 = plVar12 + 3;
          if (plVar2 == plVar1) {
            uVar17 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar14;
            if (bVar5) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar12,plVar12 + 3);
              plVar14 = (long *)plVar12[3];
            }
            uVar17 = (ulong)bVar5;
            plVar1 = plVar12 + 6;
            if (plVar2 == plVar1) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar17 * 3,plVar12 + 6);
                plVar14 = (long *)plVar12[6];
                uVar17 = 2;
              }
              plVar1 = plVar12 + 9;
              if (plVar2 == plVar1) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar17 * 3,plVar12 + 9);
                  plVar14 = (long *)plVar12[9];
                  uVar17 = 3;
                }
                plVar1 = plVar12 + 0xc;
                if (plVar2 == plVar1) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar17 * 3,plVar12 + 0xc);
                    plVar14 = (long *)plVar12[0xc];
                    uVar17 = 4;
                  }
                  plVar1 = plVar12 + 0xf;
                  if (plVar2 == plVar1) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar17 * 3,plVar12 + 0xf);
                      plVar14 = (long *)plVar12[0xf];
                      uVar17 = 5;
                    }
                    uVar10 = 6;
                    for (local_78 = plVar12 + 0x12; plVar2 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar17 * 3,local_78);
                        plVar14 = (long *)*local_78;
                        uVar17 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar14 + 0x100))(plVar14,plVar12 + uVar17 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar7 + 0x12cc) = 0;
    }
  }
  param_1[0xe] = plVar11;
  param_1[0xf] = uVar19;
  param_1[0x10] = uVar18;
  FUN_0137381c(param_1);
  return;
}


