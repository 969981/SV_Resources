/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03311d60; name: FUN_03311d60
 */


void FUN_03311d60(long *param_1,long *param_2)

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
  long lVar15;
  long *plVar16;
  int iVar17;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  long local_80;
  byte *local_78;
  undefined8 local_70;
  ulong local_68;
  
  if ((*param_2 == 0) || (uVar6 = FUN_031e198c(param_2[1],&DAT_03c942f2,&DAT_03c942f7,1), uVar6 < 2)
     ) {
    local_d0 = 0;
    pbVar14 = (byte *)0x0;
    uVar6 = 0;
    local_78 = (byte *)0x0;
    local_70 = 0;
    local_80 = 0;
  }
  else {
    FUN_031e32f0(&local_80,param_2,uVar6);
    pbVar14 = local_78;
    if (local_78 != (byte *)0x0) {
      pbVar12 = local_78;
      if ((*local_78 & 1) == 0) {
        do {
          pbVar12 = *(byte **)(pbVar12 + 8);
        } while ((*pbVar12 & 1) == 0);
      }
      if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) == 8) {
        local_d0 = local_80;
        uVar6 = local_70;
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
        goto LAB_03311e54;
      }
      pbVar14 = (byte *)0x0;
    }
    local_d0 = 0;
    uVar6 = 0;
  }
LAB_03311e54:
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar16 = plVar7 + 1;
    do {
      lVar15 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar15 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((*param_1 == 0) || (uVar8 = FUN_031e198c(param_1[1],&DAT_03c942f2,&DAT_03c942f7,1), uVar8 < 2)
     ) {
    lVar15 = 0;
    pbVar12 = (byte *)0x0;
    local_80 = 0;
    uVar8 = 0;
    local_78 = (byte *)0x0;
    local_70 = 0;
  }
  else {
    FUN_031e32f0(&local_80,param_1,uVar8);
    pbVar12 = local_78;
    if (local_78 != (byte *)0x0) {
      pbVar13 = local_78;
      if ((*local_78 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) == 8) {
        lVar15 = local_80;
        uVar8 = local_70;
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
        goto LAB_03311f4c;
      }
      pbVar12 = (byte *)0x0;
    }
    lVar15 = 0;
    uVar8 = 0;
  }
LAB_03311f4c:
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar16 = plVar7 + 1;
    do {
      lVar4 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_70 = 0;
  local_68 = 0;
  plVar16 = (long *)(uVar6 & 0xfffffffffffffffe);
  local_80 = 0;
  local_78 = (byte *)0x0;
  (**(code **)(*plVar16 + 0x50))(plVar16,local_d0,pbVar14,&local_80);
  uVar11 = local_70;
  iVar5 = (int)local_70;
  if ((local_68 & 1) != 0) {
    plVar9 = (long *)(local_68 & 0xfffffffffffffffe);
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
  plVar7 = (long *)(uVar8 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x58))(plVar7,lVar15,pbVar12,uVar11 & 0xffffffff);
  if (0 < iVar5) {
    iVar17 = 0;
    do {
      local_70 = 0;
      local_68 = 0;
      local_80 = 0;
      local_78 = (byte *)0x0;
      (**(code **)(*plVar7 + 0x50))(plVar7,lVar15,pbVar12,&local_80);
      if (iVar17 < (int)local_70) {
        local_98 = local_80 + (long)local_70._4_4_ * (long)iVar17;
        local_90 = local_78;
        local_88 = local_68;
        if ((local_68 & 1) != 0) {
          piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
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
        local_90 = 0;
        local_88 = 0;
        local_98 = 0;
      }
      if ((local_68 & 1) != 0) {
        plVar10 = (long *)(local_68 & 0xfffffffffffffffe);
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
      local_70 = 0;
      local_68 = 0;
      local_80 = 0;
      local_78 = (byte *)0x0;
      (**(code **)(*plVar16 + 0x50))(plVar16,local_d0,pbVar14,&local_80);
      if (iVar17 < (int)local_70) {
        local_b0 = local_80 + (long)local_70._4_4_ * (long)iVar17;
        local_a8 = local_78;
        local_a0 = local_68;
        if ((local_68 & 1) != 0) {
          piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
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
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = 0;
      }
      if ((local_68 & 1) != 0) {
        plVar10 = (long *)(local_68 & 0xfffffffffffffffe);
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
      if ((local_98 == 0) ||
         (uVar11 = FUN_031e198c(local_90,&DAT_03c2bfae,&DAT_03c2bfaf,1), uVar11 < 2)) {
        local_78 = (byte *)0x0;
        local_70 = 0;
        local_80 = 0;
      }
      else {
        FUN_031e32f0(&local_80,&local_98,uVar11);
      }
      if ((local_b0 == 0) ||
         (uVar11 = FUN_031e198c(local_a8,&DAT_03c2bfae,&DAT_03c2bfaf,1), uVar11 < 2)) {
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        FUN_031e7578(&local_80,&local_c8);
      }
      else {
        FUN_031e32f0(&local_c8,&local_b0,uVar11);
        uVar11 = local_b8;
        FUN_031e7578(&local_80,&local_c8);
        if ((uVar11 & 1) != 0) {
          plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
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
      if ((local_98 == 0) ||
         (uVar11 = FUN_031e198c(local_90,&DAT_03c61aec,&DAT_03c61aed,1), uVar11 < 2)) {
        local_78 = (byte *)0x0;
        local_70 = 0;
        local_80 = 0;
      }
      else {
        FUN_031e32f0(&local_80,&local_98,uVar11);
      }
      if ((local_b0 == 0) ||
         (uVar11 = FUN_031e198c(local_a8,&DAT_03c61aec,&DAT_03c61aed,1), uVar11 < 2)) {
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        FUN_031e7578(&local_80,&local_c8);
      }
      else {
        FUN_031e32f0(&local_c8,&local_b0,uVar11);
        uVar11 = local_b8;
        FUN_031e7578(&local_80,&local_c8);
        if ((uVar11 & 1) != 0) {
          plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
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
      if ((local_a0 & 1) != 0) {
        plVar10 = (long *)(local_a0 & 0xfffffffffffffffe);
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
      if ((local_88 & 1) != 0) {
        plVar10 = (long *)(local_88 & 0xfffffffffffffffe);
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
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar5);
  }
  if ((uVar8 & 1) != 0) {
    plVar9 = plVar7 + 1;
    do {
      lVar15 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar15 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if ((uVar6 & 1) != 0) {
    plVar7 = plVar16 + 1;
    do {
      lVar15 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar16 != (long *)0x0) && ((int)lVar15 == 1)) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
  }
  return;
}


