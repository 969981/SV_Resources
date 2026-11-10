/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161b4e0; name: FUN_0161b4e0
 */


uint FUN_0161b4e0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 >> 4 & 0xf;
  if ((*param_1 & 0xf) != 1) {
    uVar1 = 10;
  }
  return uVar1;
}


