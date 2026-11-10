/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043b7c0; name: FUN_0043b7c0
 */


void FUN_0043b7c0(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & (long)(int)~param_2;
  return;
}


