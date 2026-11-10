/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ff170; name: FUN_020ff170
 */


void FUN_020ff170(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[1] = param_4;
  param_1[2] = param_2;
  *param_1 = (param_5 & 0xff) << 0x14 | (param_3 & 0xffff) << 4 | 2;
  return;
}


