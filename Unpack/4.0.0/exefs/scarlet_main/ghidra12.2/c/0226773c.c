/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226773c; name: FUN_0226773c
 */


undefined8 FUN_0226773c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(ulong *)(param_1 + 0xf0) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if (((*(ulong *)(param_1 + 0x88) <= uVar2) ||
          ((*(ulong *)(*(long *)(param_1 + 0x80) + (uVar2 >> 3 & 0x1ffffffffffffff8)) >>
            (uVar2 & 0x3f) & 1) == 0)) && (*(char *)(*(long *)(param_1 + 0x48) + lVar1) != '\0')) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (*(ulong *)(param_1 + 0xf0) != uVar2);
  }
  return 0;
}


