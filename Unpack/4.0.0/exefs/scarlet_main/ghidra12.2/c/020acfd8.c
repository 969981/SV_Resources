/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020acfd8; name: FUN_020acfd8
 */


bool FUN_020acfd8(long param_1)

{
  if (*(long *)(param_1 + 0x78) == 0) {
    return false;
  }
  return *(short *)(*(long *)(param_1 + 0x78) + 0x1a) != 0;
}


