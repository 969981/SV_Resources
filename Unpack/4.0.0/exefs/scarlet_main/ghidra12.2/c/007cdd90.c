/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cdd90; name: FUN_007cdd90
 */


undefined4 FUN_007cdd90(long param_1)

{
  if ((*(long *)(param_1 + 0xb8) == 0) || (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xc0)))
  {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x68);
}


