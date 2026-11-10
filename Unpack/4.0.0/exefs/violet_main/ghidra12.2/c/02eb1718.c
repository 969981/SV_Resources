/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb1718; name: FUN_02eb1718
 */


void FUN_02eb1718(long *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  
  uVar5 = *(uint *)(param_1 + 2);
  iVar2 = param_3 + 0x1f >> 5;
  *(int *)(param_1 + 2) = param_3;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    FUN_02eb1f88(param_1,PTR_PTR_047d1a50,(long)iVar2);
  }
  if ((int)param_1[1] != iVar2) {
    *(int *)(param_1 + 1) = iVar2;
  }
  uVar1 = *(uint *)(param_1 + 2) & (int)*(uint *)(param_1 + 2) >> 0x1f;
  if ((int)param_2 < (int)uVar1) {
    lVar16 = *param_1;
    uVar3 = (int)uVar1 >> 5;
    uVar6 = -1 << (ulong)(uVar1 & 0x1f);
    uVar4 = (int)param_2 >> 5;
    uVar7 = -1 << (ulong)(param_2 & 0x1f);
    uVar8 = ~uVar6;
    uVar9 = -param_4;
    if (uVar3 == uVar4) {
      uVar7 = uVar7 & uVar8;
      if (uVar7 != 0) {
        *(uint *)(lVar16 + (long)(int)uVar4 * 4) =
             *(uint *)(lVar16 + (long)(int)uVar4 * 4) & (uVar7 ^ 0xffffffff) | uVar7 & uVar9;
      }
    }
    else {
      *(uint *)(lVar16 + (long)(int)uVar4 * 4) =
           *(uint *)(lVar16 + (long)(int)uVar4 * 4) & (uVar7 ^ 0xffffffff) | uVar7 & uVar9;
      if ((uVar1 & 0x1f) != 0) {
        *(uint *)(lVar16 + (long)(int)uVar3 * 4) =
             *(uint *)(lVar16 + (long)(int)uVar3 * 4) & uVar6 | uVar8 & uVar9;
      }
      uVar17 = (long)(int)uVar3 + (long)(int)~uVar4;
      puVar15 = (uint *)(lVar16 + (long)(int)uVar4 * 4 + 4);
      puVar11 = puVar15;
      if (((ulong)puVar15 & 0xf) == 0) {
        uVar10 = uVar17;
      }
      else {
        uVar10 = 4 - (((ulong)puVar15 & 0xf) >> 2);
        uVar12 = uVar17;
        if (uVar10 <= uVar17) {
          uVar12 = uVar10;
        }
        uVar10 = uVar17 - uVar12;
        if ((long)uVar12 < 1) {
        }
        else {
          puVar13 = puVar15;
          do {
            puVar11 = puVar13 + 1;
            *puVar13 = uVar9;
            puVar13 = puVar11;
          } while (puVar11 < puVar15 + uVar12);
        }
      }
      if ((3 < uVar10) && (0 < (long)(uVar10 & 0xfffffffffffffffc))) {
        puVar13 = puVar11 + (uVar10 & 0xfffffffffffffffc);
        puVar14 = puVar11;
        do {
          puVar11 = puVar14 + 4;
          *(ulong *)(puVar14 + 2) = CONCAT44(uVar9,uVar9);
          *(ulong *)puVar14 = CONCAT44(uVar9,uVar9);
          puVar14 = puVar11;
        } while (puVar11 < puVar13);
      }
      for (; puVar11 < puVar15 + uVar17; puVar11 = puVar11 + 1) {
        *puVar11 = uVar9;
      }
    }
  }
  if ((int)uVar5 <= (int)param_2) {
    uVar5 = param_2;
  }
  uVar1 = (int)param_1[2] + 0x1f;
  if ((int)(uVar1 & 0xffffffe0) <= (int)uVar5) {
    return;
  }
  uVar1 = (int)uVar1 >> 5;
  uVar7 = (int)uVar5 >> 5;
  if (uVar1 == uVar7) {
    return;
  }
  uVar5 = -1 << (ulong)(uVar5 & 0x1f);
  uVar3 = -param_4;
  puVar15 = (uint *)(*param_1 + (long)(int)uVar7 * 4);
  puVar11 = puVar15 + 1;
  *puVar15 = *puVar15 & (uVar5 ^ 0xffffffff) | uVar5 & uVar3;
  iVar2 = uVar1 + ~uVar7;
  uVar17 = (ulong)iVar2;
  if (((ulong)puVar11 & 0xf) != 0) {
    uVar12 = 4 - (((ulong)puVar11 & 0xf) >> 2);
    uVar10 = uVar17;
    if (uVar12 <= uVar17) {
      uVar10 = uVar12;
    }
    uVar17 = uVar17 - uVar10;
    if (0 < (long)uVar10) {
      puVar13 = puVar11;
      do {
        puVar15 = puVar13 + 1;
        *puVar13 = uVar3;
        puVar13 = puVar15;
      } while (puVar15 < puVar11 + uVar10);
      goto LAB_02eb1940;
    }
  }
  puVar15 = puVar11;
LAB_02eb1940:
  if ((3 < uVar17) && (0 < (long)(uVar17 & 0xfffffffffffffffc))) {
    puVar13 = puVar15 + (uVar17 & 0xfffffffffffffffc);
    puVar14 = puVar15;
    do {
      puVar15 = puVar14 + 4;
      *(ulong *)(puVar14 + 2) = CONCAT44(uVar3,uVar3);
      *(ulong *)puVar14 = CONCAT44(uVar3,uVar3);
      puVar14 = puVar15;
    } while (puVar15 < puVar13);
  }
  for (; puVar15 < puVar11 + iVar2; puVar15 = puVar15 + 1) {
    *puVar15 = uVar3;
  }
  return;
}


