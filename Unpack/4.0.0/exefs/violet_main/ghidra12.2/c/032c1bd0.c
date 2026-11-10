/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032c1bd0; name: FUN_032c1bd0
 */


void FUN_032c1bd0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  undefined8 local_118;
  byte *local_110;
  ulong local_108;
  long local_100;
  byte *local_f8;
  ulong local_f0;
  long local_e8;
  byte *local_e0;
  ulong local_d8;
  long local_d0;
  byte *local_c8;
  ulong local_c0;
  long local_b8;
  byte *local_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  byte *local_80;
  undefined8 local_78;
  ulong local_70;
  
  if ((*param_1 == 0) || (uVar8 = FUN_031e198c(param_1[1],&DAT_03c68983,&DAT_03c68987,1), uVar8 < 2)
     ) {
    lVar14 = 0;
    pbVar16 = (byte *)0x0;
    local_88 = 0;
    uVar8 = 0;
    local_80 = (byte *)0x0;
    local_78 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar8);
    pbVar16 = local_80;
    if (local_80 != (byte *)0x0) {
      pbVar17 = local_80;
      if ((*local_80 & 1) == 0) {
        do {
          pbVar17 = *(byte **)(pbVar17 + 8);
        } while ((*pbVar17 & 1) == 0);
      }
      if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 6) {
        lVar14 = local_88;
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
        goto LAB_032c1cb8;
      }
      pbVar16 = (byte *)0x0;
    }
    lVar14 = 0;
    uVar8 = 0;
  }
