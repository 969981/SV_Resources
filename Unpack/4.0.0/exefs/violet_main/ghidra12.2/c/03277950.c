/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03277950; name: FUN_03277950
 */


/* WARNING: Removing unreachable block (ram,0x03277b74) */
/* WARNING: Removing unreachable block (ram,0x03277d28) */

void FUN_03277950(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined *puVar9;
  ulong uVar8;
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
  bool bVar13;
  long local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  long local_a0;
  undefined4 local_98;
  int local_94;
  ulong *local_90;
  undefined4 local_88;
  uint *local_80;
  byte *local_78;
  long local_70;
  long local_68;
  uint local_60;
  int local_5c;
  ulong *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  
  FUN_03325b88(&local_b8,param_1,"collisionLookupTable");
  local_e0 = CONCAT44(local_e0._4_4_,local_98);
  FUN_03323c3c(&local_80,local_b8,uStack_b0,local_a0,&local_e0,0);
  if ((local_a8 & 1) != 0) {
    plVar7 = (long *)(local_a8 & 0xfffffffffffffffe);
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
  FUN_03325b88(&local_e0,param_1,"newCollisionLookupTable");
  local_48[0] = local_c0;
  FUN_03323c3c(&local_b8,local_e0,local_d8,local_c8,local_48,0);
  if ((local_d0 & 1) != 0) {
    plVar7 = (long *)(local_d0 & 0xfffffffffffffffe);
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
  pbVar10 = local_78;
  if ((*local_78 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    local_78 = (byte *)0x0;
  }
  do {
    if ((*local_78 & 1) != 0) {
      if ((local_78 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_78 + 0x10) >> 8) != 0))
      goto LAB_03277ac8;
      break;
    }
    local_78 = *(byte **)(local_78 + 8);
  } while (local_78 != (byte *)0x0);
  if ((int)*local_80 < 0) {
LAB_03277ac8:
    puVar9 = PTR_DAT_047e61d0;
  }
  else {
    puVar9 = (undefined *)(*(long *)(local_70 + 0x228) + (ulong)*local_80 * 0x20);
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
  uVar8 = (ulong)local_60;
  if ((int)local_60 < 1) {
    return;
  }
LAB_03277b38:
  iVar4 = (int)uVar8;
  uVar8 = (long)iVar4 - 1;
  local_e0 = local_68 + (long)local_5c * uVar8;
  if (local_58 != (ulong *)0x0) {
    puVar11 = local_58;
LAB_03277b5c:
    uVar12 = *puVar11;
    if (((uint)uVar12 >> 2 & 1) == 0) goto code_r0x03277b64;
    local_d0 = puVar11[(uVar12 >> 1 & 1) + (uVar12 & 1) + 2];
    if ((local_d0 & 1) != 0) {
      piVar2 = (int *)((local_d0 & 0xfffffffffffffffe) + 8);
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
      goto LAB_03277bfc;
    }
    goto LAB_03277b98;
  }
  local_d0 = 0;
  goto LAB_03277b98;
code_r0x03277b64:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x03277b6c;
  goto LAB_03277b5c;
code_r0x03277b6c:
  local_d0 = 0;
LAB_03277b98:
  bVar13 = true;
LAB_03277bfc:
  uVar12 = local_d0;
  local_c0 = local_50;
  if (local_e0 != 0) {
    puVar11 = local_58;
    if ((*local_58 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_58 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_e0);
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
  uVar6 = FUN_032796a8(&local_e0);
  if ((local_d0 & 1) != 0) {
    plVar7 = (long *)(local_d0 & 0xfffffffffffffffe);
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
  local_e0 = local_a0 + (long)local_94 * (long)(int)uVar8;
  if (local_90 != (ulong *)0x0) {
    puVar11 = local_90;
LAB_03277d10:
    uVar12 = *puVar11;
    if (((uint)uVar12 >> 2 & 1) == 0) goto code_r0x03277d18;
    local_d0 = puVar11[(uVar12 >> 1 & 1) + (uVar12 & 1) + 2];
    if ((local_d0 & 1) != 0) {
      piVar2 = (int *)((local_d0 & 0xfffffffffffffffe) + 8);
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
      goto LAB_03277db0;
    }
    goto LAB_03277d4c;
  }
  local_d0 = 0;
LAB_03277d4c:
  bVar13 = true;
LAB_03277db0:
  uVar12 = local_d0;
  local_c8 = local_a8;
  local_c0 = local_88;
  if (local_e0 != 0) {
    puVar11 = local_90;
    if ((*local_90 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_90 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_e0);
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
  FUN_0331e864(&local_e0,uVar6 & 0x7fffffff | (uint)(0x80000000 < uVar6) << 0x1f);
  if ((local_d0 & 1) != 0) {
    plVar7 = (long *)(local_d0 & 0xfffffffffffffffe);
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
  if (iVar4 < 2) {
    return;
  }
  goto LAB_03277b38;
code_r0x03277d18:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x03277d20;
  goto LAB_03277d10;
code_r0x03277d20:
  local_d0 = 0;
  goto LAB_03277d4c;
}


