/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02208cb8; name: FUN_02208cb8
 */


undefined8 FUN_02208cb8(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68 [3];
  
  plVar19 = (long *)(param_1 + 0x30);
  lVar16 = *plVar19;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar16) {
    lVar11 = nn::os::GetCurrentThread();
    while (*plVar19 == 0) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar9) {
        *plVar19 = lVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') goto LAB_02208d00;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
          while (*plVar19 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar9) {
              *plVar19 = lVar11;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_02208d00;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar9) {
        *plVar19 = lVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_02208d00:
    uVar12 = FUN_022099d8(param_1,param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return uVar12;
  }
  if (*(long *)(param_1 + 0x1d8) == 0) {
    local_78 = *(undefined8 *)(param_1 + 8);
    FUN_0142ce50(&local_d0,local_78,&local_78);
    lVar11 = local_d0;
    local_d0 = 0;
    lVar16 = *(long *)(param_1 + 0x1d8);
    *(long *)(param_1 + 0x1d8) = lVar11;
    if (lVar16 == 0) {
      *(long *)(param_1 + 0x1e8) = local_c0;
      *(long **)(param_1 + 0x1f0) = local_b8;
      *(long **)(param_1 + 0x1e0) = local_c8;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar6 = *(int *)(lVar11 + 0x12c8);
      iVar10 = iVar6 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar10;
      if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
        *(int *)(lVar11 + 0x12cc) = iVar10;
      }
      lVar11 = *(long *)(lVar16 + 0xf8);
      if (lVar11 != 0) {
        plVar19 = *(long **)(lVar16 + 0x110);
        *(long *)(lVar16 + 0x100) = lVar11;
        lVar17 = *(long *)(lVar16 + 0x108) - lVar11;
        uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar14 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar11,lVar17,8);
        }
        else {
          FUN_00c48fe8(plVar19,lVar11,lVar17,8);
        }
      }
      lVar11 = *(long *)(lVar16 + 0xc0);
      if (lVar11 != 0) {
        plVar19 = *(long **)(lVar16 + 0xd8);
        *(long *)(lVar16 + 200) = lVar11;
        lVar17 = *(long *)(lVar16 + 0xd0) - lVar11;
        uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar14 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar11,lVar17,8);
        }
        else {
          FUN_00c48fe8(plVar19,lVar11,lVar17,8);
        }
      }
      FUN_01278210(lVar16 + 8);
      plVar19 = *(long **)(param_1 + 0x1e0);
      uVar12 = *(undefined8 *)(param_1 + 0x1e8);
      uVar13 = *(undefined8 *)(param_1 + 0x1f0);
      uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar14 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,uVar12,uVar13);
      }
      else {
        FUN_00c48fe8(plVar19,lVar16,uVar12,uVar13);
      }
      lVar11 = FUN_00c4e600();
      iVar10 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar10;
      if (iVar10 == 0) {
        plVar19 = (long *)FUN_00c4e600();
        if (plVar19[600] != 0) {
          local_70 = plVar19 + plVar19[600] * 3;
          local_68[0] = plVar19;
          FUN_00c4ea30(local_68,&local_70);
          plVar18 = (long *)*plVar19;
          plVar4 = plVar19;
          if (plVar19[600] != 0) {
            plVar4 = plVar19 + plVar19[600] * 3;
          }
          if (plVar4 == plVar19) {
            uVar20 = 0;
            uVar14 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            if ((long *)*plVar19 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar19,plVar19);
              plVar18 = (long *)*plVar19;
            }
            plVar3 = plVar19 + 3;
            if (plVar4 == plVar3) {
              uVar20 = 0;
              uVar14 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar9 = (long *)*plVar3 != plVar18;
              if (bVar9) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar19,plVar19 + 3);
                plVar18 = (long *)plVar19[3];
              }
              uVar20 = (ulong)bVar9;
              plVar3 = plVar19 + 6;
              if (plVar4 == plVar3) {
                uVar14 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 6);
                  plVar18 = (long *)plVar19[6];
                  uVar20 = 2;
                }
                plVar3 = plVar19 + 9;
                if (plVar4 == plVar3) {
                  uVar14 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 9);
                    plVar18 = (long *)plVar19[9];
                    uVar20 = 3;
                  }
                  plVar3 = plVar19 + 0xc;
                  if (plVar4 == plVar3) {
                    uVar14 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 0xc);
                      plVar18 = (long *)plVar19[0xc];
                      uVar20 = 4;
                    }
                    plVar3 = plVar19 + 0xf;
                    if (plVar4 == plVar3) {
                      uVar14 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 0xf);
                        plVar18 = (long *)plVar19[0xf];
                        uVar20 = 5;
                      }
                      uVar14 = 6;
                      for (plVar3 = plVar19 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar3);
                          plVar18 = (long *)*plVar3;
                          uVar20 = uVar14;
                        }
                        uVar14 = uVar14 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + uVar14 * 3);
          plVar19[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
      lVar11 = local_d0;
      *(long **)(param_1 + 0x1e0) = local_c8;
      *(long *)(param_1 + 0x1e8) = local_c0;
      *(long **)(param_1 + 0x1f0) = local_b8;
      local_d0 = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar16 = FUN_00c4e600();
        iVar6 = *(int *)(lVar16 + 0x12c8);
        iVar10 = iVar6 + 1;
        *(int *)(lVar16 + 0x12c8) = iVar10;
        if (*(int *)(lVar16 + 0x12cc) <= iVar6) {
          *(int *)(lVar16 + 0x12cc) = iVar10;
        }
        lVar16 = *(long *)(lVar11 + 0xf8);
        if (lVar16 != 0) {
          plVar19 = *(long **)(lVar11 + 0x110);
          *(long *)(lVar11 + 0x100) = lVar16;
          lVar17 = *(long *)(lVar11 + 0x108) - lVar16;
          uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar14 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar17,8);
          }
          else {
            FUN_00c48fe8(plVar19,lVar16,lVar17,8);
          }
        }
        lVar16 = *(long *)(lVar11 + 0xc0);
        if (lVar16 != 0) {
          plVar19 = *(long **)(lVar11 + 0xd8);
          *(long *)(lVar11 + 200) = lVar16;
          lVar17 = *(long *)(lVar11 + 0xd0) - lVar16;
          uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar14 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar17,8);
          }
          else {
            FUN_00c48fe8(plVar19,lVar16,lVar17,8);
          }
        }
        FUN_01278210(lVar11 + 8);
        uVar14 = (**(code **)(*local_c8 + 0xf8))(local_c8);
        if (((uVar14 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*local_c8 + 0x18))(local_c8,lVar11,local_c0,local_b8);
        }
        else {
          FUN_00c48fe8(local_c8,lVar11,local_c0,local_b8);
        }
        lVar11 = FUN_00c4e600();
        iVar10 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar10;
        if (iVar10 == 0) {
          plVar19 = (long *)FUN_00c4e600();
          if (plVar19[600] != 0) {
            local_70 = plVar19 + plVar19[600] * 3;
            local_68[0] = plVar19;
            FUN_00c4ea30(local_68,&local_70);
            plVar18 = (long *)*plVar19;
            plVar4 = plVar19;
            if (plVar19[600] != 0) {
              plVar4 = plVar19 + plVar19[600] * 3;
            }
            if (plVar4 == plVar19) {
              uVar20 = 0;
              uVar14 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar19,plVar19);
                plVar18 = (long *)*plVar19;
              }
              plVar3 = plVar19 + 3;
              if (plVar4 == plVar3) {
                uVar20 = 0;
                uVar14 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                bVar9 = (long *)*plVar3 != plVar18;
                if (bVar9) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar19,plVar19 + 3);
                  plVar18 = (long *)plVar19[3];
                }
                uVar20 = (ulong)bVar9;
                plVar3 = plVar19 + 6;
                if (plVar4 == plVar3) {
                  uVar14 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 6);
                    plVar18 = (long *)plVar19[6];
                    uVar20 = 2;
                  }
                  plVar3 = plVar19 + 9;
                  if (plVar4 == plVar3) {
                    uVar14 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 9);
                      plVar18 = (long *)plVar19[9];
                      uVar20 = 3;
                    }
                    plVar3 = plVar19 + 0xc;
                    if (plVar4 == plVar3) {
                      uVar14 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + 0xc);
                        plVar18 = (long *)plVar19[0xc];
                        uVar20 = 4;
                      }
                      plVar3 = plVar19 + 0xf;
                      if (plVar4 == plVar3) {
                        uVar14 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))
                                    (plVar18,plVar19 + uVar20 * 3,plVar19 + 0xf);
                          plVar18 = (long *)plVar19[0xf];
                          uVar20 = 5;
                        }
                        uVar14 = 6;
                        for (plVar3 = plVar19 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar18) {
                            (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar3);
                            plVar18 = (long *)*plVar3;
                            uVar20 = uVar14;
                          }
                          uVar14 = uVar14 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar20 * 3,plVar19 + uVar14 * 3);
            plVar19[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
    }
  }
  local_d0 = -0xfffffffe;
  uVar12 = FUN_0103b2e0(param_1 + 0xe8,&local_d0);
  plVar19 = (long *)(param_1 + 0x48);
  lVar16 = *plVar19;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar16) {
    plVar19 = (long *)0x0;
    bVar9 = true;
LAB_02208e18:
    local_b0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = param_1;
    local_c8 = (long *)uVar12;
    local_c0 = param_1;
    FUN_02204460(&local_b8,param_2);
    local_a8 = *(undefined8 *)(param_2 + 0x10);
    local_a0 = *(undefined8 *)(param_2 + 0x18);
    uStack_98 = *(undefined8 *)(param_2 + 0x20);
    local_90 = *(undefined8 *)(param_2 + 0x28);
    local_88 = *(long **)(param_2 + 0x30);
    if (local_88 != (long *)0x0) {
      lVar11 = local_88[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_80 = 0;
    FUN_0220a3d8(param_1 + 0x60,&local_d0);
    if (local_88 != (long *)0x0) {
      lVar11 = local_88[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_88 + 0x50))();
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar4 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar18 = local_b8 + 3;
      do {
        sVar5 = (short)*plVar18;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *(short *)plVar18 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_b8 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_68[0] = (long *)*plVar4;
          FUN_00c44438(lVar11 + 0x8040,local_68);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (!bVar9) {
      *plVar19 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
    }
    return uVar12;
  }
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar9) {
      *plVar19 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_02208e14;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar19 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar9) {
            *plVar19 = lVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_02208e14;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar9) {
      *plVar19 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02208e14:
  bVar9 = false;
  goto LAB_02208e18;
}