LAB_032c1cb8:
  if ((local_78 & 1) != 0) {
    plVar9 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar10 = plVar9 + 1;
    do {
      lVar4 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  local_98 = 0;
  local_90 = 0;
  plVar10 = (long *)(uVar8 & 0xfffffffffffffffe);
  local_a0 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,lVar14,pbVar16,&local_a0);
  if ((*param_1 == 0) || (uVar11 = FUN_031e198c(param_1[1],"shapeTagTable","",1), uVar11 < 2)) {
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_88 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar11);
  }
  if ((local_a0 == 0) || (uVar11 = FUN_031e198c(local_98,"shapeTagTable","",1), uVar11 < 2)) {
    local_b8 = 0;
    local_b0 = (byte *)0x0;
    local_a8 = 0;
    FUN_031e7578(&local_88,&local_b8);
  }
  else {
    FUN_031e32f0(&local_b8,&local_a0,uVar11);
    uVar11 = local_a8;
    FUN_031e7578(&local_88,&local_b8);
    if ((uVar11 & 1) != 0) {
      plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
      plVar9 = plVar12 + 1;
      do {
        lVar14 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  if ((local_78 & 1) != 0) {
    plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar9 = plVar12 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar11 = FUN_031e198c(param_1[1],"topLevelTree","",1), uVar11 < 2)) {
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_88 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar11);
  }
  if ((local_a0 == 0) || (uVar11 = FUN_031e198c(local_98,"topLevelTree","",1), uVar11 < 2)) {
    local_b8 = 0;
    local_b0 = (byte *)0x0;
    local_a8 = 0;
    FUN_031e7578(&local_88,&local_b8);
  }
  else {
    FUN_031e32f0(&local_b8,&local_a0,uVar11);
    uVar11 = local_a8;
    FUN_031e7578(&local_88,&local_b8);
    if ((uVar11 & 1) != 0) {
      plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
      plVar9 = plVar12 + 1;
      do {
        lVar14 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  if ((local_78 & 1) != 0) {
    plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar9 = plVar12 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar11 = FUN_031e198c(param_1[1],"vertexConversionUtil","",1), uVar11 < 2)
     ) {
    local_80 = (byte *)0x0;
    local_78 = 0;
    local_88 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar11);
  }
  if ((local_a0 == 0) || (uVar11 = FUN_031e198c(local_98,"vertexConversionUtil","",1), uVar11 < 2))
  {
    local_b8 = 0;
    local_b0 = (byte *)0x0;
    local_a8 = 0;
    FUN_031e7578(&local_88,&local_b8);
  }
  else {
    FUN_031e32f0(&local_b8,&local_a0,uVar11);
    uVar11 = local_a8;
    FUN_031e7578(&local_88,&local_b8);
    if ((uVar11 & 1) != 0) {
      plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
      plVar9 = plVar12 + 1;
      do {
        lVar14 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  if ((local_78 & 1) != 0) {
    plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar9 = plVar12 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if ((local_a0 == 0) || (uVar11 = FUN_031e198c(local_98,"geometrySections","",1), uVar11 < 2)) {
    lVar14 = 0;
    pbVar16 = (byte *)0x0;
    local_b8 = 0;
    uVar11 = 0;
    local_b0 = (byte *)0x0;
    local_a8 = 0;
  }
  else {
    FUN_031e32f0(&local_b8,&local_a0,uVar11);
    pbVar16 = local_b0;
    if (local_b0 != (byte *)0x0) {
      pbVar17 = local_b0;
      if ((*local_b0 & 1) == 0) {
        do {
          pbVar17 = *(byte **)(pbVar17 + 8);
        } while ((*pbVar17 & 1) == 0);
      }
      if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
        lVar14 = local_b8;
        uVar11 = local_a8;
        if ((local_a8 & 1) != 0) {
          piVar1 = (int *)((local_a8 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_032c2110;
      }
      pbVar16 = (byte *)0x0;
    }
    lVar14 = 0;
    uVar11 = 0;
  }
LAB_032c2110:
  local_78 = 0;
  local_70 = 0;
  plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
  local_88 = 0;
  local_80 = (byte *)0x0;
  (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
  iVar5 = (int)local_78;
  if ((local_70 & 1) != 0) {
    plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar12 = plVar13 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar13 + 8))();
    }
  }
  if ((uVar11 & 1) != 0) {
    plVar12 = plVar9 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if ((local_a8 & 1) != 0) {
    plVar12 = (long *)(local_a8 & 0xfffffffffffffffe);
    plVar9 = plVar12 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar11 = FUN_031e198c(param_1[1],"geometrySections","",1), uVar11 < 2)) {
    lVar14 = 0;
    pbVar16 = (byte *)0x0;
    local_88 = 0;
    uVar11 = 0;
    local_80 = (byte *)0x0;
    local_78 = 0;
  }
  else {
    FUN_031e32f0(&local_88,param_1,uVar11);
    pbVar16 = local_80;
    if (local_80 != (byte *)0x0) {
      pbVar17 = local_80;
      if ((*local_80 & 1) == 0) {
        do {
          pbVar17 = *(byte **)(pbVar17 + 8);
        } while ((*pbVar17 & 1) == 0);
      }
      if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
        lVar14 = local_88;
        uVar11 = local_78;
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
        goto LAB_032c229c;
      }
      pbVar16 = (byte *)0x0;
    }
    lVar14 = 0;
    uVar11 = 0;
  }
LAB_032c229c:
  plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar9 + 0x58))(plVar9,lVar14,pbVar16,iVar5);
  if ((uVar11 & 1) != 0) {
    plVar12 = plVar9 + 1;
    do {
      lVar14 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  if ((local_78 & 1) != 0) {
    plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar9 = plVar12 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if (0 < iVar5) {
    iVar18 = 0;
    do {
      if ((*param_1 == 0) || (uVar11 = FUN_031e198c(param_1[1],"geometrySections","",1), uVar11 < 2)
         ) {
        lVar14 = 0;
        pbVar16 = (byte *)0x0;
        local_d0 = 0;
        uVar11 = 0;
        local_c8 = (byte *)0x0;
        local_c0 = 0;
      }
      else {
        FUN_031e32f0(&local_d0,param_1,uVar11);
        pbVar16 = local_c8;
        if (local_c8 != (byte *)0x0) {
          pbVar17 = local_c8;
          if ((*local_c8 & 1) == 0) {
            do {
              pbVar17 = *(byte **)(pbVar17 + 8);
            } while ((*pbVar17 & 1) == 0);
          }
          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
            lVar14 = local_d0;
            uVar11 = local_c0;
            if ((local_c0 & 1) != 0) {
              piVar1 = (int *)((local_c0 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            goto LAB_032c242c;
          }
          pbVar16 = (byte *)0x0;
        }
        lVar14 = 0;
        uVar11 = 0;
      }
LAB_032c242c:
      local_78 = 0;
      local_70 = 0;
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      local_88 = 0;
      local_80 = (byte *)0x0;
      (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
      if (iVar18 < (int)local_78) {
        local_b8 = local_88 + (long)local_78._4_4_ * (long)iVar18;
        local_b0 = local_80;
        local_a8 = local_70;
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
        local_b0 = (byte *)0x0;
        local_a8 = 0;
        local_b8 = 0;
      }
      if ((local_70 & 1) != 0) {
        plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar12 = plVar13 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      if ((uVar11 & 1) != 0) {
        plVar12 = plVar9 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      if ((local_c0 & 1) != 0) {
        plVar12 = (long *)(local_c0 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_a0 == 0) || (uVar11 = FUN_031e198c(local_98,"geometrySections","",1), uVar11 < 2))
      {
        lVar14 = 0;
        pbVar16 = (byte *)0x0;
        local_e8 = 0;
        uVar11 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
      }
      else {
        FUN_031e32f0(&local_e8,&local_a0,uVar11);
        pbVar16 = local_e0;
        if (local_e0 != (byte *)0x0) {
          pbVar17 = local_e0;
          if ((*local_e0 & 1) == 0) {
            do {
              pbVar17 = *(byte **)(pbVar17 + 8);
            } while ((*pbVar17 & 1) == 0);
          }
          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
            lVar14 = local_e8;
            uVar11 = local_d8;
            if ((local_d8 & 1) != 0) {
              piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            goto LAB_032c2604;
          }
          pbVar16 = (byte *)0x0;
        }
        lVar14 = 0;
        uVar11 = 0;
      }
LAB_032c2604:
      local_78 = 0;
      local_70 = 0;
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      local_88 = 0;
      local_80 = (byte *)0x0;
      (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
      if (iVar18 < (int)local_78) {
        local_d0 = local_88 + (long)local_78._4_4_ * (long)iVar18;
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
        plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar12 = plVar13 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      if ((uVar11 & 1) != 0) {
        plVar12 = plVar9 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      if ((local_d8 & 1) != 0) {
        plVar12 = (long *)(local_d8 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"sectionBvh","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"sectionBvh","",1), uVar11 < 2)) {
        local_e8 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
        FUN_031e7578(&local_88,&local_e8);
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        uVar11 = local_d8;
        FUN_031e7578(&local_88,&local_e8);
        if ((uVar11 & 1) != 0) {
          plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
          plVar9 = plVar12 + 1;
          do {
            lVar14 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) ||
         (uVar11 = FUN_031e198c(local_b0,"interiorPrimitiveBitField","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
      }
      if ((local_d0 == 0) ||
         (uVar11 = FUN_031e198c(local_c8,"interiorPrimitiveBitField","",1), uVar11 < 2)) {
        local_e8 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
        FUN_031e7578(&local_88,&local_e8);
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        uVar11 = local_d8;
        FUN_031e7578(&local_88,&local_e8);
        if ((uVar11 & 1) != 0) {
          plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
          plVar9 = plVar12 + 1;
          do {
            lVar14 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"sectionOffset","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"sectionOffset","",1), uVar11 < 2)) {
        local_e8 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
        FUN_031e7578(&local_88,&local_e8);
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        uVar11 = local_d8;
        FUN_031e7578(&local_88,&local_e8);
        if ((uVar11 & 1) != 0) {
          plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
          plVar9 = plVar12 + 1;
          do {
            lVar14 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"bitScale8Inv","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"bitScale8Inv","",1), uVar11 < 2)) {
        local_e8 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
        FUN_031e7578(&local_88,&local_e8);
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        uVar11 = local_d8;
        FUN_031e7578(&local_88,&local_e8);
        if ((uVar11 & 1) != 0) {
          plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
          plVar9 = plVar12 + 1;
          do {
            lVar14 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"bitOffset","",1), uVar11 < 2)) {
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"bitOffset","",1), uVar11 < 2)) {
        local_e8 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
        FUN_031e7578(&local_88,&local_e8);
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        uVar11 = local_d8;
        FUN_031e7578(&local_88,&local_e8);
        if ((uVar11 & 1) != 0) {
          plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
          plVar9 = plVar12 + 1;
          do {
            lVar14 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = (int)lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"primitives","",1), uVar11 < 2)) {
        lVar14 = 0;
        pbVar16 = (byte *)0x0;
        local_e8 = 0;
        uVar11 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        pbVar16 = local_e0;
        if (local_e0 != (byte *)0x0) {
          pbVar17 = local_e0;
          if ((*local_e0 & 1) == 0) {
            do {
              pbVar17 = *(byte **)(pbVar17 + 8);
            } while ((*pbVar17 & 1) == 0);
          }
          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
            lVar14 = local_e8;
            uVar11 = local_d8;
            if ((local_d8 & 1) != 0) {
              piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            goto LAB_032c2d2c;
          }
          pbVar16 = (byte *)0x0;
        }
        lVar14 = 0;
        uVar11 = 0;
      }
LAB_032c2d2c:
      local_78 = 0;
      local_70 = 0;
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      local_88 = 0;
      local_80 = (byte *)0x0;
      (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
      uVar7 = local_78;
      iVar6 = (int)local_78;
      if ((local_70 & 1) != 0) {
        plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar12 = plVar13 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      if ((uVar11 & 1) != 0) {
        plVar12 = plVar9 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      if ((local_d8 & 1) != 0) {
        plVar12 = (long *)(local_d8 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"primitives","",1), uVar11 < 2)) {
        lVar14 = 0;
        pbVar16 = (byte *)0x0;
        local_88 = 0;
        uVar11 = 0;
        local_80 = (byte *)0x0;
        local_78 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
        pbVar16 = local_80;
        if (local_80 != (byte *)0x0) {
          pbVar17 = local_80;
          if ((*local_80 & 1) == 0) {
            do {
              pbVar17 = *(byte **)(pbVar17 + 8);
            } while ((*pbVar17 & 1) == 0);
          }
          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
            lVar14 = local_88;
            uVar11 = local_78;
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
            goto LAB_032c2eb4;
          }
          pbVar16 = (byte *)0x0;
        }
        lVar14 = 0;
        uVar11 = 0;
      }
LAB_032c2eb4:
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      (**(code **)(*plVar9 + 0x58))(plVar9,lVar14,pbVar16,uVar7 & 0xffffffff);
      if ((uVar11 & 1) != 0) {
        plVar12 = plVar9 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if (0 < iVar6) {
        iVar19 = 0;
        do {
          if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"primitives","",1), uVar11 < 2)) {
            lVar14 = 0;
            pbVar16 = (byte *)0x0;
            local_100 = 0;
            uVar11 = 0;
            local_f8 = (byte *)0x0;
            local_f0 = 0;
          }
          else {
            FUN_031e32f0(&local_100,&local_b8,uVar11);
            pbVar16 = local_f8;
            if (local_f8 != (byte *)0x0) {
              pbVar17 = local_f8;
              if ((*local_f8 & 1) == 0) {
                do {
                  pbVar17 = *(byte **)(pbVar17 + 8);
                } while ((*pbVar17 & 1) == 0);
              }
              if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
                lVar14 = local_100;
                uVar11 = local_f0;
                if ((local_f0 & 1) != 0) {
                  piVar1 = (int *)((local_f0 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                goto LAB_032c3004;
              }
              pbVar16 = (byte *)0x0;
            }
            lVar14 = 0;
            uVar11 = 0;
          }
LAB_032c3004:
          local_78 = 0;
          local_70 = 0;
          plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
          local_88 = 0;
          local_80 = (byte *)0x0;
          (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
          if (iVar19 < (int)local_78) {
            local_e8 = local_88 + (long)local_78._4_4_ * (long)iVar19;
            local_e0 = local_80;
            local_d8 = local_70;
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
            local_e0 = (byte *)0x0;
            local_d8 = 0;
            local_e8 = 0;
          }
          if ((local_70 & 1) != 0) {
            plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar12 = plVar13 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar13 + 8))();
            }
          }
          if ((uVar11 & 1) != 0) {
            plVar12 = plVar9 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
          if ((local_f0 & 1) != 0) {
            plVar12 = (long *)(local_f0 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"primitives","",1), uVar11 < 2)) {
            uVar15 = 0;
            pbVar16 = (byte *)0x0;
            local_118 = 0;
            uVar11 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
          }
          else {
            FUN_031e32f0(&local_118,&local_d0,uVar11);
            pbVar16 = local_110;
            if (local_110 != (byte *)0x0) {
              pbVar17 = local_110;
              if ((*local_110 & 1) == 0) {
                do {
                  pbVar17 = *(byte **)(pbVar17 + 8);
                } while ((*pbVar17 & 1) == 0);
              }
              if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
                uVar15 = local_118;
                uVar11 = local_108;
                if ((local_108 & 1) != 0) {
                  piVar1 = (int *)((local_108 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                goto LAB_032c31d8;
              }
              pbVar16 = (byte *)0x0;
            }
            uVar15 = 0;
            uVar11 = 0;
          }
LAB_032c31d8:
          local_78 = 0;
          local_70 = 0;
          plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
          local_88 = 0;
          local_80 = (byte *)0x0;
          (**(code **)(*plVar9 + 0x50))(plVar9,uVar15,pbVar16,&local_88);
          if (iVar19 < (int)local_78) {
            local_100 = local_88 + (long)local_78._4_4_ * (long)iVar19;
            local_f8 = local_80;
            local_f0 = local_70;
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
            local_f8 = (byte *)0x0;
            local_f0 = 0;
            local_100 = 0;
          }
          if ((local_70 & 1) != 0) {
            plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar12 = plVar13 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar13 + 8))();
            }
          }
          if ((uVar11 & 1) != 0) {
            plVar12 = plVar9 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
          if ((local_108 & 1) != 0) {
            plVar12 = (long *)(local_108 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03ca1271,&DAT_03ca1274,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03ca1271,&DAT_03ca1274,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03c72a30,&DAT_03c72a33,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03c72a30,&DAT_03c72a33,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03c93f95,&DAT_03c93f98,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03c93f95,&DAT_03c93f98,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03c5ee20,&DAT_03c5ee23,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03c5ee20,&DAT_03c5ee23,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_f0 & 1) != 0) {
            plVar12 = (long *)(local_f0 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_d8 & 1) != 0) {
            plVar12 = (long *)(local_d8 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar6);
      }
      if ((local_d0 == 0) || (uVar11 = FUN_031e198c(local_c8,"quantizedVertices","",1), uVar11 < 2))
      {
        lVar14 = 0;
        pbVar16 = (byte *)0x0;
        local_e8 = 0;
        uVar11 = 0;
        local_e0 = (byte *)0x0;
        local_d8 = 0;
      }
      else {
        FUN_031e32f0(&local_e8,&local_d0,uVar11);
        pbVar16 = local_e0;
        if (local_e0 != (byte *)0x0) {
          pbVar17 = local_e0;
          if ((*local_e0 & 1) == 0) {
            do {
              pbVar17 = *(byte **)(pbVar17 + 8);
            } while ((*pbVar17 & 1) == 0);
          }
          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
            lVar14 = local_e8;
            uVar11 = local_d8;
            if ((local_d8 & 1) != 0) {
              piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            goto LAB_032c3860;
          }
          pbVar16 = (byte *)0x0;
        }
        lVar14 = 0;
        uVar11 = 0;
      }
LAB_032c3860:
      local_78 = 0;
      local_70 = 0;
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      local_88 = 0;
      local_80 = (byte *)0x0;
      (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
      uVar7 = local_78;
      iVar6 = (int)local_78;
      if ((local_70 & 1) != 0) {
        plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar12 = plVar13 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      if ((uVar11 & 1) != 0) {
        plVar12 = plVar9 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      if ((local_d8 & 1) != 0) {
        plVar12 = (long *)(local_d8 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_b8 == 0) || (uVar11 = FUN_031e198c(local_b0,"quantizedVertices","",1), uVar11 < 2))
      {
        lVar14 = 0;
        pbVar16 = (byte *)0x0;
        local_88 = 0;
        uVar11 = 0;
        local_80 = (byte *)0x0;
        local_78 = 0;
      }
      else {
        FUN_031e32f0(&local_88,&local_b8,uVar11);
        pbVar16 = local_80;
        if (local_80 != (byte *)0x0) {
          pbVar17 = local_80;
          if ((*local_80 & 1) == 0) {
            do {
              pbVar17 = *(byte **)(pbVar17 + 8);
            } while ((*pbVar17 & 1) == 0);
          }
          if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
            lVar14 = local_88;
            uVar11 = local_78;
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
            goto LAB_032c39e8;
          }
          pbVar16 = (byte *)0x0;
        }
        lVar14 = 0;
        uVar11 = 0;
      }
LAB_032c39e8:
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      (**(code **)(*plVar9 + 0x58))(plVar9,lVar14,pbVar16,uVar7 & 0xffffffff);
      if ((uVar11 & 1) != 0) {
        plVar12 = plVar9 + 1;
        do {
          lVar14 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
      if ((local_78 & 1) != 0) {
        plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if (0 < iVar6) {
        iVar19 = 0;
        do {
          if ((local_b8 == 0) ||
             (uVar11 = FUN_031e198c(local_b0,"quantizedVertices","",1), uVar11 < 2)) {
            lVar14 = 0;
            pbVar16 = (byte *)0x0;
            local_100 = 0;
            uVar11 = 0;
            local_f8 = (byte *)0x0;
            local_f0 = 0;
          }
          else {
            FUN_031e32f0(&local_100,&local_b8,uVar11);
            pbVar16 = local_f8;
            if (local_f8 != (byte *)0x0) {
              pbVar17 = local_f8;
              if ((*local_f8 & 1) == 0) {
                do {
                  pbVar17 = *(byte **)(pbVar17 + 8);
                } while ((*pbVar17 & 1) == 0);
              }
              if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
                lVar14 = local_100;
                uVar11 = local_f0;
                if ((local_f0 & 1) != 0) {
                  piVar1 = (int *)((local_f0 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                goto LAB_032c3b38;
              }
              pbVar16 = (byte *)0x0;
            }
            lVar14 = 0;
            uVar11 = 0;
          }
LAB_032c3b38:
          local_78 = 0;
          local_70 = 0;
          plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
          local_88 = 0;
          local_80 = (byte *)0x0;
          (**(code **)(*plVar9 + 0x50))(plVar9,lVar14,pbVar16,&local_88);
          if (iVar19 < (int)local_78) {
            local_e8 = local_88 + (long)local_78._4_4_ * (long)iVar19;
            local_e0 = local_80;
            local_d8 = local_70;
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
            local_e0 = (byte *)0x0;
            local_d8 = 0;
            local_e8 = 0;
          }
          if ((local_70 & 1) != 0) {
            plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar12 = plVar13 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar13 + 8))();
            }
          }
          if ((uVar11 & 1) != 0) {
            plVar12 = plVar9 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
          if ((local_f0 & 1) != 0) {
            plVar12 = (long *)(local_f0 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_d0 == 0) ||
             (uVar11 = FUN_031e198c(local_c8,"quantizedVertices","",1), uVar11 < 2)) {
            uVar15 = 0;
            pbVar16 = (byte *)0x0;
            local_118 = 0;
            uVar11 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
          }
          else {
            FUN_031e32f0(&local_118,&local_d0,uVar11);
            pbVar16 = local_110;
            if (local_110 != (byte *)0x0) {
              pbVar17 = local_110;
              if ((*local_110 & 1) == 0) {
                do {
                  pbVar17 = *(byte **)(pbVar17 + 8);
                } while ((*pbVar17 & 1) == 0);
              }
              if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) == 8) {
                uVar15 = local_118;
                uVar11 = local_108;
                if ((local_108 & 1) != 0) {
                  piVar1 = (int *)((local_108 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                goto LAB_032c3d0c;
              }
              pbVar16 = (byte *)0x0;
            }
            uVar15 = 0;
            uVar11 = 0;
          }
LAB_032c3d0c:
          local_78 = 0;
          local_70 = 0;
          plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
          local_88 = 0;
          local_80 = (byte *)0x0;
          (**(code **)(*plVar9 + 0x50))(plVar9,uVar15,pbVar16,&local_88);
          if (iVar19 < (int)local_78) {
            local_100 = local_88 + (long)local_78._4_4_ * (long)iVar19;
            local_f8 = local_80;
            local_f0 = local_70;
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
            local_f8 = (byte *)0x0;
            local_f0 = 0;
            local_100 = 0;
          }
          if ((local_70 & 1) != 0) {
            plVar13 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar12 = plVar13 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar13 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar13 + 8))();
            }
          }
          if ((uVar11 & 1) != 0) {
            plVar12 = plVar9 + 1;
            do {
              lVar14 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
          if ((local_108 & 1) != 0) {
            plVar12 = (long *)(local_108 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03c705dc,&DAT_03c705dd,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03c705dc,&DAT_03c705dd,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03bf41a8,&DAT_03bf41a9,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03bf41a8,&DAT_03bf41a9,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_e8 == 0) ||
             (uVar11 = FUN_031e198c(local_e0,&DAT_03c9820a,&DAT_03c9820b,1), uVar11 < 2)) {
            local_80 = (byte *)0x0;
            local_78 = 0;
            local_88 = 0;
          }
          else {
            FUN_031e32f0(&local_88,&local_e8,uVar11);
          }
          if ((local_100 == 0) ||
             (uVar11 = FUN_031e198c(local_f8,&DAT_03c9820a,&DAT_03c9820b,1), uVar11 < 2)) {
            local_118 = 0;
            local_110 = (byte *)0x0;
            local_108 = 0;
            FUN_031e7578(&local_88,&local_118);
          }
          else {
            FUN_031e32f0(&local_118,&local_100,uVar11);
            uVar11 = local_108;
            FUN_031e7578(&local_88,&local_118);
            if ((uVar11 & 1) != 0) {
              plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
              plVar9 = plVar12 + 1;
              do {
                lVar14 = *plVar9;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)lVar14 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          if ((local_78 & 1) != 0) {
            plVar12 = (long *)(local_78 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_f0 & 1) != 0) {
            plVar12 = (long *)(local_f0 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          if ((local_d8 & 1) != 0) {
            plVar12 = (long *)(local_d8 & 0xfffffffffffffffe);
            plVar9 = plVar12 + 1;
            do {
              lVar14 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = (int)lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar6);
      }
      if ((local_c0 & 1) != 0) {
        plVar12 = (long *)(local_c0 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      if ((local_a8 & 1) != 0) {
        plVar12 = (long *)(local_a8 & 0xfffffffffffffffe);
        plVar9 = plVar12 + 1;
        do {
          lVar14 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != iVar5);
  }
  if ((local_90 & 1) != 0) {
    plVar12 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar9 = plVar12 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  if ((uVar8 & 1) != 0) {
    plVar9 = plVar10 + 1;
    do {
      lVar14 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  return;
}


