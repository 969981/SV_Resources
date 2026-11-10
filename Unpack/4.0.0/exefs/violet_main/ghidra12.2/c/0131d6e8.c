/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131d6e8; name: FUN_0131d6e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0131d6e8(undefined8 *param_1,long *param_2,long param_3,byte *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *local_98;
  long *local_90;
  ulong local_88;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  *param_1 = &PTR_LAB_04604db8;
  param_1[1] = param_3;
  memset(param_1 + 2,0,0xcc);
  if (((*PTR_DAT_047daf58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  plVar12 = (long *)PTR_DAT_047daf60;
  if (*(long *)(param_3 + 0xc0) != 0) {
    plVar12 = (long *)(*(long *)(param_3 + 0xc0) + 0x70);
  }
  if ((*plVar12 != 0) && ((*param_4 & 1) != 0)) {
    lVar10 = (**(code **)(*param_2 + 0x10))(param_2,0xc0,8);
    if (lVar10 == 0) {
      plVar12 = (long *)0x0;
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_0131ee34;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      FUN_0131f5c8(lVar10,param_3);
      uVar17 = 0xc0;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      uVar16 = 8;
      plVar12 = param_2;
    }
    puVar18 = (undefined8 *)param_1[3];
    param_1[3] = lVar10;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar9;
      }
      (**(code **)*puVar18)(puVar18);
      plVar15 = (long *)param_1[4];
      uVar3 = param_1[5];
      uVar19 = param_1[6];
      uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,puVar18,uVar3,uVar19);
      }
      else {
        FUN_00c48fe8(plVar15,puVar18,uVar3,uVar19);
      }
      lVar10 = FUN_00c4e600();
      iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_70 = plVar15 + plVar15[600] * 3;
          plStack_68 = plVar15;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar21 = (long *)*plVar15;
          plVar20 = plVar15;
          if (plVar15[600] != 0) {
            plVar20 = plVar15 + plVar15[600] * 3;
          }
          if (plVar20 == plVar15) {
            local_90 = (long *)0x0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar21) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar15,plVar15);
              plVar21 = (long *)*plVar15;
            }
            plVar2 = plVar15 + 3;
            if (plVar20 == plVar2) {
              local_90 = (long *)0x0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar8 = (long *)*plVar2 != plVar21;
              if (bVar8) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar15,plVar15 + 3);
                plVar21 = (long *)plVar15[3];
              }
              local_90 = (long *)(ulong)bVar8;
              plVar2 = plVar15 + 6;
              if (plVar20 == plVar2) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + (long)local_90 * 3,plVar15 + 6);
                  plVar21 = (long *)plVar15[6];
                  local_90 = (long *)0x2;
                }
                plVar2 = plVar15 + 9;
                if (plVar20 == plVar2) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar15 + (long)local_90 * 3,plVar15 + 9);
                    plVar21 = (long *)plVar15[9];
                    local_90 = (long *)0x3;
                  }
                  plVar2 = plVar15 + 0xc;
                  if (plVar20 == plVar2) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar15 + (long)local_90 * 3,plVar15 + 0xc);
                      plVar21 = (long *)plVar15[0xc];
                      local_90 = (long *)0x4;
                    }
                    plVar2 = plVar15 + 0xf;
                    if (plVar20 == plVar2) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar15 + (long)local_90 * 3,plVar15 + 0xf);
                        plVar21 = (long *)plVar15[0xf];
                        local_90 = (long *)0x5;
                      }
                      uVar13 = 6;
                      for (local_98 = plVar15 + 0x12; plVar20 != local_98; local_98 = local_98 + 3)
                      {
                        (**(code **)(*(long *)*local_98 + 0xd0))();
                        if ((long *)*local_98 != plVar21) {
                          (**(code **)(*plVar21 + 0x100))
                                    (plVar21,plVar15 + (long)local_90 * 3,local_98);
                          plVar21 = (long *)*local_98;
                          local_90 = (long *)uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + (long)local_90 * 3,plVar15 + uVar13 * 3)
          ;
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    param_1[4] = plVar12;
    param_1[5] = uVar17;
    param_1[6] = uVar16;
  }
  uVar14 = (uint)*(undefined8 *)param_4;
  if ((uVar14 >> 2 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xd8,8);
    if (plVar12 == (long *)0x0) {
      plVar15 = (long *)0x0;
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0131ee34;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      puVar1 = PTR_DAT_047e3150;
      *(undefined4 *)(plVar12 + 6) = 0;
      plVar12[2] = 0;
      plVar12[3] = (long)param_2;
      *(undefined4 *)(plVar12 + 0xb) = 0;
      plVar12[7] = 0;
      plVar12[8] = (long)param_2;
      plVar12[4] = 0xaaaaaaaaaaaaaaa;
      plVar12[5] = 0;
      plVar12[9] = 0xaaaaaaaaaaaaaaa;
      plVar12[10] = 0;
      uVar17 = 0xd8;
      plVar12[0xc] = 0;
      plVar12[0x12] = 0;
      *(undefined4 *)(plVar12 + 0x13) = 0;
      *(undefined4 *)(plVar12 + 0x18) = 0;
      plVar12[0x19] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plVar12[0x10] = (long)param_2;
      plVar12[0x11] = 0xaaaaaaaaaaaaaaa;
      plVar12[0x16] = 0xaaaaaaaaaaaaaaa;
      plVar12[0x17] = 0;
      uVar16 = 8;
      *plVar12 = (long)(puVar1 + 0x10);
      plVar12[1] = 0;
      *(undefined4 *)(plVar12 + 0xd) = 0x3f800000;
      *(undefined4 *)(plVar12 + 0x1a) = 0x3f800000;
      plVar12[0x14] = 0;
      plVar12[0x15] = (long)param_2;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      plVar15 = param_2;
    }
    puVar18 = (undefined8 *)param_1[7];
    param_1[7] = plVar12;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar9;
      }
      (**(code **)*puVar18)(puVar18);
      plVar12 = (long *)param_1[8];
      uVar3 = param_1[9];
      uVar19 = param_1[10];
      uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar18,uVar3,uVar19);
      }
      else {
        FUN_00c48fe8(plVar12,puVar18,uVar3,uVar19);
      }
      lVar10 = FUN_00c4e600();
      iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_70 = plVar12 + plVar12[600] * 3;
          plStack_68 = plVar12;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar21 = (long *)*plVar12;
          plVar20 = plVar12;
          if (plVar12[600] != 0) {
            plVar20 = plVar12 + plVar12[600] * 3;
          }
          if (plVar20 == plVar12) {
            local_90 = (long *)0x0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar21) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12);
              plVar21 = (long *)*plVar12;
            }
            plVar2 = plVar12 + 3;
            if (plVar20 == plVar2) {
              local_90 = (long *)0x0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar8 = (long *)*plVar2 != plVar21;
              if (bVar8) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12 + 3);
                plVar21 = (long *)plVar12[3];
              }
              local_90 = (long *)(ulong)bVar8;
              plVar2 = plVar12 + 6;
              if (plVar20 == plVar2) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + (long)local_90 * 3,plVar12 + 6);
                  plVar21 = (long *)plVar12[6];
                  local_90 = (long *)0x2;
                }
                plVar2 = plVar12 + 9;
                if (plVar20 == plVar2) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 9);
                    plVar21 = (long *)plVar12[9];
                    local_90 = (long *)0x3;
                  }
                  plVar2 = plVar12 + 0xc;
                  if (plVar20 == plVar2) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 0xc);
                      plVar21 = (long *)plVar12[0xc];
                      local_90 = (long *)0x4;
                    }
                    plVar2 = plVar12 + 0xf;
                    if (plVar20 == plVar2) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 0xf);
                        plVar21 = (long *)plVar12[0xf];
                        local_90 = (long *)0x5;
                      }
                      uVar13 = 6;
                      for (local_98 = plVar12 + 0x12; plVar20 != local_98; local_98 = local_98 + 3)
                      {
                        (**(code **)(*(long *)*local_98 + 0xd0))();
                        if ((long *)*local_98 != plVar21) {
                          (**(code **)(*plVar21 + 0x100))
                                    (plVar21,plVar12 + (long)local_90 * 3,local_98);
                          plVar21 = (long *)*local_98;
                          local_90 = (long *)uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + (long)local_90 * 3,plVar12 + uVar13 * 3)
          ;
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    param_1[8] = plVar15;
    param_1[9] = uVar17;
    param_1[10] = uVar16;
    uVar14 = (uint)*(undefined8 *)param_4;
  }
  if ((uVar14 >> 1 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xe8,8);
    if (plVar12 == (long *)0x0) {
      plVar15 = (long *)0x0;
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0131ee34;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
      puVar1 = PTR_DAT_047e3170 + 0x10;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *plVar12 = (long)puVar1;
      plVar12[1] = (long)param_2;
      plVar12[2] = 0;
      plVar12[3] = 0;
      plVar12[6] = 0;
      uVar17 = 0xe8;
      *(undefined4 *)(plVar12 + 7) = 0;
      *(undefined4 *)(plVar12 + 0xc) = 0;
      plVar12[0xd] = 0;
      *(undefined4 *)(plVar12 + 0x15) = 0;
      *(undefined4 *)(plVar12 + 0x1a) = 0;
      *(undefined4 *)(plVar12 + 0xe) = 0x3f800000;
      plVar12[0x1b] = 0;
      *(undefined4 *)(plVar12 + 0x1c) = 0x3f800000;
      plVar12[4] = (long)param_2;
      plVar12[5] = 0x3ffffffffffffff;
      plVar12[8] = 0;
      plVar12[9] = (long)param_2;
      plVar12[10] = 0x3ffffffffffffff;
      plVar12[0xb] = 0;
      plVar12[0xf] = (long)param_2;
      plVar12[0x10] = 0;
      plVar12[0x11] = 0;
      plVar12[0x12] = (long)param_2;
      plVar12[0x13] = 0x3ffffffffffffff;
      plVar12[0x14] = 0;
      plVar12[0x16] = 0;
      plVar12[0x17] = (long)param_2;
      plVar12[0x18] = 0x3ffffffffffffff;
      plVar12[0x19] = 0;
      uVar16 = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      plVar15 = param_2;
    }
    puVar18 = (undefined8 *)param_1[0xb];
    param_1[0xb] = plVar12;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar9;
      }
      (**(code **)*puVar18)(puVar18);
      plVar12 = (long *)param_1[0xc];
      uVar3 = param_1[0xd];
      uVar19 = param_1[0xe];
      uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar18,uVar3,uVar19);
      }
      else {
        FUN_00c48fe8(plVar12,puVar18,uVar3,uVar19);
      }
      lVar10 = FUN_00c4e600();
      iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_70 = plVar12 + plVar12[600] * 3;
          plStack_68 = plVar12;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar21 = (long *)*plVar12;
          plVar20 = plVar12;
          if (plVar12[600] != 0) {
            plVar20 = plVar12 + plVar12[600] * 3;
          }
          if (plVar20 == plVar12) {
            local_90 = (long *)0x0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar21) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12);
              plVar21 = (long *)*plVar12;
            }
            plVar2 = plVar12 + 3;
            if (plVar20 == plVar2) {
              local_90 = (long *)0x0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar8 = (long *)*plVar2 != plVar21;
              if (bVar8) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12 + 3);
                plVar21 = (long *)plVar12[3];
              }
              local_90 = (long *)(ulong)bVar8;
              plVar2 = plVar12 + 6;
              if (plVar20 == plVar2) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + (long)local_90 * 3,plVar12 + 6);
                  plVar21 = (long *)plVar12[6];
                  local_90 = (long *)0x2;
                }
                plVar2 = plVar12 + 9;
                if (plVar20 == plVar2) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 9);
                    plVar21 = (long *)plVar12[9];
                    local_90 = (long *)0x3;
                  }
                  plVar2 = plVar12 + 0xc;
                  if (plVar20 == plVar2) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 0xc);
                      plVar21 = (long *)plVar12[0xc];
                      local_90 = (long *)0x4;
                    }
                    plVar2 = plVar12 + 0xf;
                    if (plVar20 == plVar2) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 0xf);
                        plVar21 = (long *)plVar12[0xf];
                        local_90 = (long *)0x5;
                      }
                      uVar13 = 6;
                      for (local_98 = plVar12 + 0x12; plVar20 != local_98; local_98 = local_98 + 3)
                      {
                        (**(code **)(*(long *)*local_98 + 0xd0))();
                        if ((long *)*local_98 != plVar21) {
                          (**(code **)(*plVar21 + 0x100))
                                    (plVar21,plVar12 + (long)local_90 * 3,local_98);
                          plVar21 = (long *)*local_98;
                          local_90 = (long *)uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + (long)local_90 * 3,plVar12 + uVar13 * 3)
          ;
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    param_1[0xc] = plVar15;
    param_1[0xd] = uVar17;
    param_1[0xe] = uVar16;
    uVar14 = (uint)*(undefined8 *)param_4;
  }
  if ((uVar14 >> 3 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xe8,8);
    if (plVar12 == (long *)0x0) {
      plVar15 = (long *)0x0;
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0131ee34;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      puVar1 = PTR_DAT_047e3158;
      plVar12[6] = 0;
      plVar12[2] = 0;
      plVar12[3] = 0;
      *(undefined4 *)(plVar12 + 7) = 0;
      plVar12[4] = (long)param_2;
      plVar12[5] = 0x249249249249249;
      plVar12[8] = 0;
      plVar12[9] = (long)param_2;
      *(undefined4 *)(plVar12 + 0xc) = 0;
      plVar12[10] = 0x249249249249249;
      plVar12[0xb] = 0;
      uVar17 = 0xe8;
      plVar12[0xd] = 0;
      plVar12[0x13] = 0;
      *(undefined4 *)(plVar12 + 0x14) = 0;
      *(undefined4 *)(plVar12 + 0x19) = 0;
      plVar12[0x1a] = 0;
      *(undefined1 *)((long)plVar12 + 0xe2) = 0;
      *(undefined2 *)(plVar12 + 0x1c) = 0;
      plVar12[0xf] = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = (long)param_2;
      plVar12[0x12] = 0x249249249249249;
      *plVar12 = (long)(puVar1 + 0x10);
      plVar12[1] = (long)param_2;
      *(undefined4 *)(plVar12 + 0xe) = 0x3f800000;
      *(undefined4 *)(plVar12 + 0x1b) = 0x3f800000;
      plVar12[0x15] = 0;
      plVar12[0x16] = (long)param_2;
      plVar12[0x17] = 0x249249249249249;
      plVar12[0x18] = 0;
      uVar16 = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      plVar15 = param_2;
    }
    puVar18 = (undefined8 *)param_1[0xf];
    param_1[0xf] = plVar12;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar9;
      }
      (**(code **)*puVar18)(puVar18);
      plVar12 = (long *)param_1[0x10];
      uVar3 = param_1[0x11];
      uVar19 = param_1[0x12];
      uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar18,uVar3,uVar19);
      }
      else {
        FUN_00c48fe8(plVar12,puVar18,uVar3,uVar19);
      }
      lVar10 = FUN_00c4e600();
      iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_70 = plVar12 + plVar12[600] * 3;
          plStack_68 = plVar12;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar21 = (long *)*plVar12;
          plVar20 = plVar12;
          if (plVar12[600] != 0) {
            plVar20 = plVar12 + plVar12[600] * 3;
          }
          if (plVar20 == plVar12) {
            local_90 = (long *)0x0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar21) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12);
              plVar21 = (long *)*plVar12;
            }
            plVar2 = plVar12 + 3;
            if (plVar20 == plVar2) {
              local_90 = (long *)0x0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar8 = (long *)*plVar2 != plVar21;
              if (bVar8) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12 + 3);
                plVar21 = (long *)plVar12[3];
              }
              local_90 = (long *)(ulong)bVar8;
              plVar2 = plVar12 + 6;
              if (plVar20 == plVar2) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + (long)local_90 * 3,plVar12 + 6);
                  plVar21 = (long *)plVar12[6];
                  local_90 = (long *)0x2;
                }
                plVar2 = plVar12 + 9;
                if (plVar20 == plVar2) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))
                              (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 9);
                    plVar21 = (long *)plVar12[9];
                    local_90 = (long *)0x3;
                  }
                  plVar2 = plVar12 + 0xc;
                  if (plVar20 == plVar2) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))
                                (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 0xc);
                      plVar21 = (long *)plVar12[0xc];
                      local_90 = (long *)0x4;
                    }
                    plVar2 = plVar12 + 0xf;
                    if (plVar20 == plVar2) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar12 + (long)local_90 * 3,plVar12 + 0xf);
                        plVar21 = (long *)plVar12[0xf];
                        local_90 = (long *)0x5;
                      }
                      uVar13 = 6;
                      for (local_98 = plVar12 + 0x12; plVar20 != local_98; local_98 = local_98 + 3)
                      {
                        (**(code **)(*(long *)*local_98 + 0xd0))();
                        if ((long *)*local_98 != plVar21) {
                          (**(code **)(*plVar21 + 0x100))
                                    (plVar21,plVar12 + (long)local_90 * 3,local_98);
                          plVar21 = (long *)*local_98;
                          local_90 = (long *)uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + (long)local_90 * 3,plVar12 + uVar13 * 3)
          ;
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    param_1[0x10] = plVar15;
    param_1[0x11] = uVar17;
    param_1[0x12] = uVar16;
    uVar14 = (uint)*(undefined8 *)param_4;
  }
  if ((uVar14 >> 4 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,0x10);
    if (plVar12 == (long *)0x0) {
      plVar15 = (long *)0x0;
      uVar17 = 0;
      uVar16 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0131ee34;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *plVar12 = (long)(PTR_DAT_047e3160 + 0x10);
      lVar7 = _UNK_03cabe58;
      lVar6 = _DAT_03cabe50;
      lVar5 = _UNK_03caa988;
      lVar11 = _DAT_03caa980;
      uVar16 = 0xd0;
      plVar12[0xb] = _UNK_03cabe58;
      plVar12[10] = lVar6;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      uVar17 = 0x10;
      plVar12[0x17] = lVar7;
      plVar12[0x16] = lVar6;
      plVar12[0x19] = 0;
      plVar12[0x18] = 0;
      plVar12[3] = lVar5;
      plVar12[2] = lVar11;
      plVar12[5] = lVar7;
      plVar12[4] = lVar6;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[9] = lVar5;
      plVar12[8] = lVar11;
      plVar12[0xf] = lVar5;
      plVar12[0xe] = lVar11;
      plVar12[0x11] = lVar7;
      plVar12[0x10] = lVar6;
      plVar12[0x13] = 0;
      plVar12[0x12] = 0;
      plVar12[0x15] = lVar5;
      plVar12[0x14] = lVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      plVar15 = param_2;
    }
    puVar18 = (undefined8 *)param_1[0x13];
    param_1[0x13] = plVar12;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar9 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar9;
      }
      (**(code **)*puVar18)(puVar18);
      plVar12 = (long *)param_1[0x14];
      uVar3 = param_1[0x15];
      uVar19 = param_1[0x16];
      uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar18,uVar3,uVar19);
      }
      else {
        FUN_00c48fe8(plVar12,puVar18,uVar3,uVar19);
      }
      lVar10 = FUN_00c4e600();
      iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_70 = plVar12 + plVar12[600] * 3;
          plStack_68 = plVar12;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar21 = (long *)*plVar12;
          plVar20 = plVar12;
          if (plVar12[600] != 0) {
            plVar20 = plVar12 + plVar12[600] * 3;
          }
          if (plVar20 == plVar12) {
            local_88 = 0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar21) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12);
              plVar21 = (long *)*plVar12;
            }
            plVar2 = plVar12 + 3;
            if (plVar20 == plVar2) {
              local_88 = 0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar8 = (long *)*plVar2 != plVar21;
              if (bVar8) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar12,plVar12 + 3);
                plVar21 = (long *)plVar12[3];
              }
              local_88 = (ulong)bVar8;
              plVar2 = plVar12 + 6;
              if (plVar20 == plVar2) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + local_88 * 3,plVar12 + 6);
                  plVar21 = (long *)plVar12[6];
                  local_88 = 2;
                }
                plVar2 = plVar12 + 9;
                if (plVar20 == plVar2) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + local_88 * 3,plVar12 + 9);
                    plVar21 = (long *)plVar12[9];
                    local_88 = 3;
                  }
                  plVar2 = plVar12 + 0xc;
                  if (plVar20 == plVar2) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + local_88 * 3,plVar12 + 0xc);
                      plVar21 = (long *)plVar12[0xc];
                      local_88 = 4;
                    }
                    plVar2 = plVar12 + 0xf;
                    if (plVar20 == plVar2) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar21) {
                        (**(code **)(*plVar21 + 0x100))
                                  (plVar21,plVar12 + local_88 * 3,plVar12 + 0xf);
                        plVar21 = (long *)plVar12[0xf];
                        local_88 = 5;
                      }
                      uVar13 = 6;
                      for (local_90 = plVar12 + 0x12; plVar20 != local_90; local_90 = local_90 + 3)
                      {
                        (**(code **)(*(long *)*local_90 + 0xd0))();
                        if ((long *)*local_90 != plVar21) {
                          (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + local_88 * 3,local_90);
                          plVar21 = (long *)*local_90;
                          local_88 = uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar12 + local_88 * 3,plVar12 + uVar13 * 3);
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    param_1[0x14] = plVar15;
    param_1[0x15] = uVar16;
    param_1[0x16] = uVar17;
  }
  plVar12 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xd8,8);
  if (plVar12 == (long *)0x0) {
    param_2 = (long *)0x0;
    uVar16 = 0;
    uVar17 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0131ee34:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    puVar1 = PTR_DAT_047e3168;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *plVar12 = (long)(puVar1 + 0x10);
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[3] = (long)param_2;
    *(undefined4 *)(plVar12 + 6) = 0;
    plVar12[4] = 0x666666666666666;
    plVar12[5] = 0;
    uVar17 = 0xd8;
    uVar16 = 8;
    *(undefined4 *)(plVar12 + 0xb) = 0;
    plVar12[0xc] = 0;
    *(undefined4 *)(plVar12 + 0xd) = 0x3f800000;
    plVar12[0x12] = 0;
    *(undefined4 *)(plVar12 + 0x13) = 0;
    *(undefined4 *)(plVar12 + 0x18) = 0;
    plVar12[0x19] = 0;
    *(undefined4 *)(plVar12 + 0x1a) = 0x3f800000;
    plVar12[7] = 0;
    plVar12[8] = (long)param_2;
    plVar12[9] = 0x666666666666666;
    plVar12[10] = 0;
    plVar12[0xe] = 0;
    plVar12[0xf] = 0;
    plVar12[0x10] = (long)param_2;
    plVar12[0x11] = 0x666666666666666;
    plVar12[0x14] = 0;
    plVar12[0x15] = (long)param_2;
    plVar12[0x16] = 0x666666666666666;
    plVar12[0x17] = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar18 = (undefined8 *)param_1[0x17];
  param_1[0x17] = plVar12;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar9 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar9;
    }
    (**(code **)*puVar18)(puVar18);
    plVar12 = (long *)param_1[0x18];
    uVar3 = param_1[0x19];
    uVar19 = param_1[0x1a];
    uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar18,uVar3,uVar19);
    }
    else {
      FUN_00c48fe8(plVar12,puVar18,uVar3,uVar19);
    }
    lVar10 = FUN_00c4e600();
    iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        plStack_68 = plVar12;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar20 = (long *)*plVar12;
        plVar15 = plVar12;
        if (plVar12[600] != 0) {
          plVar15 = plVar12 + plVar12[600] * 3;
        }
        if (plVar15 == plVar12) {
          uVar22 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12);
            plVar20 = (long *)*plVar12;
          }
          plVar21 = plVar12 + 3;
          if (plVar15 == plVar21) {
            uVar22 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar21 + 0xd0))();
            bVar8 = (long *)*plVar21 != plVar20;
            if (bVar8) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12 + 3);
              plVar20 = (long *)plVar12[3];
            }
            uVar22 = (ulong)bVar8;
            plVar21 = plVar12 + 6;
            if (plVar15 == plVar21) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar21 + 0xd0))();
              if ((long *)*plVar21 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 6);
                plVar20 = (long *)plVar12[6];
                uVar22 = 2;
              }
              plVar21 = plVar12 + 9;
              if (plVar15 == plVar21) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar21 + 0xd0))();
                if ((long *)*plVar21 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 9);
                  plVar20 = (long *)plVar12[9];
                  uVar22 = 3;
                }
                plVar21 = plVar12 + 0xc;
                if (plVar15 == plVar21) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar21 + 0xd0))();
                  if ((long *)*plVar21 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 0xc);
                    plVar20 = (long *)plVar12[0xc];
                    uVar22 = 4;
                  }
                  plVar21 = plVar12 + 0xf;
                  if (plVar15 == plVar21) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar21 + 0xd0))();
                    if ((long *)*plVar21 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + 0xf);
                      plVar20 = (long *)plVar12[0xf];
                      uVar22 = 5;
                    }
                    uVar13 = 6;
                    for (local_78 = plVar12 + 0x12; plVar15 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,local_78);
                        plVar20 = (long *)*local_78;
                        uVar22 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + uVar22 * 3,plVar12 + uVar13 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  param_1[0x18] = param_2;
  param_1[0x19] = uVar17;
  param_1[0x1a] = uVar16;
  return;
}


