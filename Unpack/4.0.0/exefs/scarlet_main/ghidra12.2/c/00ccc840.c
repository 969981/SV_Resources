/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccc840; name: FUN_00ccc840
 */


void FUN_00ccc840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00ccc968(param_1 + 3,*param_1,param_1[1],param_2 + 1);
  uVar1 = *param_1;
  *param_1 = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


