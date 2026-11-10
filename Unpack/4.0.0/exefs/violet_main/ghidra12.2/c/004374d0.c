/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


