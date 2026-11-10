/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02deb664; name: FUN_02deb664
 */


void FUN_02deb664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = param_1[2];
  uVar1 = param_1[4];
  param_2[3] = param_1[3];
  param_2[4] = uVar1;
  param_2[6] = 0;
  param_2[5] = 0;
  FUN_00dbefa4(param_2 + 5,param_1 + 5);
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_00f34110(param_2 + 7,param_1 + 7);
  uVar1 = param_1[10];
  param_2[9] = param_1[9];
  param_2[10] = uVar1;
  return;
}


