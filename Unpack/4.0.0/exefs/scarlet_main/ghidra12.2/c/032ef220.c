/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032ef220; name: FUN_032ef220
 */


/* WARNING: Removing unreachable block (ram,0x032ef54c) */
/* WARNING: Removing unreachable block (ram,0x032ef6c0) */

void FUN_032ef220(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined *puVar9;
  byte *pbVar10;
  ulong *puVar11;
  int iVar12;
  bool bVar13;
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
  
  FUN_03325b88(&local_b0,param_1,"old_annotationTracks");
  local_d8 = local_90;
  FUN_03323c3c(&local_78,local_b0,uStack_a8,local_98,&local_d8,0);
  if ((local_a0 & 1) != 0) {
    plVar6 = (long *)(local_a0 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03325b88(&local_d8,param_1,"annotationTracks");
  local_100[0] = CONCAT44(local_100[0]._4_4_,local_b8);
  FUN_03323c3c(&local_b0,CONCAT44(uStack_d4,local_d8),uStack_d0,local_c0,local_100,0);
  if ((local_c8 & 1) != 0) {
    plVar6 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  iVar12 = local_58;
  pbVar10 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  pbVar7 = local_70;
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    pbVar7 = (byte *)0x0;
  }
  do {
    if ((*pbVar7 & 1) != 0) {
      if ((pbVar7 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar7 + 0x10) >> 8) != 0))
      goto LAB_032ef398;
      break;
    }
    pbVar7 = *(byte **)(pbVar7 + 8);
  } while (pbVar7 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032ef398:
    puVar9 = PTR_DAT_047e61d0;
  }
  else {
    puVar9 = (undefined *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20);
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
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  FUN_03324ed0(&local_b0,iVar12);
  iVar12 = local_58;
  pbVar10 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  pbVar7 = local_70;
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    pbVar7 = (byte *)0x0;
  }
  do {
    if ((*pbVar7 & 1) != 0) {
      if ((pbVar7 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar7 + 0x10) >> 8) != 0))
      goto LAB_032ef490;
      break;
    }
    pbVar7 = *(byte **)(pbVar7 + 8);
  } while (pbVar7 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032ef490:
    puVar9 = PTR_DAT_047e61d0;
  }
  else {
    puVar9 = (undefined *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20);
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
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  puVar9 = PTR_DAT_047e61d0;
  if (iVar12 < 1) {
    return;
  }
  iVar12 = 0;
LAB_032ef518:
  local_100[0] = local_60 + (long)local_54 * (long)iVar12;
  if (local_50 != (ulong *)0x0) {
    puVar11 = local_50;
LAB_032ef534:
    uVar8 = *puVar11;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x032ef53c;
    local_f0 = puVar11[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_f0 & 1) != 0) {
      piVar2 = (int *)((local_f0 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ef5d4;
    }
    goto LAB_032ef570;
  }
  local_f0 = 0;
  goto LAB_032ef570;
code_r0x032ef53c:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032ef544;
  goto LAB_032ef534;
code_r0x032ef544:
  local_f0 = 0;
LAB_032ef570:
  bVar13 = true;
LAB_032ef5d4:
  uVar8 = local_f0;
  local_e0 = local_48;
  if (local_100[0] != 0) {
    puVar11 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_100);
    }
  }
  if (!bVar13) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
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
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_033234d0(&local_d8,local_100);
  local_128[0] = local_98 + (long)local_8c * (long)iVar12;
  if (local_88 != (ulong *)0x0) {
    puVar11 = local_88;
LAB_032ef6a8:
    uVar8 = *puVar11;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x032ef6b0;
    local_118 = puVar11[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((local_118 & 1) != 0) {
      piVar2 = (int *)((local_118 & 0xfffffffffffffffe) + 8);
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
      goto LAB_032ef748;
    }
    goto LAB_032ef6e4;
  }
  local_118 = 0;
LAB_032ef6e4:
  bVar13 = true;
LAB_032ef748:
  uVar8 = local_118;
  local_108 = local_80;
  if (local_128[0] != 0) {
    puVar11 = local_88;
    if ((*local_88 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if ((local_88 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 7)) {
      FUN_0331dcb8(local_128);
    }
  }
  if (!bVar13) {
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
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
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  FUN_03322aa8(local_128,&local_d8);
  if ((local_118 & 1) != 0) {
    plVar6 = (long *)(local_118 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((local_c8 & 1) != 0) {
    plVar6 = (long *)(local_c8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((local_f0 & 1) != 0) {
    plVar6 = (long *)(local_f0 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  iVar5 = local_58;
  iVar12 = iVar12 + 1;
  pbVar10 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar10 = *(byte **)(pbVar10 + 8);
    } while ((*pbVar10 & 1) == 0);
  }
  pbVar7 = local_70;
  if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) {
    pbVar7 = (byte *)0x0;
  }
  do {
    if ((*pbVar7 & 1) != 0) {
      if ((pbVar7 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar7 + 0x10) >> 8) != 0))
      goto LAB_032ef938;
      break;
    }
    pbVar7 = *(byte **)(pbVar7 + 8);
  } while (pbVar7 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032ef938:
    uVar8 = *(ulong *)(puVar9 + 0x10);
  }
  else {
    uVar8 = *(ulong *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20 + 0x10);
  }
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
    plVar6 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (iVar5 <= iVar12) {
    return;
  }
  goto LAB_032ef518;
code_r0x032ef6b0:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032ef6b8;
  goto LAB_032ef6a8;
code_r0x032ef6b8:
  local_118 = 0;
  goto LAB_032ef6e4;
}


