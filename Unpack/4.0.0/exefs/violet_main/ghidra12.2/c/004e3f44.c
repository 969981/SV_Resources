/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e3f44; name: FUN_004e3f44
 */


long FUN_004e3f44(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  lVar3 = FUN_00534808(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = (uint)lVar3;
    if ((int)uVar5 < 0) {
      uVar6 = 0xb;
    }
    else {
      uVar6 = (ulong)((((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
  }
  lVar3 = uVar6 + lVar3;
  *(uint *)(param_1 + 0x28) = uVar5;
  lVar4 = FUN_00534808(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)lVar4;
    if ((int)uVar5 < 0) {
      uVar6 = 0xb;
    }
    else {
      uVar6 = (ulong)((((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar3 = uVar6 + lVar3;
  }
  *(uint *)(param_1 + 0x40) = uVar5;
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  lVar3 = lVar3 + lVar4 + uVar6;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar7 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar7 = puVar7 + 1;
      bVar2 = *(byte *)*puVar7;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar7 + 8);
      }
      uVar6 = uVar6 - 1;
      lVar3 = uVar1 + lVar3 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar6 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 3) != 0) {
    if ((uVar5 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x60);
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(*(byte **)(param_1 + 0x60) + 8);
      }
      lVar3 = lVar3 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x68);
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(*(byte **)(param_1 + 0x68) + 8);
      }
      lVar3 = lVar3 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar3;
    return lVar3;
  }
  lVar3 = FUN_0051d510((byte *)(param_1 + 8),lVar3,param_1 + 0x14);
  return lVar3;
}


