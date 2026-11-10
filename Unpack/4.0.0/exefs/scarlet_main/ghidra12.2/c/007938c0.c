/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007938c0; name: FUN_007938c0
 */


uint FUN_007938c0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


