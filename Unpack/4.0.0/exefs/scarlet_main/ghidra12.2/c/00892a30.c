/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892a30; name: FUN_00892a30
 */


long FUN_00892a30(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x18) +
         (ulong)*(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 4 + 0xc);
}


