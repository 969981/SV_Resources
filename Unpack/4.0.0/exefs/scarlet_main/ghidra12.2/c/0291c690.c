/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291c690; name: FUN_0291c690
 */


uint FUN_0291c690(uint param_1,uint param_2)

{
  return param_1 & 0xf0000000 | param_1 & 0x1ffffff | (param_2 & 7) << 0x19;
}


