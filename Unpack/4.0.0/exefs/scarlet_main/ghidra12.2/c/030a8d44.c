/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a8d44; name: FUN_030a8d44
 */


void FUN_030a8d44(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  void *pvVar19;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e5040 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[9] = -0x8000000000000000;
  plVar7 = param_1 + 7;
  *plVar7 = 0;
  param_1[8] = 0;
  plVar18 = param_1 + 10;
  *plVar18 = 0;
  param_1[0xb] = -0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = -0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = -0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  param_1[3] = param_2[3];
  *(int *)(param_1 + 4) = (int)param_2[4];
  param_1[5] = param_2[5];
  *(int *)(param_1 + 6) = (int)param_2[6];
  lVar8 = param_2[7];
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 8) == 0) {
      *plVar7 = lVar8;
    }
    else {
      plVar6 = (long *)(lVar8 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar6 = (long *)*plVar7;
      *plVar7 = param_2[7];
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar7 = plVar6 + 2;
        do {
          lVar8 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
  }
  if (param_2 != param_1) {
    iVar13 = (int)param_2[9];
    pvVar19 = (void *)param_2[8];
    if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) < iVar13) {
      FUN_02f5f190(param_1 + 8,PTR_PTR_047d1a50,(long)iVar13);
    }
    memcpy((void *)param_1[8],pvVar19,(long)iVar13 << 2);
    *(int *)(param_1 + 9) = iVar13;
    uVar2 = *(uint *)(param_2 + 0xb);
    lVar8 = param_2[10];
    if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) < (int)uVar2) {
      FUN_030a96e8(plVar18,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar3 = *(uint *)(param_1 + 0xb);
    lVar10 = param_1[10];
    uVar1 = uVar3;
    if ((int)uVar2 <= (int)uVar3) {
      uVar1 = uVar2;
    }
    if ((lVar10 != lVar8) && (0 < (int)uVar1)) {
      uVar17 = (ulong)uVar1;
      uVar14 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        puVar11 = (undefined8 *)(lVar10 + 0x10);
        puVar16 = (undefined8 *)(lVar8 + 0x10);
        do {
          puVar11[-2] = puVar16[-2];
          puVar11[-1] = puVar16[-1];
          *puVar11 = *puVar16;
          puVar9 = puVar16 + 1;
          uVar15 = uVar15 + 4;
          puVar16 = puVar16 + 4;
          puVar11[1] = *puVar9;
          puVar11 = puVar11 + 4;
        } while ((uVar17 & 0xfffffffc) != uVar15);
      }
      if ((uVar1 & 3) != 0) {
        puVar11 = (undefined8 *)(lVar10 + uVar15 * 8);
        puVar16 = (undefined8 *)(lVar8 + uVar15 * 8);
        do {
          uVar14 = uVar14 - 1;
          *puVar11 = *puVar16;
          puVar11 = puVar11 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar14 != 0);
      }
      lVar10 = *plVar18;
    }
    if ((int)uVar3 < (int)uVar2) {
      puVar11 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8);
      puVar16 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8);
      uVar3 = uVar2 - uVar1 & 3;
      if (2 < uVar2 + ~uVar1) {
        iVar13 = -(uVar2 - uVar1 & 0xfffffffc);
        puVar9 = puVar11;
        puVar12 = puVar16;
        do {
          *puVar12 = *puVar9;
          puVar12[1] = puVar9[1];
          puVar12[2] = puVar9[2];
          puVar11 = puVar9 + 4;
          puVar16 = puVar12 + 4;
          iVar13 = iVar13 + 4;
          puVar12[3] = puVar9[3];
          puVar9 = puVar11;
          puVar12 = puVar16;
        } while (iVar13 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar16 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar16 = puVar16 + 1;
      }
    }
    *(uint *)(param_1 + 0xb) = uVar2;
    iVar13 = (int)param_2[0xd];
    pvVar19 = (void *)param_2[0xc];
    if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) < iVar13) {
      FUN_030a97f8(param_1 + 0xc,PTR_PTR_047d1a50,(long)iVar13);
    }
    memcpy((void *)param_1[0xc],pvVar19,(long)iVar13 << 3);
    *(int *)(param_1 + 0xd) = iVar13;
    iVar13 = (int)param_2[0xf];
    pvVar19 = (void *)param_2[0xe];
    if ((int)(*(uint *)((long)param_1 + 0x7c) & 0x7fffffff) < iVar13) {
      FUN_030a98a4(param_1 + 0xe,PTR_PTR_047d1a50,(long)iVar13);
    }
    memcpy((void *)param_1[0xe],pvVar19,(long)iVar13 * 0x18);
    *(int *)(param_1 + 0xf) = iVar13;
    iVar13 = (int)param_2[0x11];
    pvVar19 = (void *)param_2[0x10];
    if ((int)(*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) < iVar13) {
      FUN_02f5f190(param_1 + 0x10,PTR_PTR_047d1a50,(long)iVar13);
    }
    memcpy((void *)param_1[0x10],pvVar19,(long)iVar13 << 2);
    *(int *)(param_1 + 0x11) = iVar13;
  }
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  return;
}


