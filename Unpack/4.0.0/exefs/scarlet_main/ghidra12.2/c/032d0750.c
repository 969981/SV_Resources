/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032d0750; name: FUN_032d0750
 */


/* WARNING: Removing unreachable block (ram,0x032d0878) */
/* WARNING: Removing unreachable block (ram,0x032d0ae0) */

void FUN_032d0750(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  double dVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  long local_d8;
  ulong *local_d0;
  ulong local_c8;
  ulong local_c0;
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
  double local_38;
  
  FUN_03325b88(&local_b0,param_1,&DAT_03c531b1);
  local_d8 = CONCAT44(local_d8._4_4_,local_90);
  FUN_03323c3c(auStack_78,local_b0,uStack_a8,local_98,&local_d8,0);
  if ((local_a0 & 1) != 0) {
    plVar4 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar8 = plVar4 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_03325b88(&local_d8,param_1,"halfs");
  local_38 = (double)CONCAT44(local_38._4_4_,local_b8);
  FUN_03323c3c(&local_b0,local_d8,local_d0,local_c0,&local_38,0);
  if ((local_c8 & 1) != 0) {
    plVar4 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar8 = plVar4 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  iVar10 = 0;
LAB_032d0844:
  local_d8 = local_60 + (long)local_54 * (long)iVar10;
  if (local_50 != (ulong *)0x0) {
    puVar6 = local_50;
LAB_032d0860:
    uVar7 = *puVar6;
    if (((uint)uVar7 >> 2 & 1) == 0) goto code_r0x032d0868;
    local_c8 = puVar6[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
    if ((local_c8 & 1) != 0) {
      piVar1 = (int *)((local_c8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar9 = false;
      goto LAB_032d0900;
    }
    goto LAB_032d089c;
  }
  local_c8 = 0;
  goto LAB_032d089c;
code_r0x032d0868:
  puVar6 = (ulong *)puVar6[1];
  if (puVar6 == (ulong *)0x0) goto code_r0x032d0870;
  goto LAB_032d0860;
code_r0x032d0870:
  local_c8 = 0;
LAB_032d089c:
  bVar9 = true;
LAB_032d0900:
  uVar7 = local_c8;
  local_d0 = local_50;
  local_b8 = local_48;
  if (local_d8 != 0) {
    puVar6 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar6 = (ulong *)puVar6[1];
      } while ((*puVar6 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar6[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_d8);
    }
  }
  if (!bVar9) {
    plVar4 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar8 = plVar4 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (local_d0 == (ulong *)0x0) {
LAB_032d0a10:
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    puVar6 = local_d0;
    if ((*local_d0 & 1) == 0) {
      do {
        puVar6 = (ulong *)puVar6[1];
      } while ((*puVar6 & 1) == 0);
    }
    if ((puVar6[2] & 0x1f) != 5) {
      local_d0 = (ulong *)0x0;
      goto LAB_032d0a10;
    }
    lVar5 = local_d8;
    uVar7 = local_c8;
    if ((local_c8 & 1) != 0) {
      piVar1 = (int *)((local_c8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  local_38 = 0.0;
  plVar8 = (long *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x38))(plVar8,lVar5,local_d0,&local_38);
  dVar3 = local_38;
  if ((uVar7 & 1) != 0) {
    plVar4 = plVar8 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar9) {
        *(int *)plVar4 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  if ((local_c8 & 1) != 0) {
    plVar4 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar8 = plVar4 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  local_d8 = local_98 + (long)local_8c * (long)iVar10;
  if (local_88 != (ulong *)0x0) {
    puVar6 = local_88;
LAB_032d0ac8:
    uVar7 = *puVar6;
    if (((uint)uVar7 >> 2 & 1) == 0) goto code_r0x032d0ad0;
    local_c8 = puVar6[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
    if ((local_c8 & 1) != 0) {
      piVar1 = (int *)((local_c8 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar9 = false;
      goto LAB_032d0b68;
    }
    goto LAB_032d0b04;
  }
  local_c8 = 0;
LAB_032d0b04:
  bVar9 = true;
LAB_032d0b68:
  uVar7 = local_c8;
  local_c0 = local_a0;
  local_b8 = local_80;
  if (local_d8 != 0) {
    puVar6 = local_88;
    if ((*local_88 & 1) == 0) {
      do {
        puVar6 = (ulong *)puVar6[1];
      } while ((*puVar6 & 1) == 0);
    }
    if ((local_88 != (ulong *)0x0) && ((puVar6[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_d8);
    }
  }
  if (!bVar9) {
    plVar4 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar8 = plVar4 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  FUN_0331ef0c(&local_d8,(uint)(float)dVar3 >> 0x10);
  if ((local_c8 & 1) != 0) {
    plVar4 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar8 = plVar4 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *(int *)plVar8 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  iVar10 = iVar10 + 1;
  if (iVar10 == 8) {
    return;
  }
  goto LAB_032d0844;
code_r0x032d0ad0:
  puVar6 = (ulong *)puVar6[1];
  if (puVar6 == (ulong *)0x0) goto code_r0x032d0ad8;
  goto LAB_032d0ac8;
code_r0x032d0ad8:
  local_c8 = 0;
  goto LAB_032d0b04;
}


