/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284f5a4; name: FUN_0284f5a4
 */


void FUN_0284f5a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,param_4);
  local_40 = *(undefined8 *)(param_4 + 0x10);
  local_38 = *(undefined1 *)(param_4 + 0x18);
  FUN_018ddc10(param_1,&local_50);
  FUN_018ddc74(&local_50);
  *param_1 = &PTR_FUN_045e46b8;
  param_1[4] = &PTR_LAB_045e4788;
  param_1[5] = &DAT_045e47d8;
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  param_1[0xf] = &PTR_LAB_045e4830;
  param_1[0x10] = 0;
  FUN_0284f648(param_1 + 0x11);
  param_1[0x10] = param_1 + 0x11;
  return;
}


