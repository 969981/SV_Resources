/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006991a4; name: FUN_006991a4
 */


long FUN_006991a4(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 == PTR_DAT_047cf7e0) {
    lVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar2 = 0;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar2 = FUN_0068de28();
      lVar2 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 != 0) {
      lVar3 = FUN_00534fa0();
      lVar2 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = FUN_006854d0();
      lVar2 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar4 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar2 = uVar4 + lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}


