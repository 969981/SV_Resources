/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01532274; name: FUN_01532274
 */


void FUN_01532274(undefined4 param_1,long *param_2,byte param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  void *__s;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  size_t __n;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *local_a0;
  ulong local_98;
  long *local_78;
  long *local_68;
  
  param_2[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = (long)&PTR_FUN_0459c918;
  param_2[1] = (long)plVar15;
  param_2[4] = (long)&PTR_LAB_0459c9a0;
  plVar14 = param_2 + 6;
  *plVar14 = 0;
  *(undefined4 *)((long)param_2 + 0x6c) = param_1;
  *(byte *)(param_2 + 0x10) = param_3;
  *(undefined4 *)((long)param_2 + 0x84) = 0;
  *(undefined4 *)((long)param_2 + 0x81) = 0;
  *(undefined1 *)(param_2 + 0x11) = param_5;
  *(undefined1 *)((long)param_2 + 0x89) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0x94) = 0;
  *(undefined4 *)((long)param_2 + 0x9b) = 0;
  param_2[0xb] = param_4;
  param_2[0xc] = 0x3e4ccccd00000000;
  *(undefined4 *)(param_2 + 0xd) = 0x3e051eb8;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  __n = ((ulong)param_3 * 8 + (ulong)param_3) * 0x10;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined8 *)((long)param_2 + 0xc6) = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((long)param_2 + 0xee) = 0;
  __s = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,__n,0x10);
  if (__s == (void *)0x0) {
    plVar15 = (long *)0x0;
    __n = 0;
    lVar8 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_01532db4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    lVar13 = *(long *)(lVar9 + 0x80) + 1;
    *(long *)(lVar9 + 0x80) = lVar13;
    if (param_3 != 0) {
      memset(__s,0,__n);
      lVar13 = *(long *)(lVar9 + 0x80);
    }
    lVar8 = 0x10;
    *(long *)(lVar9 + 0x80) = lVar13 + -1;
  }
  lVar9 = *plVar14;
  *plVar14 = (long)__s;
  if (lVar9 != 0) {
    FUN_017a4ce4(param_2 + 7);
    __s = (void *)param_2[6];
  }
  param_2[7] = (long)plVar15;
  param_2[8] = __n;
  param_2[9] = lVar8;
  if (__s != (void *)0x0) {
    if (param_3 != 0) {
      uVar16 = 0;
      do {
        plVar15 = (long *)param_2[1];
        puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x18,4);
        if (puVar10 == (undefined8 *)0x0) {
          plVar15 = (long *)0x0;
          uVar18 = 0;
          uVar17 = 0;
        }
        else {
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01532db4;
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          uVar18 = 0x18;
          uVar17 = 4;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar9 = *plVar14;
        lVar8 = lVar9 + uVar16 * 0x90;
        lVar13 = *(long *)(lVar8 + 0x40);
        *(undefined8 **)(lVar8 + 0x40) = puVar10;
        if (lVar13 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar8 = FUN_00c4e600();
          iVar4 = *(int *)(lVar8 + 0x12c8);
          iVar7 = iVar4 + 1;
          *(int *)(lVar8 + 0x12c8) = iVar7;
          if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
            *(int *)(lVar8 + 0x12cc) = iVar7;
          }
          lVar8 = lVar9 + uVar16 * 0x90;
          plVar12 = *(long **)(lVar8 + 0x48);
          uVar3 = *(undefined8 *)(lVar8 + 0x50);
          uVar19 = *(undefined8 *)(lVar8 + 0x58);
          uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,uVar3,uVar19);
          }
          else {
            FUN_00c48fe8(plVar12,lVar13,uVar3,uVar19);
          }
          lVar8 = FUN_00c4e600();
          iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
          *(int *)(lVar8 + 0x12c8) = iVar7;
          if (iVar7 == 0) {
            plVar12 = (long *)FUN_00c4e600();
            if (plVar12[600] != 0) {
              local_78 = plVar12 + plVar12[600] * 3;
              local_68 = plVar12;
              FUN_00c4ea30(&local_68,&local_78);
              plVar20 = (long *)*plVar12;
              plVar2 = plVar12;
              if (plVar12[600] != 0) {
                plVar2 = plVar12 + plVar12[600] * 3;
              }
              if (plVar2 == plVar12) {
                local_98 = 0;
                uVar11 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12);
                  plVar20 = (long *)*plVar12;
                }
                plVar1 = plVar12 + 3;
                if (plVar2 == plVar1) {
                  local_98 = 0;
                  uVar11 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  bVar6 = (long *)*plVar1 != plVar20;
                  if (bVar6) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12 + 3);
                    plVar20 = (long *)plVar12[3];
                  }
                  local_98 = (ulong)bVar6;
                  plVar1 = plVar12 + 6;
                  if (plVar2 == plVar1) {
                    uVar11 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + local_98 * 3,plVar12 + 6);
                      plVar20 = (long *)plVar12[6];
                      local_98 = 2;
                    }
                    plVar1 = plVar12 + 9;
                    if (plVar2 == plVar1) {
                      uVar11 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + local_98 * 3,plVar12 + 9);
                        plVar20 = (long *)plVar12[9];
                        local_98 = 3;
                      }
                      plVar1 = plVar12 + 0xc;
                      if (plVar2 == plVar1) {
                        uVar11 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar20) {
                          (**(code **)(*plVar20 + 0x100))
                                    (plVar20,plVar12 + local_98 * 3,plVar12 + 0xc);
                          plVar20 = (long *)plVar12[0xc];
                          local_98 = 4;
                        }
                        plVar1 = plVar12 + 0xf;
                        if (plVar2 == plVar1) {
                          uVar11 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))
                                      (plVar20,plVar12 + local_98 * 3,plVar12 + 0xf);
                            plVar20 = (long *)plVar12[0xf];
                            local_98 = 5;
                          }
                          local_a0 = plVar12 + 0x12;
                          uVar11 = 6;
                          if (plVar2 != local_a0) {
                            do {
                              (**(code **)(*(long *)*local_a0 + 0xd0))();
                              if ((long *)*local_a0 != plVar20) {
                                (**(code **)(*plVar20 + 0x100))
                                          (plVar20,plVar12 + local_98 * 3,local_a0);
                                plVar20 = (long *)*local_a0;
                                local_98 = uVar11;
                              }
                              local_a0 = local_a0 + 3;
                              uVar11 = uVar11 + 1;
                            } while (plVar2 != local_a0);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + local_98 * 3,plVar12 + uVar11 * 3);
              plVar12[600] = 0;
            }
            *(undefined4 *)(lVar8 + 0x12cc) = 0;
          }
        }
        lVar9 = lVar9 + uVar16 * 0x90;
        *(long **)(lVar9 + 0x48) = plVar15;
        *(undefined8 *)(lVar9 + 0x50) = uVar18;
        *(undefined8 *)(lVar9 + 0x58) = uVar17;
        plVar15 = (long *)param_2[1];
        puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x40,0x10);
        if (puVar10 == (undefined8 *)0x0) {
          plVar15 = (long *)0x0;
          uVar18 = 0;
          uVar17 = 0;
        }
        else {
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01532db4;
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          uVar18 = 0x40;
          puVar10[6] = 0;
          puVar10[7] = 0;
          uVar17 = 0x10;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar9 = *plVar14;
        lVar8 = lVar9 + uVar16 * 0x90;
        lVar13 = *(long *)(lVar8 + 0x60);
        *(undefined8 **)(lVar8 + 0x60) = puVar10;
        if (lVar13 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar8 = FUN_00c4e600();
          iVar4 = *(int *)(lVar8 + 0x12c8);
          iVar7 = iVar4 + 1;
          *(int *)(lVar8 + 0x12c8) = iVar7;
          if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
            *(int *)(lVar8 + 0x12cc) = iVar7;
          }
          lVar8 = lVar9 + uVar16 * 0x90;
          plVar12 = *(long **)(lVar8 + 0x68);
          uVar3 = *(undefined8 *)(lVar8 + 0x70);
          uVar19 = *(undefined8 *)(lVar8 + 0x78);
          uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,uVar3,uVar19);
          }
          else {
            FUN_00c48fe8(plVar12,lVar13,uVar3,uVar19);
          }
          lVar8 = FUN_00c4e600();
          iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
          *(int *)(lVar8 + 0x12c8) = iVar7;
          if (iVar7 == 0) {
            plVar12 = (long *)FUN_00c4e600();
            if (plVar12[600] != 0) {
              local_78 = plVar12 + plVar12[600] * 3;
              local_68 = plVar12;
              FUN_00c4ea30(&local_68,&local_78);
              plVar20 = (long *)*plVar12;
              plVar2 = plVar12;
              if (plVar12[600] != 0) {
                plVar2 = plVar12 + plVar12[600] * 3;
              }
              if (plVar2 == plVar12) {
                local_98 = 0;
                uVar11 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12);
                  plVar20 = (long *)*plVar12;
                }
                plVar1 = plVar12 + 3;
                if (plVar2 == plVar1) {
                  local_98 = 0;
                  uVar11 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  bVar6 = (long *)*plVar1 != plVar20;
                  if (bVar6) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar12,plVar12 + 3);
                    plVar20 = (long *)plVar12[3];
                  }
                  local_98 = (ulong)bVar6;
                  plVar1 = plVar12 + 6;
                  if (plVar2 == plVar1) {
                    uVar11 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + local_98 * 3,plVar12 + 6);
                      plVar20 = (long *)plVar12[6];
                      local_98 = 2;
                    }
                    plVar1 = plVar12 + 9;
                    if (plVar2 == plVar1) {
                      uVar11 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + local_98 * 3,plVar12 + 9);
                        plVar20 = (long *)plVar12[9];
                        local_98 = 3;
                      }
                      plVar1 = plVar12 + 0xc;
                      if (plVar2 == plVar1) {
                        uVar11 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar20) {
                          (**(code **)(*plVar20 + 0x100))
                                    (plVar20,plVar12 + local_98 * 3,plVar12 + 0xc);
                          plVar20 = (long *)plVar12[0xc];
                          local_98 = 4;
                        }
                        plVar1 = plVar12 + 0xf;
                        if (plVar2 == plVar1) {
                          uVar11 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar20) {
                            (**(code **)(*plVar20 + 0x100))
                                      (plVar20,plVar12 + local_98 * 3,plVar12 + 0xf);
                            plVar20 = (long *)plVar12[0xf];
                            local_98 = 5;
                          }
                          local_a0 = plVar12 + 0x12;
                          uVar11 = 6;
                          if (plVar2 != local_a0) {
                            do {
                              (**(code **)(*(long *)*local_a0 + 0xd0))();
                              if ((long *)*local_a0 != plVar20) {
                                (**(code **)(*plVar20 + 0x100))
                                          (plVar20,plVar12 + local_98 * 3,local_a0);
                                plVar20 = (long *)*local_a0;
                                local_98 = uVar11;
                              }
                              local_a0 = local_a0 + 3;
                              uVar11 = uVar11 + 1;
                            } while (plVar2 != local_a0);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar12 + local_98 * 3,plVar12 + uVar11 * 3);
              plVar12[600] = 0;
            }
            *(undefined4 *)(lVar8 + 0x12cc) = 0;
          }
        }
        lVar9 = lVar9 + uVar16 * 0x90;
        uVar16 = uVar16 + 1;
        *(undefined8 *)(lVar9 + 0x78) = uVar17;
        *(long **)(lVar9 + 0x68) = plVar15;
        *(undefined8 *)(lVar9 + 0x70) = uVar18;
      } while (uVar16 != param_3);
    }
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)((long)param_2 + 0x6c);
    *(char *)((long)param_2 + 0x89) = (char)param_2[0x11];
    *(undefined1 *)((long)param_2 + 0xf4) = 1;
  }
  return;
}


