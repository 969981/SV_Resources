/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5b1c; name: FUN_007e5b1c
 */


bool FUN_007e5b1c(long param_1)

{
  if (*(short *)(param_1 + 0x5e8) == -1) {
    return false;
  }
  return (uint)*(byte *)(param_1 + 0x5eb) ==
         (~(-1 << (ulong)(*(byte *)(param_1 + 0x5ea) & 0x1f)) & 0xffU);
}


