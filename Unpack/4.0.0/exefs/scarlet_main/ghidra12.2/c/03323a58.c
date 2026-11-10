/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03323a58; name: FUN_03323a58
 */


void FUN_03323a58(long param_1,int param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  
  uVar13 = *(uint *)(param_1 + 0x30);
  uVar6 = uVar13;
  if ((int)uVar13 <= param_2) {
    uVar6 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < (int)uVar6) {
    FUN_0321ada4((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)(int)uVar6);
    uVar13 = *(uint *)(param_1 + 0x30);
  }
  uVar10 = uVar6 - uVar13;
  if (uVar10 == 0 || (int)uVar6 < (int)uVar13) {
    if ((int)uVar6 < (int)uVar13) {
      lVar16 = *(long *)(param_1 + 0x28);
      lVar18 = lVar16 + (long)(int)uVar13 * 0x20;
      *(uint *)(param_1 + 0x30) = uVar6;
      do {
        puVar1 = (ulong *)(lVar18 + -0x10);
        lVar18 = lVar18 + -0x20;
        if ((*puVar1 & 1) != 0) {
          plVar12 = (long *)(*puVar1 & 0xfffffffffffffffe);
          plVar2 = plVar12 + 1;
          do {
            lVar11 = *plVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)lVar11 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar11 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      } while (lVar18 != lVar16 + (long)(int)uVar6 * 0x20);
    }
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar13 * 0x20);
    uVar5 = uVar10 & 3;
    *(uint *)(param_1 + 0x30) = uVar6;
    if (2 < uVar6 + ~uVar13) {
      iVar17 = -(uVar10 & 0xfffffffc);
      puVar15 = puVar4;
      do {
        puVar4 = puVar15 + 0x10;
        *(undefined4 *)(puVar15 + 3) = 0;
        iVar17 = iVar17 + 4;
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        puVar15[6] = 0;
        *(undefined4 *)(puVar15 + 7) = 0;
        puVar15[10] = 0;
        *(undefined4 *)(puVar15 + 0xb) = 0;
        puVar15[0xe] = 0;
        *(undefined4 *)(puVar15 + 0xf) = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[0xc] = 0;
        puVar15[0xd] = 0;
        puVar15 = puVar4;
      } while (iVar17 != 0);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)(puVar4 + 3) = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 4;
    }
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)param_2 * 0x20);
  uVar7 = param_3[1];
  *puVar4 = *param_3;
  puVar4[1] = uVar7;
  if ((param_3[2] & 1) != 0) {
    piVar3 = (int *)((param_3[2] & 0xfffffffffffffffe) + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar9) {
        *piVar3 = *piVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar14 = puVar4[2];
  if ((uVar14 & 1) != 0) {
    plVar12 = (long *)(uVar14 & 0xfffffffffffffffe);
    plVar2 = plVar12 + 1;
    do {
      lVar18 = *plVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  puVar4[2] = param_3[2];
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_3 + 3);
  return;
}


