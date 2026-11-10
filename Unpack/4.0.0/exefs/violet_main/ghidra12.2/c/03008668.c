/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03008668; name: FUN_03008668
 */


void FUN_03008668(long param_1,uint param_2,int param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 uVar13;
  
  if (param_3 < 1) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0x15dc);
  param_3 = param_3 + param_2;
  if (*(char *)(param_1 + 0x1688) == '\0') {
    lVar5 = (long)(int)param_2;
    uVar6 = -(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | (ulong)param_2 << 5;
    lVar9 = lVar5;
    do {
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar9 * *(int *)(param_1 + 0x74));
      uVar4 = *(undefined4 *)(puVar11 + 1);
      uVar13 = *puVar11;
      lVar9 = lVar9 + 1;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x108) + uVar6);
      puVar11[1] = CONCAT44(uVar4,uVar4);
      *puVar11 = uVar13;
      uVar6 = uVar6 + 0x20;
    } while (param_3 != lVar9);
    if (*pcVar1 != '\0') {
      do {
        puVar11 = (undefined8 *)(lVar5 * *(int *)(param_1 + 0xa4) + *(long *)(param_1 + 0x98));
        uVar13 = *puVar11;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x118) + lVar5 * 0x10);
        puVar3[1] = puVar11[1];
        *puVar3 = uVar13;
        lVar5 = lVar5 + 1;
      } while (param_3 != lVar5);
    }
  }
  else {
    lVar5 = (long)(int)param_2;
    lVar9 = lVar5;
    do {
      lVar8 = (long)*(int *)(*(long *)(param_1 + 0x16a8) + lVar9 * 4);
      lVar9 = lVar9 + 1;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x68) + *(int *)(param_1 + 0x74) * lVar8);
      uVar4 = *(undefined4 *)(puVar11 + 1);
      uVar13 = *puVar11;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x108) + lVar8 * 0x20);
      puVar11[1] = CONCAT44(uVar4,uVar4);
      *puVar11 = uVar13;
    } while (param_3 != lVar9);
    if (*pcVar1 != '\0') {
      do {
        lVar9 = (long)*(int *)(*(long *)(param_1 + 0x16a8) + lVar5 * 4);
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x98) + *(int *)(param_1 + 0xa4) * lVar9);
        uVar13 = *puVar11;
        lVar5 = lVar5 + 1;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x118) + lVar9 * 0x10);
        puVar3[1] = puVar11[1];
        *puVar3 = uVar13;
      } while (param_3 != lVar5);
    }
  }
  lVar5 = (long)param_3;
  lVar9 = (long)(int)param_2;
  uVar4 = 0x3a7f7f7f;
  if (*pcVar1 != '\0') {
    uVar4 = 0x7f7f7f;
  }
  lVar7 = lVar9 * 0x14;
  lVar8 = lVar9;
  do {
    lVar8 = lVar8 + 1;
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x15c0) + lVar7);
    lVar7 = lVar7 + 0x14;
    puVar2[4] = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *puVar2 = uVar4;
    puVar2[1] = 0;
  } while (lVar8 < lVar5);
  lVar8 = *(long *)(param_1 + 0x1670);
  if (lVar8 != 0) {
    fVar12 = *(float *)(lVar8 + 0x40);
    lVar10 = lVar9 * 6;
    lVar7 = lVar9;
    do {
      lVar7 = lVar7 + 1;
      puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x20) + lVar10);
      lVar10 = lVar10 + 6;
      *puVar2 = 0;
      *(char *)((long)puVar2 + 5) = (fVar12 == 0.0) << 2;
    } while (lVar7 < lVar5);
    lVar7 = lVar9 << 4;
    do {
      lVar9 = lVar9 + 1;
      puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar7);
      lVar7 = lVar7 + 0x10;
      *(undefined8 *)((long)puVar11 + 5) = 0;
      *puVar11 = 0;
    } while (lVar9 < lVar5);
  }
  FUN_0300ae8c(*(undefined8 *)(param_1 + 0x1678));
  return;
}


