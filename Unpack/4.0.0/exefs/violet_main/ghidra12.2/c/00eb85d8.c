/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb85d8; name: FUN_00eb85d8
 */


void FUN_00eb85d8(float param_1,float param_2,float param_3,long param_4,int param_5)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *local_c8;
  ulong local_c0;
  long *local_b0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_98 = *(undefined8 *)(param_4 + 8);
  lVar17 = *(long *)(param_4 + 0x180);
  if (lVar17 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    plVar15 = local_90;
    local_90 = (long *)0x0;
    lVar17 = *(long *)(param_4 + 0x180);
    *(long **)(param_4 + 0x180) = plVar15;
    if (lVar17 == 0) {
      *(undefined8 *)(param_4 + 400) = local_80;
      *(undefined8 *)(param_4 + 0x198) = local_78;
      *(long **)(param_4 + 0x188) = local_88;
      local_90 = (long *)0x0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar13 = FUN_00c4e600();
      iVar3 = *(int *)(lVar13 + 0x12c8);
      iVar8 = iVar3 + 1;
      *(int *)(lVar13 + 0x12c8) = iVar8;
      if (*(int *)(lVar13 + 0x12cc) <= iVar3) {
        *(int *)(lVar13 + 0x12cc) = iVar8;
      }
      FUN_00eea34c(lVar17);
      plVar15 = *(long **)(param_4 + 0x188);
      uVar19 = *(undefined8 *)(param_4 + 400);
      uVar20 = *(undefined8 *)(param_4 + 0x198);
      uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar17,uVar19,uVar20);
      }
      else {
        FUN_00c48fe8(plVar15,lVar17,uVar19,uVar20);
      }
      lVar17 = FUN_00c4e600();
      iVar8 = *(int *)(lVar17 + 0x12c8) + -1;
      *(int *)(lVar17 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_70 = plVar15 + plVar15[600] * 3;
          local_68 = plVar15;
          FUN_00c4ea30(&local_68,&local_70);
          plVar16 = (long *)*plVar15;
          plVar12 = plVar15;
          if (plVar15[600] != 0) {
            plVar12 = plVar15 + plVar15[600] * 3;
          }
          if (plVar12 == plVar15) {
            uVar18 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15);
              plVar16 = (long *)*plVar15;
            }
            plVar1 = plVar15 + 3;
            if (plVar12 == plVar1) {
              uVar18 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar7 = (long *)*plVar1 != plVar16;
              if (bVar7) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15 + 3);
                plVar16 = (long *)plVar15[3];
              }
              uVar18 = (ulong)bVar7;
              plVar1 = plVar15 + 6;
              if (plVar12 == plVar1) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 6);
                  plVar16 = (long *)plVar15[6];
                  uVar18 = 2;
                }
                plVar1 = plVar15 + 9;
                if (plVar12 == plVar1) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 9);
                    plVar16 = (long *)plVar15[9];
                    uVar18 = 3;
                  }
                  plVar1 = plVar15 + 0xc;
                  if (plVar12 == plVar1) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 0xc);
                      plVar16 = (long *)plVar15[0xc];
                      uVar18 = 4;
                    }
                    plVar1 = plVar15 + 0xf;
                    if (plVar12 == plVar1) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 0xf);
                        plVar16 = (long *)plVar15[0xf];
                        uVar18 = 5;
                      }
                      uVar11 = 6;
                      for (plVar1 = plVar15 + 0x12; plVar12 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar1);
                          plVar16 = (long *)*plVar1;
                          uVar18 = uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + uVar11 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar17 + 0x12cc) = 0;
      }
      plVar15 = local_90;
      *(long **)(param_4 + 0x188) = local_88;
      *(undefined8 *)(param_4 + 400) = local_80;
      *(undefined8 *)(param_4 + 0x198) = local_78;
      local_90 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar17 = FUN_00c4e600();
        iVar3 = *(int *)(lVar17 + 0x12c8);
        iVar8 = iVar3 + 1;
        *(int *)(lVar17 + 0x12c8) = iVar8;
        if (*(int *)(lVar17 + 0x12cc) <= iVar3) {
          *(int *)(lVar17 + 0x12cc) = iVar8;
        }
        FUN_00eea34c(plVar15);
        uVar11 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar11 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,plVar15,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,plVar15,local_80,local_78);
        }
        lVar17 = FUN_00c4e600();
        iVar8 = *(int *)(lVar17 + 0x12c8) + -1;
        *(int *)(lVar17 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar15 = (long *)FUN_00c4e600();
          if (plVar15[600] != 0) {
            local_70 = plVar15 + plVar15[600] * 3;
            local_68 = plVar15;
            FUN_00c4ea30(&local_68,&local_70);
            plVar16 = (long *)*plVar15;
            plVar12 = plVar15;
            if (plVar15[600] != 0) {
              plVar12 = plVar15 + plVar15[600] * 3;
            }
            if (plVar12 == plVar15) {
              uVar18 = 0;
              uVar11 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15);
                plVar16 = (long *)*plVar15;
              }
              plVar1 = plVar15 + 3;
              if (plVar12 == plVar1) {
                uVar18 = 0;
                uVar11 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar7 = (long *)*plVar1 != plVar16;
                if (bVar7) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15 + 3);
                  plVar16 = (long *)plVar15[3];
                }
                uVar18 = (ulong)bVar7;
                plVar1 = plVar15 + 6;
                if (plVar12 == plVar1) {
                  uVar11 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 6);
                    plVar16 = (long *)plVar15[6];
                    uVar18 = 2;
                  }
                  plVar1 = plVar15 + 9;
                  if (plVar12 == plVar1) {
                    uVar11 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 9);
                      plVar16 = (long *)plVar15[9];
                      uVar18 = 3;
                    }
                    plVar1 = plVar15 + 0xc;
                    if (plVar12 == plVar1) {
                      uVar11 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + 0xc);
                        plVar16 = (long *)plVar15[0xc];
                        uVar18 = 4;
                      }
                      plVar1 = plVar15 + 0xf;
                      if (plVar12 == plVar1) {
                        uVar11 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))
                                    (plVar16,plVar15 + uVar18 * 3,plVar15 + 0xf);
                          plVar16 = (long *)plVar15[0xf];
                          uVar18 = 5;
                        }
                        uVar11 = 6;
                        for (plVar1 = plVar15 + 0x12; plVar12 != plVar1; plVar1 = plVar1 + 3) {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar1);
                            plVar16 = (long *)*plVar1;
                            uVar18 = uVar11;
                          }
                          uVar11 = uVar11 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar18 * 3,plVar15 + uVar11 * 3);
            plVar15[600] = 0;
          }
          *(undefined4 *)(lVar17 + 0x12cc) = 0;
        }
      }
    }
    bVar7 = false;
    lVar17 = *(long *)(param_4 + 0x180);
  }
  else {
    bVar7 = true;
  }
  lVar13 = lVar17;
  if (*(long *)(lVar17 + 0x10) == 0) {
    plVar15 = *(long **)(param_4 + 8);
    puVar9 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x10,4);
    if (puVar9 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
      uVar19 = 0;
      uVar20 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar15;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      uVar20 = 4;
      uVar19 = 0x10;
      *puVar9 = 0x200000001;
      puVar9[1] = 4;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    lVar13 = *(long *)(lVar17 + 0x10);
    *(undefined8 **)(lVar17 + 0x10) = puVar9;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar3 = *(int *)(lVar10 + 0x12c8);
      iVar8 = iVar3 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar8;
      if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
        *(int *)(lVar10 + 0x12cc) = iVar8;
      }
      plVar12 = *(long **)(lVar17 + 0x18);
      uVar2 = *(undefined8 *)(lVar17 + 0x20);
      uVar14 = *(undefined8 *)(lVar17 + 0x28);
      uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,uVar2,uVar14);
      }
      else {
        FUN_00c48fe8(plVar12,lVar13,uVar2,uVar14);
      }
      lVar13 = FUN_00c4e600();
      iVar8 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_68 = plVar12 + plVar12[600] * 3;
          local_90 = plVar12;
          FUN_00c4ea30(&local_90,&local_68);
          local_b0 = (long *)*plVar12;
          plVar16 = plVar12;
          if (plVar12[600] != 0) {
            plVar16 = plVar12 + plVar12[600] * 3;
          }
          if (plVar16 == plVar12) {
            local_c0 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != local_b0) {
              (**(code **)(*local_b0 + 0x100))(local_b0,plVar12,plVar12);
              local_b0 = (long *)*plVar12;
            }
            plVar1 = plVar12 + 3;
            if (plVar16 == plVar1) {
              local_c0 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != local_b0;
              if (bVar6) {
                (**(code **)(*local_b0 + 0x100))(local_b0,plVar12,plVar12 + 3);
                local_b0 = (long *)plVar12[3];
              }
              local_c0 = (ulong)bVar6;
              plVar1 = plVar12 + 6;
              if (plVar16 == plVar1) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != local_b0) {
                  (**(code **)(*local_b0 + 0x100))(local_b0,plVar12 + local_c0 * 3,plVar12 + 6);
                  local_b0 = (long *)plVar12[6];
                  local_c0 = 2;
                }
                plVar1 = plVar12 + 9;
                if (plVar16 == plVar1) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != local_b0) {
                    (**(code **)(*local_b0 + 0x100))(local_b0,plVar12 + local_c0 * 3,plVar12 + 9);
                    local_b0 = (long *)plVar12[9];
                    local_c0 = 3;
                  }
                  plVar1 = plVar12 + 0xc;
                  if (plVar16 == plVar1) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != local_b0) {
                      (**(code **)(*local_b0 + 0x100))
                                (local_b0,plVar12 + local_c0 * 3,plVar12 + 0xc);
                      local_b0 = (long *)plVar12[0xc];
                      local_c0 = 4;
                    }
                    plVar1 = plVar12 + 0xf;
                    if (plVar16 == plVar1) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != local_b0) {
                        (**(code **)(*local_b0 + 0x100))
                                  (local_b0,plVar12 + local_c0 * 3,plVar12 + 0xf);
                        local_b0 = (long *)plVar12[0xf];
                        local_c0 = 5;
                      }
                      uVar11 = 6;
                      for (local_c8 = plVar12 + 0x12; plVar16 != local_c8; local_c8 = local_c8 + 3)
                      {
                        (**(code **)(*(long *)*local_c8 + 0xd0))();
                        if ((long *)*local_c8 != local_b0) {
                          (**(code **)(*local_b0 + 0x100))(local_b0,plVar12 + local_c0 * 3,local_c8)
                          ;
                          local_b0 = (long *)*local_c8;
                          local_c0 = uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*local_b0 + 0x100))(local_b0,plVar12 + local_c0 * 3,plVar12 + uVar11 * 3);
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
    }
    *(long **)(lVar17 + 0x18) = plVar15;
    *(undefined8 *)(lVar17 + 0x20) = uVar19;
    *(undefined8 *)(lVar17 + 0x28) = uVar20;
    *(undefined1 *)(lVar17 + 0x3c) = 1;
    lVar13 = *(long *)(param_4 + 0x180);
  }
  bVar6 = *(int *)(*(long *)(lVar13 + 0x10) + 0xc) != param_5;
  if (bVar6) {
    *(int *)(*(long *)(lVar13 + 0x10) + 0xc) = param_5;
  }
  bVar4 = *(float *)(lVar13 + 0x30) != param_1;
  if (bVar4) {
    *(float *)(lVar13 + 0x30) = param_1;
  }
  bVar5 = *(float *)(lVar13 + 0x34) != param_2;
  if (bVar5) {
    *(float *)(lVar13 + 0x34) = param_2;
  }
  if (*(float *)(lVar13 + 0x38) == param_3) {
    if (bVar4 || (bVar5 || bVar4)) goto LAB_00eb86f4;
    if (!bVar6) goto LAB_00eb870c;
  }
  else {
    *(float *)(lVar13 + 0x38) = param_3;
LAB_00eb86f4:
    if (!bVar6 && *(int *)(*(long *)(lVar13 + 0x10) + 0xc) == 0) {
LAB_00eb870c:
      if ((*(char *)(lVar17 + 0x3c) == '\0') && (bVar7)) {
        return;
      }
      goto LAB_00eb8670;
    }
  }
  *(undefined1 *)(lVar17 + 0x3c) = 1;
LAB_00eb8670:
  lVar17 = *(long *)(param_4 + 0x208);
  lVar13 = *(long *)(param_4 + 0x210);
  if (((lVar17 != lVar13) && (*(undefined1 *)(lVar17 + 0x10) = 1, lVar17 + 0x18 != lVar13)) &&
     (*(undefined1 *)(lVar17 + 0x28) = 1, lVar17 + 0x30 != lVar13)) {
    *(undefined1 *)(lVar17 + 0x40) = 1;
    for (lVar17 = lVar17 + 0x48; lVar17 != lVar13; lVar17 = lVar17 + 0x18) {
      *(undefined1 *)(lVar17 + 0x10) = 1;
    }
  }
  return;
}


