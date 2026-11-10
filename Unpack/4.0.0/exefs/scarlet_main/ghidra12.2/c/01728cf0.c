/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01728cf0; name: FUN_01728cf0
 */


uint FUN_01728cf0(uint param_1,uint param_2)

{
  return 1 << (ulong)(param_2 & 0x1f) | 1 << (ulong)(param_1 & 0x1f);
}


