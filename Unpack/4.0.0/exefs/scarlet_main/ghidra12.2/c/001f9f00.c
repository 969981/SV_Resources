/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9f00; name: FUN_001f9f00
 */


bool FUN_001f9f00(long param_1)

{
  if (((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x78) == 0)) &&
     (*(long *)(param_1 + 0x80) == 0)) {
    return *(long *)(param_1 + 0x88) != 0;
  }
  return true;
}


