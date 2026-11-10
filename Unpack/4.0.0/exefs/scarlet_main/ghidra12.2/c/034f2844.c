/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f2844; name: FUN_034f2844
 */


void FUN_034f2844(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (((((param_1 & 1) != 0) && (DAT_048b0810 != 0)) && (DAT_048b084c == '\0')) &&
     (uVar4 = DAT_048b0810 - 1, -1 < (int)uVar4)) {
    do {
      lVar2 = *(long *)(DAT_048b0808 + (ulong)uVar4 * 8);
      for (lVar3 = *(long *)(lVar2 + 0x20); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
        if ((((~*(byte *)(lVar3 + 0x1d8) & 3) != 0) && ((*(byte *)(lVar3 + 0x1d8) >> 2 & 1) == 0))
           && ((*(byte *)(*(long *)(lVar3 + 400) + 0x50) >> 2 & 1) != 0)) {
          FUN_03505910(lVar2,lVar3);
        }
      }
      FUN_03506548(lVar2);
      if (((*(long *)(lVar2 + 0x28) == 0) &&
          ((*(long *)(lVar2 + 0x60) == 0 || (*(long *)(*(long *)(lVar2 + 0x60) + 0xa0) == 0)))) &&
         (lVar3 = FUN_0349fff0(lVar2 + 0x60), lVar3 != 0)) {
        FUN_034ecd0c(lVar2,lVar3);
      }
      uVar4 = uVar4 - 1;
      uVar1 = DAT_048b0810;
    } while (-1 < (int)uVar4);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      lVar3 = *(long *)(DAT_048b0808 + (ulong)uVar1 * 8);
      FUN_03504fb0(lVar3);
      if (DAT_048b0848 == '\x01') {
        for (lVar2 = *(long *)(lVar3 + 0x20); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
          if (((*(byte *)(lVar2 + 0x1d8) >> 2 & 1) != 0) && ((*(byte *)(lVar2 + 0x1d8) & 3) != 3)) {
            FUN_03505910(lVar3,lVar2);
          }
        }
      }
    }
  }
  return;
}


