/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e2d80; name: FUN_004e2d80
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_004e2d80(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = (long)*(int *)(param_1 + 0x20);
  plVar7 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar6 = 0;
  }
  else {
    lVar8 = lVar6 << 3;
    do {
      lVar5 = *plVar7;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((~uVar2 & 3) == 0) {
        bVar3 = **(byte **)(lVar5 + 0x18);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(ulong *)(*(byte **)(lVar5 + 0x18) + 8);
        }
        lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 3;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar4 = 0;
        }
        else {
          bVar3 = **(byte **)(lVar5 + 0x18);
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(*(byte **)(lVar5 + 0x18) + 8);
          }
          lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 & 2) != 0) {
          lVar4 = lVar4 + 2;
        }
      }
      if ((*(byte *)(lVar5 + 8) & 1) == 0) {
        *(int *)(lVar5 + 0x14) = (int)lVar4;
      }
      else {
        lVar4 = FUN_0051d510((byte *)(lVar5 + 8),lVar4,lVar5 + 0x14);
      }
      lVar6 = lVar4 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x30) + 8);
      }
      lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x38);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x38) + 8);
      }
      lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x40);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x40) + 8);
      }
      lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar6 = lVar6 + ((LZCOUNT(*(ulong *)(param_1 + 0x48) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = lVar6 + ((LZCOUNT(*(ulong *)(param_1 + 0x50) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 & 0x20) != 0) {
      lVar6 = lVar6 + 9;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar6;
    return lVar6;
  }
  lVar6 = FUN_0051d510((byte *)(param_1 + 8),lVar6,param_1 + 0x14);
  return lVar6;
}


