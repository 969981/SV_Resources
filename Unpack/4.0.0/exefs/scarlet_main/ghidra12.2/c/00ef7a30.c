/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ef7a30; name: FUN_00ef7a30
 */


uint FUN_00ef7a30(uint param_1,uint param_2)

{
  if (0xf < (param_1 & 0xfff0 ^ param_1 >> 0x10 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
    param_2 = param_2 & 0xffff | (param_1 >> 0x10 ^ param_1 ^ param_2) << 0x10;
  }
  return param_2;
}


