/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a8660; name: FUN_008a8660
 */


undefined8 FUN_008a8660(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if ((bVar2 & 1) == 0) {
    bVar4 = false;
    bVar3 = *(byte *)(param_1 + 0x62);
  }
  else {
    bVar4 = *(char *)(param_1 + 0x5a) != '\0';
    bVar3 = *(byte *)(param_1 + 0x62);
  }
  if ((bVar3 >> 1 & 1) == 0) {
    if (bVar4) {
      return 0;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + (ulong)uVar1 + 4 +
                                                       (ulong)*(byte *)(lVar6 + (ulong)(*(int *)(
                                                  lVar6 + (ulong)uVar1 + 4) + uVar1) + 0xc) * 4) +
                                     uVar1) + 8);
    if ((*(long *)(lVar6 + 0x58) == 0) || ((*(byte *)(lVar6 + 0x228) >> 2 & 1) != 0)) {
      bVar5 = false;
      lVar7 = *(long *)(lVar6 + 8);
    }
    else if ((*(byte *)(*(long *)(lVar6 + 0x58) + 8) >> 5 & 1) == 0) {
      bVar5 = false;
      lVar7 = *(long *)(lVar6 + 8);
    }
    else {
      bVar5 = *(char *)(lVar6 + 0x98) == '\0';
      lVar7 = *(long *)(lVar6 + 8);
    }
    if (((lVar7 != 0) && ((*(byte *)(lVar6 + 0x228) >> 2 & 1) == 0)) &&
       ((*(byte *)(lVar7 + 4) >> 1 & 1) != 0)) {
      bVar5 = bVar5 || *(char *)(lVar6 + 0x54) == '\0';
    }
    if (bVar4 || bVar5) {
      return 0;
    }
  }
  if ((bVar2 >> 1 & 1) == 0) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xef;
    return 1;
  }
  *(byte *)(param_1 + 0x58) = bVar2 & 0x7f;
  return 1;
}


