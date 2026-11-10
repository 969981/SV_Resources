/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057d458; name: FUN_0057d458
 */


long FUN_0057d458(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 == PTR_DAT_047ce360) {
    lVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar2 = 0;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar2 = FUN_00577bfc();
      lVar2 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 != 0) {
      lVar3 = FUN_00534fa0();
      lVar2 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x1c) == 2) {
        lVar4 = FUN_00514094(*(undefined8 *)(lVar3 + 0x10));
        lVar4 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      }
      else if (*(int *)(lVar3 + 0x1c) == 1) {
        lVar4 = 2;
      }
      else {
        lVar4 = 0;
      }
      if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
        uVar5 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffe;
        bVar1 = *(byte *)(uVar5 + 8);
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar5 = *(ulong *)(uVar5 + 0x10);
        }
        lVar4 = uVar5 + lVar4;
      }
      *(uint *)(lVar3 + 0x18) = (uint)lVar4;
      lVar2 = lVar2 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar5 + 8);
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    lVar2 = uVar5 + lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}


