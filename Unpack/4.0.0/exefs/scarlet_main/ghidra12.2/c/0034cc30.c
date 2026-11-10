/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034cc30; name: FUN_0034cc30
 */


uint FUN_0034cc30(uint param_1,uint param_2)

{
  return param_2 & 1 | param_1 | (param_2 & 0x3ffffffe) << 2;
}


