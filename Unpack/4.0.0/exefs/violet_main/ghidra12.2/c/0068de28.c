/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068de28; name: FUN_0068de28
 */


long FUN_0068de28(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_0068de94:
      lVar5 = 0;
      goto joined_r0x0068de84;
    }
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_0068de94;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar4 + 8);
  }
  lVar5 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
joined_r0x0068de84:
  if (param_1 != PTR_DAT_047cf618) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = FUN_0026aac8();
      lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar2 = FUN_00514094();
      lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar2 = FUN_00514094();
      lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar3 + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    lVar5 = uVar3 + lVar5;
  }
  *(int *)(param_1 + 0x30) = (int)lVar5;
  return lVar5;
}


