/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02174494; name: FUN_02174494
 */


long FUN_02174494(long param_1,int *param_2)

{
  return *(long *)(param_1 + 0x58) +
         (*(long *)(*(long *)(param_1 + 0x98) + (long)param_2[2] * 8) + (long)*param_2 +
         (long)(param_2[1] << (ulong)(param_2[2] & 0x1f))) * 8;
}


