/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032e3af0; name: FUN_032e3af0
 */


/* WARNING: Removing unreachable block (ram,0x032e431c) */
/* WARNING: Removing unreachable block (ram,0x032e3d20) */
/* WARNING: Removing unreachable block (ram,0x032e3f84) */
/* WARNING: Removing unreachable block (ram,0x032e4580) */

void FUN_032e3af0(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined *puVar10;
  byte *pbVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  bool bVar15;
  long local_e8;
  ulong *local_e0;
  ulong local_d8;
  ulong local_d0;
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
  uint local_68;
  int local_64;
  ulong *local_60;
  undefined4 local_58;
  double local_48;
  
  FUN_03325b88(&local_c0,param_1,"floatDataOld");
  local_e8 = CONCAT44(local_e8._4_4_,local_a0);
  FUN_03323c3c(&local_88,local_c0,uStack_b8,local_a8,&local_e8,0);
  if ((local_b0 & 1) != 0) {
    plVar6 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_e8,param_1,"floatData");
  local_48 = (double)CONCAT44(local_48._4_4_,local_c8);
  FUN_03323c3c(&local_c0,local_e8,local_e0,local_d0,&local_48,0);
  if ((local_d8 & 1) != 0) {
    plVar6 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  uVar4 = local_68;
  pbVar11 = local_80;
  if ((*local_80 & 1) == 0) {
    do {
      pbVar11 = *(byte **)(pbVar11 + 8);
    } while ((*pbVar11 & 1) == 0);
  }
  pbVar8 = local_80;
  if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) != 8) {
    pbVar8 = (byte *)0x0;
  }
  do {
    if ((*pbVar8 & 1) != 0) {
      if ((pbVar8 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar8 + 0x10) >> 8) != 0))
      goto LAB_032e3c6c;
      break;
    }
    pbVar8 = *(byte **)(pbVar8 + 8);
  } while (pbVar8 != (byte *)0x0);
  if ((int)*local_88 < 0) {
LAB_032e3c6c:
    puVar10 = PTR_DAT_047e61d0;
  }
  else {
    puVar10 = (undefined *)(*(long *)(local_78 + 0x228) + (ulong)*local_88 * 0x20);
  }
  uVar9 = *(ulong *)(puVar10 + 0x10);
  if ((uVar9 & 1) != 0) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  uVar9 = (ulong)uVar4;
  FUN_03324ed0(&local_c0,uVar9);
  if (0 < (int)uVar4) {
LAB_032e3ce4:
    iVar3 = (int)uVar9;
    uVar9 = (long)iVar3 - 1;
    local_e8 = local_70 + (long)local_64 * uVar9;
    if (local_60 != (ulong *)0x0) {
      puVar12 = local_60;
LAB_032e3d08:
      uVar13 = *puVar12;
      if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e3d10;
      local_d8 = puVar12[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
      if ((local_d8 & 1) != 0) {
        piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar15) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar15) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar15) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar15 = false;
        goto LAB_032e3da8;
      }
      goto LAB_032e3d44;
    }
    local_d8 = 0;
    goto LAB_032e3d44;
  }
