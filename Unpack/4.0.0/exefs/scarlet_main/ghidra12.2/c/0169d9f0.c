/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169d9f0; name: FUN_0169d9f0
 */


bool FUN_0169d9f0(long param_1)

{
  if ((*(long *)(param_1 + 0x30) == 0) || ((*(byte *)(*(long *)(param_1 + 0x30) + 0x1e8) & 1) == 0))
  {
    return false;
  }
  return *(char *)(param_1 + 0xd8) != '\0';
}


