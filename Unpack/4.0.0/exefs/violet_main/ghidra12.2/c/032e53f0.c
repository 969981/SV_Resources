/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032e53f0; name: FUN_032e53f0
 */


/* WARNING: Removing unreachable block (ram,0x032e78b8) */
/* WARNING: Removing unreachable block (ram,0x032e756c) */
/* WARNING: Removing unreachable block (ram,0x032e7220) */
/* WARNING: Removing unreachable block (ram,0x032e6e74) */
/* WARNING: Removing unreachable block (ram,0x032e6b20) */
/* WARNING: Removing unreachable block (ram,0x032e67d4) */
/* WARNING: Removing unreachable block (ram,0x032e6488) */
/* WARNING: Removing unreachable block (ram,0x032e60dc) */
/* WARNING: Removing unreachable block (ram,0x032e5d8c) */
/* WARNING: Removing unreachable block (ram,0x032e5a44) */
/* WARNING: Removing unreachable block (ram,0x032e56fc) */
/* WARNING: Removing unreachable block (ram,0x032e5564) */
/* WARNING: Removing unreachable block (ram,0x032e58e4) */
/* WARNING: Removing unreachable block (ram,0x032e5c2c) */
/* WARNING: Removing unreachable block (ram,0x032e5f78) */
/* WARNING: Removing unreachable block (ram,0x032e6330) */
/* WARNING: Removing unreachable block (ram,0x032e6674) */
/* WARNING: Removing unreachable block (ram,0x032e69c0) */
/* WARNING: Removing unreachable block (ram,0x032e6d10) */
/* WARNING: Removing unreachable block (ram,0x032e70c8) */
/* WARNING: Removing unreachable block (ram,0x032e740c) */
/* WARNING: Removing unreachable block (ram,0x032e7758) */
/* WARNING: Removing unreachable block (ram,0x032e7aa4) */

void FUN_032e53f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  size_t __n;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  long local_c0;
  ulong *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  long local_98;
  ulong *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  int local_4c;
  ulong *local_48;
  undefined4 local_40;
  undefined1 *local_38;
  
  puVar8 = (ulong *)param_1[1];
  puVar11 = puVar8;
  do {
    uVar10 = (uint)*puVar11;
    if ((uVar10 >> 0x14 & 1) != 0) {
      uVar9 = 0;
      if (puVar11 != (ulong *)0x0) {
        uVar13 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
        uVar9 = (uint)(ushort)puVar11[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                    POPCOUNT((char)(uVar13 >> 8)) +
                                                   POPCOUNT((char)(uVar13 >> 0x10))) + 2];
      }
      goto LAB_032e5458;
    }
    if ((*puVar11 & 1) != 0) {
      uVar9 = 0;
      goto LAB_032e5458;
    }
    puVar11 = (ulong *)puVar11[1];
  } while (puVar11 != (ulong *)0x0);
  uVar9 = 0;
LAB_032e5458:
  puVar11 = *(ulong **)(param_2 + 0x28);
  do {
    uVar10 = (uint)*puVar11;
    if ((uVar10 >> 0x14 & 1) != 0) {
      uVar12 = 0;
      if (puVar11 != (ulong *)0x0) {
        uVar13 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
        uVar12 = (uint)(ushort)puVar11[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                     POPCOUNT((char)(uVar13 >> 8)) +
                                                    POPCOUNT((char)(uVar13 >> 0x10))) + 2];
      }
      goto LAB_032e54a0;
    }
    if ((*puVar11 & 1) != 0) {
      uVar12 = 0;
      goto LAB_032e54a0;
    }
    puVar11 = (ulong *)puVar11[1];
  } while (puVar11 != (ulong *)0x0);
  uVar12 = 0;
