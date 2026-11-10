/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a71dc; name: FUN_008a71dc
 */


bool FUN_008a71dc(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  lVar3 = *(long *)(lVar3 + (ulong)(*(int *)(lVar3 + (ulong)uVar1 + 4 +
                                                     (ulong)*(byte *)(lVar3 + (ulong)(*(int *)(lVar3
                                                                                              + (
                                                  ulong)uVar1 + 4) + uVar1) + 0xc) * 4) + uVar1) + 8
                   );
  if ((*(long *)(lVar3 + 0x58) == 0) || ((*(byte *)(lVar3 + 0x228) >> 2 & 1) != 0)) {
    bVar2 = false;
    lVar4 = *(long *)(lVar3 + 8);
  }
  else if ((*(byte *)(*(long *)(lVar3 + 0x58) + 8) >> 5 & 1) == 0) {
    bVar2 = false;
    lVar4 = *(long *)(lVar3 + 8);
  }
  else {
    bVar2 = *(char *)(lVar3 + 0x98) == '\0';
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 == 0) {
    return bVar2;
  }
  if (((*(byte *)(lVar3 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar4 + 4) >> 1 & 1) != 0)) {
    return (bool)(bVar2 | *(char *)(lVar3 + 0x54) == '\0');
  }
  return bVar2;
}


