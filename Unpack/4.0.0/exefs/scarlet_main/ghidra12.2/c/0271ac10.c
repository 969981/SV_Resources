/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271ac10; name: FUN_0271ac10
 */


long FUN_0271ac10(long param_1)

{
  return (*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 5) * -0x5555555555555555;
}


