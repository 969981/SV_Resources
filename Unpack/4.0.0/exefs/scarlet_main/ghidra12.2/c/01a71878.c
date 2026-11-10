/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a71878; name: FUN_01a71878
 */


long FUN_01a71878(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x10;
  }
  return param_1 + 0x100;
}


