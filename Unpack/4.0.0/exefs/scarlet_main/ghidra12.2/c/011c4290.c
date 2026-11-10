/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c4290; name: FUN_011c4290
 */


undefined8 FUN_011c4290(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    local_78 = *(undefined8 *)(param_1 + 8);
    FUN_011c3910(&local_a0,local_78,&local_78);
    lVar11 = local_a0;
    local_a0 = 0;
    lVar14 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar11;
    if (lVar14 == 0) {
      *(long *)(param_1 + 0x1a8) = local_90;
      *(long **)(param_1 + 0x1b0) = local_88;
      *(long **)(param_1 + 0x1a0) = local_98;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar5 = *(int *)(lVar11 + 0x12c8);
      iVar9 = iVar5 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar9;
      if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
        *(int *)(lVar11 + 0x12cc) = iVar9;
      }
      lVar11 = *(long *)(lVar14 + 0xf8);
      if (lVar11 != 0) {
        plVar18 = *(long **)(lVar14 + 0x110);
        *(long *)(lVar14 + 0x100) = lVar11;
        lVar15 = *(long *)(lVar14 + 0x108) - lVar11;
        uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar15,8);
        }
        else {
          FUN_00c48fe8(plVar18,lVar11,lVar15,8);
        }
      }
      lVar11 = *(long *)(lVar14 + 0xc0);
      if (lVar11 != 0) {
        plVar18 = *(long **)(lVar14 + 0xd8);
        *(long *)(lVar14 + 200) = lVar11;
        lVar15 = *(long *)(lVar14 + 0xd0) - lVar11;
        uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar15,8);
        }
        else {
          FUN_00c48fe8(plVar18,lVar11,lVar15,8);
        }
      }
      FUN_011c3e8c(lVar14 + 8);
      plVar18 = *(long **)(param_1 + 0x1a0);
      uVar10 = *(undefined8 *)(param_1 + 0x1a8);
      uVar16 = *(undefined8 *)(param_1 + 0x1b0);
      uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,uVar10,uVar16);
      }
      else {
        FUN_00c48fe8(plVar18,lVar14,uVar10,uVar16);
      }
      lVar11 = FUN_00c4e600();
      iVar9 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar18 = (long *)FUN_00c4e600();
        if (plVar18[600] != 0) {
          local_70 = plVar18 + plVar18[600] * 3;
          local_68 = plVar18;
          FUN_00c4ea30(&local_68,&local_70);
          plVar17 = (long *)*plVar18;
          plVar3 = plVar18;
          if (plVar18[600] != 0) {
            plVar3 = plVar18 + plVar18[600] * 3;
          }
          if (plVar3 == plVar18) {
            uVar19 = 0;
            uVar12 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar18 + 0xd0))();
            if ((long *)*plVar18 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar18,plVar18);
              plVar17 = (long *)*plVar18;
            }
            plVar2 = plVar18 + 3;
            if (plVar3 == plVar2) {
              uVar19 = 0;
              uVar12 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar8 = (long *)*plVar2 != plVar17;
              if (bVar8) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar18,plVar18 + 3);
                plVar17 = (long *)plVar18[3];
              }
              uVar19 = (ulong)bVar8;
              plVar2 = plVar18 + 6;
              if (plVar3 == plVar2) {
                uVar12 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 6);
                  plVar17 = (long *)plVar18[6];
                  uVar19 = 2;
                }
                plVar2 = plVar18 + 9;
                if (plVar3 == plVar2) {
                  uVar12 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 9);
                    plVar17 = (long *)plVar18[9];
                    uVar19 = 3;
                  }
                  plVar2 = plVar18 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar12 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 0xc);
                      plVar17 = (long *)plVar18[0xc];
                      uVar19 = 4;
                    }
                    plVar2 = plVar18 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar12 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 0xf);
                        plVar17 = (long *)plVar18[0xf];
                        uVar19 = 5;
                      }
                      uVar12 = 6;
                      for (plVar2 = plVar18 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar2);
                          plVar17 = (long *)*plVar2;
                          uVar19 = uVar12;
                        }
                        uVar12 = uVar12 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + uVar12 * 3);
          plVar18[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
      lVar11 = local_a0;
      *(long **)(param_1 + 0x1a0) = local_98;
      *(long *)(param_1 + 0x1a8) = local_90;
      *(long **)(param_1 + 0x1b0) = local_88;
      local_a0 = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar14 = FUN_00c4e600();
        iVar5 = *(int *)(lVar14 + 0x12c8);
        iVar9 = iVar5 + 1;
        *(int *)(lVar14 + 0x12c8) = iVar9;
        if (*(int *)(lVar14 + 0x12cc) <= iVar5) {
          *(int *)(lVar14 + 0x12cc) = iVar9;
        }
        lVar14 = *(long *)(lVar11 + 0xf8);
        if (lVar14 != 0) {
          plVar18 = *(long **)(lVar11 + 0x110);
          *(long *)(lVar11 + 0x100) = lVar14;
          lVar15 = *(long *)(lVar11 + 0x108) - lVar14;
          uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
          if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,lVar15,8);
          }
          else {
            FUN_00c48fe8(plVar18,lVar14,lVar15,8);
          }
        }
        lVar14 = *(long *)(lVar11 + 0xc0);
        if (lVar14 != 0) {
          plVar18 = *(long **)(lVar11 + 0xd8);
          *(long *)(lVar11 + 200) = lVar14;
          lVar15 = *(long *)(lVar11 + 0xd0) - lVar14;
          uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
          if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,lVar15,8);
          }
          else {
            FUN_00c48fe8(plVar18,lVar14,lVar15,8);
          }
        }
        FUN_011c3e8c(lVar11 + 8);
        uVar12 = (**(code **)(*local_98 + 0xf8))(local_98);
        if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*local_98 + 0x18))(local_98,lVar11,local_90,local_88);
        }
        else {
          FUN_00c48fe8(local_98,lVar11,local_90,local_88);
        }
        lVar11 = FUN_00c4e600();
        iVar9 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar9;
        if (iVar9 == 0) {
          plVar18 = (long *)FUN_00c4e600();
          if (plVar18[600] != 0) {
            local_70 = plVar18 + plVar18[600] * 3;
            local_68 = plVar18;
            FUN_00c4ea30(&local_68,&local_70);
            plVar17 = (long *)*plVar18;
            plVar3 = plVar18;
            if (plVar18[600] != 0) {
              plVar3 = plVar18 + plVar18[600] * 3;
            }
            if (plVar3 == plVar18) {
              uVar19 = 0;
              uVar12 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              if ((long *)*plVar18 != plVar17) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar18,plVar18);
                plVar17 = (long *)*plVar18;
              }
              plVar2 = plVar18 + 3;
              if (plVar3 == plVar2) {
                uVar19 = 0;
                uVar12 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar8 = (long *)*plVar2 != plVar17;
                if (bVar8) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar18,plVar18 + 3);
                  plVar17 = (long *)plVar18[3];
                }
                uVar19 = (ulong)bVar8;
                plVar2 = plVar18 + 6;
                if (plVar3 == plVar2) {
                  uVar12 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 6);
                    plVar17 = (long *)plVar18[6];
                    uVar19 = 2;
                  }
                  plVar2 = plVar18 + 9;
                  if (plVar3 == plVar2) {
                    uVar12 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 9);
                      plVar17 = (long *)plVar18[9];
                      uVar19 = 3;
                    }
                    plVar2 = plVar18 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar12 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + 0xc);
                        plVar17 = (long *)plVar18[0xc];
                        uVar19 = 4;
                      }
                      plVar2 = plVar18 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar12 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))
                                    (plVar17,plVar18 + uVar19 * 3,plVar18 + 0xf);
                          plVar17 = (long *)plVar18[0xf];
                          uVar19 = 5;
                        }
                        uVar12 = 6;
                        for (plVar2 = plVar18 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar17) {
                            (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar2);
                            plVar17 = (long *)*plVar2;
                            uVar19 = uVar12;
                          }
                          uVar12 = uVar12 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar17 + 0x100))(plVar17,plVar18 + uVar19 * 3,plVar18 + uVar12 * 3);
            plVar18[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
    }
  }
  local_a0 = -0x100000000;
  uVar10 = FUN_0103b2e0(param_1 + 0xe8,&local_a0);
  plVar18 = (long *)(param_1 + 0x48);
  lVar14 = *plVar18;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar14) {
    plVar18 = (long *)0x0;
    bVar8 = true;
LAB_011c430c:
    local_80 = 0;
    local_88 = (long *)0x0;
    local_a0 = param_1;
    local_98 = (long *)uVar10;
    local_90 = param_1;
    FUN_01084328(&local_88,param_2);
    FUN_01e390c0(param_1 + 0x60,&local_a0);
    plVar3 = local_88;
    if (local_88 != (long *)0x0) {
      plVar17 = local_88 + 3;
      do {
        sVar4 = (short)*plVar17;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(short *)plVar17 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar1 = (int *)((long)local_88 + 0x1c);
        do {
          iVar9 = *piVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_68 = (long *)*plVar3;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (!bVar8) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
    return uVar10;
  }
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar18 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_011c4308;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar18 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_011c4308;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar8) {
      *plVar18 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_011c4308:
  bVar8 = false;
  goto LAB_011c430c;
}


