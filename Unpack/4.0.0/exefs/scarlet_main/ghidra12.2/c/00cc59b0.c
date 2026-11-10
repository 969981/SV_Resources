/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc59b0; name: FUN_00cc59b0
 */


void FUN_00cc59b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_8 = param_2;
  FUN_00cc6c60(&local_40,param_2,&local_8,param_3);
  *param_1 = local_40;
  param_1[1] = uStack_38;
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  return;
}


