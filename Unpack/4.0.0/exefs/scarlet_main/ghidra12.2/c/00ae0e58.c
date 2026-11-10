/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ae0e58; name: FUN_00ae0e58
 */


byte FUN_00ae0e58(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
    return 0;
  }
  if (((((*(char *)(lVar1 + 0x29ab) == '\0') && (*(char *)(lVar1 + 0x29ac) == '\0')) &&
       (*(char *)(lVar1 + 0x29ad) == '\0')) &&
      ((*(char *)(lVar1 + 0x29ae) == '\0' && (*(char *)(lVar1 + 0x29af) == '\0')))) &&
     ((*(char *)(lVar1 + 0x29b0) == '\0' &&
      ((*(char *)(lVar1 + 0x29b1) == '\0' && (*(char *)(lVar1 + 0x29b2) == '\0')))))) {
    return 1;
  }
  return *(byte *)(lVar1 + (((ulong)param_2 & 0xfff8) >> 3) + 0x29ab) >> (ulong)(param_2 & 7) & 1;
}


