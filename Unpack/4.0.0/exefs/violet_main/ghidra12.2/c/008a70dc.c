/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a70dc; name: FUN_008a70dc
 */


bool FUN_008a70dc(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    bVar3 = false;
    bVar2 = *(byte *)(param_1 + 0x62);
  }
  else {
    bVar3 = *(char *)(param_1 + 0x5a) != '\0';
    bVar2 = *(byte *)(param_1 + 0x62);
  }
  if ((bVar2 >> 1 & 1) == 0) {
    return bVar3;
  }
  lVar5 = *(long *)(param_1 + 0xa8) + 0xc;
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
  lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + (ulong)uVar1 + 4 +
                                                     (ulong)*(byte *)(lVar5 + (ulong)(*(int *)(lVar5
                                                                                              + (
                                                  ulong)uVar1 + 4) + uVar1) + 0xc) * 4) + uVar1) + 8
                   );
  if ((*(long *)(lVar5 + 0x58) == 0) || ((*(byte *)(lVar5 + 0x228) >> 2 & 1) != 0)) {
    bVar4 = false;
    lVar6 = *(long *)(lVar5 + 8);
  }
  else if ((*(byte *)(*(long *)(lVar5 + 0x58) + 8) >> 5 & 1) == 0) {
    bVar4 = false;
    lVar6 = *(long *)(lVar5 + 8);
  }
  else {
    bVar4 = *(char *)(lVar5 + 0x98) == '\0';
    lVar6 = *(long *)(lVar5 + 8);
  }
  if (lVar6 == 0) {
    return (bool)(bVar3 | bVar4);
  }
  if (((*(byte *)(lVar5 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar6 + 4) >> 1 & 1) != 0)) {
    return (bool)(bVar3 | bVar4 | *(char *)(lVar5 + 0x54) == '\0');
  }
  return (bool)(bVar3 | bVar4);
}


