/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161b4c0; name: FUN_0161b4c0
 */


uint FUN_0161b4c0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 >> 8;
  if ((*param_1 & 0xf) != 1) {
    uVar1 = 0;
  }
  return uVar1;
}


