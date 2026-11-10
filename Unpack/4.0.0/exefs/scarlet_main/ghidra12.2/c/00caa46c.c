/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00caa46c; name: FUN_00caa46c
 */


void FUN_00caa46c(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long *local_c8;
  ulong local_c0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  local_98 = *(undefined8 *)(param_1 + 8);
  lVar21 = *(long *)(param_1 + 0x180);
  local_ac = param_6;
  local_a8 = param_5;
  iStack_a4 = param_4;
  local_a0 = param_3;
  iStack_9c = param_2;
  if (lVar21 == 0) {
    FUN_00eb3a30(&local_90,local_98,&local_98);
    lVar21 = local_90;
    local_90 = 0;
    lVar13 = *(long *)(param_1 + 0x180);
    *(long *)(param_1 + 0x180) = lVar21;
    if (lVar13 == 0) {
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      *(long **)(param_1 + 0x188) = local_88;
      local_90 = 0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar21 = FUN_00c4e600();
      iVar4 = *(int *)(lVar21 + 0x12c8);
      iVar8 = iVar4 + 1;
      *(int *)(lVar21 + 0x12c8) = iVar8;
      if (*(int *)(lVar21 + 0x12cc) <= iVar4) {
        *(int *)(lVar21 + 0x12cc) = iVar8;
      }
      FUN_00eea34c(lVar13);
      plVar18 = *(long **)(param_1 + 0x188);
      uVar20 = *(undefined8 *)(param_1 + 400);
      uVar14 = *(undefined8 *)(param_1 + 0x198);
      uVar16 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar16 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,uVar20,uVar14);
      }
      else {
        FUN_00c48fe8(plVar18,lVar13,uVar20,uVar14);
      }
      lVar21 = FUN_00c4e600();
      iVar8 = *(int *)(lVar21 + 0x12c8) + -1;
      *(int *)(lVar21 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar18 = (long *)FUN_00c4e600();
        if (plVar18[600] != 0) {
          local_70 = plVar18 + plVar18[600] * 3;
          plStack_68 = plVar18;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar22 = (long *)*plVar18;
          plVar3 = plVar18;
          if (plVar18[600] != 0) {
            plVar3 = plVar18 + plVar18[600] * 3;
          }
          if (plVar3 == plVar18) {
            local_c0 = 0;
            uVar16 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar18 + 0xd0))();
            if ((long *)*plVar18 != plVar22) {
              (**(code **)(*plVar22 + 0x100))(plVar22,plVar18,plVar18);
              plVar22 = (long *)*plVar18;
            }
            plVar2 = plVar18 + 3;
            if (plVar3 == plVar2) {
              local_c0 = 0;
              uVar16 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar7 = (long *)*plVar2 != plVar22;
              if (bVar7) {
                (**(code **)(*plVar22 + 0x100))(plVar22,plVar18,plVar18 + 3);
                plVar22 = (long *)plVar18[3];
              }
              local_c0 = (ulong)bVar7;
              plVar2 = plVar18 + 6;
              if (plVar3 == plVar2) {
                uVar16 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar22) {
                  (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + 6);
                  plVar22 = (long *)plVar18[6];
                  local_c0 = 2;
                }
                plVar2 = plVar18 + 9;
                if (plVar3 == plVar2) {
                  uVar16 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar22) {
                    (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + 9);
                    plVar22 = (long *)plVar18[9];
                    local_c0 = 3;
                  }
                  plVar2 = plVar18 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar16 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar22) {
                      (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + 0xc);
                      plVar22 = (long *)plVar18[0xc];
                      local_c0 = 4;
                    }
                    plVar2 = plVar18 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar16 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar22) {
                        (**(code **)(*plVar22 + 0x100))
                                  (plVar22,plVar18 + local_c0 * 3,plVar18 + 0xf);
                        plVar22 = (long *)plVar18[0xf];
                        local_c0 = 5;
                      }
                      uVar16 = 6;
                      for (local_c8 = plVar18 + 0x12; plVar3 != local_c8; local_c8 = local_c8 + 3) {
                        (**(code **)(*(long *)*local_c8 + 0xd0))();
                        if ((long *)*local_c8 != plVar22) {
                          (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,local_c8);
                          plVar22 = (long *)*local_c8;
                          local_c0 = uVar16;
                        }
                        uVar16 = uVar16 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + uVar16 * 3);
          plVar18[600] = 0;
        }
        *(undefined4 *)(lVar21 + 0x12cc) = 0;
      }
      lVar21 = local_90;
      *(long **)(param_1 + 0x188) = local_88;
      *(undefined8 *)(param_1 + 400) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_78;
      local_90 = 0;
      if (lVar21 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar4 = *(int *)(lVar13 + 0x12c8);
        iVar8 = iVar4 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar8;
        if (*(int *)(lVar13 + 0x12cc) <= iVar4) {
          *(int *)(lVar13 + 0x12cc) = iVar8;
        }
        FUN_00eea34c(lVar21);
        uVar16 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar16 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,lVar21,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,lVar21,local_80,local_78);
        }
        lVar21 = FUN_00c4e600();
        iVar8 = *(int *)(lVar21 + 0x12c8) + -1;
        *(int *)(lVar21 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar18 = (long *)FUN_00c4e600();
          if (plVar18[600] != 0) {
            local_70 = plVar18 + plVar18[600] * 3;
            plStack_68 = plVar18;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar22 = (long *)*plVar18;
            plVar3 = plVar18;
            if (plVar18[600] != 0) {
              plVar3 = plVar18 + plVar18[600] * 3;
            }
            if (plVar3 == plVar18) {
              local_c0 = 0;
              uVar16 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              if ((long *)*plVar18 != plVar22) {
                (**(code **)(*plVar22 + 0x100))(plVar22,plVar18,plVar18);
                plVar22 = (long *)*plVar18;
              }
              plVar2 = plVar18 + 3;
              if (plVar3 == plVar2) {
                local_c0 = 0;
                uVar16 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar7 = (long *)*plVar2 != plVar22;
                if (bVar7) {
                  (**(code **)(*plVar22 + 0x100))(plVar22,plVar18,plVar18 + 3);
                  plVar22 = (long *)plVar18[3];
                }
                local_c0 = (ulong)bVar7;
                plVar2 = plVar18 + 6;
                if (plVar3 == plVar2) {
                  uVar16 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar22) {
                    (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + 6);
                    plVar22 = (long *)plVar18[6];
                    local_c0 = 2;
                  }
                  plVar2 = plVar18 + 9;
                  if (plVar3 == plVar2) {
                    uVar16 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar22) {
                      (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + 9);
                      plVar22 = (long *)plVar18[9];
                      local_c0 = 3;
                    }
                    plVar2 = plVar18 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar16 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar22) {
                        (**(code **)(*plVar22 + 0x100))
                                  (plVar22,plVar18 + local_c0 * 3,plVar18 + 0xc);
                        plVar22 = (long *)plVar18[0xc];
                        local_c0 = 4;
                      }
                      plVar2 = plVar18 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar16 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar22) {
                          (**(code **)(*plVar22 + 0x100))
                                    (plVar22,plVar18 + local_c0 * 3,plVar18 + 0xf);
                          plVar22 = (long *)plVar18[0xf];
                          local_c0 = 5;
                        }
                        uVar16 = 6;
                        for (local_c8 = plVar18 + 0x12; plVar3 != local_c8; local_c8 = local_c8 + 3)
                        {
                          (**(code **)(*(long *)*local_c8 + 0xd0))();
                          if ((long *)*local_c8 != plVar22) {
                            (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,local_c8)
                            ;
                            plVar22 = (long *)*local_c8;
                            local_c0 = uVar16;
                          }
                          uVar16 = uVar16 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar22 + 0x100))(plVar22,plVar18 + local_c0 * 3,plVar18 + uVar16 * 3);
            plVar18[600] = 0;
          }
          *(undefined4 *)(lVar21 + 0x12cc) = 0;
        }
      }
    }
    lVar21 = *(long *)(param_1 + 0x180);
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  piVar19 = *(int **)(lVar21 + 0x1a0);
  piVar17 = *(int **)(lVar21 + 0x1a8);
  if (piVar19 != piVar17) {
    piVar12 = piVar19;
    do {
      if (*piVar12 == param_2) {
        bVar5 = piVar12[1] != param_3;
        if (bVar5) {
          piVar12[1] = param_3;
        }
        bVar6 = piVar12[2] != param_4;
        if (bVar6) {
          piVar12[2] = param_4;
        }
        iVar8 = piVar12[3];
        if (iVar8 != param_5) {
          piVar12[3] = param_5;
        }
        if (piVar12[4] == param_6) {
          if ((!bVar5 && ((!bVar6 && !bVar5) && (iVar8 == param_5 && (!bVar6 && !bVar5)))) &&
             (bVar7)) {
            return;
          }
        }
        else {
          piVar12[4] = param_6;
        }
        goto LAB_00caa6ec;
      }
      piVar12 = piVar12 + 5;
    } while (piVar17 != piVar12);
  }
  if (piVar17 < *(int **)(lVar21 + 0x1b0)) {
    FUN_0270b470((long *)(lVar21 + 0x1a0),&iStack_9c,&local_a0,&iStack_a4,&local_a8,&local_ac);
  }
  else {
    uVar16 = *(ulong *)(lVar21 + 0x1c0);
    lVar13 = (long)piVar17 - (long)piVar19 >> 2;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar1 = lVar13 * -0x3333333333333333 + 1;
    if (uVar16 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)*(int **)(lVar21 + 0x1b0) - (long)piVar19 >> 2;
    uVar15 = lVar11 * -0x6666666666666666;
    if (uVar1 <= uVar15) {
      uVar1 = uVar15;
    }
    if (uVar16 >> 1 <= (ulong)(lVar11 * -0x3333333333333333)) {
      uVar1 = uVar16;
    }
    if (uVar1 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(**(long **)(lVar21 + 0x1b8) + 0x10))
                         (*(long **)(lVar21 + 0x1b8),uVar1 * 0x14,4);
      if (lVar11 == 0) {
        (**(code **)(**(long **)(lVar21 + 0x1b8) + 0xe8))();
      }
    }
    piVar19 = (int *)(lVar11 + lVar13 * 4);
    uVar20 = *(undefined8 *)(lVar21 + 0x1b8);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      lVar13 = lVar11 + lVar13 * 4;
      *piVar19 = param_2;
      *(int *)(lVar13 + 4) = param_3;
      *(int *)(lVar13 + 8) = param_4;
      *(int *)(lVar13 + 0xc) = param_5;
      *(int *)(lVar13 + 0x10) = param_6;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00caaf2c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar20;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar13 = lVar11 + lVar13 * 4;
      *piVar19 = param_2;
      *(int *)(lVar13 + 4) = param_3;
      *(int *)(lVar13 + 8) = param_4;
      *(int *)(lVar13 + 0xc) = param_5;
      *(int *)(lVar13 + 0x10) = param_6;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    lVar13 = *(long *)(lVar21 + 0x1a0);
    lVar9 = *(long *)(lVar21 + 0x1a8);
    piVar17 = piVar19;
    if (lVar9 != lVar13) {
      do {
        uVar20 = *(undefined8 *)(lVar21 + 0x1b8);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          uVar20 = *(undefined8 *)(lVar9 + -0x14);
          uVar14 = *(undefined8 *)(lVar9 + -0xc);
          piVar17[-1] = *(int *)(lVar9 + -4);
          *(undefined8 *)(piVar17 + -3) = uVar14;
          *(undefined8 *)(piVar17 + -5) = uVar20;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00caaf2c;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar20;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          uVar20 = *(undefined8 *)(lVar9 + -0x14);
          uVar14 = *(undefined8 *)(lVar9 + -0xc);
          piVar17[-1] = *(int *)(lVar9 + -4);
          *(undefined8 *)(piVar17 + -3) = uVar14;
          *(undefined8 *)(piVar17 + -5) = uVar20;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        lVar9 = lVar9 + -0x14;
        piVar17 = piVar17 + -5;
      } while (lVar13 != lVar9);
      lVar13 = *(long *)(lVar21 + 0x1a0);
    }
    *(int **)(lVar21 + 0x1a0) = piVar17;
    *(int **)(lVar21 + 0x1a8) = piVar19 + 5;
    lVar9 = *(long *)(lVar21 + 0x1b0);
    *(ulong *)(lVar21 + 0x1b0) = lVar11 + uVar1 * 0x14;
    if (lVar13 != 0) {
      plVar18 = *(long **)(lVar21 + 0x1b8);
      lVar9 = lVar9 - lVar13;
      uVar16 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar16 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,lVar9,4);
      }
      else {
        FUN_00c48fe8(plVar18,lVar13,lVar9,4);
      }
    }
  }
LAB_00caa6ec:
  lVar21 = *(long *)(param_1 + 0x208);
  lVar13 = *(long *)(param_1 + 0x210);
  if (((lVar21 != lVar13) && (*(undefined1 *)(lVar21 + 0x10) = 1, lVar21 + 0x18 != lVar13)) &&
     (*(undefined1 *)(lVar21 + 0x28) = 1, lVar21 + 0x30 != lVar13)) {
    *(undefined1 *)(lVar21 + 0x40) = 1;
    for (lVar21 = lVar21 + 0x48; lVar21 != lVar13; lVar21 = lVar21 + 0x18) {
      *(undefined1 *)(lVar21 + 0x10) = 1;
    }
  }
  return;
}


