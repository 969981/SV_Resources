/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03297d80; name: FUN_03297d80
 */


/* WARNING: Removing unreachable block (ram,0x03298a68) */
/* WARNING: Removing unreachable block (ram,0x03298a70) */
/* WARNING: Removing unreachable block (ram,0x03298954) */
/* WARNING: Removing unreachable block (ram,0x0329895c) */
/* WARNING: Removing unreachable block (ram,0x03298964) */
/* WARNING: Removing unreachable block (ram,0x0329896c) */
/* WARNING: Removing unreachable block (ram,0x03298970) */
/* WARNING: Removing unreachable block (ram,0x03298978) */
/* WARNING: Removing unreachable block (ram,0x03298088) */
/* WARNING: Removing unreachable block (ram,0x03298090) */
/* WARNING: Removing unreachable block (ram,0x03298098) */
/* WARNING: Removing unreachable block (ram,0x032980a0) */
/* WARNING: Removing unreachable block (ram,0x032980a4) */
/* WARNING: Removing unreachable block (ram,0x032980ac) */
/* WARNING: Removing unreachable block (ram,0x032989ec) */
/* WARNING: Removing unreachable block (ram,0x032989f4) */
/* WARNING: Removing unreachable block (ram,0x032989d0) */
/* WARNING: Removing unreachable block (ram,0x032989d8) */
/* WARNING: Removing unreachable block (ram,0x032989e0) */
/* WARNING: Removing unreachable block (ram,0x032989e8) */
/* WARNING: Removing unreachable block (ram,0x03298a4c) */
/* WARNING: Removing unreachable block (ram,0x03298a54) */
/* WARNING: Removing unreachable block (ram,0x03298a5c) */
/* WARNING: Removing unreachable block (ram,0x03298a64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03297d80(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long local_138;
  long local_130;
  undefined8 local_128;
  ulong local_120;
  long local_118;
  byte *pbStack_110;
  ulong local_108;
  long local_100;
  byte *pbStack_f8;
  ulong local_f0;
  long local_e8;
  byte *pbStack_e0;
  ulong local_d8;
  long local_d0;
  byte *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  byte *pbStack_98;
  ulong local_90;
  long local_88;
  byte *local_80;
  undefined8 local_78;
  ulong local_70;
  
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],"nodes_temp","",1), uVar6 < 2)) {
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    pbStack_98 = (byte *)0x0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar6);
    local_a0 = 0;
    pbStack_98 = (byte *)0x0;
    local_90 = 0;
    pbVar12 = local_80;
    if (local_80 != (byte *)0x0) {
      for (; (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
      }
      if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) == 8) {
        local_a0 = local_88;
        pbStack_98 = local_80;
        if ((local_78 & 1) != 0) {
          piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_90 = local_78;
      }
    }
  }
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],"nodes","",1), uVar6 < 2)) {
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_88 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar6);
  }
  FUN_031e7578(&local_88,&local_a0);
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],"domain_temp","",1), uVar6 < 2)) {
    local_b0 = 0;
    local_a8 = 0;
    local_b8 = 0;
  }
  else {
    FUN_031e32f0(&local_b8,param_1,uVar6);
  }
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],"domain","",1), uVar6 < 2)) {
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_88 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar6);
  }
  FUN_031e7578(&local_88,&local_b8);
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar6 = FUN_031e198c(param_1[1],"primitiveDataRuns_new","",1), uVar6 < 2))
  {
    local_138 = 0;
    pbVar12 = (byte *)0x0;
    uVar6 = 0;
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_88 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar6);
    pbVar12 = local_80;
    if (local_80 != (byte *)0x0) {
      pbVar13 = local_80;
      if ((*local_80 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) == 8) {
        local_138 = local_88;
        uVar6 = local_78;
        if ((local_78 & 1) != 0) {
          piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_032980d8;
      }
      pbVar12 = (byte *)0x0;
    }
    local_138 = 0;
    uVar6 = 0;
  }
LAB_032980d8:
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar8 = FUN_031e198c(param_1[1],"primitiveDataRuns_old","",1), uVar8 < 2))
  {
    lVar16 = 0;
    pbVar13 = (byte *)0x0;
    local_88 = 0;
    uVar8 = 0;
    local_80 = (byte *)0x0;
    local_78 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar8);
    pbVar13 = local_80;
    if (local_80 != (byte *)0x0) {
      pbVar14 = local_80;
      if ((*local_80 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) == 8) {
        lVar16 = local_88;
        uVar8 = local_78;
        if ((local_78 & 1) != 0) {
          piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_032981d4;
      }
      pbVar13 = (byte *)0x0;
    }
    lVar16 = 0;
    uVar8 = 0;
  }
LAB_032981d4:
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar4 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_78 = 0;
  local_70 = 0;
  plVar17 = (long *)(uVar8 & 0xfffffffffffffffe);
  local_88 = 0;
  local_80 = (byte *)0x0;
  (**(code **)(*plVar17 + 0x50))(plVar17,lVar16,pbVar13,&local_88);
  uVar11 = local_78;
  iVar5 = (int)local_78;
  if ((local_70 & 1) != 0) {
    plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar7 = plVar9 + 1;
    do {
      lVar4 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  plVar7 = (long *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x58))(plVar7,local_138,pbVar12,uVar11 & 0xffffffff);
  if (0 < iVar5) {
    iVar15 = 0;
    do {
      local_78 = 0;
      local_70 = 0;
      local_88 = 0;
      local_80 = (byte *)0x0;
      (**(code **)(*plVar17 + 0x50))(plVar17,lVar16,pbVar13,&local_88);
      if (iVar15 < (int)local_78) {
        local_d0 = local_88 + (long)local_78._4_4_ * (long)iVar15;
        local_c8 = local_80;
        local_c0 = local_70;
        if ((local_70 & 1) != 0) {
          piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        local_c8 = (byte *)0x0;
        local_c0 = 0;
        local_d0 = 0;
      }
      if ((local_70 & 1) != 0) {
        plVar10 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"count","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
        local_d8 = 0;
        local_e8 = 0;
        pbStack_e0 = (byte *)0x0;
      }
      else {
        FUN_031e32f0(&local_88,&local_d0,uVar11);
        local_e8 = 0;
        pbStack_e0 = (byte *)0x0;
        local_d8 = 0;
        pbVar14 = local_80;
        if (local_80 != (byte *)0x0) {
          for (; (*pbVar14 & 1) == 0; pbVar14 = *(byte **)(pbVar14 + 8)) {
          }
          if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) == 4) {
            local_e8 = local_88;
            pbStack_e0 = local_80;
            if ((local_78 & 1) != 0) {
              piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            local_d8 = local_78;
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"index","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
        local_f0 = 0;
        local_100 = 0;
        pbStack_f8 = (byte *)0x0;
      }
      else {
        FUN_031e32f0(&local_88,&local_d0,uVar11);
        local_100 = 0;
        pbStack_f8 = (byte *)0x0;
        local_f0 = 0;
        pbVar14 = local_80;
        if (local_80 != (byte *)0x0) {
          for (; (*pbVar14 & 1) == 0; pbVar14 = *(byte **)(pbVar14 + 8)) {
          }
          if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) == 4) {
            local_100 = local_88;
            pbStack_f8 = local_80;
            if ((local_78 & 1) != 0) {
              piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            local_f0 = local_78;
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"value","",1), uVar11 < 2)) {
        local_128 = 0;
        local_120 = 0;
        local_130 = 0;
LAB_03298534:
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
        local_108 = 0;
        local_118 = 0;
        pbStack_110 = (byte *)0x0;
      }
      else {
        FUN_031e32f0(&local_130,&local_d0,uVar11);
        if ((local_130 == 0) ||
           (uVar11 = FUN_031e198c(local_128,&DAT_03c68983,&DAT_03c68987,1), uVar11 < 2))
        goto LAB_03298534;
        FUN_031e32f0(&local_88,&local_130,uVar11);
        local_118 = 0;
        pbStack_110 = (byte *)0x0;
        local_108 = 0;
        pbVar14 = local_80;
        if (local_80 != (byte *)0x0) {
          for (; (*pbVar14 & 1) == 0; pbVar14 = *(byte **)(pbVar14 + 8)) {
          }
          if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) == 4) {
            local_118 = local_88;
            pbStack_110 = local_80;
            if ((local_78 & 1) != 0) {
              piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            local_108 = local_78;
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_120 & 1) != 0) {
        plVar10 = (long *)(local_120 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      local_78 = 0;
      local_70 = 0;
      local_88 = 0;
      local_80 = (byte *)0x0;
      (**(code **)(*plVar7 + 0x50))(plVar7,local_138,pbVar12,&local_88);
      if (iVar15 < (int)local_78) {
        local_130 = local_88 + (long)local_78._4_4_ * (long)iVar15;
        local_128 = local_80;
        local_120 = local_70;
        if ((local_70 & 1) != 0) {
          piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        local_128 = 0;
        local_120 = 0;
        local_130 = 0;
      }
      if ((local_70 & 1) != 0) {
        plVar10 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_130 == 0) || (uVar11 = FUN_031e198c(local_128,"count","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_130,uVar11);
      }
      FUN_031e7578(&local_88,&local_e8);
      if ((local_78 & 1) != 0) {
        plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_130 == 0) || (uVar11 = FUN_031e198c(local_128,"index","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_130,uVar11);
      }
      FUN_031e7578(&local_88,&local_100);
      if ((local_78 & 1) != 0) {
        plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_130 == 0) || (uVar11 = FUN_031e198c(local_128,"value","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_130,uVar11);
      }
      FUN_031e7578(&local_88,&local_118);
      if ((local_78 & 1) != 0) {
        plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_120 & 1) != 0) {
        plVar10 = (long *)(local_120 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_108 & 1) != 0) {
        plVar10 = (long *)(local_108 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_f0 & 1) != 0) {
        plVar10 = (long *)(local_f0 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_d8 & 1) != 0) {
        plVar10 = (long *)(local_d8 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_c0 & 1) != 0) {
        plVar10 = (long *)(local_c0 & 0xfffffffffffffffe);
        plVar9 = plVar10 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar5);
  }
  if ((uVar8 & 1) != 0) {
    plVar9 = plVar17 + 1;
    do {
      lVar16 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar17 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  if ((uVar6 & 1) != 0) {
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if ((local_a8 & 1) != 0) {
    plVar7 = (long *)(local_a8 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_90 & 1) != 0) {
    plVar7 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar17 = plVar7 + 1;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar16 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
}


