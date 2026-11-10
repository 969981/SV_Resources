/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011322d4; name: FUN_011322d4
 */


long FUN_011322d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x1e8) & 1) == 0) {
    return 0;
  }
  return (long)*(uint **)(param_1 + 0x1f0) + (ulong)**(uint **)(param_1 + 0x1f0);
}


