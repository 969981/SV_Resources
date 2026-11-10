/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdbbd0; name: FUN_00fdbbd0
 */


undefined8 FUN_00fdbbd0(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long local_c0;
  long *local_b8;
  long local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_80 = *(undefined8 *)(param_2 + 8);
    FUN_00fd8ee0(&local_c0,local_80,&local_80);
    lVar10 = local_c0;
    local_c0 = 0;
    lVar13 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar10;
    if (lVar13 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_a8;
      *(long *)(param_2 + 0x208) = local_b0;
      *(long **)(param_2 + 0x200) = local_b8;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar8 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar8;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar8;
      }
      lVar10 = *(long *)(lVar13 + 0xf8);
      if (lVar10 != 0) {
        plVar17 = *(long **)(lVar13 + 0x110);
        *(long *)(lVar13 + 0x100) = lVar10;
        lVar14 = *(long *)(lVar13 + 0x108) - lVar10;
        uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar14,8);
        }
        else {
          FUN_00c48fe8(plVar17,lVar10,lVar14,8);
        }
      }
      lVar10 = *(long *)(lVar13 + 0xc0);
      if (lVar10 != 0) {
        plVar17 = *(long **)(lVar13 + 0xd8);
        *(long *)(lVar13 + 200) = lVar10;
        lVar14 = *(long *)(lVar13 + 0xd0) - lVar10;
        uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar14,8);
        }
        else {
          FUN_00c48fe8(plVar17,lVar10,lVar14,8);
        }
      }
      FUN_010920f8(lVar13 + 8);
      plVar17 = *(long **)(param_2 + 0x200);
      uVar9 = *(undefined8 *)(param_2 + 0x208);
      uVar15 = *(undefined8 *)(param_2 + 0x210);
      uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,uVar9,uVar15);
      }
      else {
        FUN_00c48fe8(plVar17,lVar13,uVar9,uVar15);
      }
      lVar10 = FUN_00c4e600();
      iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar17 = (long *)FUN_00c4e600();
        if (plVar17[600] != 0) {
          local_78 = plVar17 + plVar17[600] * 3;
          local_68 = plVar17;
          FUN_00c4ea30(&local_68,&local_78);
          plVar16 = (long *)*plVar17;
          plVar2 = plVar17;
          if (plVar17[600] != 0) {
            plVar2 = plVar17 + plVar17[600] * 3;
          }
          if (plVar2 == plVar17) {
            uVar19 = 0;
            uVar11 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar17 + 0xd0))();
            if ((long *)*plVar17 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar17,plVar17);
              plVar16 = (long *)*plVar17;
            }
            plVar18 = plVar17 + 3;
            if (plVar2 == plVar18) {
              uVar19 = 0;
              uVar11 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              bVar7 = (long *)*plVar18 != plVar16;
              if (bVar7) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar17,plVar17 + 3);
                plVar16 = (long *)plVar17[3];
              }
              uVar19 = (ulong)bVar7;
              plVar18 = plVar17 + 6;
              if (plVar2 == plVar18) {
                uVar11 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                if ((long *)*plVar18 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 6);
                  plVar16 = (long *)plVar17[6];
                  uVar19 = 2;
                }
                plVar18 = plVar17 + 9;
                if (plVar2 == plVar18) {
                  uVar11 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 9);
                    plVar16 = (long *)plVar17[9];
                    uVar19 = 3;
                  }
                  plVar18 = plVar17 + 0xc;
                  if (plVar2 == plVar18) {
                    uVar11 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 0xc);
                      plVar16 = (long *)plVar17[0xc];
                      uVar19 = 4;
                    }
                    plVar18 = plVar17 + 0xf;
                    if (plVar2 == plVar18) {
                      uVar11 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 0xf);
                        plVar16 = (long *)plVar17[0xf];
                        uVar19 = 5;
                      }
                      uVar11 = 6;
                      for (plVar18 = plVar17 + 0x12; plVar2 != plVar18; plVar18 = plVar18 + 3) {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar18);
                          plVar16 = (long *)*plVar18;
                          uVar19 = uVar11;
                        }
                        uVar11 = uVar11 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + uVar11 * 3);
          plVar17[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
      lVar10 = local_c0;
      *(undefined8 *)(param_2 + 0x210) = local_a8;
      *(long *)(param_2 + 0x208) = local_b0;
      *(long **)(param_2 + 0x200) = local_b8;
      local_c0 = 0;
      if (lVar10 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar4 = *(int *)(lVar13 + 0x12c8);
        iVar8 = iVar4 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar8;
        if (*(int *)(lVar13 + 0x12cc) <= iVar4) {
          *(int *)(lVar13 + 0x12cc) = iVar8;
        }
        lVar13 = *(long *)(lVar10 + 0xf8);
        if (lVar13 != 0) {
          plVar17 = *(long **)(lVar10 + 0x110);
          *(long *)(lVar10 + 0x100) = lVar13;
          lVar14 = *(long *)(lVar10 + 0x108) - lVar13;
          uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,lVar14,8);
          }
          else {
            FUN_00c48fe8(plVar17,lVar13,lVar14,8);
          }
        }
        lVar13 = *(long *)(lVar10 + 0xc0);
        if (lVar13 != 0) {
          plVar17 = *(long **)(lVar10 + 0xd8);
          *(long *)(lVar10 + 200) = lVar13;
          lVar14 = *(long *)(lVar10 + 0xd0) - lVar13;
          uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,lVar14,8);
          }
          else {
            FUN_00c48fe8(plVar17,lVar13,lVar14,8);
          }
        }
        FUN_010920f8(lVar10 + 8);
        uVar11 = (**(code **)(*local_b8 + 0xf8))(local_b8);
        if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*local_b8 + 0x18))(local_b8,lVar10,local_b0,local_a8);
        }
        else {
          FUN_00c48fe8(local_b8,lVar10,local_b0,local_a8);
        }
        lVar10 = FUN_00c4e600();
        iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
        *(int *)(lVar10 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar17 = (long *)FUN_00c4e600();
          if (plVar17[600] != 0) {
            local_78 = plVar17 + plVar17[600] * 3;
            local_68 = plVar17;
            FUN_00c4ea30(&local_68,&local_78);
            plVar16 = (long *)*plVar17;
            plVar2 = plVar17;
            if (plVar17[600] != 0) {
              plVar2 = plVar17 + plVar17[600] * 3;
            }
            if (plVar2 == plVar17) {
              uVar19 = 0;
              uVar11 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar17 + 0xd0))();
              if ((long *)*plVar17 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar17,plVar17);
                plVar16 = (long *)*plVar17;
              }
              plVar18 = plVar17 + 3;
              if (plVar2 == plVar18) {
                uVar19 = 0;
                uVar11 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                bVar7 = (long *)*plVar18 != plVar16;
                if (bVar7) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar17,plVar17 + 3);
                  plVar16 = (long *)plVar17[3];
                }
                uVar19 = (ulong)bVar7;
                plVar18 = plVar17 + 6;
                if (plVar2 == plVar18) {
                  uVar11 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 6);
                    plVar16 = (long *)plVar17[6];
                    uVar19 = 2;
                  }
                  plVar18 = plVar17 + 9;
                  if (plVar2 == plVar18) {
                    uVar11 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 9);
                      plVar16 = (long *)plVar17[9];
                      uVar19 = 3;
                    }
                    plVar18 = plVar17 + 0xc;
                    if (plVar2 == plVar18) {
                      uVar11 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + 0xc);
                        plVar16 = (long *)plVar17[0xc];
                        uVar19 = 4;
                      }
                      plVar18 = plVar17 + 0xf;
                      if (plVar2 == plVar18) {
                        uVar11 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))
                                    (plVar16,plVar17 + uVar19 * 3,plVar17 + 0xf);
                          plVar16 = (long *)plVar17[0xf];
                          uVar19 = 5;
                        }
                        uVar11 = 6;
                        for (plVar18 = plVar17 + 0x12; plVar2 != plVar18; plVar18 = plVar18 + 3) {
                          (**(code **)(*(long *)*plVar18 + 0xd0))();
                          if ((long *)*plVar18 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar18);
                            plVar16 = (long *)*plVar18;
                            uVar19 = uVar11;
                          }
                          uVar11 = uVar11 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar17 + uVar19 * 3,plVar17 + uVar11 * 3);
            plVar17[600] = 0;
          }
          *(undefined4 *)(lVar10 + 0x12cc) = 0;
        }
      }
    }
  }
  local_c0 = -0xfffffffd;
  uVar9 = FUN_0103b2e0(param_2 + 0xe8,&local_c0);
  plVar17 = (long *)(param_2 + 0x48);
  lVar13 = *plVar17;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar13) {
    plVar17 = (long *)0x0;
    bVar7 = true;
LAB_00fdbc58:
    local_a8 = *param_3;
    local_a0 = (long *)0x0;
    local_98 = 0;
    local_c0 = param_2;
    local_b8 = (long *)uVar9;
    local_b0 = param_2;
    FUN_00f34110(&local_a0,param_3 + 1);
    local_90 = param_1;
    local_88 = param_4;
    FUN_02000840(param_2 + 0x60,&local_c0);
    plVar2 = local_a0;
    if (local_a0 != (long *)0x0) {
      plVar16 = local_a0 + 3;
      do {
        sVar3 = (short)*plVar16;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(short *)plVar16 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar1 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = (long *)*plVar2;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (!bVar7) {
      *plVar17 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
    }
    return uVar9;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar7) {
      *plVar17 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00fdbc54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar17 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00fdbc54;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar7) {
      *plVar17 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00fdbc54:
  bVar7 = false;
  goto LAB_00fdbc58;
}


