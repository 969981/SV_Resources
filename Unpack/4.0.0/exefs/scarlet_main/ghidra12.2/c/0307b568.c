/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307b568; name: FUN_0307b568
 */


void FUN_0307b568(long param_1,int *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  uint *puVar17;
  int local_70 [2];
  int local_68 [2];
  undefined8 local_48;
  
  puVar4 = PTR_DAT_047d1a08;
  uVar5 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar5) {
    uVar15 = 0;
    piVar12 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
    do {
      if ((*piVar12 == *(int *)(param_3 + 0x18)) && (*(long *)(piVar12 + -5) != 0))
      goto LAB_0307b5d4;
      uVar15 = uVar15 + 1;
      piVar12 = piVar12 + 0x40;
    } while (uVar5 != uVar15);
  }
  uVar15 = 0xffffffff;
LAB_0307b5d4:
  iVar14 = (int)uVar15;
  if ((int)uVar5 < 1) {
    return;
  }
  uVar15 = 0;
  piVar12 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
  while ((*piVar12 != *(int *)(param_3 + 0x1c) || (*(long *)(piVar12 + -5) == 0))) {
    uVar15 = uVar15 + 1;
    piVar12 = piVar12 + 0x40;
    if (uVar5 == uVar15) {
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
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(plVar6,"hkaiStreamingSetInstance");
  }
  plVar6[1] = 0xffffffff;
  plVar13 = plVar6 + 2;
  *plVar13 = 1;
  *plVar6 = (long)(PTR_DAT_047e4f88 + 0x10);
  plVar8 = plVar6 + 4;
  *plVar8 = 0;
  plVar6[5] = 0;
  plVar6[6] = -0x8000000000000000;
  *(int *)(plVar6 + 3) = iVar14;
  *(int *)((long)plVar6 + 0x1c) = iVar16;
  if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
    *plVar8 = param_3;
  }
  else {
    plVar7 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = (long *)*plVar8;
    *plVar8 = param_3;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar11 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar5) {
    plVar7 = *(long **)(param_1 + 0x48);
    uVar15 = 0;
    plVar8 = plVar7;
    do {
      if (*plVar8 == 0) {
        uVar10 = (uint)uVar15;
        if (-1 < (int)uVar10) goto LAB_0307b7c8;
        break;
      }
      uVar15 = uVar15 + 1;
      plVar8 = plVar8 + 3;
    } while (uVar5 != uVar15);
  }
  uVar10 = uVar5;
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= (int)uVar5) {
    FUN_0307fa60((long *)(param_1 + 0x48),(long)(int)uVar5 + 1);
    uVar10 = *(uint *)(param_1 + 0x50);
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar10 * 0x18);
  *(int *)(param_1 + 0x50) = (int)((long)(int)uVar5 + 1);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  plVar7 = *(long **)(param_1 + 0x48);
  uVar10 = uVar5;
LAB_0307b7c8:
  plVar7 = plVar7 + (long)(int)uVar10 * 3;
  *(undefined1 *)(plVar7 + 2) = 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar8 = (long *)*plVar7;
    }
    *plVar7 = (long)plVar6;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar7 = plVar8 + 2;
      do {
        lVar11 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  iVar14 = local_68[0];
  lVar11 = *(long *)(param_1 + 0x38) + (long)local_68[0] * 0x100;
  plVar8 = (long *)(lVar11 + 0xb0);
  uVar5 = FUN_0307fc58(plVar8,local_70);
  puVar17 = (uint *)(lVar11 + 0xb8);
  if (*puVar17 == uVar5) {
    uVar1 = uVar5 + 1;
    if ((int)(*(uint *)(lVar11 + 0xbc) & 0x7fffffff) <= (int)uVar5) {
      FUN_0307fd54(plVar8,(long)(int)uVar1);
      uVar5 = *puVar17;
    }
    piVar12 = (int *)(*plVar8 + (long)(int)uVar5 * 8);
    *piVar12 = local_70[0];
    piVar12[1] = uVar10;
    *puVar17 = uVar1;
  }
  else {
    *(uint *)(*plVar8 + ((long)((ulong)uVar5 << 0x20) >> 0x1d) + 4) = uVar10;
  }
  lVar11 = *(long *)(param_1 + 0x38) + (long)local_70[0] * 0x100;
  plVar8 = (long *)(lVar11 + 0xb0);
  uVar5 = FUN_0307fc58(plVar8,local_68);
  puVar17 = (uint *)(lVar11 + 0xb8);
  if (*puVar17 == uVar5) {
    uVar1 = uVar5 + 1;
    if ((int)(*(uint *)(lVar11 + 0xbc) & 0x7fffffff) <= (int)uVar5) {
      FUN_0307fd54(plVar8,(long)(int)uVar1);
      uVar5 = *puVar17;
    }
    piVar12 = (int *)(*plVar8 + (long)(int)uVar5 * 8);
    *piVar12 = iVar14;
    piVar12[1] = uVar10;
    *puVar17 = uVar1;
  }
  else {
    *(uint *)(*plVar8 + ((long)((ulong)uVar5 << 0x20) >> 0x1d) + 4) = uVar10;
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (plVar6[1] == 0) {
    return;
  }
  do {
    lVar11 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 + -1 == 0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    return;
  }
  return;
}


