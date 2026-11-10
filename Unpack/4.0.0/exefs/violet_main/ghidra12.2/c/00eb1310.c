/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb1310; name: FUN_00eb1310
 */


void FUN_00eb1310(long param_1,uint param_2,byte param_3)

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
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  long *local_c0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar16 = *(long *)(param_1 + 0x180);
  if (lVar16 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    plVar14 = local_90;
    local_90 = (long *)0x0;
    lVar16 = *(long *)(param_1 + 0x180);
    *(long **)(param_1 + 0x180) = plVar14;
    if (lVar16 == 0) {
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
      FUN_00eea34c(lVar16);
      plVar14 = *(long **)(param_1 + 0x188);
      uVar12 = *(undefined8 *)(param_1 + 400);
      uVar13 = *(undefined8 *)(param_1 + 0x198);
      uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,uVar12,uVar13);
      }
      else {
        FUN_00c48fe8(plVar14,lVar16,uVar12,uVar13);
      }
      lVar16 = FUN_00c4e600();
      iVar6 = *(int *)(lVar16 + 0x12c8) + -1;
      *(int *)(lVar16 + 0x12c8) = iVar6;
      if (iVar6 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_70 = plVar14 + plVar14[600] * 3;
          local_68 = plVar14;
          FUN_00c4ea30(&local_68,&local_70);
          plVar15 = (long *)*plVar14;
          plVar11 = plVar14;
          if (plVar14[600] != 0) {
            plVar11 = plVar14 + plVar14[600] * 3;
          }
          if (plVar11 == plVar14) {
            uVar19 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != plVar15) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar14,plVar14);
              plVar15 = (long *)*plVar14;
            }
            plVar18 = plVar14 + 3;
            if (plVar11 == plVar18) {
              uVar19 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              bVar5 = (long *)*plVar18 != plVar15;
              if (bVar5) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar14,plVar14 + 3);
                plVar15 = (long *)plVar14[3];
              }
              uVar19 = (ulong)bVar5;
              plVar18 = plVar14 + 6;
              if (plVar11 == plVar18) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                if ((long *)*plVar18 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 6);
                  plVar15 = (long *)plVar14[6];
                  uVar19 = 2;
                }
                plVar18 = plVar14 + 9;
                if (plVar11 == plVar18) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 9);
                    plVar15 = (long *)plVar14[9];
                    uVar19 = 3;
                  }
                  plVar18 = plVar14 + 0xc;
                  if (plVar11 == plVar18) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 0xc);
                      plVar15 = (long *)plVar14[0xc];
                      uVar19 = 4;
                    }
                    plVar18 = plVar14 + 0xf;
                    if (plVar11 == plVar18) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 0xf);
                        plVar15 = (long *)plVar14[0xf];
                        uVar19 = 5;
                      }
                      uVar10 = 6;
                      for (plVar18 = plVar14 + 0x12; plVar11 != plVar18; plVar18 = plVar18 + 3) {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar18);
                          plVar15 = (long *)*plVar18;
                          uVar19 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + uVar10 * 3);
          plVar14[600] = 0;
        }
        *(undefined4 *)(lVar16 + 0x12cc) = 0;
      }
      plVar14 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar16 = FUN_00c4e600();
        iVar3 = *(int *)(lVar16 + 0x12c8);
        iVar6 = iVar3 + 1;
        *(int *)(lVar16 + 0x12c8) = iVar6;
        if (*(int *)(lVar16 + 0x12cc) <= iVar3) {
          *(int *)(lVar16 + 0x12cc) = iVar6;
        }
        FUN_00eea34c(plVar14);
        uVar10 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar10 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,plVar14,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,plVar14,local_80,local_78);
        }
        lVar16 = FUN_00c4e600();
        iVar6 = *(int *)(lVar16 + 0x12c8) + -1;
        *(int *)(lVar16 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar14 = (long *)FUN_00c4e600();
          if (plVar14[600] != 0) {
            local_70 = plVar14 + plVar14[600] * 3;
            local_68 = plVar14;
            FUN_00c4ea30(&local_68,&local_70);
            plVar15 = (long *)*plVar14;
            plVar11 = plVar14;
            if (plVar14[600] != 0) {
              plVar11 = plVar14 + plVar14[600] * 3;
            }
            if (plVar11 == plVar14) {
              uVar19 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar14,plVar14);
                plVar15 = (long *)*plVar14;
              }
              plVar18 = plVar14 + 3;
              if (plVar11 == plVar18) {
                uVar19 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                bVar5 = (long *)*plVar18 != plVar15;
                if (bVar5) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar14,plVar14 + 3);
                  plVar15 = (long *)plVar14[3];
                }
                uVar19 = (ulong)bVar5;
                plVar18 = plVar14 + 6;
                if (plVar11 == plVar18) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 6);
                    plVar15 = (long *)plVar14[6];
                    uVar19 = 2;
                  }
                  plVar18 = plVar14 + 9;
                  if (plVar11 == plVar18) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 9);
                      plVar15 = (long *)plVar14[9];
                      uVar19 = 3;
                    }
                    plVar18 = plVar14 + 0xc;
                    if (plVar11 == plVar18) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + 0xc);
                        plVar15 = (long *)plVar14[0xc];
                        uVar19 = 4;
                      }
                      plVar18 = plVar14 + 0xf;
                      if (plVar11 == plVar18) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))
                                    (plVar15,plVar14 + uVar19 * 3,plVar14 + 0xf);
                          plVar15 = (long *)plVar14[0xf];
                          uVar19 = 5;
                        }
                        uVar10 = 6;
                        for (plVar18 = plVar14 + 0x12; plVar11 != plVar18; plVar18 = plVar18 + 3) {
                          (**(code **)(*(long *)*plVar18 + 0xd0))();
                          if ((long *)*plVar18 != plVar15) {
                            (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar18);
                            plVar15 = (long *)*plVar18;
                            uVar19 = uVar10;
                          }
                          uVar10 = uVar10 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar14 + uVar19 * 3,plVar14 + uVar10 * 3);
            plVar14[600] = 0;
          }
          *(undefined4 *)(lVar16 + 0x12cc) = 0;
        }
      }
    }
    lVar16 = *(long *)(param_1 + 0x180);
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar8 = lVar16;
  if (*(long *)(lVar16 + 0xb0) == 0) {
    plVar14 = *(long **)(param_1 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x10,4);
    if (puVar7 == (undefined8 *)0x0) {
      plVar14 = (long *)0x0;
      uVar13 = 0;
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
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar7 = 0;
      puVar7[1] = 0x300000008;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      uVar12 = 4;
      uVar13 = 0x10;
    }
    lVar8 = *(long *)(lVar16 + 0xb0);
    *(undefined8 **)(lVar16 + 0xb0) = puVar7;
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
      plVar11 = *(long **)(lVar16 + 0xb8);
      uVar2 = *(undefined8 *)(lVar16 + 0xc0);
      uVar17 = *(undefined8 *)(lVar16 + 200);
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,uVar2,uVar17);
      }
      else {
        FUN_00c48fe8(plVar11,lVar8,uVar2,uVar17);
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
          plVar18 = (long *)*plVar11;
          plVar15 = plVar11;
          if (plVar11[600] != 0) {
            plVar15 = plVar11 + plVar11[600] * 3;
          }
          if (plVar15 == plVar11) {
            uVar19 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar11,plVar11);
              plVar18 = (long *)*plVar11;
            }
            plVar1 = plVar11 + 3;
            if (plVar15 == plVar1) {
              uVar19 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar4 = (long *)*plVar1 != plVar18;
              if (bVar4) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar11,plVar11 + 3);
                plVar18 = (long *)plVar11[3];
              }
              uVar19 = (ulong)bVar4;
              plVar1 = plVar11 + 6;
              if (plVar15 == plVar1) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar19 * 3,plVar11 + 6);
                  plVar18 = (long *)plVar11[6];
                  uVar19 = 2;
                }
                plVar1 = plVar11 + 9;
                if (plVar15 == plVar1) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar19 * 3,plVar11 + 9);
                    plVar18 = (long *)plVar11[9];
                    uVar19 = 3;
                  }
                  plVar1 = plVar11 + 0xc;
                  if (plVar15 == plVar1) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar19 * 3,plVar11 + 0xc);
                      plVar18 = (long *)plVar11[0xc];
                      uVar19 = 4;
                    }
                    plVar1 = plVar11 + 0xf;
                    if (plVar15 == plVar1) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar19 * 3,plVar11 + 0xf);
                        plVar18 = (long *)plVar11[0xf];
                        uVar19 = 5;
                      }
                      uVar10 = 6;
                      for (local_c0 = plVar11 + 0x12; plVar15 != local_c0; local_c0 = local_c0 + 3)
                      {
                        (**(code **)(*(long *)*local_c0 + 0xd0))();
                        if ((long *)*local_c0 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar19 * 3,local_c0);
                          plVar18 = (long *)*local_c0;
                          uVar19 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar11 + uVar19 * 3,plVar11 + uVar10 * 3);
          plVar11[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(lVar16 + 200) = uVar12;
    *(undefined1 *)(lVar16 + 0xd4) = 1;
    *(long **)(lVar16 + 0xb8) = plVar14;
    *(undefined8 *)(lVar16 + 0xc0) = uVar13;
    lVar8 = *(long *)(param_1 + 0x180);
  }
  if (*(byte *)(*(long *)(lVar8 + 0xb0) + (ulong)param_2) == (param_3 & 1)) {
    if ((*(char *)(lVar16 + 0xd4) == '\0') && (bVar5)) {
      return;
    }
  }
  else {
    *(byte *)(*(long *)(lVar8 + 0xb0) + (ulong)param_2) = param_3 & 1;
    *(undefined1 *)(lVar16 + 0xd4) = 1;
  }
  lVar16 = *(long *)(param_1 + 0x208);
  lVar8 = *(long *)(param_1 + 0x210);
  if (((lVar16 != lVar8) && (*(undefined1 *)(lVar16 + 0x10) = 1, lVar16 + 0x18 != lVar8)) &&
     (*(undefined1 *)(lVar16 + 0x28) = 1, lVar16 + 0x30 != lVar8)) {
    *(undefined1 *)(lVar16 + 0x40) = 1;
    for (lVar16 = lVar16 + 0x48; lVar16 != lVar8; lVar16 = lVar16 + 0x18) {
      *(undefined1 *)(lVar16 + 0x10) = 1;
    }
  }
  return;
}


