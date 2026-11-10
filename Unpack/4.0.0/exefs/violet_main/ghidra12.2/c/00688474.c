/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00688474; name: FUN_00688474
 */


long FUN_00688474(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_1 == PTR_DAT_047cf5a8) {
    lVar4 = 0;
    goto LAB_00688568;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    pbVar5 = *(byte **)(lVar4 + 0x10);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 != 0) goto LAB_006884ac;
LAB_00688508:
      lVar3 = 0;
      uVar6 = *(ulong *)(lVar4 + 8);
    }
    else {
      if (*(long *)(pbVar5 + 8) == 0) goto LAB_00688508;
LAB_006884ac:
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar5 + 8);
      }
      lVar3 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar6 = *(ulong *)(lVar4 + 8);
    }
    if ((uVar6 & 1) != 0) {
      bVar2 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
      if ((bVar2 & 1) == 0) {
        uVar6 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar6 = *(ulong *)((uVar6 & 0xfffffffffffffffe) + 0x10);
      }
      lVar3 = uVar6 + lVar3;
    }
    *(uint *)(lVar4 + 0x18) = (uint)lVar3;
    lVar4 = lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if (lVar3 != 0) {
    lVar3 = FUN_002690b8();
    lVar4 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
LAB_00688568:
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar6 = 0xb;
    }
    else {
      uVar6 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar4 = uVar6 + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar6 + 8);
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar6 + 0x10);
    }
    lVar4 = uVar6 + lVar4;
  }
  *(int *)(param_1 + 0x24) = (int)lVar4;
  return lVar4;
}


