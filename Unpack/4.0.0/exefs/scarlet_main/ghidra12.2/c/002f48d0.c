/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f48d0; name: FUN_002f48d0
 */


void FUN_002f48d0(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cc9c0;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 1;
  param_1[3] = *param_3;
  *param_3 = 0;
  param_1[4] = 0;
  param_1[4] = *param_4;
  *param_4 = 0;
  param_1[5] = 0;
  return;
}


