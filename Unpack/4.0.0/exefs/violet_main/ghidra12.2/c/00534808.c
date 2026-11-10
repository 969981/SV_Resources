/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00534808; name: FUN_00534808
 */


long FUN_00534808(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar4 = *param_1;
  uVar6 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    return 0;
  }
  if (uVar4 < 4) {
    uVar9 = 0;
    lVar5 = 0;
  }
  else {
    uVar9 = uVar6 & 0xfffffffc;
    lVar7 = 0;
    lVar11 = 0;
    lVar10 = 0;
    lVar5 = 0;
    puVar8 = (uint *)(*(long *)(param_1 + 2) + 8);
    uVar12 = uVar9;
    do {
      uVar4 = 10;
      if (-1 < (int)puVar8[-2]) {
        uVar4 = ((uint)LZCOUNT(puVar8[-2] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar1 = 10;
      if (-1 < (int)puVar8[-1]) {
        uVar1 = ((uint)LZCOUNT(puVar8[-1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar2 = 10;
      if (-1 < (int)*puVar8) {
        uVar2 = ((uint)LZCOUNT(*puVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      uVar3 = 10;
      if (-1 < (int)puVar8[1]) {
        uVar3 = ((uint)LZCOUNT(puVar8[1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
      }
      lVar7 = lVar7 + (ulong)uVar4;
      lVar11 = lVar11 + (ulong)uVar1;
      lVar10 = lVar10 + (ulong)uVar2;
      lVar5 = lVar5 + (ulong)uVar3;
      uVar12 = uVar12 - 4;
      puVar8 = puVar8 + 4;
    } while (uVar12 != 0);
    lVar5 = lVar5 + lVar10 + lVar11 + lVar7;
    if (uVar9 == uVar6) {
      return lVar5;
    }
  }
  puVar8 = (uint *)(*(long *)(param_1 + 2) + uVar9 * 4);
  lVar7 = uVar6 - uVar9;
  do {
    if ((int)*puVar8 < 0) {
      uVar6 = 10;
    }
    else {
      uVar6 = (ulong)(((uint)LZCOUNT(*puVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    lVar5 = uVar6 + lVar5;
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return lVar5;
}


