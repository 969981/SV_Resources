/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015db31c; name: FUN_015db31c
 */


void FUN_015db31c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = uVar1;
  FUN_00ca1ea4(param_1 + 4,param_2 + 4);
  return;
}


