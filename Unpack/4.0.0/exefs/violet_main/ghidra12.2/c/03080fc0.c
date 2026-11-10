/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03080fc0; name: FUN_03080fc0
 */


long FUN_03080fc0(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (param_2 == param_1) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x30);
    lVar16 = *(long *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < (int)uVar4) {
      FUN_03081414((long *)(param_1 + 0x28),PTR_PTR_047d1a50,(long)(int)uVar4);
    }
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar7 = *(long *)(param_1 + 0x28);
    uVar1 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar1 = uVar4;
    }
    if ((lVar7 != lVar16) && (0 < (int)uVar1)) {
      uVar14 = (ulong)uVar1;
      uVar11 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar13 = (undefined4 *)(lVar7 + 8);
        puVar8 = (undefined4 *)(lVar16 + 8);
        do {
          puVar13[-2] = puVar8[-2];
          puVar13[-1] = puVar8[-1];
          uVar2 = *puVar8;
          puVar6 = puVar8 + 1;
          puVar8 = puVar8 + 4;
          *puVar13 = uVar2;
          uVar12 = uVar12 + 4;
          puVar9 = puVar13 + 1;
          puVar13 = puVar13 + 4;
          *puVar9 = *puVar6;
        } while ((uVar14 & 0xfffffffc) != uVar12);
      }
      if ((uVar1 & 3) != 0) {
        puVar8 = (undefined4 *)(lVar7 + uVar12 * 4);
        puVar13 = (undefined4 *)(lVar16 + uVar12 * 4);
        do {
          uVar2 = *puVar13;
          uVar11 = uVar11 - 1;
          puVar13 = puVar13 + 1;
          *puVar8 = uVar2;
          puVar8 = puVar8 + 1;
        } while (uVar11 != 0);
      }
      lVar7 = *(long *)(param_1 + 0x28);
    }
    if ((int)uVar5 < (int)uVar4) {
      puVar8 = (undefined4 *)(lVar16 + (long)(int)uVar1 * 4);
      puVar13 = (undefined4 *)(lVar7 + (long)(int)uVar1 * 4);
      uVar5 = uVar4 - uVar1 & 3;
      if (2 < uVar4 + ~uVar1) {
        iVar10 = -(uVar4 - uVar1 & 0xfffffffc);
        puVar6 = puVar8;
        puVar9 = puVar13;
        do {
          *puVar9 = *puVar6;
          puVar9[1] = puVar6[1];
          puVar9[2] = puVar6[2];
          puVar8 = puVar6 + 4;
          puVar13 = puVar9 + 4;
          iVar10 = iVar10 + 4;
          puVar9[3] = puVar6[3];
          puVar6 = puVar8;
          puVar9 = puVar13;
        } while (iVar10 != 0);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar13 = uVar2;
        puVar13 = puVar13 + 1;
      }
    }
    *(uint *)(param_1 + 0x30) = uVar4;
    iVar10 = *(int *)(param_2 + 0x40);
    pvVar15 = *(void **)(param_2 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar10) {
      FUN_03081534(param_1 + 0x38,PTR_PTR_047d1a50,(long)iVar10);
    }
    memcpy(*(void **)(param_1 + 0x38),pvVar15,(long)iVar10);
    *(int *)(param_1 + 0x40) = iVar10;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    iVar10 = *(int *)(param_2 + 0x58);
    pvVar15 = *(void **)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar10) {
      FUN_030815dc(param_1 + 0x50,PTR_PTR_047d1a50,(long)iVar10);
    }
    memcpy(*(void **)(param_1 + 0x50),pvVar15,(long)iVar10 << 1);
    *(int *)(param_1 + 0x58) = iVar10;
    iVar10 = *(int *)(param_2 + 0x68);
    pvVar15 = *(void **)(param_2 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar10) {
      FUN_03081534(param_1 + 0x60,PTR_PTR_047d1a50,(long)iVar10);
    }
    memcpy(*(void **)(param_1 + 0x60),pvVar15,(long)iVar10);
    *(int *)(param_1 + 0x68) = iVar10;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}


