/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01480790; name: FUN_01480790
 */


void FUN_01480790(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  *param_1 = (param_4 & 0xf) << 4 | (param_3 & 0xffff) << 8 | 1;
  return;
}


