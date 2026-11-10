/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ee2f4; name: FUN_008ee2f4
 */


long FUN_008ee2f4(long param_1)

{
  return *(long *)PTR_DAT_047d26e8 +
         ((ulong)*(byte *)(param_1 + 9) + (ulong)*(byte *)(param_1 + 8) * 4 +
         (ulong)*(byte *)(param_1 + 10) * 0x10) * 0xa8;
}


