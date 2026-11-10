/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02960560; name: FUN_02960560
 */


void FUN_02960560(undefined8 param_1,long *param_2,long *param_3)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  ulong local_28;
  
  local_30 = (**(code **)(*param_2 + 0x98))(param_2);
  uStack_2c = 0x19;
  local_28 = (**(code **)(*param_3 + 0x98))(param_3);
  local_28 = local_28 & 0xffffffff;
  FUN_0193f070(param_1,&local_30);
  return;
}


