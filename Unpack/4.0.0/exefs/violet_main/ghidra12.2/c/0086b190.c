/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086b190; name: FUN_0086b190
 */


bool FUN_0086b190(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_30;
  
  local_60[0] = param_4[2];
  local_70 = param_1;
  local_68 = param_2;
  FUN_0086a660(&local_70,0,param_3,local_60);
  param_4[2] = local_60[0];
  param_4[1] = uStack_38;
  *param_4 = local_40;
  return local_30 != 0 && (float)local_60[0] != 0.0;
}


