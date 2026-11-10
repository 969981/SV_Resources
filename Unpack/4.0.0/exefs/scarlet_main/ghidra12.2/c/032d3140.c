/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032d3140; name: FUN_032d3140
 */


/* WARNING: Removing unreachable block (ram,0x032d34a0) */
/* WARNING: Removing unreachable block (ram,0x032d3250) */
/* WARNING: Removing unreachable block (ram,0x032d36e8) */

void FUN_032d3140(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  long local_c0;
  ulong *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  long local_80;
  undefined4 local_78;
  int local_74;
  ulong *local_70;
  undefined4 local_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  long local_48;
  int local_3c;
  ulong *local_38;
  undefined4 local_30;
  undefined4 local_28 [2];
  
  FUN_03325b88(&local_98,param_1,"uvMapScale");
  local_c0 = CONCAT44(local_c0._4_4_,local_78);
  FUN_03323c3c(auStack_60,local_98,uStack_90,local_80,&local_c0,0);
  if ((local_88 & 1) != 0) {
    plVar5 = (long *)(local_88 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03325b88(&local_c0,param_1,"uvMapOffset");
  local_28[0] = local_a0;
  FUN_03323c3c(&local_98,local_c0,local_b8,local_a8,local_28,0);
  if ((local_b0 & 1) != 0) {
    plVar5 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (local_38 != (ulong *)0x0) {
    puVar8 = local_38;
LAB_032d3238:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032d3240;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
      goto LAB_032d32a8;
    }
    goto LAB_032d3274;
  }
  uVar9 = 0;
LAB_032d3274:
  bVar3 = true;
LAB_032d32a8:
  local_c0 = local_48;
  local_b8 = local_38;
  if (!bVar3) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = local_50;
  local_a0 = local_30;
  local_b0 = uVar9;
  if (local_48 != 0) {
    puVar8 = local_38;
    if ((*local_38 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_38 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar3) {
    plVar5 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  puVar8 = local_b8;
  if (local_b8 == (ulong *)0x0) {
LAB_032d33e4:
    uVar9 = 0;
    lVar6 = 0;
  }
  else {
    puVar7 = local_b8;
    if ((*local_b8 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((puVar7[2] & 0x1f) != 5) {
      puVar8 = (ulong *)0x0;
      goto LAB_032d33e4;
    }
    lVar6 = local_c0;
    uVar9 = local_b0;
    if ((local_b0 & 1) != 0) {
      piVar1 = (int *)((local_b0 & 0xfffffffffffffffe) + 8);
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
  plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(0x3ff0000000000000,plVar10,lVar6,puVar8);
  if ((uVar9 & 1) != 0) {
    plVar5 = plVar10 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((local_b0 & 1) != 0) {
    plVar5 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  local_c0 = local_48 + local_3c;
  if (local_38 != (ulong *)0x0) {
    puVar8 = local_38;
LAB_032d3488:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032d3490;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
      goto LAB_032d34f8;
    }
    goto LAB_032d34c4;
  }
  uVar9 = 0;
LAB_032d34c4:
  bVar3 = true;
LAB_032d34f8:
  local_b8 = local_38;
  if (!bVar3) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = local_50;
  local_a0 = local_30;
  local_b0 = uVar9;
  if (local_c0 != 0) {
    puVar8 = local_38;
    if ((*local_38 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_38 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar3) {
    plVar5 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  puVar8 = local_b8;
  if (local_b8 == (ulong *)0x0) {
LAB_032d3634:
    uVar9 = 0;
    lVar6 = 0;
  }
  else {
    puVar7 = local_b8;
    if ((*local_b8 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((puVar7[2] & 0x1f) != 5) {
      puVar8 = (ulong *)0x0;
      goto LAB_032d3634;
    }
    lVar6 = local_c0;
    uVar9 = local_b0;
    if ((local_b0 & 1) != 0) {
      piVar1 = (int *)((local_b0 & 0xfffffffffffffffe) + 8);
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
  plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(0x3ff0000000000000,plVar10,lVar6,puVar8);
  if ((uVar9 & 1) != 0) {
    plVar5 = plVar10 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((local_b0 & 1) != 0) {
    plVar5 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (local_70 != (ulong *)0x0) {
    puVar8 = local_70;
LAB_032d36d0:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032d36d8;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
      goto LAB_032d3740;
    }
    goto LAB_032d370c;
  }
  uVar9 = 0;
LAB_032d370c:
  bVar3 = true;
LAB_032d3740:
  local_c0 = local_80;
  local_b8 = local_70;
  if (!bVar3) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = local_88;
  local_a0 = local_68;
  local_b0 = uVar9;
  if (local_80 != 0) {
    puVar8 = local_70;
    if ((*local_70 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_70 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar3) {
    plVar5 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  puVar8 = local_b8;
  if (local_b8 == (ulong *)0x0) {
LAB_032d387c:
    uVar9 = 0;
    lVar6 = 0;
  }
  else {
    puVar7 = local_b8;
    if ((*local_b8 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((puVar7[2] & 0x1f) != 5) {
      puVar8 = (ulong *)0x0;
      goto LAB_032d387c;
    }
    lVar6 = local_c0;
    uVar9 = local_b0;
    if ((local_b0 & 1) != 0) {
      piVar1 = (int *)((local_b0 & 0xfffffffffffffffe) + 8);
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
  plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(0,plVar10,lVar6,puVar8);
  if ((uVar9 & 1) != 0) {
    plVar5 = plVar10 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((local_b0 & 1) != 0) {
    plVar5 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  local_c0 = local_80 + local_74;
  if (local_70 != (ulong *)0x0) {
    puVar8 = local_70;
LAB_032d3920:
    uVar9 = *puVar8;
    if (((uint)uVar9 >> 2 & 1) == 0) goto code_r0x032d3928;
    uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
    if ((uVar9 & 1) != 0) {
      piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
      goto LAB_032d3954;
    }
    goto LAB_032d3950;
  }
LAB_032d3930:
  uVar9 = 0;
LAB_032d3950:
  bVar3 = true;
LAB_032d3954:
  local_b8 = local_70;
  if (!bVar3) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a8 = local_88;
  local_a0 = local_68;
  local_b0 = uVar9;
  if (local_c0 != 0) {
    puVar8 = local_70;
    if ((*local_70 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
      } while ((*puVar8 & 1) == 0);
    }
    if ((local_70 != (ulong *)0x0) && ((puVar8[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_c0);
    }
  }
  if (!bVar3) {
    plVar5 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  puVar8 = local_b8;
  if (local_b8 != (ulong *)0x0) {
    puVar7 = local_b8;
    if ((*local_b8 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((puVar7[2] & 0x1f) == 5) {
      lVar6 = local_c0;
      uVar9 = local_b0;
      if ((local_b0 & 1) != 0) {
        piVar1 = (int *)((local_b0 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_032d3a98;
    }
    puVar8 = (ulong *)0x0;
  }
  uVar9 = 0;
  lVar6 = 0;
LAB_032d3a98:
  plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
  (**(code **)(*plVar10 + 0x30))(0,plVar10,lVar6,puVar8);
  if ((uVar9 & 1) != 0) {
    plVar5 = plVar10 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((local_b0 & 1) != 0) {
    plVar5 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar10 = plVar5 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
code_r0x032d3240:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032d3248;
  goto LAB_032d3238;
code_r0x032d3248:
  uVar9 = 0;
  goto LAB_032d3274;
code_r0x032d3490:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032d3498;
  goto LAB_032d3488;
code_r0x032d3498:
  uVar9 = 0;
  goto LAB_032d34c4;
code_r0x032d36d8:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto code_r0x032d36e0;
  goto LAB_032d36d0;
code_r0x032d36e0:
  uVar9 = 0;
  goto LAB_032d370c;
code_r0x032d3928:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto LAB_032d3930;
  goto LAB_032d3920;
}


