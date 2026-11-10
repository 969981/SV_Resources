/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdfd20; name: FUN_00fdfd20
 */


long FUN_00fdfd20(long param_1)

{
  return (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
}


