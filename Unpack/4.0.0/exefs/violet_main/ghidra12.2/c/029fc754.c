/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fc754; name: FUN_029fc754
 */


void FUN_029fc754(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e4f28 + 0x10);
  param_1[1] = 0xffffffff;
  memcpy(param_1 + 3,(void *)(param_2 + 0x18),0x48);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  lVar12 = *(long *)(param_2 + 0x68);
  param_1[0xd] = lVar12;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
    plVar3 = (long *)(lVar12 + 0x10);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[0xe] = 0;
  param_1[0xf] = -0x8000000000000000;
  puVar6 = PTR_PTR_047d1a50;
  uVar4 = *(uint *)(param_2 + 0x78);
  if ((int)uVar4 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = -0x8000000000000000;
  }
  else {
    puVar18 = *(undefined4 **)(param_2 + 0x70);
    puVar10 = (undefined4 *)
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 2);
    uVar19 = uVar4 & 3;
    param_1[0xe] = (long)puVar10;
    *(uint *)(param_1 + 0xf) = uVar4;
    *(uint *)((long)param_1 + 0x7c) = uVar4;
    if (2 < uVar4 - 1) {
      iVar14 = -(uVar4 & 0xfffffffc);
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar18;
        puVar11[1] = puVar18[1];
        puVar11[2] = puVar18[2];
        puVar13 = puVar18 + 3;
        puVar10 = puVar11 + 4;
        puVar18 = puVar18 + 4;
        iVar14 = iVar14 + 4;
        puVar11[3] = *puVar13;
        puVar11 = puVar10;
      } while (iVar14 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar10 = *puVar18;
      puVar10 = puVar10 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x88);
  if ((int)uVar4 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = -0x8000000000000000;
  }
  else {
    puVar17 = *(undefined8 **)(param_2 + 0x80);
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar4 << 3);
    uVar19 = uVar4 & 3;
    param_1[0x10] = (long)puVar8;
    *(uint *)(param_1 + 0x11) = uVar4;
    *(uint *)((long)param_1 + 0x8c) = uVar4;
    if (2 < uVar4 - 1) {
      iVar14 = -(uVar4 & 0xfffffffc);
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar17;
        puVar9[1] = puVar17[1];
        puVar9[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar9 + 4;
        puVar17 = puVar17 + 4;
        iVar14 = iVar14 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar14 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar8 = *puVar17;
      puVar8 = puVar8 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x98);
  if ((int)uVar4 < 1) {
    param_1[0x12] = 0;
    param_1[0x13] = -0x8000000000000000;
  }
  else {
    puVar17 = *(undefined8 **)(param_2 + 0x90);
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar4 << 3);
    uVar19 = uVar4 & 3;
    param_1[0x12] = (long)puVar8;
    *(uint *)(param_1 + 0x13) = uVar4;
    *(uint *)((long)param_1 + 0x9c) = uVar4;
    if (2 < uVar4 - 1) {
      iVar14 = -(uVar4 & 0xfffffffc);
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar17;
        puVar9[1] = puVar17[1];
        puVar9[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar9 + 4;
        puVar17 = puVar17 + 4;
        iVar14 = iVar14 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar14 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar8 = *puVar17;
      puVar8 = puVar8 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xa8);
  if ((int)uVar4 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = -0x8000000000000000;
  }
  else {
    puVar18 = *(undefined4 **)(param_2 + 0xa0);
    puVar10 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar4 << 2);
    uVar19 = uVar4 & 3;
    param_1[0x14] = (long)puVar10;
    *(uint *)(param_1 + 0x15) = uVar4;
    *(uint *)((long)param_1 + 0xac) = uVar4;
    if (2 < uVar4 - 1) {
      iVar14 = -(uVar4 & 0xfffffffc);
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar18;
        puVar11[1] = puVar18[1];
        puVar11[2] = puVar18[2];
        puVar13 = puVar18 + 3;
        puVar10 = puVar11 + 4;
        puVar18 = puVar18 + 4;
        iVar14 = iVar14 + 4;
        puVar11[3] = *puVar13;
        puVar11 = puVar10;
      } while (iVar14 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar10 = *puVar18;
      puVar10 = puVar10 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0xb8);
  if ((int)uVar4 < 1) {
    param_1[0x16] = 0;
    param_1[0x17] = -0x8000000000000000;
  }
  else {
    puVar18 = *(undefined4 **)(param_2 + 0xb0);
    puVar10 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar4 << 2);
    uVar19 = uVar4 & 3;
    param_1[0x16] = (long)puVar10;
    *(uint *)(param_1 + 0x17) = uVar4;
    *(uint *)((long)param_1 + 0xbc) = uVar4;
    if (2 < uVar4 - 1) {
      iVar14 = -(uVar4 & 0xfffffffc);
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar18;
        puVar11[1] = puVar18[1];
        puVar11[2] = puVar18[2];
        puVar13 = puVar18 + 3;
        puVar10 = puVar11 + 4;
        puVar18 = puVar18 + 4;
        iVar14 = iVar14 + 4;
        puVar11[3] = *puVar13;
        puVar11 = puVar10;
      } while (iVar14 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar10 = *puVar18;
      puVar10 = puVar10 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  param_1[0x18] = 0;
  param_1[0x19] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 200);
  if ((int)uVar4 < 1) {
    param_1[0x18] = 0;
    param_1[0x19] = -0x8000000000000000;
  }
  else {
    puVar17 = *(undefined8 **)(param_2 + 0xc0);
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar4 << 4);
    uVar19 = 0;
    param_1[0x18] = (long)puVar8;
    *(uint *)(param_1 + 0x19) = uVar4;
    *(uint *)((long)param_1 + 0xcc) = uVar4;
    do {
      *puVar8 = 0;
      puVar8[1] = 0x8000000000000000;
      iVar14 = *(int *)(puVar17 + 1);
      if (0 < iVar14) {
        puVar18 = (undefined4 *)*puVar17;
        FUN_02e9b320(puVar8,puVar6,(long)iVar14);
        puVar10 = (undefined4 *)*puVar8;
        uVar16 = (long)iVar14 * 4 - 4;
        uVar2 = ((uint)(uVar16 >> 2) & 0x3fffffff) + 1;
        if ((uVar2 & 7) == 0) {
          puVar11 = puVar18;
        }
        else {
          lVar12 = -((ulong)uVar2 & 7);
          puVar13 = puVar10;
          puVar15 = puVar18;
          do {
            puVar11 = puVar15 + 1;
            bVar7 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            puVar10 = puVar13 + 1;
            *puVar13 = *puVar15;
            puVar13 = puVar10;
            puVar15 = puVar11;
          } while (bVar7);
        }
        if (0x1b < uVar16) {
          do {
            *puVar10 = *puVar11;
            puVar10[1] = puVar11[1];
            puVar10[2] = puVar11[2];
            puVar10[3] = puVar11[3];
            puVar10[4] = puVar11[4];
            puVar10[5] = puVar11[5];
            puVar10[6] = puVar11[6];
            puVar13 = puVar11 + 7;
            puVar11 = puVar11 + 8;
            puVar10[7] = *puVar13;
            puVar10 = puVar10 + 8;
          } while (puVar11 != puVar18 + iVar14);
        }
      }
      uVar19 = uVar19 + 1;
      *(int *)(puVar8 + 1) = iVar14;
      puVar8 = puVar8 + 2;
      puVar17 = puVar17 + 2;
    } while (uVar19 != uVar4);
  }
  return;
}


