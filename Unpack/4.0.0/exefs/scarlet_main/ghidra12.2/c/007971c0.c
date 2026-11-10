/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007971c0; name: FUN_007971c0
 */


bool FUN_007971c0(long param_1)

{
  if ((*(int *)(param_1 + 8) == 0x32ab9864) && ((*(byte *)(param_1 + 0xc) & 0x7f) == 0xb)) {
    return *(int *)(param_1 + 0x5f8) - 0x1cU < 0x5a5;
  }
  return false;
}


