/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307a738; name: FUN_0307a738
 */


void FUN_0307a738(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  uint *puVar17;
  int local_70 [2];
  int local_68 [2];
  undefined8 local_48;
  
  puVar5 = PTR_DAT_047d1a08;
  uVar6 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar6) {
    uVar15 = 0;
    plVar12 = *(long **)(param_1 + 0x38);
    do {
      if ((*(int *)((long)plVar12 + 0x1c) == *(int *)(param_3 + 0x18)) && (*plVar12 != 0))
      goto LAB_0307a7a0;
      uVar15 = uVar15 + 1;
      plVar12 = plVar12 + 0x20;
    } while (uVar6 != uVar15);
  }
  uVar15 = 0xffffffff;
LAB_0307a7a0:
  iVar14 = (int)uVar15;
  if ((int)uVar6 < 1) {
    return;
  }
  uVar15 = 0;
  plVar12 = *(long **)(param_1 + 0x38);
  while ((*(int *)((long)plVar12 + 0x1c) != *(int *)(param_3 + 0x1c) || (*plVar12 == 0))) {
    uVar15 = uVar15 + 1;
    plVar12 = plVar12 + 0x20;
    if (uVar6 == uVar15) {
      return;
    }
  }
  iVar16 = (int)uVar15;
  if (iVar14 == -1) {
    return;
  }
  if (iVar16 == -1) {
    return;
  }
  if ((iVar14 != *param_2) && (*param_2 != iVar16)) {
    return;
  }
  local_48 = 0x38;
  local_70[0] = iVar16;
  local_68[0] = iVar14;
  plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar12,"hkaiStreamingSetInstance");
  }
  plVar12[1] = 0xffffffff;
  plVar13 = plVar12 + 2;
  *plVar13 = 1;
  *plVar12 = (long)(PTR_DAT_047e4f88 + 0x10);
  plVar8 = plVar12 + 4;
  *plVar8 = 0;
  plVar12[5] = 0;
  plVar12[6] = -0x8000000000000000;
  *(int *)(plVar12 + 3) = iVar14;
  *(int *)((long)plVar12 + 0x1c) = iVar16;
  if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
    *plVar8 = param_3;
  }
  else {
    plVar7 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = (long *)*plVar8;
    *plVar8 = param_3;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  uVar6 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar6) {
    plVar7 = *(long **)(param_1 + 0x48);
    uVar15 = 0;
    plVar8 = plVar7;
    do {
      if (*plVar8 == 0) {
        uVar10 = (uint)uVar15;
        if (-1 < (int)uVar10) goto LAB_0307a990;
        break;
      }
      uVar15 = uVar15 + 1;
      plVar8 = plVar8 + 3;
    } while (uVar6 != uVar15);
  }
  uVar10 = uVar6;
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= (int)uVar6) {
    FUN_0307fa60((long *)(param_1 + 0x48),(long)(int)uVar6 + 1);
    uVar10 = *(uint *)(param_1 + 0x50);
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar10 * 0x18);
  *(int *)(param_1 + 0x50) = (int)((long)(int)uVar6 + 1);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar7 = *(long **)(param_1 + 0x48);
  uVar10 = uVar6;
LAB_0307a990:
  plVar7 = plVar7 + (long)(int)uVar10 * 3;
  *(undefined1 *)(plVar7 + 2) = 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 != plVar12) {
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = (long *)*plVar7;
    }
    *plVar7 = (long)plVar12;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar7 = plVar8 + 2;
      do {
        lVar11 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  iVar14 = local_68[0];
  lVar11 = *(long *)(param_1 + 0x38) + (long)local_68[0] * 0x100;
  plVar8 = (long *)(lVar11 + 0xb0);
  uVar6 = FUN_0307fc58(plVar8,local_70);
  puVar17 = (uint *)(lVar11 + 0xb8);
  if (*puVar17 == uVar6) {
    uVar2 = uVar6 + 1;
    if ((int)(*(uint *)(lVar11 + 0xbc) & 0x7fffffff) <= (int)uVar6) {
      FUN_0307fd54(plVar8,(long)(int)uVar2);
      uVar6 = *puVar17;
    }
    piVar1 = (int *)(*plVar8 + (long)(int)uVar6 * 8);
    *piVar1 = local_70[0];
    piVar1[1] = uVar10;
    *puVar17 = uVar2;
  }
  else {
    *(uint *)(*plVar8 + ((long)((ulong)uVar6 << 0x20) >> 0x1d) + 4) = uVar10;
  }
  lVar11 = *(long *)(param_1 + 0x38) + (long)local_70[0] * 0x100;
  plVar8 = (long *)(lVar11 + 0xb0);
  uVar6 = FUN_0307fc58(plVar8,local_68);
  puVar17 = (uint *)(lVar11 + 0xb8);
  if (*puVar17 == uVar6) {
    uVar2 = uVar6 + 1;
    if ((int)(*(uint *)(lVar11 + 0xbc) & 0x7fffffff) <= (int)uVar6) {
      FUN_0307fd54(plVar8,(long)(int)uVar2);
      uVar6 = *puVar17;
    }
    piVar1 = (int *)(*plVar8 + (long)(int)uVar6 * 8);
    *piVar1 = iVar14;
    piVar1[1] = uVar10;
    *puVar17 = uVar2;
  }
  else {
    *(uint *)(*plVar8 + ((long)((ulong)uVar6 << 0x20) >> 0x1d) + 4) = uVar10;
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (plVar12[1] == 0) {
    return;
  }
  do {
    lVar11 = *plVar13;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 + -1 == 0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    return;
  }
  return;
}


