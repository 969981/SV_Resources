/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d0308; name: FUN_002d0308
 */


void FUN_002d0308(uint *param_1,int param_2,uint param_3)

{
  *param_1 = *param_1 & 8 | param_2 << 4;
  param_1[1] = param_3;
  return;
}


