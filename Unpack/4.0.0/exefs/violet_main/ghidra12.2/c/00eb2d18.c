/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb2d18; name: FUN_00eb2d18
 */


void FUN_00eb2d18(long param_1,int param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  long *local_c0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar17 = *(long *)(param_1 + 0x180);
  if (lVar17 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    plVar15 = local_90;
    local_90 = (long *)0x0;
    lVar17 = *(long *)(param_1 + 0x180);
    *(long **)(param_1 + 0x180) = plVar15;
    if (lVar17 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
      local_90 = (long *)0x0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar3 = *(int *)(lVar8 + 0x12c8);
      iVar6 = iVar3 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar6;
      if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
        *(int *)(lVar8 + 0x12cc) = iVar6;
      }
      FUN_00eea34c(lVar17);
      plVar15 = *(long **)(param_1 + 0x188);
      uVar12 = *(undefined8 *)(param_1 + 400);
      uVar14 = *(undefined8 *)(param_1 + 0x198);
      uVar10 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar17,uVar12,uVar14);
      }
      else {
        FUN_00c48fe8(plVar15,lVar17,uVar12,uVar14);
      }
      lVar17 = FUN_00c4e600();
      iVar6 = *(int *)(lVar17 + 0x12c8) + -1;
      *(int *)(lVar17 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_70 = plVar15 + plVar15[600] * 3;
          local_68 = plVar15;
          FUN_00c4ea30(&local_68,&local_70);
          plVar16 = (long *)*plVar15;
          plVar11 = plVar15;
          if (plVar15[600] != 0) {
            plVar11 = plVar15 + plVar15[600] * 3;
          }
          if (plVar11 == plVar15) {
            uVar20 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15);
              plVar16 = (long *)*plVar15;
            }
            plVar19 = plVar15 + 3;
            if (plVar11 == plVar19) {
              uVar20 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              bVar5 = (long *)*plVar19 != plVar16;
              if (bVar5) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15 + 3);
                plVar16 = (long *)plVar15[3];
              }
              uVar20 = (ulong)bVar5;
              plVar19 = plVar15 + 6;
              if (plVar11 == plVar19) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                if ((long *)*plVar19 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 6);
                  plVar16 = (long *)plVar15[6];
                  uVar20 = 2;
                }
                plVar19 = plVar15 + 9;
                if (plVar11 == plVar19) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 9);
                    plVar16 = (long *)plVar15[9];
                    uVar20 = 3;
                  }
                  plVar19 = plVar15 + 0xc;
                  if (plVar11 == plVar19) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 0xc);
                      plVar16 = (long *)plVar15[0xc];
                      uVar20 = 4;
                    }
                    plVar19 = plVar15 + 0xf;
                    if (plVar11 == plVar19) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar19 + 0xd0))();
                      if ((long *)*plVar19 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 0xf);
                        plVar16 = (long *)plVar15[0xf];
                        uVar20 = 5;
                      }
                      uVar10 = 6;
                      for (plVar19 = plVar15 + 0x12; plVar11 != plVar19; plVar19 = plVar19 + 3) {
                        (**(code **)(*(long *)*plVar19 + 0xd0))();
                        if ((long *)*plVar19 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar19);
                          plVar16 = (long *)*plVar19;
                          uVar20 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + uVar10 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar17 + 0x12cc) = 0;
      }
      plVar15 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar17 = FUN_00c4e600();
        iVar3 = *(int *)(lVar17 + 0x12c8);
        iVar6 = iVar3 + 1;
        *(int *)(lVar17 + 0x12c8) = iVar6;
        if (*(int *)(lVar17 + 0x12cc) <= iVar3) {
          *(int *)(lVar17 + 0x12cc) = iVar6;
        }
        FUN_00eea34c(plVar15);
        uVar10 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar10 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,plVar15,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,plVar15,local_80,local_78);
        }
        lVar17 = FUN_00c4e600();
        iVar6 = *(int *)(lVar17 + 0x12c8) + -1;
        *(int *)(lVar17 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar15 = (long *)FUN_00c4e600();
          if (plVar15[600] != 0) {
            local_70 = plVar15 + plVar15[600] * 3;
            local_68 = plVar15;
            FUN_00c4ea30(&local_68,&local_70);
            plVar16 = (long *)*plVar15;
            plVar11 = plVar15;
            if (plVar15[600] != 0) {
              plVar11 = plVar15 + plVar15[600] * 3;
            }
            if (plVar11 == plVar15) {
              uVar20 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15);
                plVar16 = (long *)*plVar15;
              }
              plVar19 = plVar15 + 3;
              if (plVar11 == plVar19) {
                uVar20 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar19 + 0xd0))();
                bVar5 = (long *)*plVar19 != plVar16;
                if (bVar5) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar15,plVar15 + 3);
                  plVar16 = (long *)plVar15[3];
                }
                uVar20 = (ulong)bVar5;
                plVar19 = plVar15 + 6;
                if (plVar11 == plVar19) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar19 + 0xd0))();
                  if ((long *)*plVar19 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 6);
                    plVar16 = (long *)plVar15[6];
                    uVar20 = 2;
                  }
                  plVar19 = plVar15 + 9;
                  if (plVar11 == plVar19) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar19 + 0xd0))();
                    if ((long *)*plVar19 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 9);
                      plVar16 = (long *)plVar15[9];
                      uVar20 = 3;
                    }
                    plVar19 = plVar15 + 0xc;
                    if (plVar11 == plVar19) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar19 + 0xd0))();
                      if ((long *)*plVar19 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + 0xc);
                        plVar16 = (long *)plVar15[0xc];
                        uVar20 = 4;
                      }
                      plVar19 = plVar15 + 0xf;
                      if (plVar11 == plVar19) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar19 + 0xd0))();
                        if ((long *)*plVar19 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))
                                    (plVar16,plVar15 + uVar20 * 3,plVar15 + 0xf);
                          plVar16 = (long *)plVar15[0xf];
                          uVar20 = 5;
                        }
                        uVar10 = 6;
                        for (plVar19 = plVar15 + 0x12; plVar11 != plVar19; plVar19 = plVar19 + 3) {
                          (**(code **)(*(long *)*plVar19 + 0xd0))();
                          if ((long *)*plVar19 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar19);
                            plVar16 = (long *)*plVar19;
                            uVar20 = uVar10;
                          }
                          uVar10 = uVar10 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar15 + uVar20 * 3,plVar15 + uVar10 * 3);
            plVar15[600] = 0;
          }
          *(undefined4 *)(lVar17 + 0x12cc) = 0;
        }
      }
    }
    lVar17 = *(long *)(param_1 + 0x180);
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar8 = lVar17;
  if (*(long *)(lVar17 + 0x10) == 0) {
    plVar15 = *(long **)(param_1 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x10,4);
    if (puVar7 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
      uVar14 = 0;
      uVar12 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar12 = 4;
      *puVar7 = 0x200000001;
      puVar7[1] = 4;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      uVar14 = 0x10;
    }
    lVar8 = *(long *)(lVar17 + 0x10);
    *(undefined8 **)(lVar17 + 0x10) = puVar7;
    if (lVar8 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar9 = FUN_00c4e600();
      iVar3 = *(int *)(lVar9 + 0x12c8);
      iVar6 = iVar3 + 1;
      *(int *)(lVar9 + 0x12c8) = iVar6;
      if (*(int *)(lVar9 + 0x12cc) <= iVar3) {
        *(int *)(lVar9 + 0x12cc) = iVar6;
      }
      plVar11 = *(long **)(lVar17 + 0x18);
      uVar2 = *(undefined8 *)(lVar17 + 0x20);
      uVar18 = *(undefined8 *)(lVar17 + 0x28);
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,uVar2,uVar18);
      }
      else {
        FUN_00c48fe8(plVar11,lVar8,uVar2,uVar18);
      }
      lVar8 = FUN_00c4e600();
      iVar6 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
        plVar11 = (long *)FUN_00c4e600();
        if (plVar11[600] != 0) {
          local_68 = plVar11 + plVar11[600] * 3;
          local_90 = plVar11;
          FUN_00c4ea30(&local_90,&local_68);
          plVar19 = (long *)*plVar11;
          plVar16 = plVar11;
          if (plVar11[600] != 0) {
            plVar16 = plVar11 + plVar11[600] * 3;
          }
          if (plVar16 == plVar11) {
            uVar20 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar19) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar11,plVar11);
              plVar19 = (long *)*plVar11;
            }
            plVar1 = plVar11 + 3;
            if (plVar16 == plVar1) {
              uVar20 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar4 = (long *)*plVar1 != plVar19;
              if (bVar4) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar11,plVar11 + 3);
                plVar19 = (long *)plVar11[3];
              }
              uVar20 = (ulong)bVar4;
              plVar1 = plVar11 + 6;
              if (plVar16 == plVar1) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar11 + uVar20 * 3,plVar11 + 6);
                  plVar19 = (long *)plVar11[6];
                  uVar20 = 2;
                }
                plVar1 = plVar11 + 9;
                if (plVar16 == plVar1) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar11 + uVar20 * 3,plVar11 + 9);
                    plVar19 = (long *)plVar11[9];
                    uVar20 = 3;
                  }
                  plVar1 = plVar11 + 0xc;
                  if (plVar16 == plVar1) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar11 + uVar20 * 3,plVar11 + 0xc);
                      plVar19 = (long *)plVar11[0xc];
                      uVar20 = 4;
                    }
                    plVar1 = plVar11 + 0xf;
                    if (plVar16 == plVar1) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))(plVar19,plVar11 + uVar20 * 3,plVar11 + 0xf);
                        plVar19 = (long *)plVar11[0xf];
                        uVar20 = 5;
                      }
                      uVar10 = 6;
                      for (local_c0 = plVar11 + 0x12; plVar16 != local_c0; local_c0 = local_c0 + 3)
                      {
                        (**(code **)(*(long *)*local_c0 + 0xd0))();
                        if ((long *)*local_c0 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar11 + uVar20 * 3,local_c0);
                          plVar19 = (long *)*local_c0;
                          uVar20 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar19 + 0x100))(plVar19,plVar11 + uVar20 * 3,plVar11 + uVar10 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(lVar17 + 0x28) = uVar12;
    *(undefined1 *)(lVar17 + 0x3c) = 1;
    *(long **)(lVar17 + 0x18) = plVar15;
    *(undefined8 *)(lVar17 + 0x20) = uVar14;
    lVar8 = *(long *)(param_1 + 0x180);
  }
  piVar13 = *(int **)(lVar8 + 0x10);
  if (piVar13[1] == param_2) {
    if (*piVar13 == param_3) {
      if ((*(char *)(lVar17 + 0x3c) == '\0') && (bVar5)) {
        return;
      }
      goto LAB_00eb2e5c;
    }
LAB_00eb2ef0:
    *piVar13 = param_3;
  }
  else {
    piVar13[1] = param_2;
    if (*piVar13 != param_3) goto LAB_00eb2ef0;
  }
  *(undefined1 *)(lVar17 + 0x3c) = 1;
LAB_00eb2e5c:
  lVar17 = *(long *)(param_1 + 0x208);
  lVar8 = *(long *)(param_1 + 0x210);
  if (((lVar17 != lVar8) && (*(undefined1 *)(lVar17 + 0x10) = 1, lVar17 + 0x18 != lVar8)) &&
     (*(undefined1 *)(lVar17 + 0x28) = 1, lVar17 + 0x30 != lVar8)) {
    *(undefined1 *)(lVar17 + 0x40) = 1;
    for (lVar17 = lVar17 + 0x48; lVar17 != lVar8; lVar17 = lVar17 + 0x18) {
      *(undefined1 *)(lVar17 + 0x10) = 1;
    }
  }
  return;
}


