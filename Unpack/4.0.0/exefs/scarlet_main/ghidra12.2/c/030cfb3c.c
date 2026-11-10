/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cfb3c; name: FUN_030cfb3c
 */


void FUN_030cfb3c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  
  iVar19 = *(int *)(param_1 + 0x28);
  iVar15 = *(int *)(param_2 + 0x28);
  plVar12 = (long *)(param_1 + 0x20);
  if ((param_2 != param_1) && (iVar19 < iVar15)) {
    FUN_030d205c(plVar12);
    FUN_030d205c((long *)(param_2 + 0x20));
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x28) = uVar7;
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    iVar15 = *(int *)(param_2 + 0x28);
    iVar19 = *(int *)(param_1 + 0x28);
  }
  lVar18 = *(long *)(param_2 + 0x20);
  iVar5 = iVar15 + iVar19;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar5) {
    FUN_030d197c(plVar12,(long)iVar5);
  }
  if (0 < iVar15) {
    iVar10 = 0;
    puVar3 = PTR_DAT_047e5118 + 0x10;
    plVar12 = (long *)(*plVar12 + (long)iVar19 * 0x38);
    do {
      plVar12[1] = 0xffffffff;
      plVar12[2] = 1;
      *plVar12 = (long)puVar3;
      lVar14 = *(long *)(lVar18 + 0x18);
      plVar12[3] = lVar14;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar4 = (long *)(lVar14 + 0x10);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      lVar14 = *(long *)(lVar18 + 0x20);
      plVar12[4] = lVar14;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar4 = (long *)(lVar14 + 0x10);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      lVar14 = *(long *)(lVar18 + 0x28);
      iVar10 = iVar10 + 1;
      *(undefined8 *)((long)plVar12 + 0x2e) = *(undefined8 *)(lVar18 + 0x2e);
      plVar12[5] = lVar14;
      plVar12 = plVar12 + 7;
      lVar18 = lVar18 + 0x38;
    } while (iVar10 != iVar15);
  }
  *(int *)(param_1 + 0x28) = iVar5;
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar14 = *(long *)(param_2 + 0x20);
    lVar18 = (long)*(int *)(param_2 + 0x28) * 0x38;
    do {
      (**(code **)(*(long *)(lVar14 + -0x38 + lVar18) + 8))();
      lVar18 = lVar18 + -0x38;
    } while (lVar18 != 0);
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  iVar19 = *(int *)(param_1 + 0x38);
  iVar15 = *(int *)(param_2 + 0x38);
  plVar12 = (long *)(param_1 + 0x30);
  if ((param_2 != param_1) && (iVar19 < iVar15)) {
    FUN_030d2154(plVar12);
    FUN_030d2154((long *)(param_2 + 0x30));
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar11;
    uVar7 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x38) = uVar7;
    uVar7 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0x3c) = uVar7;
    iVar15 = *(int *)(param_2 + 0x38);
    iVar19 = *(int *)(param_1 + 0x38);
  }
  lVar18 = *(long *)(param_2 + 0x30);
  iVar5 = iVar15 + iVar19;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar5) {
    FUN_030d1b38(plVar12,(long)iVar5);
  }
  if (0 < iVar15) {
    iVar10 = 0;
    puVar3 = PTR_DAT_047e5120 + 0x10;
    plVar12 = (long *)(*plVar12 + (long)iVar19 * 0x38);
    do {
      plVar12[1] = 0xffffffff;
      plVar12[2] = 1;
      *plVar12 = (long)puVar3;
      lVar14 = *(long *)(lVar18 + 0x18);
      plVar12[3] = lVar14;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar4 = (long *)(lVar14 + 0x10);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      lVar14 = *(long *)(lVar18 + 0x20);
      plVar12[4] = lVar14;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar4 = (long *)(lVar14 + 0x10);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      lVar14 = *(long *)(lVar18 + 0x28);
      iVar10 = iVar10 + 1;
      *(undefined8 *)((long)plVar12 + 0x2e) = *(undefined8 *)(lVar18 + 0x2e);
      plVar12[5] = lVar14;
      plVar12 = plVar12 + 7;
      lVar18 = lVar18 + 0x38;
    } while (iVar10 != iVar15);
  }
  *(int *)(param_1 + 0x38) = iVar5;
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar14 = *(long *)(param_2 + 0x30);
    lVar18 = (long)*(int *)(param_2 + 0x38) * 0x38;
    do {
      (**(code **)(*(long *)(lVar14 + -0x38 + lVar18) + 8))();
      lVar18 = lVar18 + -0x38;
    } while (lVar18 != 0);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  iVar19 = *(int *)(param_1 + 0x48);
  uVar17 = *(uint *)(param_2 + 0x48);
  plVar12 = (long *)(param_1 + 0x40);
  if ((param_2 != param_1) && (iVar19 < (int)uVar17)) {
    FUN_030d224c(plVar12);
    FUN_030d224c((long *)(param_2 + 0x40));
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar11;
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = uVar7;
    uVar7 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_2 + 0x4c) = uVar7;
    uVar17 = *(uint *)(param_2 + 0x48);
    iVar19 = *(int *)(param_1 + 0x48);
  }
  puVar16 = *(undefined8 **)(param_2 + 0x40);
  iVar15 = uVar17 + iVar19;
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar15) {
    FUN_030d22bc(plVar12,(long)iVar15);
  }
  if (0 < (int)uVar17) {
    puVar2 = (undefined8 *)(*plVar12 + (long)iVar19 * 8);
    uVar6 = uVar17 & 3;
    if (2 < uVar17 - 1) {
      iVar19 = -(uVar17 & 0xfffffffc);
      puVar13 = puVar2;
      do {
        *puVar13 = *puVar16;
        puVar13[1] = puVar16[1];
        puVar13[2] = puVar16[2];
        puVar1 = puVar16 + 3;
        puVar2 = puVar13 + 4;
        puVar16 = puVar16 + 4;
        iVar19 = iVar19 + 4;
        puVar13[3] = *puVar1;
        puVar13 = puVar2;
      } while (iVar19 != 0);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar2 = *puVar16;
      puVar2 = puVar2 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  *(int *)(param_1 + 0x48) = iVar15;
  *(undefined4 *)(param_2 + 0x48) = 0;
  return;
}


