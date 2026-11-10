/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068a1ec; name: FUN_0068a1ec
 */


long FUN_0068a1ec(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  lVar2 = (long)*(int *)(param_1 + 0x18);
  plVar3 = (long *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = lVar2 << 3;
    do {
      lVar5 = *plVar3;
      pbVar7 = *(byte **)(lVar5 + 0x10);
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 != 0) goto LAB_0068a220;
LAB_0068a264:
        lVar6 = 0;
        uVar8 = *(ulong *)(lVar5 + 8);
      }
      else {
        if (*(long *)(pbVar7 + 8) == 0) goto LAB_0068a264;
LAB_0068a220:
        uVar8 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar8 = *(ulong *)(pbVar7 + 8);
        }
        lVar6 = uVar8 + (((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        uVar8 = *(ulong *)(lVar5 + 8);
      }
      if ((uVar8 & 1) != 0) {
        bVar1 = *(byte *)((uVar8 & 0xfffffffffffffffe) + 8);
        if ((bVar1 & 1) == 0) {
          uVar8 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar8 = *(ulong *)((uVar8 & 0xfffffffffffffffe) + 0x10);
        }
        lVar6 = uVar8 + lVar6;
      }
      *(uint *)(lVar5 + 0x18) = (uint)lVar6;
      lVar2 = lVar6 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)lVar2;
    return lVar2;
  }
  uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar8 + 8);
  if ((bVar1 & 1) == 0) {
    uVar8 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar8 = *(ulong *)(uVar8 + 0x10);
  }
  *(int *)(param_1 + 0x28) = (int)(uVar8 + lVar2);
  return uVar8 + lVar2;
}


