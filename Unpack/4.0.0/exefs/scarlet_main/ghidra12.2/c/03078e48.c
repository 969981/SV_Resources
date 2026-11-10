/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03078e48; name: FUN_03078e48
 */


void FUN_03078e48(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 local_48;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (long)(PTR_DAT_047e4f68 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  plVar14 = param_1 + 4;
  *plVar14 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[9] = 0;
  plVar8 = param_1 + 7;
  *plVar8 = 0;
  param_1[8] = -0x8000000000000000;
  param_1[10] = -0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar12 = param_2[4];
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 8) == 0) {
      *plVar14 = lVar12;
    }
    else {
      plVar6 = (long *)(lVar12 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = (long *)*plVar14;
      *plVar14 = param_2[4];
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar14 = plVar6 + 2;
        do {
          lVar12 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
  iVar9 = (int)param_2[10];
  if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) < iVar9) {
    FUN_0307dd14(param_1 + 9,(long)iVar9);
    iVar9 = (int)param_2[10];
  }
  if (iVar9 != 0) {
    plVar14 = (long *)param_2[9];
    plVar6 = plVar14 + (long)iVar9 * 3;
    do {
      iVar9 = (int)param_1[10];
      lVar12 = param_1[9];
      *(int *)(param_1 + 10) = iVar9 + 1;
      plVar11 = (long *)(lVar12 + (long)iVar9 * 0x18);
      plVar13 = plVar11;
      do {
        *plVar13 = 0;
        plVar13[1] = 0;
        *(undefined1 *)(plVar13 + 2) = 1;
        plVar13 = plVar13 + 3;
      } while (plVar13 != plVar11 + 3);
      *(undefined1 *)(lVar12 + (long)iVar9 * 0x18 + 0x10) = 0;
      plVar7 = (long *)*plVar11;
      plVar13 = (long *)*plVar14;
      if (plVar7 != plVar13) {
        if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
          plVar13 = plVar13 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar7 = (long *)*plVar11;
          plVar13 = (long *)*plVar14;
        }
        *plVar11 = (long)plVar13;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar13 = plVar7 + 2;
          do {
            lVar12 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      }
      *(undefined1 *)(plVar14 + 2) = 0;
      plVar14 = plVar14 + 3;
    } while (plVar14 != plVar6);
  }
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 8);
    lVar12 = param_2[7];
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < (int)uVar2) {
      FUN_0307df00(plVar8,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar10 = *(uint *)(param_1 + 8);
    if ((int)uVar2 < (int)uVar10) {
      lVar16 = (long)(int)uVar2 * 0x100 + (long)(int)uVar10 * -0x100;
      lVar15 = *plVar8 + (long)(int)uVar10 * 0x100;
      do {
        lVar15 = lVar15 + -0x100;
        FUN_0307e0e0(lVar15);
        lVar16 = lVar16 + 0x100;
      } while (lVar16 != 0);
      uVar10 = *(uint *)(param_1 + 8);
    }
    lVar16 = *plVar8;
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = uVar2;
    }
    if ((lVar16 != lVar12) && (0 < (int)uVar10)) {
      uVar17 = (ulong)uVar10;
      lVar15 = lVar12;
      do {
        FUN_0307e498(lVar16,lVar15);
        uVar17 = uVar17 - 1;
        lVar16 = lVar16 + 0x100;
        lVar15 = lVar15 + 0x100;
      } while (uVar17 != 0);
      lVar16 = *plVar8;
    }
    iVar9 = uVar2 - uVar10;
    if (0 < iVar9) {
      lVar16 = lVar16 + (long)(int)uVar10 * 0x100;
      lVar12 = lVar12 + (long)(int)uVar10 * 0x100;
      do {
        FUN_03086874(lVar16,lVar12);
        iVar9 = iVar9 + -1;
        lVar16 = lVar16 + 0x100;
        lVar12 = lVar12 + 0x100;
      } while (iVar9 != 0);
    }
    *(uint *)(param_1 + 8) = uVar2;
  }
  puVar5 = PTR_DAT_047d1a08;
  lVar12 = param_2[0xb];
  local_48 = 0x330;
  plVar14 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar14,"hkaiNavMeshClearanceCacheManager");
  }
  puVar1 = PTR_DAT_047e4f80 + 0x10;
  plVar14[1] = 0xffffffff;
  plVar14[2] = 1;
  *plVar14 = (long)puVar1;
  plVar14[3] = (long)(plVar14 + 5);
  plVar14[4] = -0x7fffffe000000000;
  FUN_0307ec10(plVar14 + 3,lVar12 + 0x18);
  *(undefined4 *)(plVar14 + 0x65) = *(undefined4 *)(lVar12 + 0x328);
  plVar8 = (long *)param_1[0xb];
  param_1[0xb] = (long)plVar14;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar14 = plVar8 + 2;
    do {
      lVar12 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  memcpy(param_1 + 0xc,param_2 + 0xc,0x80);
  local_48 = 0x28;
  plVar14 = (long *)(**(code **)puVar5)(0,&local_48,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar14,"hkaiNavMeshCollectionQueryMediator");
  }
  puVar1 = PTR_DAT_047e4f70;
  plVar14[1] = 0xffffffff;
  plVar14[2] = 1;
  *(undefined4 *)(plVar14 + 3) = 0x3d4ccccd;
  *plVar14 = (long)(puVar1 + 0x10);
  plVar14[4] = (long)param_1;
  plVar8 = (long *)param_1[0x1c];
  param_1[0x1c] = (long)plVar14;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar14 = plVar8 + 2;
    do {
      lVar12 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  local_48 = 0x20;
  plVar14 = (long *)(**(code **)puVar5)(0,&local_48,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar14,"hkaiNavVolumeCollectionQueryMediator");
  }
  puVar5 = PTR_DAT_047e4f78;
  plVar14[2] = 1;
  plVar14[3] = (long)param_1;
  *plVar14 = (long)(puVar5 + 0x10);
  plVar14[1] = 0xffffffff;
  plVar8 = (long *)param_1[0x1d];
  param_1[0x1d] = (long)plVar14;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar14 = plVar8 + 2;
    do {
      lVar12 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  return;
}


