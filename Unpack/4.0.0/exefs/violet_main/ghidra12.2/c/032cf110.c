/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032cf110; name: FUN_032cf110
 */


/* WARNING: Removing unreachable block (ram,0x032cf440) */

void FUN_032cf110(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined *puVar8;
  byte *pbVar9;
  ulong *puVar10;
  long *plVar11;
  int iVar12;
  bool bVar13;
  long local_a0;
  ulong *local_98;
  ulong local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint *local_78;
  byte *local_70;
  long local_68;
  long local_60;
  int local_58;
  int local_54;
  ulong *local_50;
  undefined4 local_48;
  undefined4 local_38 [2];
  
  FUN_03325b88(&local_a0,param_1,"floatSlots");
  local_38[0] = local_80;
  FUN_03323c3c(&local_78,local_a0,local_98,local_88,local_38,0);
  iVar12 = local_58;
  pbVar9 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar9 = *(byte **)(pbVar9 + 8);
    } while ((*pbVar9 & 1) == 0);
  }
  pbVar6 = local_70;
  if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) != 8) {
    pbVar6 = (byte *)0x0;
  }
  do {
    if ((*pbVar6 & 1) != 0) {
      if ((pbVar6 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar6 + 0x10) >> 8) != 0))
      goto LAB_032cf1e4;
      break;
    }
    pbVar6 = *(byte **)(pbVar6 + 8);
  } while (pbVar6 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032cf1e4:
    puVar8 = PTR_DAT_047e61d0;
  }
  else {
    puVar8 = (undefined *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20);
  }
  uVar7 = *(ulong *)(puVar8 + 0x10);
  if ((uVar7 & 1) != 0) {
    piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if ((local_90 & 1) != 0) {
    plVar4 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_03325b88(&local_a0,param_1,"referenceFloats");
  local_38[0] = local_80;
  FUN_03323c3c(&local_78,local_a0,local_98,local_88,local_38,0);
  if ((local_90 & 1) != 0) {
    plVar4 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_03324ed0(&local_78,iVar12);
  iVar12 = local_58;
  pbVar9 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar9 = *(byte **)(pbVar9 + 8);
    } while ((*pbVar9 & 1) == 0);
  }
  pbVar6 = local_70;
  if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) != 8) {
    pbVar6 = (byte *)0x0;
  }
  do {
    if ((*pbVar6 & 1) != 0) {
      if ((pbVar6 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar6 + 0x10) >> 8) != 0))
      goto LAB_032cf380;
      break;
    }
    pbVar6 = *(byte **)(pbVar6 + 8);
  } while (pbVar6 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032cf380:
    puVar8 = PTR_DAT_047e61d0;
  }
  else {
    puVar8 = (undefined *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20);
  }
  uVar7 = *(ulong *)(puVar8 + 0x10);
  if ((uVar7 & 1) != 0) {
    piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  puVar8 = PTR_DAT_047e61d0;
  if (iVar12 < 1) {
    return;
  }
  iVar12 = 0;
LAB_032cf40c:
  local_a0 = local_60 + (long)local_54 * (long)iVar12;
  if (local_50 != (ulong *)0x0) {
    puVar10 = local_50;
LAB_032cf428:
    uVar7 = *puVar10;
    if (((uint)uVar7 >> 2 & 1) == 0) goto code_r0x032cf430;
    local_90 = puVar10[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
    if ((local_90 & 1) != 0) {
      piVar1 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar13 = false;
      goto LAB_032cf4c8;
    }
    goto LAB_032cf464;
  }
  local_90 = 0;
  goto LAB_032cf464;
code_r0x032cf430:
  puVar10 = (ulong *)puVar10[1];
  if (puVar10 == (ulong *)0x0) goto code_r0x032cf438;
  goto LAB_032cf428;
code_r0x032cf438:
  local_90 = 0;
LAB_032cf464:
  bVar13 = true;
LAB_032cf4c8:
  uVar7 = local_90;
  local_98 = local_50;
  local_80 = local_48;
  if (local_a0 != 0) {
    puVar10 = local_50;
    if ((*local_50 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
    }
    if ((local_50 != (ulong *)0x0) && ((puVar10[2] & 0x1f) == 7)) {
      FUN_0331dcb8(&local_a0);
    }
  }
  if (!bVar13) {
    plVar4 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (local_98 != (ulong *)0x0) {
    puVar10 = local_98;
    if ((*local_98 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
    }
    if ((puVar10[2] & 0x1f) == 5) {
      lVar5 = local_a0;
      uVar7 = local_90;
      if ((local_90 & 1) != 0) {
        piVar1 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_032cf5e0;
    }
    local_98 = (ulong *)0x0;
  }
  uVar7 = 0;
  lVar5 = 0;
LAB_032cf5e0:
  plVar11 = (long *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*plVar11 + 0x30))(0,plVar11,lVar5,local_98);
  if ((uVar7 & 1) != 0) {
    plVar4 = plVar11 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar13) {
        *(int *)plVar4 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  if ((local_90 & 1) != 0) {
    plVar4 = (long *)(local_90 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  iVar3 = local_58;
  iVar12 = iVar12 + 1;
  pbVar9 = local_70;
  if ((*local_70 & 1) == 0) {
    do {
      pbVar9 = *(byte **)(pbVar9 + 8);
    } while ((*pbVar9 & 1) == 0);
  }
  pbVar6 = local_70;
  if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) != 8) {
    pbVar6 = (byte *)0x0;
  }
  do {
    if ((*pbVar6 & 1) != 0) {
      if ((pbVar6 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar6 + 0x10) >> 8) != 0))
      goto LAB_032cf6f4;
      break;
    }
    pbVar6 = *(byte **)(pbVar6 + 8);
  } while (pbVar6 != (byte *)0x0);
  if ((int)*local_78 < 0) {
LAB_032cf6f4:
    uVar7 = *(ulong *)(puVar8 + 0x10);
  }
  else {
    uVar7 = *(ulong *)(*(long *)(local_68 + 0x228) + (ulong)*local_78 * 0x20 + 0x10);
  }
  if ((uVar7 & 1) != 0) {
    piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)(uVar7 & 0xfffffffffffffffe);
    plVar11 = plVar4 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (iVar3 <= iVar12) {
    return;
  }
  goto LAB_032cf40c;
}


