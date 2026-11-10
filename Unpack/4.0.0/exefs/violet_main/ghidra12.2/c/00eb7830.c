/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb7830; name: FUN_00eb7830
 */


void FUN_00eb7830(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *local_b8;
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
      lVar11 = FUN_00c4e600();
      iVar3 = *(int *)(lVar11 + 0x12c8);
      iVar6 = iVar3 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar6;
      if (*(int *)(lVar11 + 0x12cc) <= iVar3) {
        *(int *)(lVar11 + 0x12cc) = iVar6;
      }
      FUN_00eea34c(lVar15);
      plVar13 = *(long **)(param_1 + 0x188);
      uVar17 = *(undefined8 *)(param_1 + 400);
      uVar18 = *(undefined8 *)(param_1 + 0x198);
      uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar15,uVar17,uVar18);
      }
      else {
        FUN_00c48fe8(plVar13,lVar15,uVar17,uVar18);
      }
      lVar15 = FUN_00c4e600();
      iVar6 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
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
            uVar16 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
              plVar14 = (long *)*plVar13;
            }
            plVar1 = plVar13 + 3;
            if (plVar10 == plVar1) {
              uVar16 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar5 = (long *)*plVar1 != plVar14;
              if (bVar5) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
                plVar14 = (long *)plVar13[3];
              }
              uVar16 = (ulong)bVar5;
              plVar1 = plVar13 + 6;
              if (plVar10 == plVar1) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 6);
                  plVar14 = (long *)plVar13[6];
                  uVar16 = 2;
                }
                plVar1 = plVar13 + 9;
                if (plVar10 == plVar1) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 9);
                    plVar14 = (long *)plVar13[9];
                    uVar16 = 3;
                  }
                  plVar1 = plVar13 + 0xc;
                  if (plVar10 == plVar1) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 0xc);
                      plVar14 = (long *)plVar13[0xc];
                      uVar16 = 4;
                    }
                    plVar1 = plVar13 + 0xf;
                    if (plVar10 == plVar1) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 0xf);
                        plVar14 = (long *)plVar13[0xf];
                        uVar16 = 5;
                      }
                      uVar9 = 6;
                      for (plVar1 = plVar13 + 0x12; plVar10 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar1);
                          plVar14 = (long *)*plVar1;
                          uVar16 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + uVar9 * 3);
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
        iVar3 = *(int *)(lVar15 + 0x12c8);
        iVar6 = iVar3 + 1;
        *(int *)(lVar15 + 0x12c8) = iVar6;
        if (*(int *)(lVar15 + 0x12cc) <= iVar3) {
          *(int *)(lVar15 + 0x12cc) = iVar6;
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
        iVar6 = *(int *)(lVar15 + 0x12c8) + -1;
        *(int *)(lVar15 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
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
              uVar16 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13);
                plVar14 = (long *)*plVar13;
              }
              plVar1 = plVar13 + 3;
              if (plVar10 == plVar1) {
                uVar16 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar5 = (long *)*plVar1 != plVar14;
                if (bVar5) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar13,plVar13 + 3);
                  plVar14 = (long *)plVar13[3];
                }
                uVar16 = (ulong)bVar5;
                plVar1 = plVar13 + 6;
                if (plVar10 == plVar1) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 6);
                    plVar14 = (long *)plVar13[6];
                    uVar16 = 2;
                  }
                  plVar1 = plVar13 + 9;
                  if (plVar10 == plVar1) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 9);
                      plVar14 = (long *)plVar13[9];
                      uVar16 = 3;
                    }
                    plVar1 = plVar13 + 0xc;
                    if (plVar10 == plVar1) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + 0xc);
                        plVar14 = (long *)plVar13[0xc];
                        uVar16 = 4;
                      }
                      plVar1 = plVar13 + 0xf;
                      if (plVar10 == plVar1) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))
                                    (plVar14,plVar13 + uVar16 * 3,plVar13 + 0xf);
                          plVar14 = (long *)plVar13[0xf];
                          uVar16 = 5;
                        }
                        uVar9 = 6;
                        for (plVar1 = plVar13 + 0x12; plVar10 != plVar1; plVar1 = plVar1 + 3) {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar14) {
                            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar1);
                            plVar14 = (long *)*plVar1;
                            uVar16 = uVar9;
                          }
                          uVar9 = uVar9 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar13 + uVar16 * 3,plVar13 + uVar9 * 3);
            plVar13[600] = 0;
          }
          *(undefined4 *)(lVar15 + 0x12cc) = 0;
        }
      }
    }
    lVar15 = *(long *)(param_1 + 0x180);
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar11 = lVar15;
  if (*(long *)(lVar15 + 0x58) == 0) {
    plVar13 = *(long **)(param_1 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x2c,4);
    if (puVar7 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar13;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar7 = 0;
      puVar7[1] = 0x800000000;
      *(undefined2 *)puVar7 = 0x101;
      *(undefined1 *)(puVar7 + 1) = 0;
      uVar18 = 4;
      *(undefined4 *)((long)puVar7 + 4) = 5;
      puVar7[4] = 0x100000001;
      puVar7[2] = 0x100000001;
      puVar7[3] = 0x800000001;
      *(undefined4 *)(puVar7 + 5) = 1;
      uVar17 = 0x2c;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar11 = *(long *)(lVar15 + 0x58);
    *(undefined8 **)(lVar15 + 0x58) = puVar7;
    if (lVar11 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar3 = *(int *)(lVar8 + 0x12c8);
      iVar6 = iVar3 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar6;
      if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
        *(int *)(lVar8 + 0x12cc) = iVar6;
      }
      plVar10 = *(long **)(lVar15 + 0x60);
      uVar2 = *(undefined8 *)(lVar15 + 0x68);
      uVar12 = *(undefined8 *)(lVar15 + 0x70);
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,uVar2,uVar12);
      }
      else {
        FUN_00c48fe8(plVar10,lVar11,uVar2,uVar12);
      }
      lVar11 = FUN_00c4e600();
      iVar6 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_68 = plVar10 + plVar10[600] * 3;
          local_90 = plVar10;
          FUN_00c4ea30(&local_90,&local_68);
          local_a0 = (long *)*plVar10;
          plVar14 = plVar10;
          if (plVar10[600] != 0) {
            plVar14 = plVar10 + plVar10[600] * 3;
          }
          if (plVar14 == plVar10) {
            local_b0 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != local_a0) {
              (**(code **)(*local_a0 + 0x100))(local_a0,plVar10,plVar10);
              local_a0 = (long *)*plVar10;
            }
            plVar1 = plVar10 + 3;
            if (plVar14 == plVar1) {
              local_b0 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar4 = (long *)*plVar1 != local_a0;
              if (bVar4) {
                (**(code **)(*local_a0 + 0x100))(local_a0,plVar10,plVar10 + 3);
                local_a0 = (long *)plVar10[3];
              }
              local_b0 = (ulong)bVar4;
              plVar1 = plVar10 + 6;
              if (plVar14 == plVar1) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != local_a0) {
                  (**(code **)(*local_a0 + 0x100))(local_a0,plVar10 + local_b0 * 3,plVar10 + 6);
                  local_a0 = (long *)plVar10[6];
                  local_b0 = 2;
                }
                plVar1 = plVar10 + 9;
                if (plVar14 == plVar1) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != local_a0) {
                    (**(code **)(*local_a0 + 0x100))(local_a0,plVar10 + local_b0 * 3,plVar10 + 9);
                    local_a0 = (long *)plVar10[9];
                    local_b0 = 3;
                  }
                  plVar1 = plVar10 + 0xc;
                  if (plVar14 == plVar1) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != local_a0) {
                      (**(code **)(*local_a0 + 0x100))
                                (local_a0,plVar10 + local_b0 * 3,plVar10 + 0xc);
                      local_a0 = (long *)plVar10[0xc];
                      local_b0 = 4;
                    }
                    plVar1 = plVar10 + 0xf;
                    if (plVar14 == plVar1) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != local_a0) {
                        (**(code **)(*local_a0 + 0x100))
                                  (local_a0,plVar10 + local_b0 * 3,plVar10 + 0xf);
                        local_a0 = (long *)plVar10[0xf];
                        local_b0 = 5;
                      }
                      uVar9 = 6;
                      for (local_b8 = plVar10 + 0x12; plVar14 != local_b8; local_b8 = local_b8 + 3)
                      {
                        (**(code **)(*(long *)*local_b8 + 0xd0))();
                        if ((long *)*local_b8 != local_a0) {
                          (**(code **)(*local_a0 + 0x100))(local_a0,plVar10 + local_b0 * 3,local_b8)
                          ;
                          local_a0 = (long *)*local_b8;
                          local_b0 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_a0 + 0x100))(local_a0,plVar10 + local_b0 * 3,plVar10 + uVar9 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
    }
    *(long **)(lVar15 + 0x60) = plVar13;
    *(undefined8 *)(lVar15 + 0x68) = uVar17;
    *(undefined8 *)(lVar15 + 0x70) = uVar18;
    *(undefined1 *)(lVar15 + 0x9c) = 1;
    lVar11 = *(long *)(param_1 + 0x180);
  }
  if (*(byte *)(*(long *)(lVar11 + 0x58) + 8) == (param_2 & 1)) {
    if ((*(char *)(lVar15 + 0x9c) == '\0') && (bVar5)) {
      return;
    }
  }
  else {
    *(byte *)(*(long *)(lVar11 + 0x58) + 8) = param_2 & 1;
    *(undefined1 *)(lVar15 + 0x9c) = 1;
  }
  lVar15 = *(long *)(param_1 + 0x208);
  lVar11 = *(long *)(param_1 + 0x210);
  if (((lVar15 != lVar11) && (*(undefined1 *)(lVar15 + 0x10) = 1, lVar15 + 0x18 != lVar11)) &&
     (*(undefined1 *)(lVar15 + 0x28) = 1, lVar15 + 0x30 != lVar11)) {
    *(undefined1 *)(lVar15 + 0x40) = 1;
    for (lVar15 = lVar15 + 0x48; lVar15 != lVar11; lVar15 = lVar15 + 0x18) {
      *(undefined1 *)(lVar15 + 0x10) = 1;
    }
  }
  return;
}