LAB_032e4108:
  FUN_03325b88(&local_c0,param_1,"vectorDataOld");
  local_e8 = CONCAT44(local_e8._4_4_,local_a0);
  FUN_03323c3c(&local_88,local_c0,uStack_b8,local_a8,&local_e8,0);
  if ((local_b0 & 1) != 0) {
    plVar6 = (long *)(local_b0 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_e8,param_1,"vectorData");
  local_48 = (double)CONCAT44(local_48._4_4_,local_c8);
  FUN_03323c3c(&local_c0,local_e8,local_e0,local_d0,&local_48,0);
  if ((local_d8 & 1) != 0) {
    plVar6 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  pbVar11 = local_80;
  if ((*local_80 & 1) == 0) {
    do {
      pbVar11 = *(byte **)(pbVar11 + 8);
    } while ((*pbVar11 & 1) == 0);
  }
  if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) != 8) {
    local_80 = (byte *)0x0;
  }
  do {
    if ((*local_80 & 1) != 0) {
      if ((local_80 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_80 + 0x10) >> 8) != 0))
      goto LAB_032e4268;
      break;
    }
    local_80 = *(byte **)(local_80 + 8);
  } while (local_80 != (byte *)0x0);
  if ((int)*local_88 < 0) {
LAB_032e4268:
    puVar10 = PTR_DAT_047e61d0;
  }
  else {
    puVar10 = (undefined *)(*(long *)(local_78 + 0x228) + (ulong)*local_88 * 0x20);
  }
  uVar9 = *(ulong *)(puVar10 + 0x10);
  if ((uVar9 & 1) != 0) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar15) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)(uVar9 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  uVar9 = (ulong)local_68;
  FUN_03324ed0(&local_c0,uVar9);
  if ((int)local_68 < 1) {
    return;
  }
LAB_032e42e0:
  iVar3 = (int)uVar9;
  uVar9 = (long)iVar3 - 1;
  local_e8 = local_70 + (long)local_64 * uVar9;
  if (local_60 != (ulong *)0x0) {
    puVar12 = local_60;
LAB_032e4304:
    uVar13 = *puVar12;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e430c;
    local_d8 = puVar12[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((local_d8 & 1) != 0) {
      piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar15 = false;
      goto LAB_032e43a4;
    }
    goto LAB_032e4340;
  }
  local_d8 = 0;
  goto LAB_032e4340;
code_r0x032e3d10:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto code_r0x032e3d18;
  goto LAB_032e3d08;
code_r0x032e3d18:
  local_d8 = 0;
LAB_032e3d44:
  bVar15 = true;
LAB_032e3da8:
  uVar13 = local_d8;
  local_e0 = local_60;
  local_c8 = local_58;
  if (local_e8 != 0) {
    puVar12 = local_60;
    if ((*local_60 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((local_60 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_e8);
    }
  }
  if (!bVar15) {
    plVar6 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (local_e0 == (ulong *)0x0) {
LAB_032e3eb8:
    uVar13 = 0;
    lVar7 = 0;
  }
  else {
    puVar12 = local_e0;
    if ((*local_e0 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((puVar12[2] & 0x1f) != 5) {
      local_e0 = (ulong *)0x0;
      goto LAB_032e3eb8;
    }
    lVar7 = local_e8;
    uVar13 = local_d8;
    if ((local_d8 & 1) != 0) {
      piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  local_48 = 0.0;
  plVar14 = (long *)(uVar13 & 0xfffffffffffffffe);
  (**(code **)(*plVar14 + 0x38))(plVar14,lVar7,local_e0,&local_48);
  dVar5 = local_48;
  if ((uVar13 & 1) != 0) {
    plVar6 = plVar14 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar15) {
        *(int *)plVar6 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar14 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
  if ((local_d8 & 1) != 0) {
    plVar6 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  local_e8 = local_a8 + (long)local_9c * (long)(int)uVar9;
  if (local_98 != (ulong *)0x0) {
    puVar12 = local_98;
LAB_032e3f6c:
    uVar13 = *puVar12;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e3f74;
    local_d8 = puVar12[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((local_d8 & 1) != 0) {
      piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar15 = false;
      goto LAB_032e400c;
    }
    goto LAB_032e3fa8;
  }
  local_d8 = 0;
LAB_032e3fa8:
  bVar15 = true;
LAB_032e400c:
  uVar13 = local_d8;
  local_e0 = local_98;
  local_d0 = local_b0;
  local_c8 = local_90;
  if (local_e8 != 0) {
    puVar12 = local_98;
    if ((*local_98 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((local_98 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_e8);
    }
  }
  if (!bVar15) {
    plVar6 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_0331eaac(&local_e8,(float)dVar5);
  if ((local_d8 & 1) != 0) {
    plVar6 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (iVar3 < 2) goto LAB_032e4108;
  goto LAB_032e3ce4;
code_r0x032e3f74:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto code_r0x032e3f7c;
  goto LAB_032e3f6c;
code_r0x032e3f7c:
  local_d8 = 0;
  goto LAB_032e3fa8;
code_r0x032e430c:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto code_r0x032e4314;
  goto LAB_032e4304;
code_r0x032e4314:
  local_d8 = 0;
LAB_032e4340:
  bVar15 = true;
LAB_032e43a4:
  uVar13 = local_d8;
  local_e0 = local_60;
  local_c8 = local_58;
  if (local_e8 != 0) {
    puVar12 = local_60;
    if ((*local_60 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((local_60 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_e8);
    }
  }
  if (!bVar15) {
    plVar6 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (local_e0 == (ulong *)0x0) {
LAB_032e44b4:
    uVar13 = 0;
    lVar7 = 0;
  }
  else {
    puVar12 = local_e0;
    if ((*local_e0 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((puVar12[2] & 0x1f) != 5) {
      local_e0 = (ulong *)0x0;
      goto LAB_032e44b4;
    }
    lVar7 = local_e8;
    uVar13 = local_d8;
    if ((local_d8 & 1) != 0) {
      piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  local_48 = 0.0;
  plVar14 = (long *)(uVar13 & 0xfffffffffffffffe);
  (**(code **)(*plVar14 + 0x38))(plVar14,lVar7,local_e0,&local_48);
  dVar5 = local_48;
  if ((uVar13 & 1) != 0) {
    plVar6 = plVar14 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar15) {
        *(int *)plVar6 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar14 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
  if ((local_d8 & 1) != 0) {
    plVar6 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  local_e8 = local_a8 + (long)local_9c * (long)(int)uVar9;
  if (local_98 != (ulong *)0x0) {
    puVar12 = local_98;
LAB_032e4568:
    uVar13 = *puVar12;
    if (((uint)uVar13 >> 2 & 1) == 0) goto code_r0x032e4570;
    local_d8 = puVar12[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
    if ((local_d8 & 1) != 0) {
      piVar1 = (int *)((local_d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar15 = false;
      goto LAB_032e4608;
    }
    goto LAB_032e45a4;
  }
  local_d8 = 0;
LAB_032e45a4:
  bVar15 = true;
LAB_032e4608:
  uVar13 = local_d8;
  local_d0 = local_b0;
  local_c8 = local_90;
  if (local_e8 != 0) {
    puVar12 = local_98;
    if ((*local_98 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    if ((local_98 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_e8);
    }
  }
  if (!bVar15) {
    plVar6 = (long *)(uVar13 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_0331eaac(&local_e8,(float)dVar5);
  if ((local_d8 & 1) != 0) {
    plVar6 = (long *)(local_d8 & 0xfffffffffffffffe);
    plVar14 = plVar6 + 1;
    do {
      lVar7 = *plVar14;
      cVar2 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *(int *)plVar14 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (iVar3 < 2) {
    return;
  }
  goto LAB_032e42e0;
code_r0x032e4570:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto code_r0x032e4578;
  goto LAB_032e4568;
code_r0x032e4578:
  local_d8 = 0;
  goto LAB_032e45a4;
}


