/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004de54c; name: FUN_004de54c
 */


long FUN_004de54c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar4 = FUN_00528970(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar4 = lVar4 + (long)iVar3 * 2;
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    do {
      lVar5 = FUN_004e2d80(*puVar6);
      lVar4 = lVar5 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      uVar1 = 0xb;
      if ((*(uint *)(param_1 + 0x48) & 0x80000000) == 0) {
        uVar1 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x48) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar4 = uVar1 + lVar4;
    }
    if ((uVar2 & 2) != 0) {
      lVar4 = lVar4 + 2;
    }
    if ((uVar2 & 4) != 0) {
      lVar4 = lVar4 + 2;
    }
    if ((uVar2 & 8) != 0) {
      lVar4 = lVar4 + 2;
    }
    if ((uVar2 & 0x10) != 0) {
      lVar4 = lVar4 + 2;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      uVar1 = 0xb;
      if ((*(uint *)(param_1 + 0x50) & 0x80000000) == 0) {
        uVar1 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x50) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar4 = uVar1 + lVar4;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x2c) = (int)lVar4;
    return lVar4;
  }
  lVar4 = FUN_0051d510((byte *)(param_1 + 8),lVar4,param_1 + 0x2c);
  return lVar4;
}


