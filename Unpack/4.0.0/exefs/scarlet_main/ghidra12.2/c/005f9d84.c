/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f9d84; name: FUN_005f9d84
 */


void FUN_005f9d84(undefined *param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar7 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar7;
  if ((int)uVar7 < 1) {
    pbVar6 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar6;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    uVar8 = uVar4;
    do {
      puVar5 = puVar5 + 1;
      bVar2 = *(byte *)*puVar5;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar5 + 8);
      }
      uVar4 = uVar4 - 1;
      uVar8 = uVar1 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      uVar7 = (uint)uVar8;
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
    uVar3 = (uint)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar3 = (uint)*(undefined8 *)(pbVar6 + 8);
    }
    uVar7 = uVar7 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((param_1 != PTR_DAT_047cebe0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar3 = FUN_00607e64();
    uVar7 = uVar7 + uVar3 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x38] != '\0') {
    uVar7 = uVar7 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(uint *)(param_1 + 0x3c) = uVar7;
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar2 = *(byte *)(uVar4 + 8);
  if ((bVar2 & 1) == 0) {
    uVar3 = (uint)(bVar2 >> 1);
  }
  else {
    uVar3 = (uint)*(undefined8 *)(uVar4 + 0x10);
  }
  *(uint *)(param_1 + 0x3c) = uVar3 + uVar7;
  return;
}


