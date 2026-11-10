/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071c46c; name: FUN_0071c46c
 */


long FUN_0071c46c(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_0071c48c;
LAB_0071c4dc:
    lVar7 = 0;
    pbVar5 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) != 0) goto LAB_0071c4ec;
LAB_0071c4c8:
    uVar6 = uVar4 >> 1;
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_0071c4dc;
LAB_0071c48c:
    uVar4 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar5 + 8);
    }
    lVar7 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar5 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar5;
    if ((*pbVar5 & 1) == 0) goto LAB_0071c4c8;
LAB_0071c4ec:
    uVar6 = *(ulong *)(pbVar5 + 8);
  }
  if (uVar6 != 0) {
    uVar6 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar6 = *(ulong *)(pbVar5 + 8);
    }
    lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar5 = *(byte **)(param_1 + 0x20);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0071c57c;
  }
  else if (*(long *)(pbVar5 + 8) == 0) goto LAB_0071c57c;
  uVar4 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar5 + 8);
  }
  lVar7 = lVar7 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0071c57c:
  if ((param_1 != PTR_DAT_047cffc8) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar3 = FUN_00514094();
    lVar7 = lVar7 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar4 = 0xb;
    }
    else {
      uVar4 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar7 = uVar4 + lVar7;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar4 + 8);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar7 = uVar4 + lVar7;
  }
  *(int *)(param_1 + 0x34) = (int)lVar7;
  return lVar7;
}


