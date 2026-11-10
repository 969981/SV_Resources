/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03092a6c; name: FUN_03092a6c
 */


undefined4 * FUN_03092a6c(long param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  iVar3 = *param_2;
  iVar6 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar3 * 4);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 200);
    lVar14 = *(long *)(param_1 + 0x28);
    lVar13 = *(long *)(param_1 + 0x58);
    uVar4 = *(uint *)(param_1 + 0x60);
    iVar5 = iVar6;
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) <= iVar6) {
      FUN_0309515c((long *)(param_1 + 0xc0),PTR_PTR_047d1a50,(long)iVar6 + 1);
      iVar5 = *(int *)(param_1 + 200);
    }
    puVar11 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar5 * 0x14);
    *(int *)(param_1 + 200) = (int)((long)iVar6 + 1);
    *(undefined8 *)(puVar11 + 2) = 0xffffffffffffffff;
    puVar11[4] = 4;
    puVar7 = (undefined4 *)(lVar14 + (long)iVar3 * 0x14);
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
    uVar8 = *(undefined8 *)(puVar7 + 2);
    *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar7 + 4);
    *(undefined8 *)(puVar11 + 2) = uVar8;
    *(undefined2 *)((long)puVar11 + 0x12) = *(undefined2 *)((long)puVar7 + 0x12);
    iVar5 = *(int *)(param_1 + 0x138);
    lVar14 = (long)iVar5 + (long)(int)uVar4;
    iVar12 = (int)lVar14;
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar12) {
      FUN_02e9b320((long *)(param_1 + 0x130),PTR_PTR_047d1a50,lVar14);
    }
    if (0 < (int)uVar4) {
      puVar7 = (undefined4 *)(lVar13 + (long)(int)(uVar4 * iVar3) * 4);
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x130) + (long)iVar5 * 4);
      uVar2 = uVar4 & 3;
      if (2 < uVar4 - 1) {
        iVar5 = -(uVar4 & 0xfffffffc);
        puVar9 = puVar7;
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar9;
          puVar10[1] = puVar9[1];
          puVar10[2] = puVar9[2];
          puVar7 = puVar9 + 4;
          puVar1 = puVar10 + 4;
          iVar5 = iVar5 + 4;
          puVar10[3] = puVar9[3];
          puVar9 = puVar7;
          puVar10 = puVar1;
        } while (iVar5 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *puVar7;
        puVar1 = puVar1 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(int *)(param_1 + 0x138) = iVar12;
    *(int *)(*(long *)(param_1 + 0x70) + (long)iVar3 * 4) = iVar6;
    iVar6 = *(int *)(param_1 + 0x88);
    lVar13 = (long)iVar6;
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar6) {
      FUN_0133bb88(param_1 + 0x80,PTR_PTR_047d1a50,lVar13 + 1);
      iVar6 = *(int *)(param_1 + 0x88);
    }
    *(int *)(*(long *)(param_1 + 0x80) + (long)iVar6 * 4) = iVar3;
    *(int *)(param_1 + 0x88) = (int)(lVar13 + 1);
  }
  else {
    puVar11 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar6 * 0x14);
  }
  return puVar11;
}


