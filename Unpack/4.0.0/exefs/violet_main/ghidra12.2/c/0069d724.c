/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069d724; name: FUN_0069d724
 */


long FUN_0069d724(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_0069d738;
LAB_0069d788:
    lVar2 = 0;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) != 0) goto LAB_0069d798;
LAB_0069d774:
    uVar5 = uVar4 >> 1;
  }
  else {
    if (*(long *)(pbVar3 + 8) == 0) goto LAB_0069d788;
LAB_0069d738:
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) == 0) goto LAB_0069d774;
LAB_0069d798:
    uVar5 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar3 + 8);
    }
    lVar2 = lVar2 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0069d828;
  }
  else if (*(long *)(pbVar3 + 8) == 0) goto LAB_0069d828;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  lVar2 = lVar2 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0069d828:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)lVar2;
    return lVar2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(uVar4 + 0x10);
  }
  *(int *)(param_1 + 0x28) = (int)(uVar4 + lVar2);
  return uVar4 + lVar2;
}


