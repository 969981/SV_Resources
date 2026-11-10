/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032e4a40; name: FUN_032e4a40
 */


/* WARNING: Removing unreachable block (ram,0x032e4cf4) */
/* WARNING: Removing unreachable block (ram,0x032e4b4c) */
/* WARNING: Removing unreachable block (ram,0x032e4e9c) */

void FUN_032e4a40(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [16];
  ulong local_a8;
  long local_90;
  ulong *local_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  undefined1 auStack_68 [16];
  ulong local_58;
  long local_50;
  int local_44;
  ulong *local_40;
  undefined4 local_38;
  undefined4 local_18 [2];
  
  FUN_03325b88(auStack_68,param_1,&DAT_03c6c2cb);
  FUN_033234d0(auStack_b8,auStack_68);
  if ((local_58 & 1) != 0) {
    plVar8 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  FUN_03242384(&local_c8);
  FUN_03325b88(&local_90,auStack_b8,&DAT_03c68983);
  local_18[0] = local_70;
  FUN_03323c3c(auStack_68,local_90,local_88,local_78,local_18,0);
  if ((local_80 & 1) != 0) {
    plVar8 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  uVar11 = local_c8;
  if (local_40 != (ulong *)0x0) {
    puVar9 = local_40;
LAB_032e4b34:
    uVar10 = *puVar9;
    if (((uint)uVar10 >> 2 & 1) == 0) goto code_r0x032e4b3c;
    uVar10 = puVar9[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
    if ((uVar10 & 1) != 0) {
      piVar2 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032e4ba4;
    }
    goto LAB_032e4b70;
  }
  uVar10 = 0;
LAB_032e4b70:
  bVar4 = true;
LAB_032e4ba4:
  local_90 = local_50;
  local_88 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = local_58;
  local_70 = local_38;
  local_80 = uVar10;
  if (local_50 != 0) {
    puVar9 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_90);
    }
  }
  if (!bVar4) {
    plVar8 = (long *)(uVar10 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
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
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  FUN_0331eaac(&local_90,uVar11 & 0xffffffff);
  if ((local_80 & 1) != 0) {
    plVar8 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  local_90 = local_50 + local_44;
  uVar7 = local_c8._4_4_;
  if (local_40 != (ulong *)0x0) {
    puVar9 = local_40;
LAB_032e4cdc:
    uVar11 = *puVar9;
    if (((uint)uVar11 >> 2 & 1) == 0) goto code_r0x032e4ce4;
    uVar11 = puVar9[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
    if ((uVar11 & 1) != 0) {
      piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032e4d4c;
    }
    goto LAB_032e4d18;
  }
  uVar11 = 0;
LAB_032e4d18:
  bVar4 = true;
LAB_032e4d4c:
  local_88 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = local_58;
  local_70 = local_38;
  local_80 = uVar11;
  if (local_90 != 0) {
    puVar9 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_90);
    }
  }
  if (!bVar4) {
    plVar8 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
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
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  FUN_0331eaac(&local_90,uVar7);
  if ((local_80 & 1) != 0) {
    plVar8 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  uVar11 = local_c0;
  local_90 = local_50 + (long)local_44 * 2;
  if (local_40 != (ulong *)0x0) {
    puVar9 = local_40;
LAB_032e4e84:
    uVar10 = *puVar9;
    if (((uint)uVar10 >> 2 & 1) == 0) goto code_r0x032e4e8c;
    uVar10 = puVar9[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
    if ((uVar10 & 1) != 0) {
      piVar2 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032e4ef4;
    }
    goto LAB_032e4ec0;
  }
  uVar10 = 0;
LAB_032e4ec0:
  bVar4 = true;
LAB_032e4ef4:
  local_88 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = local_58;
  local_70 = local_38;
  local_80 = uVar10;
  if (local_90 != 0) {
    puVar9 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_90);
    }
  }
  if (!bVar4) {
    plVar8 = (long *)(uVar10 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
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
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  FUN_0331eaac(&local_90,uVar11 & 0xffffffff);
  if ((local_80 & 1) != 0) {
    plVar8 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  uVar7 = local_c0._4_4_;
  local_90 = local_50 + (long)local_44 * 3;
  if (local_40 != (ulong *)0x0) {
    puVar9 = local_40;
    do {
      uVar11 = *puVar9;
      if (((uint)uVar11 >> 2 & 1) != 0) {
        uVar11 = puVar9[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
        if ((uVar11 & 1) != 0) {
          piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
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
          goto LAB_032e5064;
        }
        goto LAB_032e5060;
      }
      puVar9 = (ulong *)puVar9[1];
    } while (puVar9 != (ulong *)0x0);
  }
  uVar11 = 0;
LAB_032e5060:
  bVar4 = true;
LAB_032e5064:
  local_88 = local_40;
  if (!bVar4) {
    piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = local_58;
  local_70 = local_38;
  local_80 = uVar11;
  if (local_90 != 0) {
    puVar9 = local_40;
    if ((*local_40 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
      } while ((*puVar9 & 1) == 0);
    }
    if ((local_40 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_90);
    }
  }
  if (!bVar4) {
    plVar8 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
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
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  FUN_0331eaac(&local_90,uVar7);
  if ((local_80 & 1) != 0) {
    plVar8 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_a8 & 1) != 0) {
    plVar8 = (long *)(local_a8 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  return;
code_r0x032e4b3c:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032e4b44;
  goto LAB_032e4b34;
code_r0x032e4b44:
  uVar10 = 0;
  goto LAB_032e4b70;
code_r0x032e4ce4:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032e4cec;
  goto LAB_032e4cdc;
code_r0x032e4cec:
  uVar11 = 0;
  goto LAB_032e4d18;
code_r0x032e4e8c:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x032e4e94;
  goto LAB_032e4e84;
code_r0x032e4e94:
  uVar10 = 0;
  goto LAB_032e4ec0;
}


