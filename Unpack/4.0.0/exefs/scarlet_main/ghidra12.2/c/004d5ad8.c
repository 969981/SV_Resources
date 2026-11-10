/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d5ad8; name: FUN_004d5ad8
 */


undefined8 FUN_004d5ad8(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_00524cc0(lVar7 + 0x10);
  if ((uVar3 & 1) == 0) {
LAB_004d5b5c:
    uVar4 = 0;
  }
  else {
    if ((int)*(uint *)(lVar7 + 0x30) < 1) {
      return 1;
    }
    uVar4 = 1;
    uVar3 = (ulong)*(uint *)(lVar7 + 0x30);
    do {
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + (uVar3 - 1) * 8 + 8);
      lVar6 = (long)*(int *)(lVar5 + 0x20);
      while (0 < lVar6) {
        lVar2 = lVar6 * 8;
        lVar6 = lVar6 + -1;
        if ((~*(uint *)(*(long *)(*(long *)(lVar5 + 0x28) + lVar2) + 0x10) & 3) != 0)
        goto LAB_004d5b5c;
      }
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return uVar4;
}


