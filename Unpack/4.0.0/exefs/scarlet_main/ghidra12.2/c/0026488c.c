/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026488c; name: FUN_0026488c
 */


long FUN_0026488c(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar6 = (long)*(int *)(param_1 + 0x18);
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar4;
  }
  else {
    lVar8 = lVar6 << 3;
    do {
      lVar3 = FUN_0049eecc(*puVar7);
      lVar6 = lVar3 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar8 = lVar8 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
    pbVar4 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar4;
  }
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar5 != 0) {
    uVar5 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar4 + 8);
    }
    lVar6 = lVar6 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar5 = 0xb;
    }
    else {
      uVar5 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar6 = uVar5 + lVar6;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x34) = (int)lVar6;
    return lVar6;
  }
  lVar6 = FUN_0051d510((byte *)(param_1 + 8),lVar6,param_1 + 0x34);
  return lVar6;
}


