/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03300be0; name: FUN_03300be0
 */


/* WARNING: Removing unreachable block (ram,0x03300ca0) */

int FUN_03300be0(long param_1,int param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  undefined1 auStack_d8 [16];
  ulong local_c8;
  long local_b0;
  ulong *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 auStack_88 [16];
  ulong local_78;
  
  FUN_03323960(auStack_88);
  iVar3 = *(int *)(param_1 + 0x20);
  if ((local_78 & 1) != 0) {
    plVar9 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if (0 < iVar3) {
    iVar12 = 0;
LAB_03300c6c:
    local_b0 = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x24) * (long)iVar12;
    local_a8 = *(ulong **)(param_1 + 0x28);
    if (local_a8 != (ulong *)0x0) {
      puVar10 = local_a8;
LAB_03300c88:
      uVar11 = *puVar10;
      if (((uint)uVar11 >> 2 & 1) == 0) goto code_r0x03300c90;
      local_a0 = puVar10[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
      if ((local_a0 & 1) != 0) {
        piVar2 = (int *)((local_a0 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_98 = *(undefined8 *)(param_1 + 0x10);
        local_90 = *(undefined4 *)(param_1 + 0x30);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar7 = false;
        goto LAB_03300d28;
      }
      goto LAB_03300cc4;
    }
    local_a0 = 0;
    goto LAB_03300cc4;
  }
LAB_03300f18:
  FUN_03324ed0(param_1,iVar3 + 1);
  local_b0 = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x24) * (long)iVar3;
  local_a8 = *(ulong **)(param_1 + 0x28);
  if (local_a8 != (ulong *)0x0) {
    puVar10 = local_a8;
    do {
      uVar11 = *puVar10;
      if (((uint)uVar11 >> 2 & 1) != 0) {
        uVar11 = puVar10[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
        if ((uVar11 & 1) != 0) {
          piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar7 = false;
          goto LAB_03300f74;
        }
        goto LAB_03300f70;
      }
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
  }
  uVar11 = 0;
LAB_03300f70:
  bVar7 = true;
LAB_03300f74:
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined4 *)(param_1 + 0x30);
  if (!bVar7) {
    piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a0 = uVar11;
  if (local_b0 != 0) {
    puVar10 = local_a8;
    if ((*local_a8 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
    }
    if ((local_a8 != (ulong *)0x0) && ((puVar10[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_b0);
    }
  }
  if (!bVar7) {
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  FUN_033234d0(auStack_88,&local_b0);
  if ((local_a0 & 1) != 0) {
    plVar9 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  FUN_03325b88(&local_b0,auStack_88,"thisUid");
  FUN_0331e864(&local_b0,param_2);
  if ((local_a0 & 1) != 0) {
    plVar9 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  FUN_03325b88(&local_b0,auStack_88,"oppositeUid");
  FUN_0331e864(&local_b0,param_3);
  if ((local_a0 & 1) != 0) {
    plVar9 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if ((local_78 & 1) != 0) {
    plVar9 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  return iVar3;
code_r0x03300c90:
  puVar10 = (ulong *)puVar10[1];
  if (puVar10 == (ulong *)0x0) goto code_r0x03300c98;
  goto LAB_03300c88;
code_r0x03300c98:
  local_a0 = 0;
LAB_03300cc4:
  local_98 = *(undefined8 *)(param_1 + 0x10);
  bVar7 = true;
  local_90 = *(undefined4 *)(param_1 + 0x30);
LAB_03300d28:
  uVar11 = local_a0;
  if (local_b0 != 0) {
    puVar10 = local_a8;
    if ((*local_a8 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
    }
    if ((local_a8 != (ulong *)0x0) && ((puVar10[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_b0);
    }
  }
  if (!bVar7) {
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  FUN_033234d0(auStack_88,&local_b0);
  if ((local_a0 & 1) != 0) {
    plVar9 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  FUN_03325b88(&local_b0,auStack_88,"thisUid");
  iVar8 = FUN_0327462c(&local_b0);
  if (iVar8 == param_2) {
    FUN_03325b88(auStack_d8,auStack_88,"oppositeUid");
    iVar8 = FUN_0327462c(auStack_d8);
    bVar7 = iVar8 == param_3;
    if ((local_c8 & 1) != 0) {
      plVar9 = (long *)(local_c8 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  else {
    bVar7 = false;
  }
  if ((local_a0 & 1) != 0) {
    plVar9 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if ((local_78 & 1) != 0) {
    plVar9 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar1 = plVar9 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if (bVar7) {
    return iVar12;
  }
  iVar12 = iVar12 + 1;
  if (iVar12 == iVar3) goto LAB_03300f18;
  goto LAB_03300c6c;
}


