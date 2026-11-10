/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033022d0; name: FUN_033022d0
 */


/* WARNING: Removing unreachable block (ram,0x033025e8) */
/* WARNING: Removing unreachable block (ram,0x033027b0) */

void FUN_033022d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined *puVar9;
  byte *pbVar10;
  ulong *puVar11;
  bool bVar12;
  int iVar13;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  long local_120;
  undefined4 local_118;
  int local_114;
  ulong *local_110;
  undefined4 local_108;
  uint *local_100;
  byte *local_f8;
  long local_f0;
  long local_e8;
  int local_e0;
  int local_dc;
  ulong *local_d8;
  undefined4 local_d0;
  long local_c8 [2];
  ulong local_b8;
  undefined4 local_a8;
  long local_a0 [2];
  ulong local_90;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_03325b88(&local_138);
  local_78 = local_118;
  FUN_03323c3c(&local_100,local_138,uStack_130,local_120,&local_78,0);
  if ((local_128 & 1) != 0) {
    plVar6 = (long *)(local_128 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_78,param_1,param_3);
  local_a0[0] = CONCAT44(local_a0[0]._4_4_,local_58);
  FUN_03323c3c(&local_138,CONCAT44(uStack_74,local_78),uStack_70,local_60,local_a0,0);
  if ((local_68 & 1) != 0) {
    plVar6 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  iVar13 = local_e0;
  pbVar10 = local_f8;
  if ((*local_f8 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  pbVar7 = local_f8;
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    pbVar7 = (byte *)0x0;
  }
  do {
    if ((*pbVar7 & 1) != 0) {
      if ((pbVar7 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar7 + 0x10) >> 8) != 0))
      goto LAB_03302444;
      break;
    }
    pbVar7 = *(byte **)(pbVar7 + 8);
  } while (pbVar7 != (byte *)0x0);
  if ((int)*local_100 < 0) {
LAB_03302444:
    puVar9 = PTR_DAT_047e61d0;
  }
  else {
    puVar9 = (undefined *)(*(long *)(local_f0 + 0x228) + (ulong)*local_100 * 0x20);
  }
  uVar8 = *(ulong *)(puVar9 + 0x10);
  if ((uVar8 & 1) != 0) {
    piVar2 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03324ed0(&local_138,iVar13);
  pbVar10 = local_f8;
  if ((*local_f8 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    local_f8 = (byte *)0x0;
  }
  do {
    if ((*local_f8 & 1) != 0) {
      if ((local_f8 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(local_f8 + 0x10) >> 8) != 0))
      goto LAB_0330253c;
      break;
    }
    local_f8 = *(byte **)(local_f8 + 8);
  } while (local_f8 != (byte *)0x0);
  if ((int)*local_100 < 0) {
LAB_0330253c:
    puVar9 = PTR_DAT_047e61d0;
  }
  else {
    puVar9 = (undefined *)(*(long *)(local_f0 + 0x228) + (ulong)*local_100 * 0x20);
  }
  uVar8 = *(ulong *)(puVar9 + 0x10);
  if ((uVar8 & 1) != 0) {
    piVar2 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (local_e0 < 1) {
    return;
  }
  iVar13 = 0;
LAB_033025b4:
  local_a0[0] = local_e8 + (long)local_dc * (long)iVar13;
  if (local_d8 != (ulong *)0x0) {
    puVar11 = local_d8;
LAB_033025d0:
    uVar8 = *puVar11;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x033025d8;
    local_90 = puVar11[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_90 & 1) != 0) {
      piVar2 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar12 = false;
      goto LAB_03302670;
    }
    goto LAB_0330260c;
  }
  local_90 = 0;
  goto LAB_0330260c;
code_r0x033025d8:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x033025e0;
  goto LAB_033025d0;
code_r0x033025e0:
  local_90 = 0;
LAB_0330260c:
  bVar12 = true;
LAB_03302670:
  uVar8 = local_90;
  local_80 = local_d0;
  if (local_a0[0] != 0) {
    puVar11 = local_d8;
    if ((*local_d8 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_d8 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_a0);
    }
  }
  if (!bVar12) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
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
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_033234d0(&local_78,local_a0);
  if ((local_90 & 1) != 0) {
    plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(local_a0,&local_78,&DAT_03c68983);
  uVar5 = FUN_0327462c(local_a0);
  local_c8[0] = local_120 + (long)local_114 * (long)iVar13;
  if (local_110 != (ulong *)0x0) {
    puVar11 = local_110;
LAB_03302798:
    uVar8 = *puVar11;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x033027a0;
    local_b8 = puVar11[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_b8 & 1) != 0) {
      piVar2 = (int *)((local_b8 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar12 = false;
      goto LAB_03302838;
    }
    goto LAB_033027d4;
  }
  local_b8 = 0;
LAB_033027d4:
  bVar12 = true;
LAB_03302838:
  uVar8 = local_b8;
  local_a8 = local_108;
  if (local_c8[0] != 0) {
    puVar11 = local_110;
    if ((*local_110 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_110 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_c8);
    }
  }
  if (!bVar12) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
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
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_0331e864(local_c8,uVar5);
  if ((local_b8 & 1) != 0) {
    plVar6 = (long *)(local_b8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((local_90 & 1) != 0) {
    plVar6 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((local_68 & 1) != 0) {
    plVar6 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  iVar13 = iVar13 + 1;
  if (iVar13 == local_e0) {
    return;
  }
  goto LAB_033025b4;
code_r0x033027a0:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x033027a8;
  goto LAB_03302798;
code_r0x033027a8:
  local_b8 = 0;
  goto LAB_033027d4;
}


