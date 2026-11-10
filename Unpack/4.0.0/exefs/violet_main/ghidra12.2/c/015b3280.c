/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b3280; name: FUN_015b3280
 */


void FUN_015b3280(long param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *local_d8;
  ulong local_d0;
  ulong local_c8;
  long *local_b8;
  long *local_b0;
  ulong local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar20 = *(long *)(param_1 + 0x180);
  if (lVar20 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    plVar14 = local_90;
    local_90 = (long *)0x0;
    lVar20 = *(long *)(param_1 + 0x180);
    *(long **)(param_1 + 0x180) = plVar14;
    if (lVar20 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
      local_90 = (long *)0x0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar15 = FUN_00c4e600();
      iVar5 = *(int *)(lVar15 + 0x12c8);
      iVar10 = iVar5 + 1;
      *(int *)(lVar15 + 0x12c8) = iVar10;
      if (*(int *)(lVar15 + 0x12cc) <= iVar5) {
        *(int *)(lVar15 + 0x12cc) = iVar10;
      }
      FUN_00eea34c(lVar20);
      plVar14 = *(long **)(param_1 + 0x188);
      uVar17 = *(undefined8 *)(param_1 + 400);
      uVar18 = *(undefined8 *)(param_1 + 0x198);
      uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar20,uVar17,uVar18);
      }
      else {
        FUN_00c48fe8(plVar14,lVar20,uVar17,uVar18);
      }
      lVar20 = FUN_00c4e600();
      iVar10 = *(int *)(lVar20 + 0x12c8) + -1;
      *(int *)(lVar20 + 0x12c8) = iVar10;
      if (iVar10 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_70 = plVar14 + plVar14[600] * 3;
          local_68 = plVar14;
          FUN_00c4ea30(&local_68,&local_70);
          plVar19 = (long *)*plVar14;
          plVar3 = plVar14;
          if (plVar14[600] != 0) {
            plVar3 = plVar14 + plVar14[600] * 3;
          }
          if (plVar3 == plVar14) {
            local_a8 = 0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != plVar19) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar14,plVar14);
              plVar19 = (long *)*plVar14;
            }
            plVar2 = plVar14 + 3;
            if (plVar3 == plVar2) {
              local_a8 = 0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar9 = (long *)*plVar2 != plVar19;
              if (bVar9) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar14,plVar14 + 3);
                plVar19 = (long *)plVar14[3];
              }
              local_a8 = (ulong)bVar9;
              plVar2 = plVar14 + 6;
              if (plVar3 == plVar2) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + 6);
                  plVar19 = (long *)plVar14[6];
                  local_a8 = 2;
                }
                plVar2 = plVar14 + 9;
                if (plVar3 == plVar2) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + 9);
                    plVar19 = (long *)plVar14[9];
                    local_a8 = 3;
                  }
                  plVar2 = plVar14 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + 0xc);
                      plVar19 = (long *)plVar14[0xc];
                      local_a8 = 4;
                    }
                    plVar2 = plVar14 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))
                                  (plVar19,plVar14 + local_a8 * 3,plVar14 + 0xf);
                        plVar19 = (long *)plVar14[0xf];
                        local_a8 = 5;
                      }
                      uVar13 = 6;
                      for (local_b0 = plVar14 + 0x12; plVar3 != local_b0; local_b0 = local_b0 + 3) {
                        (**(code **)(*(long *)*local_b0 + 0xd0))();
                        if ((long *)*local_b0 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,local_b0);
                          plVar19 = (long *)*local_b0;
                          local_a8 = uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + uVar13 * 3);
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar20 + 0x12cc) = 0;
      }
      plVar14 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar20 = FUN_00c4e600();
        iVar5 = *(int *)(lVar20 + 0x12c8);
        iVar10 = iVar5 + 1;
        *(int *)(lVar20 + 0x12c8) = iVar10;
        if (*(int *)(lVar20 + 0x12cc) <= iVar5) {
          *(int *)(lVar20 + 0x12cc) = iVar10;
        }
        FUN_00eea34c(plVar14);
        uVar13 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar13 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,plVar14,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,plVar14,local_80,local_78);
        }
        lVar20 = FUN_00c4e600();
        iVar10 = *(int *)(lVar20 + 0x12c8) + -1;
        *(int *)(lVar20 + 0x12c8) = iVar10;
        if (iVar10 == 0) {
          plVar14 = (long *)FUN_00c4e600();
          if (plVar14[600] != 0) {
            local_70 = plVar14 + plVar14[600] * 3;
            local_68 = plVar14;
            FUN_00c4ea30(&local_68,&local_70);
            plVar19 = (long *)*plVar14;
            plVar3 = plVar14;
            if (plVar14[600] != 0) {
              plVar3 = plVar14 + plVar14[600] * 3;
            }
            if (plVar3 == plVar14) {
              local_a8 = 0;
              uVar13 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar14,plVar14);
                plVar19 = (long *)*plVar14;
              }
              plVar2 = plVar14 + 3;
              if (plVar3 == plVar2) {
                local_a8 = 0;
                uVar13 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar9 = (long *)*plVar2 != plVar19;
                if (bVar9) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar14,plVar14 + 3);
                  plVar19 = (long *)plVar14[3];
                }
                local_a8 = (ulong)bVar9;
                plVar2 = plVar14 + 6;
                if (plVar3 == plVar2) {
                  uVar13 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + 6);
                    plVar19 = (long *)plVar14[6];
                    local_a8 = 2;
                  }
                  plVar2 = plVar14 + 9;
                  if (plVar3 == plVar2) {
                    uVar13 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + 9);
                      plVar19 = (long *)plVar14[9];
                      local_a8 = 3;
                    }
                    plVar2 = plVar14 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar13 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))
                                  (plVar19,plVar14 + local_a8 * 3,plVar14 + 0xc);
                        plVar19 = (long *)plVar14[0xc];
                        local_a8 = 4;
                      }
                      plVar2 = plVar14 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar13 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))
                                    (plVar19,plVar14 + local_a8 * 3,plVar14 + 0xf);
                          plVar19 = (long *)plVar14[0xf];
                          local_a8 = 5;
                        }
                        uVar13 = 6;
                        for (local_b0 = plVar14 + 0x12; plVar3 != local_b0; local_b0 = local_b0 + 3)
                        {
                          (**(code **)(*(long *)*local_b0 + 0xd0))();
                          if ((long *)*local_b0 != plVar19) {
                            (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,local_b0)
                            ;
                            plVar19 = (long *)*local_b0;
                            local_a8 = uVar13;
                          }
                          uVar13 = uVar13 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar14 + local_a8 * 3,plVar14 + uVar13 * 3);
            plVar14[600] = 0;
          }
          *(undefined4 *)(lVar20 + 0x12cc) = 0;
        }
      }
    }
    lVar20 = *(long *)(param_1 + 0x180);
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  lVar15 = lVar20;
  if (*(long *)(lVar20 + 0xe8) == 0) {
    local_a0 = *(long **)(param_1 + 8);
    puVar11 = (undefined8 *)(**(code **)(*local_a0 + 0x10))(local_a0,0x20,1);
    if (puVar11 == (undefined8 *)0x0) {
      local_a0 = (long *)0x0;
      uVar18 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = local_a0;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      puVar11[2] = 0x101010101010101;
      puVar11[3] = 0x101010101010101;
      *puVar11 = 0x101010101010101;
      puVar11[1] = 0x101010101010101;
      uVar17 = 1;
      uVar18 = 0x20;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    lVar15 = *(long *)(lVar20 + 0xe8);
    *(undefined8 **)(lVar20 + 0xe8) = puVar11;
    if (lVar15 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar5 = *(int *)(lVar12 + 0x12c8);
      iVar10 = iVar5 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar10;
      if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
        *(int *)(lVar12 + 0x12cc) = iVar10;
      }
      plVar14 = *(long **)(lVar20 + 0xf0);
      uVar4 = *(undefined8 *)(lVar20 + 0xf8);
      uVar16 = *(undefined8 *)(lVar20 + 0x100);
      uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,uVar4,uVar16);
      }
      else {
        FUN_00c48fe8(plVar14,lVar15,uVar4,uVar16);
      }
      lVar15 = FUN_00c4e600();
      iVar10 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar10;
      if (iVar10 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_68 = plVar14 + plVar14[600] * 3;
          local_90 = plVar14;
          FUN_00c4ea30(&local_90,&local_68);
          local_b8 = (long *)*plVar14;
          plVar3 = plVar14;
          if (plVar14[600] != 0) {
            plVar3 = plVar14 + plVar14[600] * 3;
          }
          if (plVar3 == plVar14) {
            local_d0 = 0;
            local_c8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != local_b8) {
              (**(code **)(*local_b8 + 0x100))(local_b8,plVar14,plVar14);
              local_b8 = (long *)*plVar14;
            }
            plVar19 = plVar14 + 3;
            if (plVar3 == plVar19) {
              local_c8 = 0;
              local_d0 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              bVar6 = (long *)*plVar19 != local_b8;
              if (bVar6) {
                (**(code **)(*local_b8 + 0x100))(local_b8,plVar14,plVar14 + 3);
                local_b8 = (long *)plVar14[3];
              }
              local_c8 = (ulong)bVar6;
              plVar19 = plVar14 + 6;
              if (plVar3 == plVar19) {
                local_d0 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != local_b8) {
                  (**(code **)(*local_b8 + 0x100))(local_b8,plVar14 + local_c8 * 3,plVar14 + 6);
                  local_b8 = (long *)plVar14[6];
                  local_c8 = 2;
                }
                plVar19 = plVar14 + 9;
                if (plVar3 == plVar19) {
                  local_d0 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != local_b8) {
                    (**(code **)(*local_b8 + 0x100))(local_b8,plVar14 + local_c8 * 3,plVar14 + 9);
                    local_b8 = (long *)plVar14[9];
                    local_c8 = 3;
                  }
                  plVar19 = plVar14 + 0xc;
                  if (plVar3 == plVar19) {
                    local_d0 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != local_b8) {
                      (**(code **)(*local_b8 + 0x100))
                                (local_b8,plVar14 + local_c8 * 3,plVar14 + 0xc);
                      local_b8 = (long *)plVar14[0xc];
                      local_c8 = 4;
                    }
                    plVar19 = plVar14 + 0xf;
                    if (plVar3 == plVar19) {
                      local_d0 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar19 + 0xd0))();
                      if ((long *)*plVar19 != local_b8) {
                        (**(code **)(*local_b8 + 0x100))
                                  (local_b8,plVar14 + local_c8 * 3,plVar14 + 0xf);
                        local_b8 = (long *)plVar14[0xf];
                        local_c8 = 5;
                      }
                      local_d8 = plVar14 + 0x12;
                      if (plVar3 == local_d8) {
                        local_d0 = 6;
                      }
                      else {
                        local_d0 = 6;
                        do {
                          (**(code **)(*(long *)*local_d8 + 0xd0))();
                          if ((long *)*local_d8 != local_b8) {
                            (**(code **)(*local_b8 + 0x100))
                                      (local_b8,plVar14 + local_c8 * 3,local_d8);
                            local_b8 = (long *)*local_d8;
                            local_c8 = local_d0;
                          }
                          local_d0 = local_d0 + 1;
                          local_d8 = local_d8 + 3;
                        } while (plVar3 != local_d8);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_b8 + 0x100))(local_b8,plVar14 + local_c8 * 3,plVar14 + local_d0 * 3);
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar15 + 0x12cc) = 0;
      }
    }
    *(long **)(lVar20 + 0xf0) = local_a0;
    *(undefined8 *)(lVar20 + 0xf8) = uVar18;
    *(undefined8 *)(lVar20 + 0x100) = uVar17;
    *(undefined1 *)(lVar20 + 0x108) = 1;
    lVar15 = *(long *)(param_1 + 0x180);
  }
  pbVar1 = (byte *)(*(long *)(lVar15 + 0xe8) + (ulong)param_2 * 4);
  bVar6 = *pbVar1 != (param_3 & 1);
  if (bVar6) {
    *pbVar1 = param_3 & 1;
  }
  param_5 = param_5 & 1;
  bVar7 = pbVar1[1] != (param_4 & 1);
  if (bVar7) {
    pbVar1[1] = param_4 & 1;
  }
  bVar8 = pbVar1[2] != param_5;
  if (bVar8) {
    pbVar1[2] = param_5;
  }
  if (pbVar1[3] == (param_6 & 1)) {
    if (!bVar6 && ((!bVar7 && !bVar6) && (!bVar8 && (!bVar7 && !bVar6)))) {
      if ((*(char *)(lVar20 + 0x108) == '\0') && (bVar9)) {
        return;
      }
      goto LAB_015b344c;
    }
  }
  else {
    pbVar1[3] = param_6 & 1;
  }
  *(undefined1 *)(lVar20 + 0x108) = 1;
LAB_015b344c:
  lVar20 = *(long *)(param_1 + 0x208);
  lVar15 = *(long *)(param_1 + 0x210);
  if (((lVar20 != lVar15) && (*(undefined1 *)(lVar20 + 0x10) = 1, lVar20 + 0x18 != lVar15)) &&
     (*(undefined1 *)(lVar20 + 0x28) = 1, lVar20 + 0x30 != lVar15)) {
    *(undefined1 *)(lVar20 + 0x40) = 1;
    for (lVar20 = lVar20 + 0x48; lVar20 != lVar15; lVar20 = lVar20 + 0x18) {
      *(undefined1 *)(lVar20 + 0x10) = 1;
    }
  }
  return;
}


