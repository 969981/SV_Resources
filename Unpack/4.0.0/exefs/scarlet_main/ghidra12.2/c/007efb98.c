/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007efb98; name: FUN_007efb98
 */


undefined8 FUN_007efb98(long param_1)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x40) + uVar1 * 8) != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50));
  }
  return 0;
}


