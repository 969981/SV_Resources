/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147afec; name: FUN_0147afec
 */


void FUN_0147afec(long param_1,ulong *param_2)

{
  short *psVar1;
  long *plVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  short sVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong local_c8;
  ulong local_b0;
  undefined8 *local_a8;
  ulong local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  long local_80;
  long local_78;
  long *local_70;
  long *plStack_68;
  
  plVar24 = (long *)(param_1 + 0x178);
  lVar21 = *plVar24;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar21) {
    lVar11 = nn::os::GetCurrentThread();
LAB_0147b560:
    if (*plVar24 == 0) goto code_r0x0147b568;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
          while (*plVar24 == 0) {
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar5) {
              *plVar24 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0147b570;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *plVar24 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0147b570:
    bVar5 = false;
    goto LAB_0147b030;
  }
  plVar24 = (long *)0x0;
  bVar5 = true;
LAB_0147b030:
  uVar16 = *(ulong *)(param_1 + 0x30);
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar15 = *param_2;
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & uVar15;
    }
    else {
      uVar18 = uVar15;
      if (uVar16 <= uVar15) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar15 / uVar16;
        }
        uVar18 = uVar15 - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(param_1 + 0x28) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == uVar15) {
            if (plVar20[2] == uVar15) goto LAB_0147b120;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == uVar15) {
            if (plVar20[2] == uVar15) goto LAB_0147b120;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar7 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto joined_r0x0147b1e4;
code_r0x0147b568:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar5) {
    *plVar24 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0147b570;
  goto LAB_0147b560;
LAB_0147b120:
  local_a8 = (undefined8 *)param_2[1];
  local_a0 = param_2[2];
  local_98 = (long *)param_2[3];
  local_b0 = uVar15;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))();
  }
  local_90 = plVar20[6];
  local_88 = (long *)plVar20[7];
  local_80 = plVar20[8];
  plVar20[6] = 0;
  local_78 = plVar20[9];
  lVar21 = FUN_0147b814(param_1 + 0x90,&local_b0);
  lVar11 = local_90;
  local_90 = 0;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar3 = *(int *)(lVar12 + 0x12c8);
    iVar10 = iVar3 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar10;
    if (*(int *)(lVar12 + 0x12cc) <= iVar3) {
      *(int *)(lVar12 + 0x12cc) = iVar10;
    }
    FUN_00de955c(lVar11);
    lVar8 = local_78;
    lVar12 = local_80;
    plVar13 = local_88;
    uVar16 = (**(code **)(*local_88 + 0xf8))(local_88);
    if (((uVar16 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar12,lVar8);
    }
    else {
      FUN_00c48fe8(plVar13,lVar11,lVar12,lVar8);
    }
    lVar11 = FUN_00c4e600();
    iVar10 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_70 = plVar13 + plVar13[600] * 3;
        plStack_68 = plVar13;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar22 = (long *)*plVar13;
        plVar2 = plVar13;
        if (plVar13[600] != 0) {
          plVar2 = plVar13 + plVar13[600] * 3;
        }
        if (plVar2 == plVar13) {
          local_c8 = 0;
          uVar16 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar22) {
            (**(code **)(*plVar22 + 0x100))(plVar22,plVar13,plVar13);
            plVar22 = (long *)*plVar13;
          }
          plVar23 = plVar13 + 3;
          if (plVar2 == plVar23) {
            local_c8 = 0;
            uVar16 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar23 + 0xd0))();
            bVar9 = (long *)*plVar23 != plVar22;
            if (bVar9) {
              (**(code **)(*plVar22 + 0x100))(plVar22,plVar13,plVar13 + 3);
              plVar22 = (long *)plVar13[3];
            }
            local_c8 = (ulong)bVar9;
            plVar23 = plVar13 + 6;
            if (plVar2 == plVar23) {
              uVar16 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar23 + 0xd0))();
              if ((long *)*plVar23 != plVar22) {
                (**(code **)(*plVar22 + 0x100))(plVar22,plVar13 + local_c8 * 3,plVar13 + 6);
                plVar22 = (long *)plVar13[6];
                local_c8 = 2;
              }
              plVar23 = plVar13 + 9;
              if (plVar2 == plVar23) {
                uVar16 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar23 + 0xd0))();
                if ((long *)*plVar23 != plVar22) {
                  (**(code **)(*plVar22 + 0x100))(plVar22,plVar13 + local_c8 * 3,plVar13 + 9);
                  plVar22 = (long *)plVar13[9];
                  local_c8 = 3;
                }
                plVar23 = plVar13 + 0xc;
                if (plVar2 == plVar23) {
                  uVar16 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar23 + 0xd0))();
                  if ((long *)*plVar23 != plVar22) {
                    (**(code **)(*plVar22 + 0x100))(plVar22,plVar13 + local_c8 * 3,plVar13 + 0xc);
                    plVar22 = (long *)plVar13[0xc];
                    local_c8 = 4;
                  }
                  plVar23 = plVar13 + 0xf;
                  if (plVar2 == plVar23) {
                    uVar16 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar23 + 0xd0))();
                    if ((long *)*plVar23 != plVar22) {
                      (**(code **)(*plVar22 + 0x100))(plVar22,plVar13 + local_c8 * 3,plVar13 + 0xf);
                      plVar22 = (long *)plVar13[0xf];
                      local_c8 = 5;
                    }
                    uVar16 = 6;
                    for (plVar23 = plVar13 + 0x12; plVar2 != plVar23; plVar23 = plVar23 + 3) {
                      (**(code **)(*(long *)*plVar23 + 0xd0))();
                      if ((long *)*plVar23 != plVar22) {
                        (**(code **)(*plVar22 + 0x100))(plVar22,plVar13 + local_c8 * 3,plVar23);
                        plVar22 = (long *)*plVar23;
                        local_c8 = uVar16;
                      }
                      uVar16 = uVar16 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar22 + 0x100))(plVar22,plVar13 + local_c8 * 3,plVar13 + uVar16 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_00de13d0(&local_b0,(long *)(param_1 + 0x28),plVar20);
  uVar16 = local_b0;
  local_b0 = 0;
  if (uVar16 != 0) {
    if ((char)local_a0 != '\0') {
      FUN_00de1844(uVar16 + 0x10);
    }
    plVar20 = (long *)*local_a8;
    uVar17 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar17 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,uVar16,0x50,8);
    }
    else {
      FUN_00c48fe8(plVar20,uVar16,0x50,8);
    }
  }
  lVar11 = *(long *)(*(long *)(lVar21 + 0x30) + 0x28);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar19 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar19) {
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar19 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0147b62c;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0147b62c:
        bVar9 = false;
      }
      if (bVar9) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          plVar20 = (long *)(lVar11 + -0x28);
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x120))(plVar20,1);
          lVar11 = *(long *)(lVar11 + 8);
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar19 = *psVar1;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar19 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))(plVar20);
          }
          else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar19 = sVar4;
    } while (sVar4 != 0);
  }
  if (((*PTR_DAT_047d94b0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d94b0), iVar10 != 0)) {
    FUN_00100190(&LAB_00b1c558,PTR_DAT_047d94b8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d94b0);
  }
  lVar11 = *(long *)PTR_DAT_047d94b8;
  *(long *)PTR_DAT_047d94c0 = lVar11;
  if (lVar11 != 0) {
    FUN_00de153c(lVar11,param_2);
  }
joined_r0x0147b1e4:
  if (!bVar5) {
    *plVar24 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
  }
  return;
}