LAB_032e54a0:
  if (uVar9 == *(int *)(param_2 + 0x20) * uVar12) {
    while( true ) {
      uVar10 = (uint)*puVar8;
      if ((uVar10 >> 0x14 & 1) != 0) break;
      if (((*puVar8 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
      goto LAB_032e5598;
    }
    if (puVar8 != (ulong *)0x0) {
      uVar10 = uVar10 & 0xfffff;
      __n = (size_t)(ushort)puVar8[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                 POPCOUNT((char)(uVar10 >> 8)) +
                                                POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      goto LAB_032e559c;
    }
LAB_032e5598:
    __n = 0;
LAB_032e559c:
    memcpy((void *)*param_1,*(void **)(param_2 + 0x18),__n);
    return;
  }
  FUN_03325b88(&local_98,param_1,"translation");
  local_c0 = CONCAT44(local_c0._4_4_,local_78);
  FUN_03323c3c(auStack_70,local_98,local_90,local_80,&local_c0,0);
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18);
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e554c:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e5554;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e55fc;
    }
    goto LAB_032e55c8;
  }
  uVar13 = 0;
LAB_032e55c8:
  bVar4 = true;
LAB_032e55fc:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e56e4:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e56ec;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e5754;
    }
    goto LAB_032e5720;
  }
  uVar13 = 0;
LAB_032e5720:
  bVar4 = true;
LAB_032e5754:
  local_c0 = local_58;
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_58 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24);
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e58cc:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e58d4;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e593c;
    }
    goto LAB_032e5908;
  }
  uVar13 = 0;
LAB_032e5908:
  bVar4 = true;
LAB_032e593c:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + local_4c;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e5a2c:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e5a34;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e5a9c;
    }
    goto LAB_032e5a68;
  }
  uVar13 = 0;
LAB_032e5a68:
  bVar4 = true;
LAB_032e5a9c:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 2;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e5c14:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e5c1c;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e5c84;
    }
    goto LAB_032e5c50;
  }
  uVar13 = 0;
LAB_032e5c50:
  bVar4 = true;
LAB_032e5c84:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + (long)local_4c * 2;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e5d74:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e5d7c;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e5de4;
    }
    goto LAB_032e5db0;
  }
  uVar13 = 0;
LAB_032e5db0:
  bVar4 = true;
LAB_032e5de4:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 3;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e5f60:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e5f68;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e5fd0;
    }
    goto LAB_032e5f9c;
  }
  uVar13 = 0;
LAB_032e5f9c:
  bVar4 = true;
LAB_032e5fd0:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + (long)local_4c * 3;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e60c4:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e60cc;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e6134;
    }
    goto LAB_032e6100;
  }
  uVar13 = 0;
LAB_032e6100:
  bVar4 = true;
LAB_032e6134:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_98,param_1,"rotation");
  local_c0 = CONCAT44(local_c0._4_4_,local_78);
  FUN_03323c3c(auStack_70,local_98,local_90,local_80,&local_c0,0);
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 4;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e6318:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e6320;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e6388;
    }
    goto LAB_032e6354;
  }
  uVar13 = 0;
LAB_032e6354:
  bVar4 = true;
LAB_032e6388:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e6470:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e6478;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e64e0;
    }
    goto LAB_032e64ac;
  }
  uVar13 = 0;
LAB_032e64ac:
  bVar4 = true;
LAB_032e64e0:
  local_c0 = local_58;
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_58 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 5;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e665c:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e6664;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e66cc;
    }
    goto LAB_032e6698;
  }
  uVar13 = 0;
LAB_032e6698:
  bVar4 = true;
LAB_032e66cc:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + local_4c;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e67bc:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e67c4;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e682c;
    }
    goto LAB_032e67f8;
  }
  uVar13 = 0;
LAB_032e67f8:
  bVar4 = true;
LAB_032e682c:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 6;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e69a8:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e69b0;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e6a18;
    }
    goto LAB_032e69e4;
  }
  uVar13 = 0;
LAB_032e69e4:
  bVar4 = true;
