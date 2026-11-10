/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f1f98; name: FUN_007f1f98
 */


void FUN_007f1f98(long param_1,uint param_2)

{
  *(long *)(param_1 + 0x80) = (long)(*(long *)PTR_DAT_047d0970 * (ulong)param_2) / 1000;
  return;
}


