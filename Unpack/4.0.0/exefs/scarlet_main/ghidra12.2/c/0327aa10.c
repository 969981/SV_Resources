/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0327aa10; name: FUN_0327aa10
 */


/* WARNING: Removing unreachable block (ram,0x0327ab3c) */
/* WARNING: Removing unreachable block (ram,0x0327ad00) */

void FUN_0327aa10(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  bool bVar9;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong local_88;
  undefined4 local_80;
  undefined1 auStack_78 [16];
  ulong local_68;
  long local_60;
  int local_54;
  ulong *local_50;
  undefined4 local_48;
  undefined4 local_28 [2];
  
  FUN_03325b88(auStack_78,param_1,"firstConstrainedAxis");
  iVar5 = FUN_0327462c(auStack_78);
  if ((local_68 & 1) != 0) {
    plVar6 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_a0,param_1,"constrainedAxes");
  local_28[0] = local_80;
  FUN_03323c3c(auStack_78,local_a0,local_98,local_88,local_28,0);
  if ((local_90 & 1) != 0) {
    plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03324ed0(auStack_78,3);
  if (local_50 != (ulong *)0x0) {
    puVar7 = local_50;
LAB_0327ab24:
    uVar8 = *puVar7;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x0327ab2c;
    local_90 = puVar7[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_90 & 1) != 0) {
      piVar2 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar9 = false;
      goto LAB_0327abc4;
    }
    goto LAB_0327ab60;
  }
  local_90 = 0;
LAB_0327ab60:
  bVar9 = true;
LAB_0327abc4:
  uVar8 = local_90;
  local_88 = local_68;
  local_80 = local_48;
  if (local_60 != 0) {
    puVar7 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar7[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_a0);
    }
  }
  if (!bVar9) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_0331e864(&local_a0,iVar5 % 3);
  if ((local_90 & 1) != 0) {
    plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  local_a0 = local_60 + local_54;
  if (local_50 != (ulong *)0x0) {
    puVar7 = local_50;
LAB_0327ace8:
    uVar8 = *puVar7;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x0327acf0;
    local_90 = puVar7[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_90 & 1) != 0) {
      piVar2 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar9 = false;
      goto LAB_0327ad88;
    }
    goto LAB_0327ad24;
  }
  local_90 = 0;
LAB_0327ad24:
  bVar9 = true;
LAB_0327ad88:
  uVar8 = local_90;
  local_88 = local_68;
  local_80 = local_48;
  if (local_a0 != 0) {
    puVar7 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar7[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_a0);
    }
  }
  if (!bVar9) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_0331e864(&local_a0,(iVar5 + 1) % 3);
  if ((local_90 & 1) != 0) {
    plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  local_a0 = local_60 + (long)local_54 * 2;
  if (local_50 != (ulong *)0x0) {
    puVar7 = local_50;
    do {
      uVar8 = *puVar7;
      if (((uint)uVar8 >> 2 & 1) != 0) {
        local_90 = puVar7[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
        if ((local_90 & 1) != 0) {
          piVar2 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar9 = false;
          goto LAB_0327aef0;
        }
        goto LAB_0327aedc;
      }
      puVar7 = (ulong *)puVar7[1];
    } while (puVar7 != (ulong *)0x0);
  }
  local_90 = 0;
LAB_0327aedc:
  bVar9 = true;
LAB_0327aef0:
  uVar8 = local_90;
  if (local_a0 != 0) {
    puVar7 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
      } while ((*puVar7 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar7[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_a0);
    }
  }
  if (!bVar9) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_0331e864(&local_a0,(iVar5 + 2) % 3);
  if ((local_90 & 1) != 0) {
    plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
code_r0x0327ab2c:
  puVar7 = (ulong *)puVar7[1];
  if (puVar7 == (ulong *)0x0) goto code_r0x0327ab34;
  goto LAB_0327ab24;
code_r0x0327ab34:
  local_90 = 0;
  goto LAB_0327ab60;
code_r0x0327acf0:
  puVar7 = (ulong *)puVar7[1];
  if (puVar7 == (ulong *)0x0) goto code_r0x0327acf8;
  goto LAB_0327ace8;
code_r0x0327acf8:
  local_90 = 0;
  goto LAB_0327ad24;
}


