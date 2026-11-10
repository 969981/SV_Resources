/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032ce490; name: FUN_032ce490
 */


/* WARNING: Removing unreachable block (ram,0x032ce6c4) */
/* WARNING: Removing unreachable block (ram,0x032ce984) */

void FUN_032ce490(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar7;
  ulong uVar6;
  byte *pbVar8;
  ulong *puVar9;
  bool bVar10;
  long *plVar11;
  int iVar12;
  long local_138;
  ulong *local_130;
  ulong local_128;
  undefined4 local_118;
  long local_110;
  ulong *local_108;
  ulong local_100;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  byte *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long local_a8;
  undefined4 local_a0;
  int local_9c;
  ulong *local_98;
  undefined4 local_90;
  uint *local_88;
  byte *local_80;
  long local_78;
  long local_70;
  int local_68;
  int local_64;
  ulong *local_60;
  undefined4 local_58;
  
  FUN_03325b88(&local_c0,param_1,"mapping");
  local_e8 = local_a0;
  FUN_03323c3c(&local_88,local_c0,uStack_b8,local_a8,&local_e8,0);
  if ((local_b0 & 1) != 0) {
    plVar3 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_03325b88(&local_e8,param_1,"nodeNames");
  local_110 = CONCAT44(local_110._4_4_,local_c8);
  FUN_03323c3c(&local_c0,CONCAT44(uStack_e4,local_e8),local_e0,local_d0,&local_110,0);
  if ((local_d8 & 1) != 0) {
    plVar3 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  pbVar8 = local_80;
  if ((*local_80 & 1) == 0) {
    do {
      pbVar8 = *(byte **)(pbVar8 + 8);
    } while ((*pbVar8 & 1) == 0);
  }
  if ((*(ulong *)(pbVar8 + 0x10) & 0x1f) != 8) {
    local_80 = (byte *)0x0;
  }
  do {
    if ((*local_80 & 1) != 0) {
      if ((local_80 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_80 + 0x10) >> 8) != 0))
      goto LAB_032ce60c;
      break;
    }
    local_80 = *(byte **)(local_80 + 8);
  } while (local_80 != (byte *)0x0);
  if ((int)*local_88 < 0) {
LAB_032ce60c:
    puVar7 = PTR_DAT_047e61d0;
  }
  else {
    puVar7 = (undefined *)(*(long *)(local_78 + 0x228) + (ulong)*local_88 * 0x20);
  }
  uVar6 = *(ulong *)(puVar7 + 0x10);
  if ((uVar6 & 1) != 0) {
    piVar1 = (int *)((uVar6 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar3 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_03324ed0(&local_c0,local_68);
  if (local_68 < 1) {
    return;
  }
  iVar12 = 0;
LAB_032ce690:
  local_110 = local_70 + (long)local_64 * (long)iVar12;
  if (local_60 != (ulong *)0x0) {
    puVar9 = local_60;
LAB_032ce6ac:
    uVar6 = *puVar9;
    if (((uint)uVar6 >> 2 & 1) == 0) goto code_r0x032ce6b4;
    local_100 = puVar9[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
    if ((local_100 & 1) != 0) {
      piVar1 = (int *)((local_100 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar10 = false;
      goto LAB_032ce74c;
    }
    goto LAB_032ce6e8;
  }
  local_100 = 0;
  goto LAB_032ce6e8;
code_r0x032ce6b4:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032ce6bc;
  goto LAB_032ce6ac;
code_r0x032ce6bc:
  local_100 = 0;
LAB_032ce6e8:
  bVar10 = true;
LAB_032ce74c:
  uVar6 = local_100;
  local_108 = local_60;
  local_f0 = local_58;
  if (local_110 != 0) {
    puVar9 = local_60;
    if ((*local_60 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_60 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_110);
    }
  }
  if (!bVar10) {
    plVar3 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  FUN_033234d0(&local_e8,&local_110);
  if ((local_100 & 1) != 0) {
    plVar3 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if ((int *)CONCAT44(uStack_e4,local_e8) == (int *)0x0) goto LAB_032cebe0;
  pbVar8 = local_e0;
  if ((*local_e0 & 1) == 0) {
    do {
      pbVar8 = *(byte **)(pbVar8 + 8);
    } while ((*pbVar8 & 1) == 0);
  }
  if (((local_e0 != (byte *)0x0) && ((*(ulong *)(pbVar8 + 0x10) & 0x1f) == 6)) &&
     (*(int *)CONCAT44(uStack_e4,local_e8) == 0)) goto LAB_032cebe0;
  FUN_03325b88(&local_110,&local_e8,&DAT_03c1dc5b);
  if (local_108 == (ulong *)0x0) {
LAB_032ce8f4:
    uVar6 = 0;
    lVar4 = 0;
  }
  else {
    puVar9 = local_108;
    if ((*local_108 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((puVar9[2] & 0x1f) != 3) {
      local_108 = (ulong *)0x0;
      goto LAB_032ce8f4;
    }
    lVar4 = local_110;
    uVar6 = local_100;
    if ((local_100 & 1) != 0) {
      piVar1 = (int *)((local_100 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  local_138 = 0;
  plVar11 = (long *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar11 + 0x38))(plVar11,lVar4,local_108,&local_138);
  lVar4 = local_138;
  if ((uVar6 & 1) != 0) {
    plVar3 = plVar11 + 1;
    do {
      lVar5 = *plVar3;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *(int *)plVar3 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  local_138 = local_a8 + (long)local_9c * (long)iVar12;
  if (local_98 != (ulong *)0x0) {
    puVar9 = local_98;
LAB_032ce96c:
    uVar6 = *puVar9;
    if (((uint)uVar6 >> 2 & 1) == 0) goto code_r0x032ce974;
    local_128 = puVar9[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar10 = false;
      goto LAB_032cea0c;
    }
    goto LAB_032ce9a8;
  }
  local_128 = 0;
LAB_032ce9a8:
  bVar10 = true;
LAB_032cea0c:
  uVar6 = local_128;
  local_130 = local_98;
  local_118 = local_90;
  if (local_138 != 0) {
    puVar9 = local_98;
    if ((*local_98 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_98 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar10) {
    plVar3 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  if (local_130 == (ulong *)0x0) {
LAB_032ceb1c:
    uVar6 = 0;
    lVar5 = 0;
  }
  else {
    puVar9 = local_130;
    if ((*local_130 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((puVar9[2] & 0x1f) != 3) {
      local_130 = (ulong *)0x0;
      goto LAB_032ceb1c;
    }
    lVar5 = local_138;
    uVar6 = local_128;
    if ((local_128 & 1) != 0) {
      piVar1 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  plVar11 = (long *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar11 + 0x30))(plVar11,lVar5,local_130,lVar4);
  if ((uVar6 & 1) != 0) {
    plVar3 = plVar11 + 1;
    do {
      lVar4 = *plVar3;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *(int *)plVar3 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  if ((local_128 & 1) != 0) {
    plVar3 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if ((local_100 & 1) != 0) {
    plVar3 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_032cebe0:
  if ((local_d8 & 1) != 0) {
    plVar3 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar11 = plVar3 + 1;
    do {
      lVar4 = *plVar11;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar3 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  iVar12 = iVar12 + 1;
  if (iVar12 == local_68) {
    return;
  }
  goto LAB_032ce690;
code_r0x032ce974:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032ce97c;
  goto LAB_032ce96c;
code_r0x032ce97c:
  local_128 = 0;
  goto LAB_032ce9a8;
}


