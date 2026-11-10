/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00687be8; name: FUN_00687be8
 */


long FUN_00687be8(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar5 = (long)*(int *)(param_1 + 0x18);
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar5 = 0;
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  else {
    lVar7 = lVar5 << 3;
    do {
      lVar3 = FUN_006871c4(*puVar6);
      lVar5 = lVar3 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar4 = 0xb;
    }
    else {
      uVar4 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar5 = uVar4 + lVar5;
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
    lVar5 = uVar4 + lVar5;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar5;
  return lVar5;
}


