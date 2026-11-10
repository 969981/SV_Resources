/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f784a0; name: FUN_01f784a0
 */


void FUN_01f784a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_01cf7e20();
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = param_1 + 1;
  FUN_01f78660(param_1,*param_2,param_2 + 1);
  return;
}


