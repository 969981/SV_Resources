/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032f79a0; name: FUN_032f79a0
 */


/* WARNING: Removing unreachable block (ram,0x032f7bc8) */
/* WARNING: Removing unreachable block (ram,0x032f7d3c) */

void FUN_032f79a0(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar7;
  ulong uVar6;
  byte *pbVar8;
  ulong *puVar9;
  int iVar10;
  bool bVar11;
  long local_128 [2];
  ulong local_118;
  undefined4 local_108;
  long local_100 [2];
  ulong local_f0;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  long local_98;
  undefined4 local_90;
  int local_8c;
  ulong *local_88;
  undefined4 local_80;
  uint *local_78;
  byte *local_70;
  long local_68;
  long local_60;
  int local_58;
  int local_54;
  ulong *local_50;
  undefined4 local_48;
  
  FUN_03325b88(&local_b0,param_1,"old_meshInfos");
  local_d8 = local_90;
  FUN_03323c3c(&local_78,local_b0,uStack_a8,local_98,&local_d8,0);
  if ((local_a0 & 1) != 0) {
    plVar5 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03325b88(&local_d8,param_1,"meshInfos");
  local_100[0] = CONCAT44(local_100[0]._4_4_,local_b8);
  FUN_03323c3c(&local_b0,CONCAT44(uStack_d4,local_d8),uStack_d0,local_c0,local_100,0);
  if ((local_c8 & 1) != 0) {
    plVar5 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  pbVar8 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar8 = *(byte **)(pbVar8 + 8);
    } while ((*pbVar8 & 1) == 0);
  }
  if ((*(ulong *)(pbVar8 + 0x10) & 0x1f) != 8) {
    local_70 = (byte *)0x0;
  }
  do {
    if ((*local_70 & 1) != 0) {
      if ((local_70 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_70 + 0x10) >> 8) != 0))
      goto LAB_032f7b18;
      break;
    }
    local_70 = *(byte **)(local_70 + 8);
  } while (local_70 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032f7b18:
    puVar7 = PTR_DAT_047e61d0;
  }
  else {
    puVar7 = (undefined *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20);
  }
  uVar6 = *(ulong *)(puVar7 + 0x10);
  if ((uVar6 & 1) != 0) {
    piVar2 = (int *)((uVar6 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03324ed0(&local_b0,local_58);
  if (local_58 < 1) {
    return;
  }
  iVar10 = 0;
LAB_032f7b94:
  local_100[0] = local_60 + (long)local_54 * (long)iVar10;
  if (local_50 != (ulong *)0x0) {
    puVar9 = local_50;
LAB_032f7bb0:
    uVar6 = *puVar9;
    if (((uint)uVar6 >> 2 & 1) == 0) goto code_r0x032f7bb8;
    local_f0 = puVar9[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
    if ((local_f0 & 1) != 0) {
      piVar2 = (int *)((local_f0 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = false;
      goto LAB_032f7c50;
    }
    goto LAB_032f7bec;
  }
  local_f0 = 0;
  goto LAB_032f7bec;
code_r0x032f7bb8:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032f7bc0;
  goto LAB_032f7bb0;
code_r0x032f7bc0:
  local_f0 = 0;
LAB_032f7bec:
  bVar11 = true;
LAB_032f7c50:
  uVar6 = local_f0;
  local_e0 = local_48;
  if (local_100[0] != 0) {
    puVar9 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_100);
    }
  }
  if (!bVar11) {
    plVar5 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  FUN_033234d0(&local_d8,local_100);
  local_128[0] = local_98 + (long)local_8c * (long)iVar10;
  if (local_88 != (ulong *)0x0) {
    puVar9 = local_88;
LAB_032f7d24:
    uVar6 = *puVar9;
    if (((uint)uVar6 >> 2 & 1) == 0) goto code_r0x032f7d2c;
    local_118 = puVar9[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
    if ((local_118 & 1) != 0) {
      piVar2 = (int *)((local_118 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = false;
      goto LAB_032f7dc4;
    }
    goto LAB_032f7d60;
  }
  local_118 = 0;
LAB_032f7d60:
  bVar11 = true;
LAB_032f7dc4:
  uVar6 = local_118;
  local_108 = local_80;
  if (local_128[0] != 0) {
    puVar9 = local_88;
    if ((*local_88 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_88 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_128);
    }
  }
  if (!bVar11) {
    plVar5 = (long *)(uVar6 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  FUN_03322aa8(local_128,&local_d8);
  if ((local_118 & 1) != 0) {
    plVar5 = (long *)(local_118 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_c8 & 1) != 0) {
    plVar5 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_f0 & 1) != 0) {
    plVar5 = (long *)(local_f0 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  iVar10 = iVar10 + 1;
  if (iVar10 == local_58) {
    return;
  }
  goto LAB_032f7b94;
code_r0x032f7d2c:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032f7d34;
  goto LAB_032f7d24;
code_r0x032f7d34:
  local_118 = 0;
  goto LAB_032f7d60;
}


