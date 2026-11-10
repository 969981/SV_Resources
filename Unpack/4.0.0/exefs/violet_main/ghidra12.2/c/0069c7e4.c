/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069c7e4; name: FUN_0069c7e4
 */


long FUN_0069c7e4(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_0069c7f8;
LAB_0069c848:
    lVar3 = 0;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar5 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) != 0) goto LAB_0069c858;
LAB_0069c834:
    uVar6 = uVar5 >> 1;
  }
  else {
    if (*(long *)(pbVar4 + 8) == 0) goto LAB_0069c848;
LAB_0069c7f8:
    uVar5 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar3 = uVar5 + (((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar4 = *(byte **)(param_1 + 0x18);
    uVar5 = (ulong)*pbVar4;
    if ((*pbVar4 & 1) == 0) goto LAB_0069c834;
LAB_0069c858:
    uVar6 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar6 != 0) {
    uVar6 = uVar5 >> 1;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)(pbVar4 + 8);
    }
    lVar3 = lVar3 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x20);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0069c8e8;
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_0069c8e8;
  uVar5 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  lVar3 = lVar3 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0069c8e8:
  lVar1 = lVar3 + 2;
  if (*(int *)(param_1 + 0x30) != 3) {
    lVar1 = lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x2c) = (int)lVar1;
    return lVar1;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar5 + 8);
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(uVar5 + 0x10);
  }
  *(int *)(param_1 + 0x2c) = (int)(uVar5 + lVar1);
  return uVar5 + lVar1;
}


