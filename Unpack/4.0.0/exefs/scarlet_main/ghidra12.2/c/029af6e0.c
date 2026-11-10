/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029af6e0; name: FUN_029af6e0
 */


void FUN_029af6e0(long param_1,byte param_2,uint param_3)

{
  *(byte *)(*(long *)(param_1 + 0x88) + (ulong)param_3 * 0x108 + 0xc1) = param_2 & 1;
  return;
}


