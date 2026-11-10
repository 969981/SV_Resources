/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea0e70; name: FUN_01ea0e70
 */


void FUN_01ea0e70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_20 = *param_1;
  *param_1 = uVar1;
  uStack_18 = param_1[1];
  param_1[1] = uVar2;
  FUN_01e9eb34(&local_20);
  return;
}


