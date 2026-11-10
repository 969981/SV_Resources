/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032e1a90; name: FUN_032e1a90
 */


/* WARNING: Removing unreachable block (ram,0x032e20f8) */
/* WARNING: Removing unreachable block (ram,0x032e1da4) */
/* WARNING: Removing unreachable block (ram,0x032e1c30) */
/* WARNING: Removing unreachable block (ram,0x032e1f88) */
/* WARNING: Removing unreachable block (ram,0x032e22d4) */

void FUN_032e1a90(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  bool bVar10;
  int iVar11;
  long local_138;
  ulong *local_130;
  ulong local_128;
  ulong local_120;
  undefined4 local_118;
  long local_110;
  ulong *local_108;
  ulong local_100;
  ulong local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulong local_d8;
  long local_d0;
  undefined4 local_c8;
  int local_c4;
  ulong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  long local_98;
  undefined4 local_90;
  int local_8c;
  ulong *local_88;
  undefined4 local_80;
  undefined1 auStack_78 [24];
  long local_60;
  int local_54;
  ulong *local_50;
  undefined4 local_48;
  
  FUN_03325b88(&local_b0,param_1,"data_old");
  local_e8 = local_90;
  FUN_03323c3c(auStack_78,local_b0,uStack_a8,local_98,&local_e8,0);
  if ((local_a0 & 1) != 0) {
    plVar7 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_e8,param_1,"extras");
  local_110 = CONCAT44(local_110._4_4_,local_c8);
  FUN_03323c3c(&local_b0,CONCAT44(uStack_e4,local_e8),uStack_e0,local_d0,&local_110,0);
  if ((local_d8 & 1) != 0) {
    plVar7 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_110,param_1,&DAT_03c68983);
  local_138 = CONCAT44(local_138._4_4_,local_f0);
  FUN_03323c3c(&local_e8,local_110,local_108,local_f8,&local_138,0);
  if ((local_100 & 1) != 0) {
    plVar7 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03324ed0(&local_e8,8);
  iVar11 = 0;
LAB_032e1bfc:
  local_110 = local_60 + (long)local_54 * (long)iVar11;
  if (local_50 != (ulong *)0x0) {
    puVar8 = local_50;
LAB_032e1c18:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e1c20;
    local_100 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((local_100 & 1) != 0) {
      piVar2 = (int *)((local_100 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
      goto LAB_032e1cb8;
    }
    goto LAB_032e1c54;
  }
  local_100 = 0;
  goto LAB_032e1c54;
code_r0x032e1c20:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e1c28;
  goto LAB_032e1c18;
code_r0x032e1c28:
  local_100 = 0;
LAB_032e1c54:
  bVar10 = true;
LAB_032e1cb8:
  uVar9 = local_100;
  local_f0 = local_48;
  if (local_110 != 0) {
    puVar8 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_110);
    }
  }
  if (!bVar10) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  uVar6 = FUN_0327462c(&local_110);
  local_138 = local_d0 + (long)local_c4 * (long)iVar11;
  if (local_c0 != (ulong *)0x0) {
    puVar8 = local_c0;
LAB_032e1d8c:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e1d94;
    local_128 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((local_128 & 1) != 0) {
      piVar2 = (int *)((local_128 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
      goto LAB_032e1e2c;
    }
    goto LAB_032e1dc8;
  }
  local_128 = 0;
LAB_032e1dc8:
  bVar10 = true;
LAB_032e1e2c:
  uVar9 = local_128;
  local_118 = local_b8;
  if (local_138 != 0) {
    puVar8 = local_c0;
    if ((*local_c0 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_c0 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar10) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  FUN_0331e864(&local_138,uVar6);
  if ((local_128 & 1) != 0) {
    plVar7 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_100 & 1) != 0) {
    plVar7 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  iVar11 = iVar11 + 1;
  if (iVar11 == 6) goto code_r0x032e1f60;
  goto LAB_032e1bfc;
code_r0x032e1d94:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e1d9c;
  goto LAB_032e1d8c;
code_r0x032e1d9c:
  local_128 = 0;
  goto LAB_032e1dc8;
code_r0x032e1f78:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e1f80;
  goto LAB_032e1f70;
code_r0x032e1f80:
  uVar9 = 0;
  goto LAB_032e1fac;
code_r0x032e20e8:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e20f0;
  goto LAB_032e20e0;
code_r0x032e20f0:
  uVar9 = 0;
  goto LAB_032e211c;
code_r0x032e22c4:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e22cc;
  goto LAB_032e22bc;
code_r0x032e22cc:
  uVar9 = 0;
  goto LAB_032e22f8;
code_r0x032e1f60:
  if (local_88 != (ulong *)0x0) {
    puVar8 = local_88;
LAB_032e1f70:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e1f78;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
      goto LAB_032e1fe0;
    }
    goto LAB_032e1fac;
  }
  uVar9 = 0;
LAB_032e1fac:
  bVar10 = true;
LAB_032e1fe0:
  local_110 = local_98;
  local_108 = local_88;
  if (!bVar10) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_f8 = local_a0;
  local_f0 = local_80;
  local_100 = uVar9;
  if (local_98 != 0) {
    puVar8 = local_88;
    if ((*local_88 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_88 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_110);
    }
  }
  if (!bVar10) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  uVar6 = FUN_0327462c(&local_110);
  local_138 = local_d0 + (long)local_c4 * 6;
  if (local_c0 != (ulong *)0x0) {
    puVar8 = local_c0;
LAB_032e20e0:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e20e8;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
      goto LAB_032e2150;
    }
    goto LAB_032e211c;
  }
  uVar9 = 0;
LAB_032e211c:
  bVar10 = true;
LAB_032e2150:
  local_130 = local_c0;
  if (!bVar10) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_120 = local_d8;
  local_118 = local_b8;
  local_128 = uVar9;
  if (local_138 != 0) {
    puVar8 = local_c0;
    if ((*local_c0 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_c0 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar10) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  FUN_0331e864(&local_138,uVar6);
  if ((local_128 & 1) != 0) {
    plVar7 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_100 & 1) != 0) {
    plVar7 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  local_110 = local_98 + local_8c;
  if (local_88 != (ulong *)0x0) {
    puVar8 = local_88;
LAB_032e22bc:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e22c4;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
      goto LAB_032e232c;
    }
    goto LAB_032e22f8;
  }
  uVar9 = 0;
LAB_032e22f8:
  bVar10 = true;
LAB_032e232c:
  local_108 = local_88;
  if (!bVar10) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_f8 = local_a0;
  local_f0 = local_80;
  local_100 = uVar9;
  if (local_110 != 0) {
    puVar8 = local_88;
    if ((*local_88 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_88 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_110);
    }
  }
  if (!bVar10) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  uVar6 = FUN_0327462c(&local_110);
  local_138 = local_d0 + (long)local_c4 * 7;
  if (local_c0 != (ulong *)0x0) {
    puVar8 = local_c0;
    do {
      uVar9 = *puVar8;
      if (((uint)uVar9 >> 2 & 1) != 0) {
        uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
        if ((uVar9 & 1) != 0) {
          piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar10 = false;
          goto LAB_032e2464;
        }
        goto LAB_032e2460;
      }
      puVar8 = (ulong *)puVar8[1];
    } while (puVar8 != (ulong *)0x0);
  }
  uVar9 = 0;
LAB_032e2460:
  bVar10 = true;
LAB_032e2464:
  local_130 = local_c0;
  if (!bVar10) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_120 = local_d8;
  local_118 = local_b8;
  local_128 = uVar9;
  if (local_138 != 0) {
    puVar8 = local_c0;
    if ((*local_c0 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_c0 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_138);
    }
  }
  if (!bVar10) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  FUN_0331e864(&local_138,uVar6);
  if ((local_128 & 1) != 0) {
    plVar7 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_100 & 1) != 0) {
    plVar7 = (long *)(local_100 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
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


