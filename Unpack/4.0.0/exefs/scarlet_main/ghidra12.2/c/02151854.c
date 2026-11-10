/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02151854; name: FUN_02151854
 */


void FUN_02151854(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffe | param_2 & 1;
  return;
}


