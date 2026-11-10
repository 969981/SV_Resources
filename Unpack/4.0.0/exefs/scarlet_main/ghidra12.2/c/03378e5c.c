/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03378e5c; name: FUN_03378e5c
 */


void FUN_03378e5c(long *param_1,uint *param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  
  lVar11 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  lVar14 = (long)(int)uVar2;
  if (uVar2 != (uint)lVar11) {
    lVar11 = FUN_03378d78(param_1,*param_1 + lVar11 * 0x28);
    *(uint *)(lVar11 + 4) = uVar2;
  }
  lVar11 = *param_1;
  lVar17 = lVar11 + lVar14 * 0x28;
  plVar18 = (long *)(lVar17 + 0x18);
  lVar21 = *plVar18;
  piVar19 = (int *)(lVar17 + 0x20);
  iVar4 = *piVar19;
  if (iVar4 != 0) {
    lVar17 = lVar21 + (long)iVar4 * 0x18;
    do {
      puVar1 = (ulong *)(lVar17 + -8);
      lVar17 = lVar17 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar8 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    } while (lVar17 != lVar21);
  }
  *piVar19 = 0;
  puVar20 = (uint *)(lVar11 + lVar14 * 0x28 + 0x24);
  uVar10 = *puVar20;
  if ((-1 < (int)uVar10) && (*plVar18 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*plVar18,(ulong)uVar10 * 0x18);
  }
  *plVar18 = 0;
  *puVar20 = 0x80000000;
  uVar12 = *(ulong *)(lVar11 + lVar14 * 0x28 + 0x10);
  if ((uVar12 & 1) != 0) {
    plVar9 = (long *)(uVar12 & 0xfffffffffffffffe);
    plVar18 = plVar9 + 1;
    do {
      lVar11 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  lVar11 = (long)(int)param_1[1] + -1;
  uVar10 = (uint)lVar11;
  *(uint *)(param_1 + 1) = uVar10;
  if (uVar10 != uVar2) {
    puVar16 = (undefined8 *)(*param_1 + lVar11 * 0x28);
    puVar15 = (undefined8 *)(*param_1 + lVar14 * 0x28);
    *puVar15 = *puVar16;
    puVar15[1] = puVar16[1];
    puVar15[2] = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar15[3] = 0;
    puVar15[4] = 0x8000000000000000;
    FUN_033790e0(puVar16 + 3);
    puVar15[3] = puVar16[3];
    uVar3 = *(undefined4 *)((long)puVar16 + 0x24);
    *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar16 + 4);
    *(undefined4 *)((long)puVar15 + 0x24) = uVar3;
    puVar16[3] = 0;
    puVar16[4] = 0x8000000000000000;
    if ((puVar16[2] & 1) != 0) {
      plVar9 = (long *)(puVar16[2] & 0xfffffffffffffffe);
      plVar18 = plVar9 + 1;
      do {
        lVar11 = *plVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = (int)lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar11 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar11 = param_1[2];
  uVar12 = (ulong)(int)param_1[3];
  uVar13 = ((long)param_2 - lVar11 >> 3) + 1U & uVar12;
  while (puVar20 = (uint *)(lVar11 + uVar13 * 8), -1 < (int)puVar20[1]) {
    lVar14 = lVar11 + ((ulong)*puVar20 & uVar12 & 0xffffffff) * 8;
    uVar13 = (ulong)(int)uVar12;
    if ((uVar13 & (long)param_2 - lVar14 >> 3) < (uVar13 & (long)puVar20 - lVar14 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar20;
      uVar12 = (ulong)*(uint *)(param_1 + 3);
      lVar11 = param_1[2];
      uVar13 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar20;
    }
    uVar13 = ((ulong)((long)puVar20 - lVar11) >> 3) + 1 & uVar13;
  }
  param_2[1] = 0xffffffff;
  return;
}


