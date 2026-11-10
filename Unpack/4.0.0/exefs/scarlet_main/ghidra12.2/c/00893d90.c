/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00893d90; name: FUN_00893d90
 */


long FUN_00893d90(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  return *(long *)(param_1 + 0x260) +
         (long)(param_2 * 0xc + param_3 * 4 + param_4 + param_5 * 2) * 8;
}


