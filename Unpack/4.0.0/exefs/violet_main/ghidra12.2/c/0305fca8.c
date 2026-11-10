/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0305fca8; name: FUN_0305fca8
 */


long FUN_0305fca8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  void *pvVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  int iVar21;
  
  memcpy((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),0x48);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  plVar7 = *(long **)(param_1 + 0x68);
  plVar9 = *(long **)(param_2 + 0x68);
  if (plVar7 != plVar9) {
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar9 = plVar9 + 2;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar7 = *(long **)(param_1 + 0x68);
      plVar9 = *(long **)(param_2 + 0x68);
    }
    *(long **)(param_1 + 0x68) = plVar9;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar9 = plVar7 + 2;
      do {
        lVar12 = *plVar9;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  if (param_2 != param_1) {
    iVar2 = *(int *)(param_2 + 0x78);
    pvVar17 = *(void **)(param_2 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar2) {
      FUN_02f5f190(param_1 + 0x70,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(*(void **)(param_1 + 0x70),pvVar17,(long)iVar2 << 2);
    *(int *)(param_1 + 0x78) = iVar2;
    iVar2 = *(int *)(param_2 + 0x88);
    pvVar17 = *(void **)(param_2 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < iVar2) {
      FUN_0305f904(param_1 + 0x80,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(*(void **)(param_1 + 0x80),pvVar17,(long)iVar2 << 3);
    *(int *)(param_1 + 0x88) = iVar2;
    iVar2 = *(int *)(param_2 + 0x98);
    pvVar17 = *(void **)(param_2 + 0x90);
    if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar2) {
      FUN_0305f9b0(param_1 + 0x90,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(*(void **)(param_1 + 0x90),pvVar17,(long)iVar2 << 3);
    *(int *)(param_1 + 0x98) = iVar2;
    iVar2 = *(int *)(param_2 + 0xa8);
    pvVar17 = *(void **)(param_2 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar2) {
      FUN_02eb1edc(param_1 + 0xa0,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(*(void **)(param_1 + 0xa0),pvVar17,(long)iVar2 << 2);
    *(int *)(param_1 + 0xa8) = iVar2;
    iVar2 = *(int *)(param_2 + 0xb8);
    pvVar17 = *(void **)(param_2 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar2) {
      FUN_02f5f190(param_1 + 0xb0,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(*(void **)(param_1 + 0xb0),pvVar17,(long)iVar2 << 2);
    *(int *)(param_1 + 0xb8) = iVar2;
    iVar2 = *(int *)(param_2 + 200);
    lVar12 = *(long *)(param_2 + 0xc0);
    plVar9 = (long *)(param_1 + 0xc0);
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) < iVar2) {
      FUN_03060a40(plVar9,(long)iVar2);
    }
    puVar5 = PTR_PTR_047d1a50;
    iVar8 = *(int *)(param_1 + 200);
    if (iVar2 < iVar8) {
      puVar20 = (undefined4 *)(*plVar9 + (long)iVar8 * 0x10 + -8);
      lVar19 = (long)iVar2 * 0x10 + (long)iVar8 * -0x10;
      do {
        *puVar20 = 0;
        if ((-1 < (int)puVar20[1]) && (*(long *)(puVar20 + -2) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))
                    (puVar5,*(long *)(puVar20 + -2),(ulong)(uint)puVar20[1] << 2);
        }
        *(undefined8 *)(puVar20 + -2) = 0;
        lVar19 = lVar19 + 0x10;
        puVar20[1] = 0x80000000;
        puVar20 = puVar20 + -4;
      } while (lVar19 != 0);
      iVar8 = *(int *)(param_1 + 200);
    }
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
    if (0 < iVar2 - iVar8) {
      iVar21 = 0;
      puVar10 = (undefined8 *)(lVar12 + (long)iVar8 * 0x10);
      puVar16 = (undefined8 *)(*plVar9 + (long)iVar8 * 0x10);
      do {
        *puVar16 = 0;
        puVar16[1] = 0x8000000000000000;
        iVar3 = *(int *)(puVar10 + 1);
        if (0 < iVar3) {
          puVar18 = (undefined4 *)*puVar10;
          FUN_02e9b320(puVar16,PTR_PTR_047d1a50,(long)iVar3);
          puVar20 = (undefined4 *)*puVar16;
          uVar15 = (long)iVar3 * 4 - 4;
          uVar1 = ((uint)(uVar15 >> 2) & 0x3fffffff) + 1;
          if ((uVar1 & 7) == 0) {
            puVar14 = puVar18;
          }
          else {
            lVar12 = -((ulong)uVar1 & 7);
            puVar11 = puVar20;
            puVar13 = puVar18;
            do {
              puVar14 = puVar13 + 1;
              bVar6 = lVar12 != -1;
              lVar12 = lVar12 + 1;
              puVar20 = puVar11 + 1;
              *puVar11 = *puVar13;
              puVar11 = puVar20;
              puVar13 = puVar14;
            } while (bVar6);
          }
          if (0x1b < uVar15) {
            do {
              *puVar20 = *puVar14;
              puVar20[1] = puVar14[1];
              puVar20[2] = puVar14[2];
              puVar20[3] = puVar14[3];
              puVar20[4] = puVar14[4];
              puVar20[5] = puVar14[5];
              puVar20[6] = puVar14[6];
              puVar11 = puVar14 + 7;
              puVar14 = puVar14 + 8;
              puVar20[7] = *puVar11;
              puVar20 = puVar20 + 8;
            } while (puVar14 != puVar18 + iVar3);
          }
        }
        iVar21 = iVar21 + 1;
        *(int *)(puVar16 + 1) = iVar3;
        puVar10 = puVar10 + 2;
        puVar16 = puVar16 + 2;
      } while (iVar21 != iVar2 - iVar8);
    }
    *(int *)(param_1 + 200) = iVar2;
  }
  return param_1;
}


