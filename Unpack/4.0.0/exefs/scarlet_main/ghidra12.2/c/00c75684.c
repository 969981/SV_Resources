/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c75684; name: FUN_00c75684
 */


void FUN_00c75684(long param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  long *local_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  undefined8 *puStack_78;
  long *local_70;
  long *plStack_68;
  
  uVar18 = *(undefined8 *)(param_1 + 8);
  local_a0 = uVar18;
  if (*(long *)(param_1 + 0x180) == 0) {
    FUN_00eb3a30(&local_98,uVar18,&local_a0);
    lVar21 = local_98;
    local_98 = 0;
    lVar12 = *(long *)(param_1 + 0x180);
    *(long *)(param_1 + 0x180) = lVar21;
    if (lVar12 == 0) {
      *(long **)(param_1 + 400) = local_88;
      *(long *)(param_1 + 0x198) = local_80;
      *(long **)(param_1 + 0x188) = local_90;
      local_98 = 0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar21 = FUN_00c4e600();
      iVar4 = *(int *)(lVar21 + 0x12c8);
      iVar7 = iVar4 + 1;
      *(int *)(lVar21 + 0x12c8) = iVar7;
      if (*(int *)(lVar21 + 0x12cc) <= iVar4) {
        *(int *)(lVar21 + 0x12cc) = iVar7;
      }
      FUN_00eea34c(lVar12);
      plVar8 = *(long **)(param_1 + 0x188);
      uVar22 = *(undefined8 *)(param_1 + 400);
      uVar23 = *(undefined8 *)(param_1 + 0x198);
      uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar10 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,uVar22,uVar23);
      }
      else {
        FUN_00c48fe8(plVar8,lVar12,uVar22,uVar23);
      }
      lVar21 = FUN_00c4e600();
      iVar7 = *(int *)(lVar21 + 0x12c8) + -1;
      *(int *)(lVar21 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          plStack_68 = plVar8;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar24 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            uVar17 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar24) {
              (**(code **)(*plVar24 + 0x100))(plVar24,plVar8,plVar8);
              plVar24 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar3 == plVar2) {
              uVar17 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar24;
              if (bVar6) {
                (**(code **)(*plVar24 + 0x100))(plVar24,plVar8,plVar8 + 3);
                plVar24 = (long *)plVar8[3];
              }
              uVar17 = (ulong)bVar6;
              plVar2 = plVar8 + 6;
              if (plVar3 == plVar2) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar24) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 6);
                  plVar24 = (long *)plVar8[6];
                  uVar17 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar3 == plVar2) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar24) {
                    (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 9);
                    plVar24 = (long *)plVar8[9];
                    uVar17 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar24) {
                      (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 0xc);
                      plVar24 = (long *)plVar8[0xc];
                      uVar17 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar24) {
                        (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 0xf);
                        plVar24 = (long *)plVar8[0xf];
                        uVar17 = 5;
                      }
                      uVar10 = 6;
                      for (local_a8 = plVar8 + 0x12; plVar3 != local_a8; local_a8 = local_a8 + 3) {
                        (**(code **)(*(long *)*local_a8 + 0xd0))();
                        if ((long *)*local_a8 != plVar24) {
                          (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,local_a8);
                          plVar24 = (long *)*local_a8;
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
          (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + uVar10 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar21 + 0x12cc) = 0;
      }
      lVar21 = local_98;
      *(long **)(param_1 + 0x188) = local_90;
      *(long **)(param_1 + 400) = local_88;
      *(long *)(param_1 + 0x198) = local_80;
      local_98 = 0;
      if (lVar21 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar12 = FUN_00c4e600();
        iVar4 = *(int *)(lVar12 + 0x12c8);
        iVar7 = iVar4 + 1;
        *(int *)(lVar12 + 0x12c8) = iVar7;
        if (*(int *)(lVar12 + 0x12cc) <= iVar4) {
          *(int *)(lVar12 + 0x12cc) = iVar7;
        }
        FUN_00eea34c(lVar21);
        lVar12 = local_80;
        plVar3 = local_88;
        plVar8 = local_90;
        uVar10 = (**(code **)(*local_90 + 0xf8))(local_90);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar21,plVar3,lVar12);
        }
        else {
          FUN_00c48fe8(plVar8,lVar21,plVar3,lVar12);
        }
        lVar21 = FUN_00c4e600();
        iVar7 = *(int *)(lVar21 + 0x12c8) + -1;
        *(int *)(lVar21 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar8 = (long *)FUN_00c4e600();
          if (plVar8[600] != 0) {
            local_70 = plVar8 + plVar8[600] * 3;
            plStack_68 = plVar8;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar24 = (long *)*plVar8;
            plVar3 = plVar8;
            if (plVar8[600] != 0) {
              plVar3 = plVar8 + plVar8[600] * 3;
            }
            if (plVar3 == plVar8) {
              uVar17 = 0;
              uVar10 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar8 + 0xd0))();
              if ((long *)*plVar8 != plVar24) {
                (**(code **)(*plVar24 + 0x100))(plVar24,plVar8,plVar8);
                plVar24 = (long *)*plVar8;
              }
              plVar2 = plVar8 + 3;
              if (plVar3 == plVar2) {
                uVar17 = 0;
                uVar10 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar6 = (long *)*plVar2 != plVar24;
                if (bVar6) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,plVar8,plVar8 + 3);
                  plVar24 = (long *)plVar8[3];
                }
                uVar17 = (ulong)bVar6;
                plVar2 = plVar8 + 6;
                if (plVar3 == plVar2) {
                  uVar10 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar24) {
                    (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 6);
                    plVar24 = (long *)plVar8[6];
                    uVar17 = 2;
                  }
                  plVar2 = plVar8 + 9;
                  if (plVar3 == plVar2) {
                    uVar10 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar24) {
                      (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 9);
                      plVar24 = (long *)plVar8[9];
                      uVar17 = 3;
                    }
                    plVar2 = plVar8 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar10 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar24) {
                        (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 0xc);
                        plVar24 = (long *)plVar8[0xc];
                        uVar17 = 4;
                      }
                      plVar2 = plVar8 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar10 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar24) {
                          (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + 0xf);
                          plVar24 = (long *)plVar8[0xf];
                          uVar17 = 5;
                        }
                        uVar10 = 6;
                        for (local_a8 = plVar8 + 0x12; plVar3 != local_a8; local_a8 = local_a8 + 3)
                        {
                          (**(code **)(*(long *)*local_a8 + 0xd0))();
                          if ((long *)*local_a8 != plVar24) {
                            (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,local_a8);
                            plVar24 = (long *)*local_a8;
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
            (**(code **)(*plVar24 + 0x100))(plVar24,plVar8 + uVar17 * 3,plVar8 + uVar10 * 3);
            plVar8[600] = 0;
          }
          *(undefined4 *)(lVar21 + 0x12cc) = 0;
        }
      }
    }
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  puVar19 = *(undefined1 **)(param_1 + 0x1a0);
  if (puVar19 == (undefined1 *)0x0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar19 = (undefined1 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x58,8);
    if (puVar19 == (undefined1 *)0x0) {
      plVar8 = (long *)0x0;
      uVar22 = 0;
      uVar18 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_00c75e2c;
      *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar8;
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
      *puVar19 = 0;
      puVar19[0x10] = 0;
      *(undefined4 *)(puVar19 + 0x50) = 0;
      *(undefined8 *)(puVar19 + 0x20) = 0;
      *(undefined8 *)(puVar19 + 0x28) = 0;
      uVar22 = 0x58;
      *(undefined8 *)(puVar19 + 0x30) = 0;
      *(undefined8 *)(puVar19 + 0x38) = uVar18;
      uVar18 = 8;
      *(undefined8 *)(puVar19 + 0x40) = 0xfffffffffffffff;
      *(undefined8 *)(puVar19 + 0x48) = 0;
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
    }
    lVar21 = *(long *)(param_1 + 0x1a0);
    *(undefined1 **)(param_1 + 0x1a0) = puVar19;
    if (lVar21 != 0) {
      FUN_00f32d40(param_1 + 0x1a8);
      puVar19 = *(undefined1 **)(param_1 + 0x1a0);
    }
    bVar15 = false;
    *(long **)(param_1 + 0x1a8) = plVar8;
    *(undefined8 *)(param_1 + 0x1b0) = uVar22;
    *(undefined8 *)(param_1 + 0x1b8) = uVar18;
  }
  else {
    bVar15 = true;
  }
  piVar16 = *(int **)(puVar19 + 0x20);
  piVar20 = *(int **)(puVar19 + 0x28);
  if (piVar16 != piVar20) {
    piVar11 = piVar16;
    do {
      if (*piVar11 == param_2) {
        param_3 = (long *)*param_3;
        plVar8 = *(long **)(piVar11 + 2);
        if (plVar8 == param_3) {
          if ((bVar15) && (bVar6)) {
            return;
          }
        }
        else {
          if (param_3 != (long *)0x0) {
            plVar8 = param_3 + 5;
            do {
              lVar21 = *plVar8;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *(int *)plVar8 = (int)lVar21 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar21 == -1) goto LAB_00c75e30;
            plVar8 = *(long **)(piVar11 + 2);
          }
          *(long **)(piVar11 + 2) = param_3;
          if (plVar8 != (long *)0x0) {
            plVar3 = plVar8 + 5;
            do {
              lVar21 = *plVar3;
              iVar7 = (int)lVar21 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            else if ((int)lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        goto LAB_00c758cc;
      }
      piVar11 = piVar11 + 4;
    } while (piVar20 != piVar11);
  }
  puVar1 = (undefined8 *)(puVar19 + 0x38);
  if (piVar20 < *(int **)(puVar19 + 0x30)) {
    uVar18 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar21 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar21 != 0) {
      if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_00c75e2c;
      *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar18;
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
    }
    *piVar20 = param_2;
    lVar12 = *param_3;
    *(long *)(piVar20 + 2) = lVar12;
    if (lVar12 != 0) {
      piVar16 = (int *)(lVar12 + 0x28);
      do {
        iVar7 = *piVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_00c75e30;
    }
    if (lVar21 != 0) {
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
    }
    *(int **)(puVar19 + 0x28) = piVar20 + 4;
  }
  else {
    uVar17 = *(ulong *)(puVar19 + 0x40);
    lVar21 = (long)piVar20 - (long)piVar16 >> 4;
    uVar10 = lVar21 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(int **)(puVar19 + 0x30) - (long)piVar16;
    uVar13 = lVar12 >> 3;
    local_80 = 0;
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    if (uVar17 >> 1 <= (ulong)(lVar12 >> 4)) {
      uVar10 = uVar17;
    }
    puStack_78 = puVar1;
    if (uVar10 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar10 << 4,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    plVar8 = (long *)(lVar12 + lVar21 * 0x10);
    local_80 = lVar12 + uVar10 * 0x10;
    uVar18 = *puVar1;
    local_98 = lVar12;
    local_90 = plVar8;
    local_88 = plVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar21 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar21 != 0) {
      if (0xf < *(ulong *)(lVar21 + 0x80)) {
LAB_00c75e2c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar18;
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
    }
    *(int *)plVar8 = param_2;
    lVar12 = *param_3;
    plVar8[1] = lVar12;
    if (lVar12 != 0) {
      piVar16 = (int *)(lVar12 + 0x28);
      do {
        iVar7 = *piVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar6) {
          *piVar16 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
LAB_00c75e30:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar21 != 0) {
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
    }
    local_88 = local_88 + 2;
    lVar21 = *(long *)(puVar19 + 0x20);
    lVar12 = *(long *)(puVar19 + 0x28);
    if (lVar12 == lVar21) {
      lVar12 = lVar21;
    }
    else {
      do {
        plVar8 = local_90;
        uVar18 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00c75e2c;
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        *(int *)(plVar8 + -2) = *(int *)(lVar12 + -0x10);
        lVar14 = *(long *)(lVar12 + -8);
        *(undefined8 *)(lVar12 + -8) = 0;
        lVar12 = lVar12 + -0x10;
        plVar8[-1] = lVar14;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        local_90 = local_90 + -2;
      } while (lVar21 != lVar12);
      lVar21 = *(long *)(puVar19 + 0x20);
      lVar12 = *(long *)(puVar19 + 0x28);
    }
    *(long **)(puVar19 + 0x20) = local_90;
    *(long **)(puVar19 + 0x28) = local_88;
    uVar18 = *(undefined8 *)(puVar19 + 0x30);
    *(long *)(puVar19 + 0x30) = local_80;
    local_98 = lVar21;
    local_90 = (long *)lVar21;
    local_88 = (long *)lVar12;
    local_80 = uVar18;
    FUN_00c787c8(&local_98);
  }
LAB_00c758cc:
  lVar21 = *(long *)(param_1 + 0x208);
  lVar12 = *(long *)(param_1 + 0x210);
  if (((lVar21 != lVar12) && (*(undefined1 *)(lVar21 + 0x10) = 1, lVar21 + 0x18 != lVar12)) &&
     (*(undefined1 *)(lVar21 + 0x28) = 1, lVar21 + 0x30 != lVar12)) {
    *(undefined1 *)(lVar21 + 0x40) = 1;
    for (lVar21 = lVar21 + 0x48; lVar21 != lVar12; lVar21 = lVar21 + 0x18) {
      *(undefined1 *)(lVar21 + 0x10) = 1;
    }
  }
  return;
}