LAB_032e6a18:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + (long)local_4c * 2;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e6b08:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e6b10;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e6b78;
    }
    goto LAB_032e6b44;
  }
  uVar13 = 0;
LAB_032e6b44:
  bVar4 = true;
LAB_032e6b78:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 7;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e6cf8:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e6d00;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e6d68;
    }
    goto LAB_032e6d34;
  }
  uVar13 = 0;
LAB_032e6d34:
  bVar4 = true;
LAB_032e6d68:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + (long)local_4c * 3;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e6e5c:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e6e64;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e6ecc;
    }
    goto LAB_032e6e98;
  }
  uVar13 = 0;
LAB_032e6e98:
  bVar4 = true;
LAB_032e6ecc:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_98,param_1,"scale");
  local_c0 = CONCAT44(local_c0._4_4_,local_78);
  FUN_03323c3c(auStack_70,local_98,local_90,local_80,&local_c0,0);
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 8;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e70b0:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e70b8;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e7120;
    }
    goto LAB_032e70ec;
  }
  uVar13 = 0;
LAB_032e70ec:
  bVar4 = true;
LAB_032e7120:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e7208:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e7210;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e7278;
    }
    goto LAB_032e7244;
  }
  uVar13 = 0;
LAB_032e7244:
  bVar4 = true;
LAB_032e7278:
  local_c0 = local_58;
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_58 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 9;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e73f4:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e73fc;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e7464;
    }
    goto LAB_032e7430;
  }
  uVar13 = 0;
LAB_032e7430:
  bVar4 = true;
LAB_032e7464:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + local_4c;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e7554:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e755c;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e75c4;
    }
    goto LAB_032e7590;
  }
  uVar13 = 0;
LAB_032e7590:
  bVar4 = true;
LAB_032e75c4:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 10;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e7740:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e7748;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e77b0;
    }
    goto LAB_032e777c;
  }
  uVar13 = 0;
LAB_032e777c:
  bVar4 = true;
LAB_032e77b0:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + (long)local_4c * 2;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
LAB_032e78a0:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e78a8;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e7910;
    }
    goto LAB_032e78dc;
  }
  uVar13 = 0;
LAB_032e78dc:
  bVar4 = true;
LAB_032e7910:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_98 = *(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x24) * 0xb;
  local_90 = *(ulong **)(param_2 + 0x28);
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_032e7a8c:
    uVar13 = *puVar11;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e7a94;
    uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((uVar13 & 1) != 0) {
      piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_032e7afc;
    }
    goto LAB_032e7ac8;
  }
  uVar13 = 0;
LAB_032e7ac8:
  bVar4 = true;
LAB_032e7afc:
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = uVar13;
  if (local_98 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_98);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_c0 = local_58 + (long)local_4c * 3;
  if (local_48 != (ulong *)0x0) {
    puVar11 = local_48;
    do {
      uVar13 = *puVar11;
      if (((uint)uVar13 >> 2 & 1) != 0) {
        uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
        if ((uVar13 & 1) != 0) {
          piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar4 = false;
          goto LAB_032e7c24;
        }
        goto LAB_032e7c20;
      }
      puVar11 = (ulong *)puVar11[1];
    } while (puVar11 != (ulong *)0x0);
  }
  uVar13 = 0;
LAB_032e7c20:
  bVar4 = true;
