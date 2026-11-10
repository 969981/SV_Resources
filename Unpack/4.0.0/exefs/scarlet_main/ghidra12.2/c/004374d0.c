/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004374d0; name: FUN_004374d0
 */


void FUN_004374d0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  FUN_004348c0(&local_18,param_3,param_4);
  *param_2 = local_18;
  param_2[1] = uStack_14;
  return;
}


