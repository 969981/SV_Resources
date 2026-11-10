/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00688cf8; name: FUN_00688cf8
 */


ulong FUN_00688cf8(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else if ((int)uVar1 < 0) {
    uVar4 = 0xb;
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    uVar4 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    iVar2 = *(int *)(param_1 + 0x24);
  }
  if (iVar2 != 2) goto LAB_00688de4;
  lVar5 = *(long *)(param_1 + 0x18);
  pbVar8 = *(byte **)(lVar5 + 0x10);
  bVar3 = *pbVar8;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_00688d6c;
LAB_00688db0:
    lVar7 = 0;
    uVar6 = *(ulong *)(lVar5 + 8);
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00688db0;
LAB_00688d6c:
    uVar6 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar6 = *(ulong *)(pbVar8 + 8);
    }
    lVar7 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar6 = *(ulong *)(lVar5 + 8);
  }
  if ((uVar6 & 1) != 0) {
    bVar3 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((bVar3 & 1) == 0) {
      uVar6 = (ulong)(bVar3 >> 1);
    }
    else {
      uVar6 = *(ulong *)((uVar6 & 0xfffffffffffffffe) + 0x10);
    }
    lVar7 = uVar6 + lVar7;
  }
  *(uint *)(lVar5 + 0x18) = (uint)lVar7;
  uVar4 = uVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_00688de4:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)uVar4;
    return uVar4;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar3 = *(byte *)(uVar6 + 8);
  if ((bVar3 & 1) == 0) {
    uVar6 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar6 = *(ulong *)(uVar6 + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(uVar6 + uVar4);
  return uVar6 + uVar4;
}


