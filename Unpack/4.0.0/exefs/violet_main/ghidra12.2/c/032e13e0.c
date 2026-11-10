/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032e13e0; name: FUN_032e13e0
 */


/* WARNING: Removing unreachable block (ram,0x032e1714) */
/* WARNING: Removing unreachable block (ram,0x032e1888) */

void FUN_032e13e0(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined *puVar9;
  ulong uVar8;
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
  bool bVar13;
  long local_128 [2];
  ulong local_118;
  undefined4 local_108;
  long local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  long local_c0;
  undefined4 local_b8;
  int local_b4;
  ulong *local_b0;
  undefined4 local_a8;
  uint *local_a0;
  byte *local_98;
  ulong local_90;
  long local_88;
  uint local_80;
  int local_7c;
  ulong *local_78;
  undefined4 local_70;
  undefined1 auStack_68 [16];
  ulong local_58;
  
  FUN_03325b88(&local_a0,param_1,"storage");
  FUN_033234d0(auStack_68,&local_a0);
  if ((local_90 & 1) != 0) {
    plVar7 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_a0,param_1,"numBits");
  uVar6 = FUN_0327462c(&local_a0);
  if ((local_90 & 1) != 0) {
    plVar7 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_a0,auStack_68,"numBits");
  FUN_0331e864(&local_a0,uVar6);
  if ((local_90 & 1) != 0) {
    plVar7 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_d8,param_1,"words");
  local_100 = CONCAT44(local_100._4_4_,local_b8);
  FUN_03323c3c(&local_a0,local_d8,uStack_d0,local_c0,&local_100,0);
  if ((local_c8 & 1) != 0) {
    plVar7 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_100,auStack_68,"words");
  local_128[0] = CONCAT44(local_128[0]._4_4_,local_e0);
  FUN_03323c3c(&local_d8,local_100,local_f8,local_e8,local_128,0);
  if ((local_f0 & 1) != 0) {
    plVar7 = (long *)(local_f0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  pbVar10 = local_98;
  if ((*local_98 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    local_98 = (byte *)0x0;
  }
  do {
    if ((*local_98 & 1) != 0) {
      if ((local_98 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_98 + 0x10) >> 8) != 0))
      goto LAB_032e1660;
      break;
    }
    local_98 = *(byte **)(local_98 + 8);
  } while (local_98 != (byte *)0x0);
  if ((int)*local_a0 < 0) {
LAB_032e1660:
    puVar9 = PTR_DAT_047e61d0;
  }
  else {
    puVar9 = (undefined *)(*(long *)(local_90 + 0x228) + (ulong)*local_a0 * 0x20);
  }
  uVar8 = *(ulong *)(puVar9 + 0x10);
  if ((uVar8 & 1) != 0) {
    piVar2 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  uVar8 = (ulong)local_80;
  FUN_03324ed0(&local_d8,uVar8);
  if ((int)local_80 < 1) {
LAB_032e1a40:
    if ((local_58 & 1) != 0) {
      plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    return;
  }
LAB_032e16d8:
  iVar4 = (int)uVar8;
  uVar8 = (long)iVar4 - 1;
  local_100 = local_88 + (long)local_7c * uVar8;
  if (local_78 != (ulong *)0x0) {
    puVar11 = local_78;
LAB_032e16fc:
    uVar12 = *puVar11;
    if (((uint)uVar12 >> 2 & 1) == 0) goto code_r0x032e1704;
    local_f0 = puVar11[(uVar12 >> 1 & 1) + (uVar12 & 1) + 2];
    if ((local_f0 & 1) != 0) {
      piVar2 = (int *)((local_f0 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar13 = false;
      goto LAB_032e179c;
    }
    goto LAB_032e1738;
  }
  local_f0 = 0;
  goto LAB_032e1738;
code_r0x032e1704:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e170c;
  goto LAB_032e16fc;
code_r0x032e170c:
  local_f0 = 0;
LAB_032e1738:
  bVar13 = true;
LAB_032e179c:
  uVar12 = local_f0;
  local_e0 = local_70;
  if (local_100 != 0) {
    puVar11 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_78 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_100);
    }
  }
  if (!bVar13) {
    plVar7 = (long *)(uVar12 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  uVar6 = FUN_0327462c(&local_100);
  local_128[0] = local_c0 + (long)local_b4 * (long)(int)uVar8;
  if (local_b0 != (ulong *)0x0) {
    puVar11 = local_b0;
LAB_032e1870:
    uVar12 = *puVar11;
    if (((uint)uVar12 >> 2 & 1) == 0) goto code_r0x032e1878;
    local_118 = puVar11[(uVar12 >> 1 & 1) + (uVar12 & 1) + 2];
    if ((local_118 & 1) != 0) {
      piVar2 = (int *)((local_118 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar13 = false;
      goto LAB_032e1910;
    }
    goto LAB_032e18ac;
  }
  local_118 = 0;
LAB_032e18ac:
  bVar13 = true;
LAB_032e1910:
  uVar12 = local_118;
  local_108 = local_a8;
  if (local_128[0] != 0) {
    puVar11 = local_b0;
    if ((*local_b0 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_b0 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_128);
    }
  }
  if (!bVar13) {
    plVar7 = (long *)(uVar12 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  FUN_0331eaac(local_128,uVar6);
  if ((local_118 & 1) != 0) {
    plVar7 = (long *)(local_118 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_f0 & 1) != 0) {
    plVar7 = (long *)(local_f0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if (iVar4 < 2) goto LAB_032e1a40;
  goto LAB_032e16d8;
code_r0x032e1878:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e1880;
  goto LAB_032e1870;
code_r0x032e1880:
  local_118 = 0;
  goto LAB_032e18ac;
}


