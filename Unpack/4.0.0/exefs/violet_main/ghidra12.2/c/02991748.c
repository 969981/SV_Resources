/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02991748; name: FUN_02991748
 */


void FUN_02991748(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *local_b0;
  ulong local_a8;
  long *local_a0;
  long *local_98;
  long lStack_90;
  undefined4 local_88;
  undefined1 local_84;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *plStack_68;
  
  lVar11 = *(long *)(param_1 + 0x38);
  local_88 = *(undefined4 *)(lVar11 + 0x34);
  local_84 = *(undefined1 *)(lVar11 + 0x8d);
  uStack_78 = *(undefined8 *)(lVar11 + 0x718);
  local_80 = (long *)0x0;
  plVar12 = *(long **)(*(long *)(param_1 + 0x48) + 0x130);
  local_98 = param_2;
  lStack_90 = param_1;
  if (plVar12 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    lVar11 = plVar12[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar18;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    local_80 = plVar12;
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x378,8);
  if (lVar11 == 0) {
    plVar12 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_029920a4;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_013742d0(lVar11,&local_98);
    uVar18 = 8;
    uVar19 = 0x378;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    plVar12 = param_2;
  }
  plVar13 = *(long **)(param_1 + 0x170);
  *(long *)(param_1 + 0x170) = lVar11;
  if (plVar13 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar5 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar5 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar16 = *(long **)(param_1 + 0x178);
    uVar4 = *(undefined8 *)(param_1 + 0x180);
    uVar14 = *(undefined8 *)(param_1 + 0x188);
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar13,uVar4,uVar14);
    }
    else {
      FUN_00c48fe8(plVar16,plVar13,uVar4,uVar14);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_70 = plVar13 + plVar13[600] * 3;
        plStack_68 = plVar13;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar15 = (long *)*plVar13;
        plVar16 = plVar13;
        if (plVar13[600] != 0) {
          plVar16 = plVar13 + plVar13[600] * 3;
        }
        if (plVar16 == plVar13) {
          local_a8 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13);
            plVar15 = (long *)*plVar13;
          }
          plVar2 = plVar13 + 3;
          if (plVar16 == plVar2) {
            local_a8 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar7 = (long *)*plVar2 != plVar15;
            if (bVar7) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13 + 3);
              plVar15 = (long *)plVar13[3];
            }
            local_a8 = (ulong)bVar7;
            plVar2 = plVar13 + 6;
            if (plVar16 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_a8 * 3,plVar13 + 6);
                plVar15 = (long *)plVar13[6];
                local_a8 = 2;
              }
              plVar2 = plVar13 + 9;
              if (plVar16 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_a8 * 3,plVar13 + 9);
                  plVar15 = (long *)plVar13[9];
                  local_a8 = 3;
                }
                plVar2 = plVar13 + 0xc;
                if (plVar16 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_a8 * 3,plVar13 + 0xc);
                    plVar15 = (long *)plVar13[0xc];
                    local_a8 = 4;
                  }
                  plVar2 = plVar13 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_a8 * 3,plVar13 + 0xf);
                      plVar15 = (long *)plVar13[0xf];
                      local_a8 = 5;
                    }
                    local_b0 = plVar13 + 0x12;
                    uVar10 = 6;
                    if (plVar16 != local_b0) {
                      do {
                        (**(code **)(*(long *)*local_b0 + 0xd0))();
                        if ((long *)*local_b0 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_a8 * 3,local_b0);
                          plVar15 = (long *)*local_b0;
                          local_a8 = uVar10;
                        }
                        local_b0 = local_b0 + 3;
                        uVar10 = uVar10 + 1;
                      } while (plVar16 != local_b0);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + local_a8 * 3,plVar13 + uVar10 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x178) = plVar12;
  *(undefined8 *)(param_1 + 0x180) = uVar19;
  *(undefined8 *)(param_1 + 0x188) = uVar18;
  lVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x378,8);
  if (lVar11 == 0) {
    param_2 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_029920a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_013742d0(lVar11,&local_98);
    uVar18 = 8;
    uVar19 = 0x378;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  plVar12 = *(long **)(param_1 + 0x150);
  *(long *)(param_1 + 0x150) = lVar11;
  if (plVar12 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar5 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar5 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plVar13 = *(long **)(param_1 + 0x158);
    uVar4 = *(undefined8 *)(param_1 + 0x160);
    uVar14 = *(undefined8 *)(param_1 + 0x168);
    uVar10 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,uVar4,uVar14);
    }
    else {
      FUN_00c48fe8(plVar13,plVar12,uVar4,uVar14);
    }
    lVar11 = FUN_00c4e600();
    iVar8 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_70 = plVar12 + plVar12[600] * 3;
        plStack_68 = plVar12;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar16 = (long *)*plVar12;
        plVar13 = plVar12;
        if (plVar12[600] != 0) {
          plVar13 = plVar12 + plVar12[600] * 3;
        }
        if (plVar13 == plVar12) {
          uVar17 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar12,plVar12);
            plVar16 = (long *)*plVar12;
          }
          plVar15 = plVar12 + 3;
          if (plVar13 == plVar15) {
            uVar17 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            bVar7 = (long *)*plVar15 != plVar16;
            if (bVar7) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar12,plVar12 + 3);
              plVar16 = (long *)plVar12[3];
            }
            uVar17 = (ulong)bVar7;
            plVar15 = plVar12 + 6;
            if (plVar13 == plVar15) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 6);
                plVar16 = (long *)plVar12[6];
                uVar17 = 2;
              }
              plVar15 = plVar12 + 9;
              if (plVar13 == plVar15) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 9);
                  plVar16 = (long *)plVar12[9];
                  uVar17 = 3;
                }
                plVar15 = plVar12 + 0xc;
                if (plVar13 == plVar15) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar15 + 0xd0))();
                  if ((long *)*plVar15 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 0xc);
                    plVar16 = (long *)plVar12[0xc];
                    uVar17 = 4;
                  }
                  plVar15 = plVar12 + 0xf;
                  if (plVar13 == plVar15) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar15 + 0xd0))();
                    if ((long *)*plVar15 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + 0xf);
                      plVar16 = (long *)plVar12[0xf];
                      uVar17 = 5;
                    }
                    uVar10 = 6;
                    for (local_a0 = plVar12 + 0x12; plVar13 != local_a0; local_a0 = local_a0 + 3) {
                      (**(code **)(*(long *)*local_a0 + 0xd0))();
                      if ((long *)*local_a0 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,local_a0);
                        plVar16 = (long *)*local_a0;
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
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar17 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
    lVar11 = *(long *)(param_1 + 0x150);
  }
  *(undefined8 *)(param_1 + 0x168) = uVar18;
  *(long **)(param_1 + 0x158) = param_2;
  *(undefined8 *)(param_1 + 0x160) = uVar19;
  FUN_0137d824(lVar11,&local_98);
  FUN_0137d824(*(undefined8 *)(param_1 + 0x170),&local_98);
  return;
}


