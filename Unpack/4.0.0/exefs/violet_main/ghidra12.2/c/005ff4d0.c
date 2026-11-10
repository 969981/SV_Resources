/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005ff4d0; name: FUN_005ff4d0
 */


long FUN_005ff4d0(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = (long)*(int *)(param_1 + 0x18);
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar4 = 0;
  }
  else {
    lVar6 = lVar4 << 3;
    do {
      lVar2 = FUN_0060f19c(*puVar5);
      lVar4 = lVar2 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  if ((param_1 != PTR_DAT_047cec50) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar6 = FUN_0060e4b0();
    lVar4 = lVar4 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
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
    lVar4 = uVar3 + lVar4;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}


