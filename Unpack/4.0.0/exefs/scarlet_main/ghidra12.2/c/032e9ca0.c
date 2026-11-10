/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032e9ca0; name: FUN_032e9ca0
 */


/* WARNING: Removing unreachable block (ram,0x032ea624) */
/* WARNING: Removing unreachable block (ram,0x032ea2dc) */
/* WARNING: Removing unreachable block (ram,0x032e9f94) */
/* WARNING: Removing unreachable block (ram,0x032e9e3c) */
/* WARNING: Removing unreachable block (ram,0x032ea17c) */
/* WARNING: Removing unreachable block (ram,0x032ea4c4) */
/* WARNING: Removing unreachable block (ram,0x032ea810) */

void FUN_032e9ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  long *local_118 [2];
  ulong local_108;
  long local_f0;
  ulong *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_d0;
  long local_c8;
  ulong *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long local_88;
  undefined4 local_80;
  int local_7c;
  ulong *local_78;
  undefined4 local_70;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  long local_50;
  int local_44;
  ulong *local_40;
  undefined4 local_38;
  undefined4 local_18 [2];
  
  FUN_03325b88(&local_a0);
  local_c8 = CONCAT44(local_c8._4_4_,local_80);
  FUN_03323c3c(auStack_68,local_a0,uStack_98,local_88,&local_c8,0);
  if ((local_90 & 1) != 0) {
    plVar7 = (long *)(local_90 & 0xfffffffffffffffe);
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
  FUN_03325b88(local_118,param_1,param_3);
  FUN_033234d0(&local_f0,local_118);
  FUN_03325b88(&local_c8,&local_f0,&DAT_03c30f0f);
  local_18[0] = local_a8;
  FUN_03323c3c(&local_a0,local_c8,local_c0,local_b0,local_18,0);
  if ((local_b8 & 1) != 0) {
    plVar7 = (long *)(local_b8 & 0xfffffffffffffffe);
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
  if ((local_e0 & 1) != 0) {
    plVar7 = (long *)(local_e0 & 0xfffffffffffffffe);
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
  if ((local_108 & 1) != 0) {
    plVar7 = (long *)(local_108 & 0xfffffffffffffffe);
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
  if (local_40 != (ulong *)0x0) {
    puVar8 = local_40;
LAB_032e9e24:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e9e2c;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032e9e94;
    }
    goto LAB_032e9e60;
  }
  uVar9 = 0;
LAB_032e9e60:
  bVar4 = true;
LAB_032e9e94:
  local_c8 = local_50;
  local_c0 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b0 = local_58;
  local_a8 = local_38;
  local_b8 = uVar9;
  if (local_50 != 0) {
    puVar8 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c8);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  if (local_78 != (ulong *)0x0) {
    puVar8 = local_78;
LAB_032e9f7c:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032e9f84;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032e9fec;
    }
    goto LAB_032e9fb8;
  }
  uVar9 = 0;
LAB_032e9fb8:
  bVar4 = true;
LAB_032e9fec:
  local_f0 = local_88;
  local_e8 = local_78;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_d8 = local_90;
  local_d0 = local_70;
  local_e0 = uVar9;
  if (local_88 != 0) {
    puVar8 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_78 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_f0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_118[0] = &local_f0;
  FUN_0331deb8(local_118,local_e8,&local_c8);
  if ((local_e0 & 1) != 0) {
    plVar7 = (long *)(local_e0 & 0xfffffffffffffffe);
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
  if ((local_b8 & 1) != 0) {
    plVar7 = (long *)(local_b8 & 0xfffffffffffffffe);
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
  local_c8 = local_50 + local_44;
  if (local_40 != (ulong *)0x0) {
    puVar8 = local_40;
LAB_032ea164:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032ea16c;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ea1d4;
    }
    goto LAB_032ea1a0;
  }
  uVar9 = 0;
LAB_032ea1a0:
  bVar4 = true;
LAB_032ea1d4:
  local_c0 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b0 = local_58;
  local_a8 = local_38;
  local_b8 = uVar9;
  if (local_c8 != 0) {
    puVar8 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c8);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_f0 = local_88 + local_7c;
  if (local_78 != (ulong *)0x0) {
    puVar8 = local_78;
LAB_032ea2c4:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032ea2cc;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ea334;
    }
    goto LAB_032ea300;
  }
  uVar9 = 0;
LAB_032ea300:
  bVar4 = true;
LAB_032ea334:
  local_e8 = local_78;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_d8 = local_90;
  local_d0 = local_70;
  local_e0 = uVar9;
  if (local_f0 != 0) {
    puVar8 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_78 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_f0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_118[0] = &local_f0;
  FUN_0331deb8(local_118,local_e8,&local_c8);
  if ((local_e0 & 1) != 0) {
    plVar7 = (long *)(local_e0 & 0xfffffffffffffffe);
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
  if ((local_b8 & 1) != 0) {
    plVar7 = (long *)(local_b8 & 0xfffffffffffffffe);
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
  local_c8 = local_50 + (long)local_44 * 2;
  if (local_40 != (ulong *)0x0) {
    puVar8 = local_40;
LAB_032ea4ac:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032ea4b4;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ea51c;
    }
    goto LAB_032ea4e8;
  }
  uVar9 = 0;
LAB_032ea4e8:
  bVar4 = true;
LAB_032ea51c:
  local_c0 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b0 = local_58;
  local_a8 = local_38;
  local_b8 = uVar9;
  if (local_c8 != 0) {
    puVar8 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c8);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_f0 = local_88 + (long)local_7c * 2;
  if (local_78 != (ulong *)0x0) {
    puVar8 = local_78;
LAB_032ea60c:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032ea614;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ea67c;
    }
    goto LAB_032ea648;
  }
  uVar9 = 0;
LAB_032ea648:
  bVar4 = true;
LAB_032ea67c:
  local_e8 = local_78;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_d8 = local_90;
  local_d0 = local_70;
  local_e0 = uVar9;
  if (local_f0 != 0) {
    puVar8 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_78 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_f0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_118[0] = &local_f0;
  FUN_0331deb8(local_118,local_e8,&local_c8);
  if ((local_e0 & 1) != 0) {
    plVar7 = (long *)(local_e0 & 0xfffffffffffffffe);
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
  if ((local_b8 & 1) != 0) {
    plVar7 = (long *)(local_b8 & 0xfffffffffffffffe);
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
  local_c8 = local_50 + (long)local_44 * 3;
  if (local_40 != (ulong *)0x0) {
    puVar8 = local_40;
LAB_032ea7f8:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032ea800;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ea868;
    }
    goto LAB_032ea834;
  }
  uVar9 = 0;
LAB_032ea834:
  bVar4 = true;
LAB_032ea868:
  local_c0 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b0 = local_58;
  local_a8 = local_38;
  local_b8 = uVar9;
  if (local_c8 != 0) {
    puVar8 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c8);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_f0 = local_88 + (long)local_7c * 3;
  if (local_78 != (ulong *)0x0) {
    puVar8 = local_78;
    do {
      uVar9 = *puVar8;
      if (((uint)uVar9 >> 2 & 1) != 0) {
        uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
        if ((uVar9 & 1) != 0) {
          piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
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
          goto LAB_032ea990;
        }
        goto LAB_032ea98c;
      }
      puVar8 = (ulong *)puVar8[1];
    } while (puVar8 != (ulong *)0x0);
  }
  uVar9 = 0;
LAB_032ea98c:
  bVar4 = true;
LAB_032ea990:
  local_e8 = local_78;
  if (!bVar4) {
    piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_d8 = local_90;
  local_d0 = local_70;
  local_e0 = uVar9;
  if (local_f0 != 0) {
    puVar8 = local_78;
    if ((*local_78 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_78 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_f0);
    }
  }
  if (!bVar4) {
    plVar7 = (long *)(uVar9 & 0xfffffffffffffffe);
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
  local_118[0] = &local_f0;
  FUN_0331deb8(local_118,local_e8,&local_c8);
  if ((local_e0 & 1) != 0) {
    plVar7 = (long *)(local_e0 & 0xfffffffffffffffe);
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
  if ((local_b8 & 1) != 0) {
    plVar7 = (long *)(local_b8 & 0xfffffffffffffffe);
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
code_r0x032e9e2c:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e9e34;
  goto LAB_032e9e24;
code_r0x032e9e34:
  uVar9 = 0;
  goto LAB_032e9e60;
code_r0x032e9f84:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032e9f8c;
  goto LAB_032e9f7c;
code_r0x032e9f8c:
  uVar9 = 0;
  goto LAB_032e9fb8;
code_r0x032ea16c:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032ea174;
  goto LAB_032ea164;
code_r0x032ea174:
  uVar9 = 0;
  goto LAB_032ea1a0;
code_r0x032ea2cc:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032ea2d4;
  goto LAB_032ea2c4;
code_r0x032ea2d4:
  uVar9 = 0;
  goto LAB_032ea300;
code_r0x032ea4b4:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032ea4bc;
  goto LAB_032ea4ac;
code_r0x032ea4bc:
  uVar9 = 0;
  goto LAB_032ea4e8;
code_r0x032ea614:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032ea61c;
  goto LAB_032ea60c;
code_r0x032ea61c:
  uVar9 = 0;
  goto LAB_032ea648;
code_r0x032ea800:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032ea808;
  goto LAB_032ea7f8;
code_r0x032ea808:
  uVar9 = 0;
  goto LAB_032ea834;
}


