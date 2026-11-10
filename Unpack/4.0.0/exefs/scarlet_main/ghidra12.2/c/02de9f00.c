/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02de9f00; name: FUN_02de9f00
 */


void FUN_02de9f00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  param_2[3] = 0;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = 0;
  FUN_00dbefa4(param_2 + 2,param_1 + 2);
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_00f34110(param_2 + 4,param_1 + 4);
  return;
}


