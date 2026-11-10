/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008155c0; name: FUN_008155c0
 */


undefined8 FUN_008155c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (((*(char *)(param_1 + 0x7c0) == '\x05') || (*(int *)(param_1 + 0x700) == 1)) ||
     ((*(char *)(param_1 + 0x7c0) != '\0' &&
      (uVar1 = FUN_0078b12c(*(long *)(param_1 + 0x6f8) + 0x498), (uVar1 & 1) == 0)))) {
    return 0;
  }
  if (1 < (ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
    lVar2 = 0;
    plVar3 = (long *)(*(long *)(param_1 + 0x860) + 8);
    do {
      if ((*plVar3 != 0) && ((char)plVar3[-1] != '\x04')) {
        return 0;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 0x16;
    } while (lVar2 < (long)((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1));
  }
  return 1;
}


