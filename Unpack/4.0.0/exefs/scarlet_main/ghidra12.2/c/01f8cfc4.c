/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8cfc4; name: FUN_01f8cfc4
 */


void FUN_01f8cfc4(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0x130) | 1L << (param_2 & 0x3f);
  return;
}


