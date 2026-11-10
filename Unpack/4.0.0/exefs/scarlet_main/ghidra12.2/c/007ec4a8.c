/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec4a8; name: FUN_007ec4a8
 */


ulong FUN_007ec4a8(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 0x3a) == 0) {
    return *(ulong *)(param_1 + 0x40);
  }
  return (ulong)*(byte *)(param_1 + 0x3a);
}


