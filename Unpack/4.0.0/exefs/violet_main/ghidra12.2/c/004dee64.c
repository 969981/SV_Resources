/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004dee64; name: FUN_004dee64
 */


long FUN_004dee64(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = FUN_00528970(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = lVar2 + (long)iVar1 * 2;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (iVar1 != 0) {
    lVar5 = (long)iVar1 << 3;
    do {
      lVar3 = FUN_004e2d80(*puVar4);
      lVar2 = lVar3 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x40) = (int)lVar2;
    return lVar2;
  }
  lVar2 = FUN_0051d510((byte *)(param_1 + 8),lVar2,param_1 + 0x40);
  return lVar2;
}


