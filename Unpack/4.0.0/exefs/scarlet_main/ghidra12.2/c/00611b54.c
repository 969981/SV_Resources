/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00611b54; name: FUN_00611b54
 */


long FUN_00611b54(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar6 = (ulong)uVar1;
    lVar4 = uVar3 + uVar6;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    uVar7 = uVar3;
    do {
      puVar5 = puVar5 + 1;
      bVar2 = *(byte *)*puVar5;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)((byte *)*puVar5 + 8);
      }
      uVar3 = uVar3 - 1;
      uVar7 = uVar6 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar3 != 0);
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar6 = (ulong)uVar1;
    lVar4 = uVar7 + uVar6;
  }
  if (0 < (int)uVar1) {
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar5 = puVar5 + 1;
      bVar2 = *(byte *)*puVar5;
      uVar3 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar3 = *(ulong *)((byte *)*puVar5 + 8);
      }
      uVar6 = uVar6 - 1;
      lVar4 = uVar3 + lVar4 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar6 != 0);
  }
  pbVar8 = *(byte **)(param_1 + 0x40);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_00611c70;
  }
  else if (*(long *)(pbVar8 + 8) == 0) goto LAB_00611c70;
  uVar3 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar8 + 8);
  }
  lVar4 = lVar4 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_00611c70:
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar4 = lVar4 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x4c) = (int)lVar4;
    return lVar4;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar3 + 8);
  if ((bVar2 & 1) == 0) {
    uVar3 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(uVar3 + 0x10);
  }
  *(int *)(param_1 + 0x4c) = (int)(uVar3 + lVar4);
  return uVar3 + lVar4;
}


