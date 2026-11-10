/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d8d70; name: FUN_015d8d70
 */


void FUN_015d8d70(uint *param_1,uint param_2,uint param_3)

{
  param_1[0] = 0;
  param_1[1] = 0;
  *param_1 = (param_2 & 0xf) << 4 | 3 | (param_3 & 0xf) << 8;
  return;
}


