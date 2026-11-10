/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013742d0; name: FUN_013742d0
 */


void FUN_013742d0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *local_f0;
  long *local_e8;
  ulong local_e0;
  long *local_c8 [12];
  long *local_68;
  
  *(undefined1 *)((long)param_1 + 0x36b) = 0;
  plVar10 = param_1 + 1;
  *param_1 = &PTR_FUN_045ee4a8;
  *(undefined4 *)((long)param_1 + 0x36c) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  memset(plVar10,0,0x35d);
  plVar15 = (long *)*param_2;
  plVar8 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x28,8);
  if (plVar8 == (long *)0x0) {
    uVar21 = 0;
    uVar22 = 0;
    plVar15 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar8 = (long)(PTR_DAT_047dcd38 + 0x10);
    plVar8[1] = 0xf4b17a579f18960;
    plVar8[2] = -0x7d5d4e8add6295a5;
    plVar8[3] = 0;
    plVar8[4] = 0;
    uVar22 = 0x28;
    uVar21 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar18 = (long *)param_1[2];
  param_1[2] = plVar8;
  if (plVar18 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar18 + 0x18))(plVar18);
    plVar8 = (long *)param_1[3];
    uVar16 = param_1[4];
    uVar19 = param_1[5];
    uVar11 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar18,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar8,plVar18,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_c8[0] = plVar8;
        FUN_00c4ea30(local_c8,&local_68);
        plVar20 = (long *)*plVar8;
        plVar18 = plVar8;
        if (plVar8[600] != 0) {
          plVar18 = plVar8 + plVar8[600] * 3;
        }
        if (plVar18 == plVar8) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar8,plVar8);
            plVar20 = (long *)*plVar8;
          }
          plVar3 = plVar8 + 3;
          if (plVar18 == plVar3) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar6 = (long *)*plVar3 != plVar20;
            if (bVar6) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar8,plVar8 + 3);
              plVar20 = (long *)plVar8[3];
            }
            local_e0 = (ulong)bVar6;
            plVar3 = plVar8 + 6;
            if (plVar18 == plVar3) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar8 + local_e0 * 3,plVar8 + 6);
                plVar20 = (long *)plVar8[6];
                local_e0 = 2;
              }
              plVar3 = plVar8 + 9;
              if (plVar18 == plVar3) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar8 + local_e0 * 3,plVar8 + 9);
                  plVar20 = (long *)plVar8[9];
                  local_e0 = 3;
                }
                plVar3 = plVar8 + 0xc;
                if (plVar18 == plVar3) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar8 + local_e0 * 3,plVar8 + 0xc);
                    plVar20 = (long *)plVar8[0xc];
                    local_e0 = 4;
                  }
                  plVar3 = plVar8 + 0xf;
                  if (plVar18 == plVar3) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar8 + local_e0 * 3,plVar8 + 0xf);
                      plVar20 = (long *)plVar8[0xf];
                      local_e0 = 5;
                    }
                    local_f0 = plVar8 + 0x12;
                    uVar11 = 6;
                    if (plVar18 != local_f0) {
                      do {
                        (**(code **)(*(long *)*local_f0 + 0xd0))();
                        if ((long *)*local_f0 != plVar20) {
                          (**(code **)(*plVar20 + 0x100))(plVar20,plVar8 + local_e0 * 3,local_f0);
                          plVar20 = (long *)*local_f0;
                          local_e0 = uVar11;
                        }
                        local_f0 = local_f0 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar18 != local_f0);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar8 + local_e0 * 3,plVar8 + uVar11 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[3] = plVar15;
  param_1[4] = uVar22;
  param_1[5] = uVar21;
  lVar9 = FUN_0137d65c(local_c8,*param_2);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x28);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 5;
    do {
      lVar13 = *plVar15;
      iVar7 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar10 = lVar9;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x428,8);
  if (plVar10 == (long *)0x0) {
    uVar21 = 0;
    uVar22 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    puVar1 = PTR_DAT_047e2600 + 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar10 = (long)puVar1;
    memset(plVar10 + 1,0,0x420);
    FUN_0137dcb8(plVar10);
    uVar22 = 0x428;
    uVar21 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0xe];
  param_1[0xe] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0xf];
    uVar16 = param_1[0x10];
    uVar19 = param_1[0x11];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0xf] = plVar8;
  param_1[0x10] = uVar22;
  param_1[0x11] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x1a8,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2608;
    lVar13 = *param_2;
    lVar12 = param_2[1];
    lVar14 = param_2[3];
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[2] = lVar12;
    plVar10[3] = (long)param_1;
    plVar10[4] = lVar14;
    plVar10[5] = 0;
    *(undefined1 *)(plVar10 + 0xb) = 0;
    uVar21 = 8;
    uVar22 = 0x1a8;
    *(undefined1 *)(plVar10 + 0x12) = 0;
    *(undefined1 *)(plVar10 + 0x19) = 0;
    *(undefined1 *)(plVar10 + 0x20) = 0;
    *(undefined1 *)(plVar10 + 0x27) = 0;
    plVar10[0x2c] = 0;
    *(undefined4 *)(plVar10 + 0x2d) = 0;
    *(undefined4 *)(plVar10 + 0x32) = 0;
    plVar10[0x33] = 0;
    plVar10[0x17] = 0;
    plVar10[0x18] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = lVar13;
    plVar10[0x2a] = lVar13;
    plVar10[0x2b] = 0xfffffffffffffff;
    plVar10[0x30] = 0xfffffffffffffff;
    plVar10[0x31] = 0;
    *(undefined4 *)(plVar10 + 0x34) = 0x3f800000;
    plVar10[0xc] = 0;
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[0x21] = 0;
    plVar10[0x22] = 0;
    plVar10[0x23] = 0;
    plVar10[0x24] = 0;
    plVar10[0x25] = 0;
    plVar10[0x26] = 0;
    plVar10[0x28] = 0;
    plVar10[0x29] = 0;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = lVar13;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[6];
  param_1[6] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[7];
    uVar16 = param_1[8];
    uVar19 = param_1[9];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[7] = plVar8;
  param_1[8] = uVar22;
  param_1[9] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2610;
    uVar21 = 8;
    lVar13 = *param_2;
    plVar10[2] = 0;
    plVar10[3] = lVar13;
    plVar10[7] = 0;
    plVar10[8] = lVar13;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    plVar10[4] = 0x1555555555555555;
    plVar10[5] = 0;
    *(undefined4 *)(plVar10 + 6) = 0;
    plVar10[9] = 0x1555555555555555;
    plVar10[10] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 0;
    plVar10[0xc] = 0;
    uVar22 = 0x78;
    *(undefined4 *)(plVar10 + 0xd) = 0x3f800000;
    *(undefined4 *)(plVar10 + 0xe) = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[10];
  param_1[10] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0xb];
    uVar16 = param_1[0xc];
    uVar19 = param_1[0xd];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0xb] = plVar8;
  param_1[0xc] = uVar22;
  param_1[0xd] = uVar21;
  plVar10 = (long *)*param_2;
  lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x5f8,8);
  if (lVar9 == 0) {
    plVar10 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    FUN_0137efc0(lVar9);
    uVar21 = 8;
    uVar22 = 0x5f8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  plVar8 = (long *)param_1[0x12];
  param_1[0x12] = lVar9;
  if (plVar8 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar15 = (long *)param_1[0x13];
    uVar16 = param_1[0x14];
    uVar19 = param_1[0x15];
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar8,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar15,plVar8,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_c8[0] = plVar8;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar8;
        plVar15 = plVar8;
        if (plVar8[600] != 0) {
          plVar15 = plVar8 + plVar8[600] * 3;
        }
        if (plVar15 == plVar8) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8);
            plVar18 = (long *)*plVar8;
          }
          plVar20 = plVar8 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8 + 3);
              plVar18 = (long *)plVar8[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar8 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 6);
                plVar18 = (long *)plVar8[6];
                local_e0 = 2;
              }
              plVar20 = plVar8 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 9);
                  plVar18 = (long *)plVar8[9];
                  local_e0 = 3;
                }
                plVar20 = plVar8 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 0xc);
                    plVar18 = (long *)plVar8[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar8 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 0xf);
                      plVar18 = (long *)plVar8[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar8 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + uVar11 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x13] = plVar10;
  param_1[0x14] = uVar22;
  param_1[0x15] = uVar21;
  plVar10 = (long *)*param_2;
  lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x4b8,8);
  if (lVar9 == 0) {
    plVar10 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    FUN_0137f334(lVar9);
    uVar21 = 8;
    uVar22 = 0x4b8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  plVar8 = (long *)param_1[0x16];
  param_1[0x16] = lVar9;
  if (plVar8 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar15 = (long *)param_1[0x17];
    uVar16 = param_1[0x18];
    uVar19 = param_1[0x19];
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar8,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar15,plVar8,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_c8[0] = plVar8;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar8;
        plVar15 = plVar8;
        if (plVar8[600] != 0) {
          plVar15 = plVar8 + plVar8[600] * 3;
        }
        if (plVar15 == plVar8) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8);
            plVar18 = (long *)*plVar8;
          }
          plVar20 = plVar8 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8 + 3);
              plVar18 = (long *)plVar8[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar8 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 6);
                plVar18 = (long *)plVar8[6];
                local_e0 = 2;
              }
              plVar20 = plVar8 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 9);
                  plVar18 = (long *)plVar8[9];
                  local_e0 = 3;
                }
                plVar20 = plVar8 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 0xc);
                    plVar18 = (long *)plVar8[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar8 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 0xf);
                      plVar18 = (long *)plVar8[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar8 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + uVar11 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x17] = plVar10;
  param_1[0x18] = uVar22;
  param_1[0x19] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar13 = *param_2;
    *plVar10 = (long)(PTR_DAT_047e2618 + 0x10);
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = lVar13;
    *(undefined4 *)(plVar10 + 6) = 0;
    plVar10[7] = 0;
    plVar10[8] = lVar13;
    iVar7 = 0;
    plVar10[4] = 0x222222222222222;
    plVar10[5] = 0;
    plVar10[9] = 0x222222222222222;
    plVar10[10] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 0;
    plVar10[0xc] = 0;
    *(undefined4 *)(plVar10 + 0xd) = 0x3f800000;
    *(undefined4 *)(plVar10 + 0xe) = 0xee00ee;
    do {
      memset((void *)((ulong)local_c8 | 2),0,0x58);
      local_68 = (long *)CONCAT62(local_68._2_6_,(short)iVar7);
      lVar13 = FUN_0137c9d4(plVar10 + 1,&local_68);
      *(long **)(lVar13 + 8) = plVar10;
      *(short *)(lVar13 + 0x10) = (short)iVar7;
      *(undefined4 *)(lVar13 + 0x12) = 0xee00ee;
      memcpy((void *)(lVar13 + 0x16),local_c8,0x56);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0xee);
    *(undefined4 *)(plVar10 + 0xe) = 0xee00ee;
    for (plVar15 = (long *)plVar10[7]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      FUN_0137c86c(plVar10,plVar15 + 3);
    }
    uVar21 = 8;
    uVar22 = 0x78;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x1a];
  param_1[0x1a] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x1b];
    uVar16 = param_1[0x1c];
    uVar19 = param_1[0x1d];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_f0 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_f0) {
                      do {
                        (**(code **)(*(long *)*local_f0 + 0xd0))();
                        if ((long *)*local_f0 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_f0);
                          plVar18 = (long *)*local_f0;
                          local_e0 = uVar11;
                        }
                        local_f0 = local_f0 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_f0);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x1b] = plVar8;
  param_1[0x1c] = uVar22;
  param_1[0x1d] = uVar21;
  plVar10 = (long *)*param_2;
  lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,200,8);
  if (lVar9 == 0) {
    plVar10 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    FUN_0137d5cc(lVar9,*param_2);
    uVar21 = 8;
    uVar22 = 200;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  plVar8 = (long *)param_1[0x1e];
  param_1[0x1e] = lVar9;
  if (plVar8 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar15 = (long *)param_1[0x1f];
    uVar16 = param_1[0x20];
    uVar19 = param_1[0x21];
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar8,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar15,plVar8,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_68 = plVar8 + plVar8[600] * 3;
        local_c8[0] = plVar8;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar8;
        plVar15 = plVar8;
        if (plVar8[600] != 0) {
          plVar15 = plVar8 + plVar8[600] * 3;
        }
        if (plVar15 == plVar8) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8);
            plVar18 = (long *)*plVar8;
          }
          plVar20 = plVar8 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar8,plVar8 + 3);
              plVar18 = (long *)plVar8[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar8 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 6);
                plVar18 = (long *)plVar8[6];
                local_e0 = 2;
              }
              plVar20 = plVar8 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 9);
                  plVar18 = (long *)plVar8[9];
                  local_e0 = 3;
                }
                plVar20 = plVar8 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 0xc);
                    plVar18 = (long *)plVar8[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar8 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + 0xf);
                      plVar18 = (long *)plVar8[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar8 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar8 + local_e0 * 3,plVar8 + uVar11 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x1f] = plVar10;
  param_1[0x20] = uVar22;
  param_1[0x21] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x360,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    puVar1 = PTR_DAT_047e2620;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar13 = *param_2;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[0x66] = 0x1fffffffffffffff;
    plVar10[0x61] = 0x1fffffffffffffff;
    plVar10[0x5e] = 0;
    plVar10[0x5f] = 0;
    plVar10[0x62] = 0;
    *(undefined4 *)(plVar10 + 99) = 0;
    plVar10[100] = 0;
    *(undefined4 *)(plVar10 + 0x68) = 0;
    plVar10[0x69] = 0;
    plVar10[0x6b] = (long)param_1;
    *(undefined4 *)(plVar10 + 0x6a) = 0x3f800000;
    plVar10[0x60] = lVar13;
    plVar10[0x65] = lVar13;
    plVar10[0x67] = 0;
    memset(plVar10 + 1,0,0x2e4);
    uVar21 = 8;
    uVar22 = 0x360;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x22];
  param_1[0x22] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x23];
    uVar16 = param_1[0x24];
    uVar19 = param_1[0x25];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x23] = plVar8;
  param_1[0x24] = uVar22;
  param_1[0x25] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x12d0,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    puVar1 = PTR_DAT_047e2628 + 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar10 = (long)puVar1;
    memset(plVar10 + 1,0,0x12c4);
    uVar21 = 8;
    uVar22 = 0x12d0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x26];
  param_1[0x26] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x27];
    uVar16 = param_1[0x28];
    uVar19 = param_1[0x29];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x27] = plVar8;
  param_1[0x28] = uVar22;
  param_1[0x29] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2630;
    *(undefined4 *)(plVar10 + 2) = 0;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    uVar21 = 8;
    uVar22 = 0x18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x2a];
  param_1[0x2a] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x2b];
    uVar16 = param_1[0x2c];
    uVar19 = param_1[0x2d];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x2b] = plVar8;
  param_1[0x2c] = uVar22;
  param_1[0x2d] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2638;
    uVar21 = 8;
    lVar13 = *param_2;
    plVar10[2] = 0;
    plVar10[3] = lVar13;
    plVar10[7] = 0;
    plVar10[8] = lVar13;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    plVar10[4] = 0x1555555555555555;
    plVar10[5] = 0;
    *(undefined4 *)(plVar10 + 6) = 0;
    plVar10[9] = 0x1555555555555555;
    plVar10[10] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 0;
    plVar10[0xc] = 0;
    uVar22 = 0x78;
    *(undefined4 *)(plVar10 + 0xd) = 0x3f800000;
    *(undefined1 *)(plVar10 + 0xe) = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x2e];
  param_1[0x2e] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x2f];
    uVar16 = param_1[0x30];
    uVar19 = param_1[0x31];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x2f] = plVar8;
  param_1[0x30] = uVar22;
  param_1[0x31] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    puVar1 = PTR_DAT_047e2640;
    uVar21 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar10 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar10 + 1) = 0;
    uVar22 = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x32];
  param_1[0x32] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x33];
    uVar16 = param_1[0x34];
    uVar19 = param_1[0x35];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x33] = plVar8;
  param_1[0x34] = uVar22;
  param_1[0x35] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2648;
    *(undefined4 *)(plVar10 + 2) = 0;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    uVar21 = 8;
    uVar22 = 0x18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x36];
  param_1[0x36] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x37];
    uVar16 = param_1[0x38];
    uVar19 = param_1[0x39];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x37] = plVar8;
  param_1[0x38] = uVar22;
  param_1[0x39] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x58,8);
  puVar1 = PTR_DAT_047e2650;
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar13 = *param_2;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    *(undefined4 *)(plVar10 + 8) = 0;
    plVar10[10] = (long)param_1;
    *(undefined1 *)(plVar10 + 9) = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    uVar21 = 8;
    uVar22 = 0x58;
    plVar10[4] = 0;
    plVar10[5] = lVar13;
    plVar10[6] = -1;
    plVar10[7] = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x3a];
  param_1[0x3a] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    lVar9 = plVar15[2];
    plVar15[10] = 0;
    *plVar15 = (long)(puVar1 + 0x10);
    plVar15[1] = 0;
    if (lVar9 != 0) {
      lVar13 = plVar15[4];
      plVar10 = (long *)plVar15[5];
      uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar13 << 3,1);
      }
      else {
        FUN_00c48fe8(plVar10,lVar9,lVar13 << 3,1);
      }
    }
    plVar10 = (long *)param_1[0x3b];
    uVar16 = param_1[0x3c];
    uVar19 = param_1[0x3d];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x3b] = plVar8;
  param_1[0x3c] = uVar22;
  param_1[0x3d] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    puVar1 = PTR_DAT_047e2658;
    uVar21 = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar10 = (long)(puVar1 + 0x10);
    *(undefined1 *)(plVar10 + 1) = 0;
    uVar22 = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x3e];
  param_1[0x3e] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x3f];
    uVar16 = param_1[0x40];
    uVar19 = param_1[0x41];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x3f] = plVar8;
  param_1[0x40] = uVar22;
  param_1[0x41] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xe0,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    puVar1 = PTR_DAT_047e2660 + 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *plVar10 = (long)puVar1;
    memset(plVar10 + 1,0,0xd8);
    uVar21 = 8;
    uVar22 = 0xe0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x42];
  param_1[0x42] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x43];
    uVar16 = param_1[0x44];
    uVar19 = param_1[0x45];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x43] = plVar8;
  param_1[0x44] = uVar22;
  param_1[0x45] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2668;
    *(undefined1 *)((long)plVar10 + 0x13) = 0;
    *(undefined2 *)((long)plVar10 + 0x11) = 0;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0x505050500000000;
    *(undefined1 *)(plVar10 + 2) = 5;
    uVar21 = 8;
    uVar22 = 0x18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x46];
  param_1[0x46] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x47];
    uVar16 = param_1[0x48];
    uVar19 = param_1[0x49];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x47] = plVar8;
  lVar9 = param_1[6];
  param_1[0x48] = uVar22;
  param_1[0x49] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x1f0,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    *plVar10 = (long)(PTR_DAT_047e2670 + 0x10);
    plVar10[1] = lVar9;
    FUN_0137e0c8(plVar10);
    uVar21 = 8;
    uVar22 = 0x1f0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x4a];
  param_1[0x4a] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x4b];
    uVar16 = param_1[0x4c];
    uVar19 = param_1[0x4d];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x4b] = plVar8;
  param_1[0x4c] = uVar22;
  param_1[0x4d] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    uVar21 = 8;
    lVar13 = param_2[1];
    *plVar10 = (long)(PTR_DAT_047e2678 + 0x10);
    plVar10[1] = 0;
    plVar10[2] = lVar13;
    uVar22 = 0x18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x4e];
  param_1[0x4e] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x4f];
    uVar16 = param_1[0x50];
    uVar19 = param_1[0x51];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x4f] = plVar8;
  param_1[0x50] = uVar22;
  param_1[0x51] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    uVar21 = 8;
    lVar13 = param_2[1];
    *plVar10 = (long)(PTR_DAT_047e2680 + 0x10);
    plVar10[1] = (long)param_1;
    plVar10[2] = lVar13;
    uVar22 = 0x18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  puVar17 = (undefined8 *)param_1[0x52];
  param_1[0x52] = plVar10;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)*puVar17)(puVar17);
    plVar10 = (long *)param_1[0x53];
    uVar16 = param_1[0x54];
    uVar19 = param_1[0x55];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar17,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,puVar17,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x53] = plVar8;
  param_1[0x54] = uVar22;
  param_1[0x55] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x70,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2688;
    uVar21 = 8;
    lVar13 = *param_2;
    plVar10[2] = 0;
    plVar10[3] = lVar13;
    plVar10[7] = 0;
    plVar10[8] = lVar13;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    plVar10[4] = 0x1555555555555555;
    plVar10[5] = 0;
    *(undefined4 *)(plVar10 + 6) = 0;
    plVar10[9] = 0x1555555555555555;
    plVar10[10] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 0;
    plVar10[0xc] = 0;
    uVar22 = 0x70;
    *(undefined4 *)(plVar10 + 0xd) = 0x3f800000;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x56];
  param_1[0x56] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x57];
    uVar16 = param_1[0x58];
    uVar19 = param_1[0x59];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x57] = plVar8;
  param_1[0x58] = uVar22;
  param_1[0x59] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2690;
    plVar10[2] = -0xfeff0000ff00;
    uVar21 = 8;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = -0xfeff0000ff00;
    *(undefined4 *)(plVar10 + 3) = 0xffff0100;
    uVar22 = 0x20;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x5a];
  param_1[0x5a] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x5b];
    uVar16 = param_1[0x5c];
    uVar19 = param_1[0x5d];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x5b] = plVar8;
  param_1[0x5c] = uVar22;
  param_1[0x5d] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x70,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar1 = PTR_DAT_047e2698;
    uVar21 = 8;
    lVar13 = *param_2;
    plVar10[2] = 0;
    plVar10[3] = lVar13;
    plVar10[7] = 0;
    plVar10[8] = lVar13;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    plVar10[4] = 0xccccccccccccccc;
    plVar10[5] = 0;
    *(undefined4 *)(plVar10 + 6) = 0;
    plVar10[9] = 0xccccccccccccccc;
    plVar10[10] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 0;
    plVar10[0xc] = 0;
    uVar22 = 0x70;
    *(undefined4 *)(plVar10 + 0xd) = 0x3f800000;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x5e];
  param_1[0x5e] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[0x5f];
    uVar16 = param_1[0x60];
    uVar19 = param_1[0x61];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x5f] = plVar8;
  param_1[0x60] = uVar22;
  param_1[0x61] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x98,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0137a928;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar13 = param_2[1];
    *plVar10 = (long)(PTR_DAT_047e26a0 + 0x10);
    plVar10[1] = lVar13;
    plVar10[2] = (long)param_1;
    memset(plVar10 + 3,0,0x4e);
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    uVar21 = 8;
    uVar22 = 0x98;
    plVar10[0x11] = 0;
    *(undefined4 *)(plVar10 + 0x12) = 0;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar15 = (long *)param_1[0x62];
  param_1[0x62] = plVar10;
  if (plVar15 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar4 = *(int *)(lVar9 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (*(int *)(lVar9 + 0x12cc) <= iVar4) {
      *(int *)(lVar9 + 0x12cc) = iVar7;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plVar10 = (long *)param_1[99];
    uVar16 = param_1[100];
    uVar19 = param_1[0x65];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar15,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,plVar15,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    local_e8 = plVar10 + 0x12;
                    uVar11 = 6;
                    if (plVar15 != local_e8) {
                      do {
                        (**(code **)(*(long *)*local_e8 + 0xd0))();
                        if ((long *)*local_e8 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,local_e8);
                          plVar18 = (long *)*local_e8;
                          local_e0 = uVar11;
                        }
                        local_e8 = local_e8 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != local_e8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[99] = plVar8;
  param_1[100] = uVar22;
  param_1[0x65] = uVar21;
  plVar8 = (long *)*param_2;
  plVar10 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x20,8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
    uVar22 = 0;
    uVar21 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_0137a928:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    uVar21 = 8;
    lVar13 = param_2[1];
    plVar10[3] = *param_2;
    *plVar10 = lVar13;
    plVar10[1] = (long)param_1;
    uVar22 = 0x20;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  lVar9 = param_1[0x66];
  param_1[0x66] = plVar10;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar13 = FUN_00c4e600();
    iVar4 = *(int *)(lVar13 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar13 + 0x12c8) = iVar7;
    if (*(int *)(lVar13 + 0x12cc) <= iVar4) {
      *(int *)(lVar13 + 0x12cc) = iVar7;
    }
    plVar10 = (long *)param_1[0x67];
    uVar16 = param_1[0x68];
    uVar19 = param_1[0x69];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,uVar16,uVar19);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,uVar16,uVar19);
    }
    lVar9 = FUN_00c4e600();
    iVar7 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_c8[0] = plVar10;
        FUN_00c4ea30(local_c8,&local_68);
        plVar18 = (long *)*plVar10;
        plVar15 = plVar10;
        if (plVar10[600] != 0) {
          plVar15 = plVar10 + plVar10[600] * 3;
        }
        if (plVar15 == plVar10) {
          local_e0 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
            plVar18 = (long *)*plVar10;
          }
          plVar20 = plVar10 + 3;
          if (plVar15 == plVar20) {
            local_e0 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar6 = (long *)*plVar20 != plVar18;
            if (bVar6) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
              plVar18 = (long *)plVar10[3];
            }
            local_e0 = (ulong)bVar6;
            plVar20 = plVar10 + 6;
            if (plVar15 == plVar20) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 6);
                plVar18 = (long *)plVar10[6];
                local_e0 = 2;
              }
              plVar20 = plVar10 + 9;
              if (plVar15 == plVar20) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 9);
                  plVar18 = (long *)plVar10[9];
                  local_e0 = 3;
                }
                plVar20 = plVar10 + 0xc;
                if (plVar15 == plVar20) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xc);
                    plVar18 = (long *)plVar10[0xc];
                    local_e0 = 4;
                  }
                  plVar20 = plVar10 + 0xf;
                  if (plVar15 == plVar20) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + 0xf);
                      plVar18 = (long *)plVar10[0xf];
                      local_e0 = 5;
                    }
                    plVar20 = plVar10 + 0x12;
                    if (plVar15 == plVar20) {
                      uVar11 = 6;
                    }
                    else {
                      uVar11 = 6;
                      do {
                        (**(code **)(*(long *)*plVar20 + 0xd0))();
                        if ((long *)*plVar20 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar20);
                          plVar18 = (long *)*plVar20;
                          local_e0 = uVar11;
                        }
                        plVar20 = plVar20 + 3;
                        uVar11 = uVar11 + 1;
                      } while (plVar15 != plVar20);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + local_e0 * 3,plVar10 + uVar11 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  param_1[0x67] = plVar8;
  param_1[0x68] = uVar22;
  param_1[0x69] = uVar21;
  FUN_0137d824(param_1,param_2);
  return;
}


