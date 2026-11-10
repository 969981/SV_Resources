/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a60bf4; name: FUN_00a60bf4
 */


void FUN_00a60bf4(long param_1,long *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  ulong *puVar2;
  ushort uVar3;
  undefined *__compar;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  int *piVar19;
  ulong *puVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  int iVar27;
  int local_f8;
  int *local_e8;
  int *local_e0;
  int *local_d0;
  int *local_c8;
  undefined1 auStack_b8 [8];
  int *local_b0;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (param_2 != (long *)0x0) {
    if (param_3 == 2) {
      puVar13 = (undefined8 *)(param_1 + 0x60);
    }
    else if (param_3 == 1) {
      puVar13 = (undefined8 *)(param_1 + 0x48);
    }
    else {
      if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("false","GetDataTable",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
                   ,0x7d,"pokedex kind out of range");
      }
      puVar13 = (undefined8 *)(param_1 + 0x30);
    }
    uStack_80 = *puVar13;
    local_78 = puVar13[1];
    uStack_70 = puVar13[2];
    local_a0 = &DAT_fbec41851566601b;
    local_98 = "values";
    local_88 = (long *)0x0;
    iVar21 = 0x12;
    if ((param_4 & 0xfffffffe) != 0x298) {
      iVar21 = param_5;
    }
    iVar1 = 0;
    if (param_4 != 0x2e8) {
      iVar1 = iVar21;
    }
    local_90 = 6;
    piVar7 = (int *)FUN_00efa07c(&uStack_80,&local_a0);
    if (piVar7 == (int *)0x0) {
      local_f8 = 0;
    }
    else {
      local_f8 = *piVar7;
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    __compar = PTR_LAB_047d5600;
    if (local_f8 != 0) {
      iVar21 = 0;
      do {
        local_88 = (long *)0x0;
        local_a0 = &DAT_fbec41851566601b;
        local_98 = "values";
        local_90 = 6;
        FUN_00e90ee0(auStack_b8,&uStack_80,&local_a0,iVar21);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_b0 != (int *)0x0) {
          if ((*(ushort *)((long)local_b0 - (long)*local_b0) < 7) ||
             (uVar15 = (ulong)((ushort *)((long)local_b0 - (long)*local_b0))[3], uVar15 == 0)) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = (uint *)((long)local_b0 + uVar15);
            puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
          }
          local_a0 = "distribution_data_list";
          pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,(__compar_fn_t)__compar);
          if (pvVar8 != (void *)0x0) {
            local_a0 = (char *)0x9e6f226727f2f66d;
            local_98 = "distribution_data_list";
            local_90 = 0x16;
            local_88 = (long *)0x0;
            piVar7 = (int *)FUN_00efa07c(auStack_b8,&local_a0);
            if (piVar7 == (int *)0x0) {
              iVar22 = 0;
            }
            else {
              iVar22 = *piVar7;
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            if (iVar22 != 0) {
              iVar27 = 0;
              do {
                local_a0 = (char *)0x9e6f226727f2f66d;
                local_98 = "distribution_data_list";
                local_90 = 0x16;
                local_88 = (long *)0x0;
                FUN_00e90ee0(&local_d0,auStack_b8,&local_a0,iVar27);
                if (local_88 != (long *)0x0) {
                  (**(code **)(*local_88 + 0x20))();
                }
                if (local_c8 != (int *)0x0) {
                  if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
                     (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3], uVar15 == 0
                     )) {
                    puVar9 = (uint *)0x0;
                  }
                  else {
                    puVar9 = (uint *)((long)local_c8 + uVar15);
                    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                  }
                  local_a0 = "gridParam";
                  pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,(__compar_fn_t)__compar);
                  if ((pvVar8 != (void *)0x0) && (local_c8 != (int *)0x0)) {
                    if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
                       (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3],
                       uVar15 == 0)) {
                      puVar9 = (uint *)0x0;
                    }
                    else {
                      puVar9 = (uint *)((long)local_c8 + uVar15);
                      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                    }
                    local_a0 = "devNo";
                    pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,(__compar_fn_t)__compar);
                    if ((pvVar8 != (void *)0x0) && (local_c8 != (int *)0x0)) {
                      if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
                         (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3],
                         uVar15 == 0)) {
                        puVar9 = (uint *)0x0;
                      }
                      else {
                        puVar9 = (uint *)((long)local_c8 + uVar15);
                        puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                      }
                      local_a0 = "formNo";
                      pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,(__compar_fn_t)__compar
                                      );
                      if ((pvVar8 != (void *)0x0) && (local_c8 != (int *)0x0)) {
                        if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
                           (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3],
                           uVar15 == 0)) {
                          puVar9 = (uint *)0x0;
                        }
                        else {
                          puVar9 = (uint *)((long)local_c8 + uVar15);
                          puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                        }
                        local_a0 = "versionA";
                        pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                         (__compar_fn_t)__compar);
                        if ((pvVar8 != (void *)0x0) && (local_c8 != (int *)0x0)) {
                          if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
                             (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3],
                             uVar15 == 0)) {
                            puVar9 = (uint *)0x0;
                          }
                          else {
                            puVar9 = (uint *)((long)local_c8 + uVar15);
                            puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                          }
                          local_a0 = "versionB";
                          pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                           (__compar_fn_t)__compar);
                          if (pvVar8 != (void *)0x0) {
                            if (local_c8 == (int *)0x0) {
                              uVar25 = 0;
LAB_00a6167c:
                              iVar6 = 0;
                            }
                            else {
                              if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
                                 (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3],
                                 uVar15 == 0)) {
LAB_00a61654:
                                uVar25 = 0;
                              }
                              else {
                                puVar9 = (uint *)((long)local_c8 + uVar15);
                                puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                                local_a0 = "devNo";
                                puVar9 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                                 (__compar_fn_t)__compar);
                                if ((puVar9 == (uint *)0x0) || (local_d0 == (int *)0x0)) {
                                  uVar25 = 0;
                                }
                                else {
                                  piVar7 = (int *)((long)puVar9 + (ulong)*puVar9);
                                  puVar17 = (ushort *)((long)piVar7 - (long)*piVar7);
                                  uVar3 = *puVar17;
                                  if (uVar3 < 7) {
                                    piVar19 = (int *)0x0;
                                  }
                                  else {
                                    piVar19 = (int *)0x0;
                                    if ((ulong)puVar17[3] != 0) {
                                      puVar9 = (uint *)((long)piVar7 + (ulong)puVar17[3]);
                                      piVar19 = (int *)((long)puVar9 + (ulong)*puVar9);
                                    }
                                  }
                                  if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
                                     (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))
                                                      [2], uVar15 == 0)) {
                                    uVar15 = 0;
                                  }
                                  else {
                                    uVar15 = (long)*(char *)((long)piVar19 + uVar15) & 0xffffffff;
                                  }
                                  if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 4) {
                                    if (uVar3 < 0xb) {
                                      uVar4 = 0;
LAB_00a610c0:
                                      uVar25 = 0;
                                    }
                                    else {
                                      uVar4 = 0;
                                      if ((ulong)puVar17[5] != 0) {
                                        uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar17[5]);
                                      }
                                      if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                      goto LAB_00a610c0;
                                      uVar25 = *(uint *)((long)piVar7 + (ulong)puVar17[6]);
                                    }
                                    if ((uVar4 < *(ushort *)((long)local_d0 - (long)*local_d0)) &&
                                       (uVar15 = (ulong)*(ushort *)
                                                         (((long)local_d0 - (long)*local_d0) +
                                                         (ulong)uVar4), uVar15 != 0)) {
                                      uVar25 = *(uint *)((long)local_d0 + uVar15);
                                    }
                                  }
                                  else {
                                    if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                    goto LAB_00a61654;
                                    uVar25 = *(uint *)((long)piVar7 + (ulong)puVar17[6]);
                                  }
                                }
                              }
                              if (((local_c8 != (int *)0x0) &&
                                  (6 < *(ushort *)((long)local_c8 - (long)*local_c8))) &&
                                 (uVar15 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3],
                                 uVar15 != 0)) {
                                puVar9 = (uint *)((long)local_c8 + uVar15);
                                puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                                local_a0 = "formNo";
                                puVar9 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                                 (__compar_fn_t)__compar);
                                if ((puVar9 != (uint *)0x0) && (local_d0 != (int *)0x0)) {
                                  piVar7 = (int *)((long)puVar9 + (ulong)*puVar9);
                                  puVar17 = (ushort *)((long)piVar7 - (long)*piVar7);
                                  uVar3 = *puVar17;
                                  if (uVar3 < 7) {
                                    piVar19 = (int *)0x0;
                                  }
                                  else {
                                    piVar19 = (int *)0x0;
                                    if ((ulong)puVar17[3] != 0) {
                                      puVar9 = (uint *)((long)piVar7 + (ulong)puVar17[3]);
                                      piVar19 = (int *)((long)puVar9 + (ulong)*puVar9);
                                    }
                                  }
                                  if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
                                     (uVar15 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))
                                                      [2], uVar15 == 0)) {
                                    uVar15 = 0;
                                  }
                                  else {
                                    uVar15 = (long)*(char *)((long)piVar19 + uVar15) & 0xffffffff;
                                  }
                                  if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) != 4) {
                                    if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                    goto LAB_00a6167c;
                                    iVar6 = *(int *)((long)piVar7 + (ulong)puVar17[6]);
                                    goto LAB_00a61214;
                                  }
                                  if (uVar3 < 0xb) {
                                    uVar4 = 0;
LAB_00a611f0:
                                    iVar6 = 0;
                                  }
                                  else {
                                    uVar4 = 0;
                                    if ((ulong)puVar17[5] != 0) {
                                      uVar4 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar17[5]);
                                    }
                                    if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                    goto LAB_00a611f0;
                                    iVar6 = *(int *)((long)piVar7 + (ulong)puVar17[6]);
                                  }
                                  if ((uVar4 < *(ushort *)((long)local_d0 - (long)*local_d0)) &&
                                     (uVar15 = (ulong)*(ushort *)
                                                       (((long)local_d0 - (long)*local_d0) +
                                                       (ulong)uVar4), uVar15 != 0)) {
                                    iVar6 = *(int *)((long)local_d0 + uVar15);
                                  }
                                  goto LAB_00a61214;
                                }
                              }
                              iVar6 = 0;
                            }
