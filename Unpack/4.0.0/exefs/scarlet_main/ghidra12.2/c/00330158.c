/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330158; name: FUN_00330158
 */


void FUN_00330158(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cc5b0 + 0x10);
  param_1[1] = 1;
  lVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *param_3;
  *param_3 = 0;
  param_1[4] = lVar1;
  return;
}


