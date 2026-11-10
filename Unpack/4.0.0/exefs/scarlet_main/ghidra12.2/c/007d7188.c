/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d7188; name: FUN_007d7188
 */


ulong FUN_007d7188(long param_1)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) == 0) {
    return 0xfd;
  }
  uVar1 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x788) + uVar1) == '\0') {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while (*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) != uVar1);
  return 0xfd;
}


