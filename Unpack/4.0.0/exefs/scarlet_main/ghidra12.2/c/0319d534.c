/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319d534; name: FUN_0319d534
 */


long * FUN_0319d534(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  ulong uVar14;
  undefined2 *puVar15;
  
  plVar7 = (long *)*param_1;
  plVar8 = (long *)*param_2;
  if (plVar7 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar7 = (long *)*param_1;
      plVar8 = (long *)*param_2;
    }
    *param_1 = (long)plVar8;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar11 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  plVar7 = (long *)param_1[1];
  plVar8 = (long *)param_2[1];
  if (plVar7 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar7 = (long *)param_1[1];
      plVar8 = (long *)param_2[1];
    }
    param_1[1] = (long)plVar8;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar8 = plVar7 + 2;
      do {
        lVar11 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar4 = (int)param_2[3];
  puVar15 = (undefined2 *)param_2[2];
  if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) < iVar4) {
    FUN_02fbe258(param_1 + 2,PTR_PTR_047d1a50,(long)iVar4);
  }
  if (iVar4 != 0) {
    puVar9 = (undefined2 *)param_1[2];
    uVar14 = (long)iVar4 * 2 - 2;
    uVar1 = ((uint)(uVar14 >> 1) & 0x7fffffff) + 1;
    if ((uVar1 & 3) == 0) {
      puVar13 = puVar15;
    }
    else {
      lVar11 = -((ulong)uVar1 & 3);
      puVar10 = puVar9;
      puVar12 = puVar15;
      do {
        puVar13 = puVar12 + 1;
        bVar6 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        puVar9 = puVar10 + 1;
        *puVar10 = *puVar12;
        puVar10 = puVar9;
        puVar12 = puVar13;
      } while (bVar6);
    }
    if (5 < uVar14) {
      do {
        *puVar9 = *puVar13;
        puVar9[1] = puVar13[1];
        puVar9[2] = puVar13[2];
        puVar10 = puVar13 + 3;
        puVar13 = puVar13 + 4;
        puVar9[3] = *puVar10;
        puVar9 = puVar9 + 4;
      } while (puVar13 != puVar15 + iVar4);
    }
  }
  *(int *)(param_1 + 3) = iVar4;
  lVar11 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  param_1[4] = lVar11;
  param_1[5] = lVar2;
  return param_1;
}


