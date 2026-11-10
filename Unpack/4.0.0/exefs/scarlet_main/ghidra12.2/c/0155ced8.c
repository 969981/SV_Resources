/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155ced8; name: FUN_0155ced8
 */


void FUN_0155ced8(long param_1,ulong param_2)

{
  *(ulong *)(*(long *)(param_1 + 0x120) + 0x108) =
       *(ulong *)(*(long *)(param_1 + 0x120) + 0x108) & 0xfffffffffffffffe | param_2 & 1;
  return;
}


