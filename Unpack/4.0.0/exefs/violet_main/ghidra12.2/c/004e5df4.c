/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e5df4; name: FUN_004e5df4
 */


long FUN_004e5df4(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar3 = 0;
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    lVar5 = lVar3 << 3;
    do {
      lVar2 = FUN_004e5434(*puVar4);
      lVar3 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)lVar3;
    return lVar3;
  }
  lVar3 = FUN_0051d510(param_1 + 8,lVar3,param_1 + 0x28);
  return lVar3;
}


