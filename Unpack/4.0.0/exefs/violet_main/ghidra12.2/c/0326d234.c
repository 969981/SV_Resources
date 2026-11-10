/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326d234; name: FUN_0326d234
 */


void FUN_0326d234(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  puVar11 = *(undefined4 **)(param_2 + 0x18);
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar2) {
    FUN_02e9b320((undefined8 *)(param_1 + 0x18),PTR_PTR_047d1a50,(long)iVar2);
  }
  if (iVar2 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    uVar9 = (long)iVar2 * 4 - 4;
    uVar1 = ((uint)(uVar9 >> 2) & 0x3fffffff) + 1;
    if ((uVar1 & 3) == 0) {
      puVar8 = puVar11;
    }
    else {
      lVar10 = -((ulong)uVar1 & 3);
      puVar5 = puVar4;
      puVar7 = puVar11;
      do {
        puVar8 = puVar7 + 1;
        bVar3 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = *puVar7;
        puVar5 = puVar4;
        puVar7 = puVar8;
      } while (bVar3);
    }
    if (0xb < uVar9) {
      do {
        *puVar4 = *puVar8;
        puVar4[1] = puVar8[1];
        puVar4[2] = puVar8[2];
        puVar5 = puVar8 + 3;
        puVar8 = puVar8 + 4;
        puVar4[3] = *puVar5;
        puVar4 = puVar4 + 4;
      } while (puVar8 != puVar11 + iVar2);
    }
  }
  *(int *)(param_1 + 0x20) = iVar2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  lVar6 = 0x2c;
  lVar10 = 0x94;
  do {
    puVar11 = (undefined4 *)(param_2 + lVar10);
    *(undefined4 *)(param_1 + lVar6) = *(undefined4 *)(param_2 + lVar6);
    puVar4 = (undefined4 *)(param_1 + lVar10);
    lVar10 = lVar10 + 0x80;
    *puVar4 = *puVar11;
    puVar4[1] = puVar11[1];
    puVar4[2] = puVar11[2];
    puVar4[3] = puVar11[3];
    puVar4[4] = puVar11[4];
    puVar4[5] = puVar11[5];
    puVar4[6] = puVar11[6];
    puVar4[7] = puVar11[7];
    puVar4[8] = puVar11[8];
    puVar4[9] = puVar11[9];
    puVar4[10] = puVar11[10];
    puVar4[0xb] = puVar11[0xb];
    puVar4[0xc] = puVar11[0xc];
    puVar4[0xd] = puVar11[0xd];
    puVar4[0xe] = puVar11[0xe];
    puVar4[0xf] = puVar11[0xf];
    puVar4[0x10] = puVar11[0x10];
    puVar4[0x11] = puVar11[0x11];
    puVar4[0x12] = puVar11[0x12];
    puVar4[0x13] = puVar11[0x13];
    puVar4[0x14] = puVar11[0x14];
    puVar4[0x15] = puVar11[0x15];
    puVar4[0x16] = puVar11[0x16];
    puVar4[0x17] = puVar11[0x17];
    puVar4[0x18] = puVar11[0x18];
    puVar4[0x19] = puVar11[0x19];
    puVar4[0x1a] = puVar11[0x1a];
    puVar4[0x1b] = puVar11[0x1b];
    puVar4[0x1c] = puVar11[0x1c];
    puVar4[0x1d] = puVar11[0x1d];
    puVar4[0x1e] = puVar11[0x1e];
    lVar6 = lVar6 + 4;
    puVar4[0x1f] = puVar11[0x1f];
  } while (lVar6 != 0x94);
  return;
}


