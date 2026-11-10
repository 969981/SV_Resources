/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0cfec; name: FUN_02f0cfec
 */


void FUN_02f0cfec(long *param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  long *plVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  
  if (*param_1 != 0) {
    lVar15 = param_1[1];
    uVar16 = (ulong)param_2;
    if ((~*(uint *)(lVar15 + uVar16 * 0x68 + 8) & 0xffffff) != 0) {
      FUN_02f0d898(param_1 + 0x12,uVar16,lVar15,*(undefined8 *)(lVar15 + uVar16 * 0x68));
    }
    if ((~*(uint *)(lVar15 + uVar16 * 0x68 + 0x18) & 0xffffff) != 0) {
      FUN_02f0d898(param_1 + 0x12,uVar16,lVar15,*(undefined8 *)(lVar15 + uVar16 * 0x68 + 0x10));
    }
  }
  lVar15 = param_1[1];
  lVar14 = (long)(int)param_2;
  piVar10 = (int *)(lVar15 + (long)(int)param_2 * 0x68 + 0x34);
  iVar6 = *piVar10;
  if (iVar6 != 0x7fffffff) {
    *(undefined4 *)(lVar15 + lVar14 * 0x68 + 0x44) = 0x7fffffff;
    lVar12 = param_1[7] + (long)iVar6 * 0x38;
    iVar6 = *(int *)(lVar12 + 0x1c) + -1;
    *(int *)(lVar12 + 0x1c) = iVar6;
    piVar1 = (int *)(lVar12 + 0x18);
    if (iVar6 == 0) {
      *piVar1 = 0x7fffffff;
    }
    else {
      if (*piVar1 == *(int *)(lVar15 + lVar14 * 0x68 + 0x30)) {
        *piVar1 = *(int *)(lVar15 + lVar14 * 0x68 + 0x38);
      }
      lVar12 = lVar15 + lVar14 * 0x68;
      lVar13 = param_1[1] + (long)*(int *)(lVar12 + 0x3c) * 0x68;
      lVar12 = param_1[1] + (long)*(int *)(lVar12 + 0x38) * 0x68;
      *(undefined4 *)(lVar12 + 0x3c) = *(undefined4 *)(lVar13 + 0x30);
      *(undefined4 *)(lVar13 + 0x38) = *(undefined4 *)(lVar12 + 0x30);
    }
    lVar15 = lVar15 + lVar14 * 0x68;
    *(undefined4 *)(lVar15 + 0x38) = *(undefined4 *)(lVar15 + 0x30);
    *(undefined4 *)(lVar15 + 0x3c) = *(undefined4 *)(lVar15 + 0x30);
    *piVar10 = 0x7fffffff;
  }
  if ((int)param_1[2] <= (int)param_2) {
    return;
  }
  lVar15 = param_1[1];
  if (*(int *)(lVar15 + lVar14 * 0x68 + 0x30) == 0x7fffffff) {
    return;
  }
  puVar17 = (ulong *)(lVar15 + lVar14 * 0x68 + 0x58);
  uVar16 = *puVar17;
  if (1 < uVar16) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16,0);
  }
  lVar15 = lVar15 + lVar14 * 0x68;
  *puVar17 = 0;
  plVar8 = *(long **)(lVar15 + 0x20);
  *(undefined2 *)(lVar15 + 0x56) = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar2 = plVar8 + 2;
    do {
      lVar15 = *plVar2;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar4 = (undefined8 *)(param_1[1] + lVar14 * 0x68);
  *(undefined4 *)(puVar4 + 6) = 0x7fffffff;
  *(ushort *)((long)puVar4 + 0x42) = *(ushort *)((long)puVar4 + 0x42) | 4;
  *(undefined4 *)(puVar4 + 1) = 0xffffff;
  *(undefined4 *)(puVar4 + 3) = 0xffffff;
  *puVar4 = 0xffffffffffffffff;
  puVar4[2] = 0xffffffffffffffff;
  uVar5 = *(uint *)((long)param_1 + 0x24);
  uVar9 = uVar5 & 0xffffff;
  if (uVar9 == 0xffffff) {
    uVar9 = 0xffffffff;
  }
  puVar3 = (uint *)((long)param_1 + 0x24);
  *(uint *)(param_1[1] + lVar14 * 0x68 + 0x34) = uVar9;
  uVar9 = *puVar3;
  if (uVar9 == uVar5) {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar5 & 0xff000000 | param_2 & 0xffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      bVar11 = true;
      goto LAB_02f0d264;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar11 = false;
LAB_02f0d264:
  if (!bVar11) {
    do {
      uVar5 = uVar9 & 0xffffff;
      if (uVar5 == 0xffffff) {
        uVar5 = 0xffffffff;
      }
      *(uint *)(param_1[1] + lVar14 * 0x68 + 0x34) = uVar5;
      uVar5 = *puVar3;
      if (uVar5 == uVar9) {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar11) {
          *puVar3 = uVar9 & 0xff000000 | param_2 & 0xffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_02f0d2b4;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02f0d2b4:
        bVar11 = false;
      }
      uVar9 = uVar5;
    } while (!bVar11);
  }
  param_1 = param_1 + 5;
  do {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar11) {
      *(int *)param_1 = (int)*param_1 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  return;
}


