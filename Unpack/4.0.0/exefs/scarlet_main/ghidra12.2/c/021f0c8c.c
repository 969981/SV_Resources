/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f0c8c; name: FUN_021f0c8c
 */


ulong FUN_021f0c8c(int param_1)

{
  if ((param_1 + 4U & 0xff) < 6) {
    return 0x10404040003 >> (((ulong)(param_1 + 4U) & 7) << 3);
  }
  return 2;
}


