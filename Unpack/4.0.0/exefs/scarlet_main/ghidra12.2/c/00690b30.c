/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00690b30; name: FUN_00690b30
 */


ulong FUN_00690b30(undefined *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  uVar7 = uVar4;
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    pbVar6 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar6;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar5 = puVar5 + 1;
      bVar2 = *(byte *)*puVar5;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar5 + 8);
      }
      uVar4 = uVar4 - 1;
      uVar7 = uVar1 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar4 != 0);
    pbVar6 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar6;
  }
  if ((bVar2 & 1) == 0) {
    uVar4 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar6 + 8);
  }
  if (uVar4 != 0) {
    uVar4 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar6 + 8);
    }
    uVar7 = uVar7 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((param_1 != PTR_DAT_047cf660) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar3 = FUN_00534fa0();
    uVar7 = uVar7 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
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
    uVar7 = uVar4 + uVar7;
  }
  *(int *)(param_1 + 0x38) = (int)uVar7;
  return uVar7;
}