LAB_032e7c24:
  local_b8 = local_48;
  if (!bVar4) {
    piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a8 = local_60;
  local_a0 = local_40;
  local_b0 = uVar13;
  if (local_c0 != 0) {
    puVar11 = local_48;
    if ((*local_48 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_48 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  local_38 = (undefined1 *)&local_c0;
  FUN_0331deb8(&local_38,local_b8,&local_98);
  if ((local_b0 & 1) != 0) {
    plVar7 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_88 & 1) != 0) {
    plVar7 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
code_r0x032e5554:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e555c;
  goto LAB_032e554c;
code_r0x032e555c:
  uVar13 = 0;
  goto LAB_032e55c8;
code_r0x032e56ec:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e56f4;
  goto LAB_032e56e4;
code_r0x032e56f4:
  uVar13 = 0;
  goto LAB_032e5720;
code_r0x032e58d4:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e58dc;
  goto LAB_032e58cc;
code_r0x032e58dc:
  uVar13 = 0;
  goto LAB_032e5908;
code_r0x032e5a34:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e5a3c;
  goto LAB_032e5a2c;
code_r0x032e5a3c:
  uVar13 = 0;
  goto LAB_032e5a68;
code_r0x032e5c1c:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e5c24;
  goto LAB_032e5c14;
code_r0x032e5c24:
  uVar13 = 0;
  goto LAB_032e5c50;
code_r0x032e5d7c:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e5d84;
  goto LAB_032e5d74;
code_r0x032e5d84:
  uVar13 = 0;
  goto LAB_032e5db0;
code_r0x032e5f68:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e5f70;
  goto LAB_032e5f60;
code_r0x032e5f70:
  uVar13 = 0;
  goto LAB_032e5f9c;
code_r0x032e60cc:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e60d4;
  goto LAB_032e60c4;
code_r0x032e60d4:
  uVar13 = 0;
  goto LAB_032e6100;
code_r0x032e6320:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e6328;
  goto LAB_032e6318;
code_r0x032e6328:
  uVar13 = 0;
  goto LAB_032e6354;
code_r0x032e6478:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e6480;
  goto LAB_032e6470;
code_r0x032e6480:
  uVar13 = 0;
  goto LAB_032e64ac;
code_r0x032e6664:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e666c;
  goto LAB_032e665c;
code_r0x032e666c:
  uVar13 = 0;
  goto LAB_032e6698;
code_r0x032e67c4:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e67cc;
  goto LAB_032e67bc;
code_r0x032e67cc:
  uVar13 = 0;
  goto LAB_032e67f8;
code_r0x032e69b0:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e69b8;
  goto LAB_032e69a8;
code_r0x032e69b8:
  uVar13 = 0;
  goto LAB_032e69e4;
code_r0x032e6b10:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e6b18;
  goto LAB_032e6b08;
code_r0x032e6b18:
  uVar13 = 0;
  goto LAB_032e6b44;
code_r0x032e6d00:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e6d08;
  goto LAB_032e6cf8;
code_r0x032e6d08:
  uVar13 = 0;
  goto LAB_032e6d34;
code_r0x032e6e64:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e6e6c;
  goto LAB_032e6e5c;
code_r0x032e6e6c:
  uVar13 = 0;
  goto LAB_032e6e98;
code_r0x032e70b8:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e70c0;
  goto LAB_032e70b0;
code_r0x032e70c0:
  uVar13 = 0;
  goto LAB_032e70ec;
code_r0x032e7210:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e7218;
  goto LAB_032e7208;
code_r0x032e7218:
  uVar13 = 0;
  goto LAB_032e7244;
code_r0x032e73fc:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e7404;
  goto LAB_032e73f4;
code_r0x032e7404:
  uVar13 = 0;
  goto LAB_032e7430;
code_r0x032e755c:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e7564;
  goto LAB_032e7554;
code_r0x032e7564:
  uVar13 = 0;
  goto LAB_032e7590;
code_r0x032e7748:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e7750;
  goto LAB_032e7740;
code_r0x032e7750:
  uVar13 = 0;
  goto LAB_032e777c;
code_r0x032e78a8:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e78b0;
  goto LAB_032e78a0;
code_r0x032e78b0:
  uVar13 = 0;
  goto LAB_032e78dc;
code_r0x032e7a94:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e7a9c;
  goto LAB_032e7a8c;
code_r0x032e7a9c:
  uVar13 = 0;
  goto LAB_032e7ac8;
}