LAB_00a61214:
                            local_88 = (long *)0x0;
                            local_a0 = (char *)0xb2e8f1bfb9b234e2;
                            local_98 = "versionA";
                            local_90 = 8;
                            uVar4 = FUN_00cf7518(&local_d0,&local_a0);
                            if (local_88 != (long *)0x0) {
                              (**(code **)(*local_88 + 0x20))();
                            }
                            local_88 = (long *)0x0;
                            local_a0 = (char *)0xb2e8f0bfb9b2332f;
                            local_98 = "versionB";
                            local_90 = 8;
                            uVar5 = FUN_00cf7518(&local_d0,&local_a0);
                            if (local_88 != (long *)0x0) {
                              (**(code **)(*local_88 + 0x20))();
                            }
                            if ((uVar25 == param_4) && (iVar6 == iVar1)) {
                              if (DAT_048420a8 != 0x32) {
                                uVar4 = uVar5;
                              }
                              if ((uVar4 & 1) != 0) {
                                local_a0 = (char *)0x2ba8a731d12c578e;
                                local_98 = "gridParam";
                                local_90 = 9;
                                local_88 = (long *)0x0;
                                FUN_00d996a8(&local_e8,&local_d0,&local_a0);
                                if (local_88 != (long *)0x0) {
                                  (**(code **)(*local_88 + 0x20))();
                                }
                                if (local_e0 != (int *)0x0) {
                                  if ((*(ushort *)((long)local_e0 - (long)*local_e0) < 7) ||
                                     (uVar15 = (ulong)((ushort *)((long)local_e0 - (long)*local_e0))
                                                      [3], uVar15 == 0)) {
                                    puVar9 = (uint *)0x0;
                                  }
                                  else {
                                    puVar9 = (uint *)((long)local_e0 + uVar15);
                                    puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                                  }
                                  local_a0 = "x";
                                  pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                                   (__compar_fn_t)__compar);
                                  if ((pvVar8 != (void *)0x0) && (local_e0 != (int *)0x0)) {
                                    if ((*(ushort *)((long)local_e0 - (long)*local_e0) < 7) ||
                                       (uVar15 = (ulong)((ushort *)
                                                        ((long)local_e0 - (long)*local_e0))[3],
                                       uVar15 == 0)) {
                                      puVar9 = (uint *)0x0;
                                    }
                                    else {
                                      puVar9 = (uint *)((long)local_e0 + uVar15);
                                      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                                    }
                                    local_a0 = "y";
                                    pvVar8 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                                     (__compar_fn_t)__compar);
                                    if (pvVar8 != (void *)0x0) {
                                      if (local_e0 == (int *)0x0) {
                                        uVar25 = 0;
LAB_00a616c4:
                                        uVar15 = 0;
                                      }
                                      else {
                                        if ((*(ushort *)((long)local_e0 - (long)*local_e0) < 7) ||
                                           (uVar15 = (ulong)((ushort *)
                                                            ((long)local_e0 - (long)*local_e0))[3],
                                           uVar15 == 0)) {
LAB_00a616a0:
                                          uVar25 = 0;
                                        }
                                        else {
                                          puVar9 = (uint *)((long)local_e0 + uVar15);
                                          puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                                          local_a0 = "x";
                                          puVar9 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                                           (__compar_fn_t)__compar);
                                          if ((puVar9 == (uint *)0x0) || (local_e8 == (int *)0x0))
                                          goto LAB_00a616a0;
                                          piVar7 = (int *)((long)puVar9 + (ulong)*puVar9);
                                          puVar17 = (ushort *)((long)piVar7 - (long)*piVar7);
                                          uVar3 = *puVar17;
                                          if (uVar3 < 7) {
                                            piVar19 = (int *)0x0;
                                          }
                                          else {
                                            piVar19 = (int *)0x0;
                                            if ((ulong)puVar17[3] != 0) {
                                              puVar9 = (uint *)((long)piVar7 + (ulong)puVar17[3]);
                                              piVar19 = (int *)((long)puVar9 + (ulong)*puVar9);
                                            }
                                          }
                                          if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
                                             (uVar15 = (ulong)((ushort *)
                                                              ((long)piVar19 - (long)*piVar19))[2],
                                             uVar15 == 0)) {
                                            uVar15 = 0;
                                          }
                                          else {
                                            uVar15 = (long)*(char *)((long)piVar19 + uVar15) &
                                                     0xffffffff;
                                          }
                                          if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 4) {
                                            if (uVar3 < 0xb) {
                                              uVar4 = 0;
LAB_00a614e0:
                                              uVar25 = 0;
                                            }
                                            else {
                                              uVar4 = 0;
                                              if ((ulong)puVar17[5] != 0) {
                                                uVar4 = (uint)*(ushort *)
                                                               ((long)piVar7 + (ulong)puVar17[5]);
                                              }
                                              if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                              goto LAB_00a614e0;
                                              uVar25 = *(uint *)((long)piVar7 + (ulong)puVar17[6]);
                                            }
                                            if ((uVar4 < *(ushort *)
                                                          ((long)local_e8 - (long)*local_e8)) &&
                                               (uVar15 = (ulong)*(ushort *)
                                                                 (((long)local_e8 - (long)*local_e8)
                                                                 + (ulong)uVar4), uVar15 != 0)) {
                                              uVar25 = *(uint *)((long)local_e8 + uVar15);
                                            }
                                          }
                                          else {
                                            if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                            goto LAB_00a616a0;
                                            uVar25 = *(uint *)((long)piVar7 + (ulong)puVar17[6]);
                                          }
                                        }
                                        if (((local_e0 == (int *)0x0) ||
                                            (*(ushort *)((long)local_e0 - (long)*local_e0) < 7)) ||
                                           (uVar15 = (ulong)((ushort *)
                                                            ((long)local_e0 - (long)*local_e0))[3],
                                           uVar15 == 0)) goto LAB_00a616c4;
                                        puVar9 = (uint *)((long)local_e0 + uVar15);
                                        puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                                        local_a0 = "y";
                                        puVar9 = bsearch(&local_a0,puVar9 + 1,(ulong)*puVar9,4,
                                                         (__compar_fn_t)__compar);
                                        if ((puVar9 == (uint *)0x0) || (local_e8 == (int *)0x0))
                                        goto LAB_00a616c4;
                                        piVar7 = (int *)((long)puVar9 + (ulong)*puVar9);
                                        puVar17 = (ushort *)((long)piVar7 - (long)*piVar7);
                                        uVar3 = *puVar17;
                                        if (uVar3 < 7) {
                                          piVar19 = (int *)0x0;
                                        }
                                        else {
                                          piVar19 = (int *)0x0;
                                          if ((ulong)puVar17[3] != 0) {
                                            puVar9 = (uint *)((long)piVar7 + (ulong)puVar17[3]);
                                            piVar19 = (int *)((long)puVar9 + (ulong)*puVar9);
                                          }
                                        }
                                        if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
                                           (uVar15 = (ulong)((ushort *)
                                                            ((long)piVar19 - (long)*piVar19))[2],
                                           uVar15 == 0)) {
                                          uVar15 = 0;
                                        }
                                        else {
                                          uVar15 = (long)*(char *)((long)piVar19 + uVar15) &
                                                   0xffffffff;
                                        }
                                        if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 4) {
                                          if (uVar3 < 0xb) {
                                            uVar4 = 0;
LAB_00a61608:
                                            uVar15 = 0;
                                          }
                                          else {
                                            uVar4 = 0;
                                            if ((ulong)puVar17[5] != 0) {
                                              uVar4 = (uint)*(ushort *)
                                                             ((long)piVar7 + (ulong)puVar17[5]);
                                            }
                                            if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                            goto LAB_00a61608;
                                            uVar15 = (ulong)*(uint *)((long)piVar7 +
                                                                     (ulong)puVar17[6]);
                                          }
                                          if ((uVar4 < *(ushort *)((long)local_e8 - (long)*local_e8)
                                              ) && (uVar16 = (ulong)*(ushort *)
                                                                     (((long)local_e8 -
                                                                      (long)*local_e8) +
                                                                     (ulong)uVar4), uVar16 != 0)) {
                                            uVar15 = (ulong)*(uint *)((long)local_e8 + uVar16);
                                          }
                                        }
                                        else {
                                          if ((uVar3 < 0xd) || ((ulong)puVar17[6] == 0))
                                          goto LAB_00a616c4;
                                          uVar15 = (ulong)*(uint *)((long)piVar7 + (ulong)puVar17[6]
                                                                   );
                                        }
                                      }
                                      puVar2 = (ulong *)param_2[1];
                                      if (puVar2 < (ulong *)param_2[2]) {
                                        lVar23 = param_2[3];
                                        if (((DAT_04865a38 & 1) == 0) &&
                                           (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
                                        {
                                          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                                          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,
                                                       &PTR_LOOP_04483000);
                                          __cxa_guard_release(&DAT_04865a38);
                                        }
                                        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                                        if (lVar10 == 0) {
                                          *puVar2 = (ulong)uVar25 | uVar15 << 0x20;
                                        }
                                        else {
                                          if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00a61b18:
                    /* WARNING: Subroutine does not return */
                                            abort();
                                          }
                                          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar23
                                          ;
                                          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                                          *puVar2 = (ulong)uVar25 | uVar15 << 0x20;
                                          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                                        }
                                        param_2[1] = (long)(puVar2 + 1);
                                      }
                                      else {
                                        uVar18 = param_2[4];
                                        lVar23 = (long)puVar2 - *param_2 >> 3;
                                        uVar16 = lVar23 + 1;
                                        if (0x7ffffffffffffffe < uVar18) {
                                          uVar18 = 0x7fffffffffffffff;
                                        }
                                        if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
                                          std::__vector_base_common<true>::__throw_length_error();
                                        }
                                        lVar10 = param_2[2] - *param_2;
                                        uVar14 = lVar10 >> 2;
                                        if (uVar16 <= uVar14) {
                                          uVar16 = uVar14;
                                        }
                                        if (uVar18 >> 1 <= (ulong)(lVar10 >> 3)) {
                                          uVar16 = uVar18;
                                        }
                                        if (uVar16 == 0) {
                                          lVar10 = 0;
                                        }
                                        else {
                                          lVar10 = (**(code **)(*(long *)param_2[3] + 0x10))
                                                             ((long *)param_2[3],uVar16 << 3,4);
                                          if (lVar10 == 0) {
                                            (**(code **)(*(long *)param_2[3] + 0xe8))();
                                          }
                                        }
                                        puVar2 = (ulong *)(lVar10 + lVar23 * 8);
                                        lVar23 = param_2[3];
                                        if (((DAT_04865a38 & 1) == 0) &&
                                           (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
                                        {
                                          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                                          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,
                                                       &PTR_LOOP_04483000);
                                          __cxa_guard_release(&DAT_04865a38);
                                        }
                                        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
                                        if (lVar11 == 0) {
                                          *puVar2 = (ulong)uVar25 | uVar15 << 0x20;
                                        }
                                        else {
                                          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00a61b18;
                                          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar23
                                          ;
                                          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
                                          *puVar2 = (ulong)uVar25 | uVar15 << 0x20;
                                          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
                                        }
                                        lVar23 = *param_2;
                                        lVar11 = param_2[1];
                                        puVar20 = puVar2;
                                        if (lVar11 != lVar23) {
                                          do {
                                            lVar24 = param_2[3];
                                            if (((DAT_04865a38 & 1) == 0) &&
                                               (iVar6 = __cxa_guard_acquire(&DAT_04865a38),
                                               iVar6 != 0)) {
                                              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                                              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,
                                                           &PTR_LOOP_04483000);
                                              __cxa_guard_release(&DAT_04865a38);
                                            }
                                            lVar12 = nn::os::GetTlsValue(DAT_04865a30);
                                            if (lVar12 == 0) {
                                              puVar20[-1] = *(ulong *)(lVar11 + -8);
                                            }
                                            else {
                                              if (0xf < *(ulong *)(lVar12 + 0x80))
                                              goto LAB_00a61b18;
                                              *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) =
                                                   lVar24;
                                              *(long *)(lVar12 + 0x80) =
                                                   *(long *)(lVar12 + 0x80) + 1;
                                              puVar20[-1] = *(ulong *)(lVar11 + -8);
                                              *(long *)(lVar12 + 0x80) =
                                                   *(long *)(lVar12 + 0x80) + -1;
                                            }
                                            lVar11 = lVar11 + -8;
                                            puVar20 = puVar20 + -1;
                                          } while (lVar23 != lVar11);
                                          lVar23 = *param_2;
                                        }
                                        *param_2 = (long)puVar20;
                                        param_2[1] = (long)(puVar2 + 1);
                                        lVar11 = param_2[2];
                                        param_2[2] = lVar10 + uVar16 * 8;
                                        if (lVar23 != 0) {
                                          plVar26 = (long *)param_2[3];
                                          uVar15 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                                          if (((uVar15 & 1) == 0) ||
                                             (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1
                                             )) {
                                            (**(code **)(*plVar26 + 0x18))
                                                      (plVar26,lVar23,lVar11 - lVar23,4);
                                          }
                                          else {
                                            FUN_00c48fe8(plVar26,lVar23,lVar11 - lVar23,4);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar27 = iVar27 + 1;
              } while (iVar27 != iVar22);
            }
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != local_f8);
    }
  }
  return;
}


