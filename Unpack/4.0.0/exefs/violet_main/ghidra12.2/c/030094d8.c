/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030094d8; name: FUN_030094d8
 */


void FUN_030094d8(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x15d4);
  if ((int)*(uint *)(param_1 + 0x15d4) < 1) {
    return;
  }
  if (*(char *)(param_1 + 0x1688) == '\0') {
    cVar10 = '\0';
    uVar5 = 0;
    while( true ) {
      if (cVar10 == '\0') {
        uVar8 = uVar5 & 0xffffffff;
      }
      else {
        uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x16a8) + uVar5 * 4);
      }
      uVar8 = -(uVar8 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x108) + uVar8);
      uVar14 = puVar3[1];
      uVar13 = *puVar3;
      uVar15 = *param_2;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x108) + uVar8);
      puVar3[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                           (float)uVar14 + (float)param_2[1]);
      *puVar3 = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar15 >> 0x20),
                         (float)uVar13 + (float)uVar15);
      if (uVar2 - 1 == uVar5) break;
      cVar10 = *(char *)(param_1 + 0x1688);
      uVar5 = uVar5 + 1;
    }
  }
  else {
    lVar4 = 0;
    lVar7 = 0;
    iVar9 = 0;
    cVar10 = '\x01';
    while( true ) {
      if ((cVar10 == '\0') || (*(char *)(*(long *)(param_1 + 0x1690) + lVar7) != '\0')) {
        iVar9 = iVar9 + 1;
        uVar15 = *param_2;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x108) + lVar4);
        uVar14 = puVar3[1];
        uVar13 = *puVar3;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x108) + lVar4);
        puVar3[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                             (float)uVar14 + (float)param_2[1]);
        *puVar3 = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar15 >> 0x20),
                           (float)uVar13 + (float)uVar15);
        uVar2 = (ulong)*(uint *)(param_1 + 0x15d4);
      }
      if ((int)uVar2 <= iVar9) break;
      cVar10 = *(char *)(param_1 + 0x1688);
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x20;
    }
  }
  uVar13 = *param_2;
  lVar7 = *(long *)(param_1 + 0x16d0);
  *(ulong *)(param_1 + 0x1608) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1608) >> 0x20) +
                (float)((ulong)param_2[1] >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x1608) + (float)param_2[1]);
  *(ulong *)(param_1 + 0x1600) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1600) >> 0x20) +
                (float)((ulong)uVar13 >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x1600) + (float)uVar13);
  uVar13 = *param_2;
  *(ulong *)(param_1 + 0x1618) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1618) >> 0x20) +
                (float)((ulong)param_2[1] >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x1618) + (float)param_2[1]);
  *(ulong *)(param_1 + 0x1610) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1610) >> 0x20) +
                (float)((ulong)uVar13 >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x1610) + (float)uVar13);
  lVar4 = *(long *)(param_1 + 0x16d8);
  iVar9 = *(int *)(lVar4 + 4);
  if ((lVar7 != lVar4) || (iVar9 != 0)) {
    iVar11 = 0;
    do {
      lVar12 = lVar7 + (long)iVar11 * 0x30;
      uVar13 = *param_2;
      iVar1 = iVar11 + 1;
      *(ulong *)(lVar12 + 0x18) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x18) >> 0x20) +
                    (float)((ulong)param_2[1] >> 0x20),
                    (float)*(undefined8 *)(lVar12 + 0x18) + (float)param_2[1]);
      *(ulong *)(lVar12 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) +
                    (float)((ulong)uVar13 >> 0x20),
                    (float)*(undefined8 *)(lVar12 + 0x10) + (float)uVar13);
      uVar13 = *param_2;
      *(ulong *)(lVar12 + 0x28) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x28) >> 0x20) +
                    (float)((ulong)param_2[1] >> 0x20),
                    (float)*(undefined8 *)(lVar12 + 0x28) + (float)param_2[1]);
      *(ulong *)(lVar12 + 0x20) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20) +
                    (float)((ulong)uVar13 >> 0x20),
                    (float)*(undefined8 *)(lVar12 + 0x20) + (float)uVar13);
      if ((0xe < iVar11) || (iVar11 = iVar1, *(int *)(lVar7 + 4) <= iVar1)) {
        iVar11 = iVar1;
        if (*(long *)(lVar7 + 8) != 0) {
          iVar11 = 0;
          lVar7 = *(long *)(lVar7 + 8);
        }
      }
    } while ((lVar7 != lVar4) || (iVar9 != iVar11));
  }
  if (*(int *)(param_1 + 0x16e8) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x16e0);
    puVar6 = puVar3 + (long)*(int *)(param_1 + 0x16e8) * 6;
    do {
      uVar13 = *param_2;
      puVar3[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                           (float)puVar3[1] + (float)param_2[1]);
      *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                         (float)*puVar3 + (float)uVar13);
      uVar13 = *param_2;
      puVar3[3] = CONCAT44((float)((ulong)puVar3[3] >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                           (float)puVar3[3] + (float)param_2[1]);
      puVar3[2] = CONCAT44((float)((ulong)puVar3[2] >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                           (float)puVar3[2] + (float)uVar13);
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar6);
  }
  if ((*(long *)(param_1 + 0x1660) != 0) && (*(char *)(param_1 + 0x1668) == '\0')) {
    FUN_0325bafc(*(long *)(param_1 + 0x1660),param_2);
  }
  FUN_0300afc4(*(undefined8 *)(param_1 + 0x1678),param_2);
  return;
}


