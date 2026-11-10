/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4864; name: FUN_001f4864
 */


long FUN_001f4864(long param_1,long param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  return param_2 - ((ulong)(*(byte *)(param_1 + 0xd) >> 3) & 1);
}


