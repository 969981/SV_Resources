/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea4a20; name: FUN_00ea4a20
 */


void FUN_00ea4a20(long param_1,uint param_2,uint param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  size_t sVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  long *local_b8;
  long *local_b0;
  ulong local_a8;
  long *local_98;
  long *local_90;
  long *local_88;
  size_t local_80;
  undefined8 local_78;
  uint local_6c;
  long *local_68;
  
  *(uint *)(param_1 + 0x58) = param_2;
  *(long **)(param_1 + 0xc0) = param_4;
  local_6c = param_3;
  lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == -1) goto LAB_00ea5720;
  }
  plVar11 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 5;
    do {
      lVar14 = *plVar18;
      iVar9 = (int)lVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(int *)plVar18 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00ea4e58;
  }
  *(long *)(param_1 + 0x40) = lVar10;
  lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == -1) goto LAB_00ea5720;
  }
  plVar11 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 5;
    do {
      lVar14 = *plVar18;
      iVar9 = (int)lVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(int *)plVar18 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00ea4e58;
  }
  *(long *)(param_1 + 0xe8) = lVar10;
  lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == -1) goto LAB_00ea5720;
  }
  plVar11 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 5;
    do {
      lVar14 = *plVar18;
      iVar9 = (int)lVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(int *)plVar18 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00ea4e58;
  }
  *(long *)(param_1 + 0xf0) = lVar10;
  lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == -1) goto LAB_00ea5720;
  }
  plVar11 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 5;
    do {
      lVar14 = *plVar18;
      iVar9 = (int)lVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(int *)plVar18 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00ea4e58;
  }
  uVar5 = *(uint *)(param_1 + 0x58);
  *(long *)(param_1 + 0x48) = lVar10;
  sVar16 = (ulong)uVar5 * 0x18;
  pvVar12 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar16,8);
  if (pvVar12 == (void *)0x0) {
    local_80 = 0;
    local_78 = 0;
    local_88 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00ea5804;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_4;
    lVar14 = *(long *)(lVar10 + 0x80) + 1;
    *(long *)(lVar10 + 0x80) = lVar14;
    if (uVar5 != 0) {
      memset(pvVar12,0,sVar16);
      lVar14 = *(long *)(lVar10 + 0x80);
    }
    local_78 = 8;
    *(long *)(lVar10 + 0x80) = lVar14 + -1;
    local_88 = param_4;
    local_80 = sVar16;
  }
  local_90 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0x60);
  *(void **)(param_1 + 0x60) = pvVar12;
  if (lVar10 != 0) {
    FUN_0128e4e0(param_1 + 0x68);
  }
  uVar5 = local_6c;
  *(size_t *)(param_1 + 0x70) = local_80;
  *(undefined8 *)(param_1 + 0x78) = local_78;
  *(long **)(param_1 + 0x68) = local_88;
  sVar16 = (ulong)local_6c << 1;
  pvVar12 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar16,2);
  if (pvVar12 == (void *)0x0) {
    plVar11 = (long *)0x0;
    sVar16 = 0;
    uVar19 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00ea5804;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_4;
    lVar14 = *(long *)(lVar10 + 0x80) + 1;
    *(long *)(lVar10 + 0x80) = lVar14;
    if (uVar5 != 0) {
      memset(pvVar12,0,sVar16);
      lVar14 = *(long *)(lVar10 + 0x80);
    }
    uVar19 = 2;
    *(long *)(lVar10 + 0x80) = lVar14 + -1;
    plVar11 = param_4;
  }
  lVar10 = *(long *)(param_1 + 0x80);
  *(void **)(param_1 + 0x80) = pvVar12;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar6 = *(int *)(lVar14 + 0x12c8);
    iVar9 = iVar6 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar9;
    if (*(int *)(lVar14 + 0x12cc) <= iVar6) {
      *(int *)(lVar14 + 0x12cc) = iVar9;
    }
    plVar18 = *(long **)(param_1 + 0x88);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar17 = *(undefined8 *)(param_1 + 0x98);
    uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar10,uVar4,uVar17);
    }
    else {
      FUN_00c48fe8(plVar18,lVar10,uVar4,uVar17);
    }
    lVar10 = FUN_00c4e600();
    iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar18 = (long *)FUN_00c4e600();
      if (plVar18[600] != 0) {
        local_68 = plVar18 + plVar18[600] * 3;
        local_90 = plVar18;
        FUN_00c4ea30(&local_90,&local_68);
        local_98 = (long *)*plVar18;
        plVar3 = plVar18;
        if (plVar18[600] != 0) {
          plVar3 = plVar18 + plVar18[600] * 3;
        }
        if (plVar3 == plVar18) {
          local_b0 = (long *)0x0;
          local_a8 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar18 + 0xd0))();
          if ((long *)*plVar18 != local_98) {
            (**(code **)(*local_98 + 0x100))(local_98,plVar18,plVar18);
            local_98 = (long *)*plVar18;
          }
          plVar2 = plVar18 + 3;
          if (plVar3 == plVar2) {
            local_a8 = 0;
            local_b0 = (long *)0x1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar8 = (long *)*plVar2 != local_98;
            if (bVar8) {
              (**(code **)(*local_98 + 0x100))(local_98,plVar18,plVar18 + 3);
              local_98 = (long *)plVar18[3];
            }
            local_a8 = (ulong)bVar8;
            plVar2 = plVar18 + 6;
            if (plVar3 == plVar2) {
              local_b0 = (long *)0x2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != local_98) {
                (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + 6);
                local_98 = (long *)plVar18[6];
                local_a8 = 2;
              }
              plVar2 = plVar18 + 9;
              if (plVar3 == plVar2) {
                local_b0 = (long *)0x3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != local_98) {
                  (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + 9);
                  local_98 = (long *)plVar18[9];
                  local_a8 = 3;
                }
                plVar2 = plVar18 + 0xc;
                if (plVar3 == plVar2) {
                  local_b0 = (long *)0x4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != local_98) {
                    (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + 0xc);
                    local_98 = (long *)plVar18[0xc];
                    local_a8 = 4;
                  }
                  plVar2 = plVar18 + 0xf;
                  if (plVar3 == plVar2) {
                    local_b0 = (long *)0x5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != local_98) {
                      (**(code **)(*local_98 + 0x100))
                                (local_98,plVar18 + local_a8 * 3,plVar18 + 0xf);
                      local_98 = (long *)plVar18[0xf];
                      local_a8 = 5;
                    }
                    local_b8 = plVar18 + 0x12;
                    if (plVar3 == local_b8) {
                      local_b0 = (long *)0x6;
                    }
                    else {
                      local_b0 = (long *)0x6;
                      do {
                        (**(code **)(*(long *)*local_b8 + 0xd0))();
                        if ((long *)*local_b8 != local_98) {
                          (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,local_b8)
                          ;
                          local_98 = (long *)*local_b8;
                          local_a8 = (ulong)local_b0;
                        }
                        local_b0 = (long *)((long)local_b0 + 1);
                        local_b8 = local_b8 + 3;
                      } while (plVar3 != local_b8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*local_98 + 0x100))
                  (local_98,plVar18 + local_a8 * 3,plVar18 + (long)local_b0 * 3);
        plVar18[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x98) = uVar19;
  *(long **)(param_1 + 0x88) = plVar11;
  *(size_t *)(param_1 + 0x90) = sVar16;
  lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == -1) goto LAB_00ea5720;
  }
  plVar11 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar11 != (long *)0x0) {
    plVar18 = plVar11 + 5;
    do {
      lVar14 = *plVar18;
      iVar9 = (int)lVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar8) {
        *(int *)plVar18 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00ea4e58;
  }
  *(long *)(param_1 + 0x50) = lVar10;
  sVar16 = (ulong)param_2 << 3;
  pvVar12 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar16,4);
  if (pvVar12 == (void *)0x0) {
    plVar11 = (long *)0x0;
    sVar16 = 0;
    uVar19 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00ea5804;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_4;
    lVar14 = *(long *)(lVar10 + 0x80) + 1;
    *(long *)(lVar10 + 0x80) = lVar14;
    if (param_2 != 0) {
      memset(pvVar12,0,sVar16);
      lVar14 = *(long *)(lVar10 + 0x80);
    }
    *(long *)(lVar10 + 0x80) = lVar14 + -1;
    uVar19 = 4;
    plVar11 = param_4;
  }
  lVar10 = *(long *)(param_1 + 0xa0);
  *(void **)(param_1 + 0xa0) = pvVar12;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar6 = *(int *)(lVar14 + 0x12c8);
    iVar9 = iVar6 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar9;
    if (*(int *)(lVar14 + 0x12cc) <= iVar6) {
      *(int *)(lVar14 + 0x12cc) = iVar9;
    }
    plVar18 = *(long **)(param_1 + 0xa8);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    uVar17 = *(undefined8 *)(param_1 + 0xb8);
    uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar10,uVar4,uVar17);
    }
    else {
      FUN_00c48fe8(plVar18,lVar10,uVar4,uVar17);
    }
    lVar10 = FUN_00c4e600();
    iVar9 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar18 = (long *)FUN_00c4e600();
      if (plVar18[600] != 0) {
        local_68 = plVar18 + plVar18[600] * 3;
        local_90 = plVar18;
        FUN_00c4ea30(&local_90,&local_68);
        local_98 = (long *)*plVar18;
        plVar3 = plVar18;
        if (plVar18[600] != 0) {
          plVar3 = plVar18 + plVar18[600] * 3;
        }
        if (plVar3 == plVar18) {
          local_a8 = 0;
          uVar15 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar18 + 0xd0))();
          if ((long *)*plVar18 != local_98) {
            (**(code **)(*local_98 + 0x100))(local_98,plVar18,plVar18);
            local_98 = (long *)*plVar18;
          }
          plVar2 = plVar18 + 3;
          if (plVar3 == plVar2) {
            local_a8 = 0;
            uVar15 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar8 = (long *)*plVar2 != local_98;
            if (bVar8) {
              (**(code **)(*local_98 + 0x100))(local_98,plVar18,plVar18 + 3);
              local_98 = (long *)plVar18[3];
            }
            local_a8 = (ulong)bVar8;
            plVar2 = plVar18 + 6;
            if (plVar3 == plVar2) {
              uVar15 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != local_98) {
                (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + 6);
                local_98 = (long *)plVar18[6];
                local_a8 = 2;
              }
              plVar2 = plVar18 + 9;
              if (plVar3 == plVar2) {
                uVar15 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != local_98) {
                  (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + 9);
                  local_98 = (long *)plVar18[9];
                  local_a8 = 3;
                }
                plVar2 = plVar18 + 0xc;
                if (plVar3 == plVar2) {
                  uVar15 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != local_98) {
                    (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + 0xc);
                    local_98 = (long *)plVar18[0xc];
                    local_a8 = 4;
                  }
                  plVar2 = plVar18 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar15 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != local_98) {
                      (**(code **)(*local_98 + 0x100))
                                (local_98,plVar18 + local_a8 * 3,plVar18 + 0xf);
                      local_98 = (long *)plVar18[0xf];
                      local_a8 = 5;
                    }
                    uVar15 = 6;
                    for (local_b0 = plVar18 + 0x12; plVar3 != local_b0; local_b0 = local_b0 + 3) {
                      (**(code **)(*(long *)*local_b0 + 0xd0))();
                      if ((long *)*local_b0 != local_98) {
                        (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,local_b0);
                        local_98 = (long *)*local_b0;
                        local_a8 = uVar15;
                      }
                      uVar15 = uVar15 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*local_98 + 0x100))(local_98,plVar18 + local_a8 * 3,plVar18 + uVar15 * 3);
        plVar18[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = *(long *)(param_1 + 0x60);
  *(long **)(param_1 + 0xa8) = plVar11;
  *(size_t *)(param_1 + 0xb0) = sVar16;
  *(undefined8 *)(param_1 + 0xb8) = uVar19;
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else if (*(int *)(param_1 + 0x58) != 0) {
    uVar15 = 0;
    do {
      lVar10 = lVar10 + uVar15 * 0x18;
      *(ushort *)(lVar10 + 0x12) = *(ushort *)(lVar10 + 0x12) & 0xfffe;
      *(undefined8 *)(*(long *)(param_1 + 0x60) + uVar15 * 0x18 + 8) = 0;
      lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
      if (lVar10 != 0) {
        piVar1 = (int *)(lVar10 + 0x28);
        do {
          iVar9 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar9 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == -1) goto LAB_00ea5720;
      }
      plVar18 = (long *)(*(long *)(param_1 + 0x60) + uVar15 * 0x18);
      plVar11 = (long *)*plVar18;
      *plVar18 = 0;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 5;
        do {
          lVar14 = *plVar3;
          iVar9 = (int)lVar14 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *(int *)plVar3 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar14 == 0) goto LAB_00ea4e58;
      }
      *plVar18 = lVar10;
      lVar10 = *(long *)(param_1 + 0x60);
      if (*(long *)(lVar10 + uVar15 * 0x18) == 0) {
        *(int *)(param_1 + 0x58) = (int)uVar15;
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x58));
  }
  puVar13 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x18,8);
  if (puVar13 == (undefined8 *)0x0) {
    local_80 = 0;
    local_78 = 0;
    local_88 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00ea5804:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_4;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    local_80 = 0x18;
    local_78 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_88 = param_4;
  }
  local_90 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0xf8);
  *(undefined8 **)(param_1 + 0xf8) = puVar13;
  if (lVar10 != 0) {
    FUN_00ea621c(param_1 + 0x100);
  }
  *(size_t *)(param_1 + 0x108) = local_80;
  *(undefined8 *)(param_1 + 0x110) = local_78;
  *(long **)(param_1 + 0x100) = local_88;
  lVar10 = FUN_00ea5b00(&local_90,param_4,&local_6c);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == -1) {
LAB_00ea5720:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar18 = *(long **)(param_1 + 0xf8);
  plVar11 = (long *)*plVar18;
  *plVar18 = 0;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 5;
    do {
      lVar14 = *plVar3;
      iVar9 = (int)lVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
LAB_00ea4e58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar18 = lVar10;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}


