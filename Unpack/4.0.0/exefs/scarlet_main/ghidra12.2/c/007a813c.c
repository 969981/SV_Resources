/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a813c; name: FUN_007a813c
 */


uint FUN_007a813c(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return ~uVar1 & 1;
}


