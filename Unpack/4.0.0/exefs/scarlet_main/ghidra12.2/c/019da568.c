/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019da568; name: FUN_019da568
 */


void FUN_019da568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_019da690(param_1 + 3,*param_1,param_1[1],param_2 + 1);
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


