/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175e080; name: FUN_0175e080
 */


void FUN_0175e080(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  FUN_0175e1c4();
  *param_1 = &PTR_FUN_045e8ab0;
  param_1[4] = &PTR_LAB_045e8ae0;
  param_1[5] = param_1[1];
  param_1[0x1006] = 0;
  param_1[0x1007] = 0;
  FUN_00d1adec();
  uVar1 = param_1[1];
  param_1[0x1008] = 0;
  *(undefined4 *)(param_1 + 0x1009) = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_88 = 0x3fffffffffffffff;
  local_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0x3fffffffffffffff;
  param_1[0x100a] = 0;
  param_1[0x100b] = 0;
  param_1[0x100c] = 0;
  local_90 = uVar1;
  local_60 = uVar1;
  memcpy(param_1 + 0x100d,&uStack_98,0x28);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x1012] = 0;
  memcpy(param_1 + 0x1013,&uStack_68,0x28);
  local_70 = 0;
  uStack_68 = 0;
  FUN_00cc995c(&local_b0);
  *(undefined4 *)(param_1 + 0x101f) = 0;
  param_1[0x1020] = 0;
  param_1[0x1019] = 0;
  param_1[0x101a] = 0;
  *(undefined4 *)((long)param_1 + 0x812c) = 1;
  param_1[0x101b] = 0;
  param_1[0x101c] = uVar1;
  param_1[0x101d] = 0x1fffffffffffffff;
  param_1[0x101e] = 0;
  param_1[0x1022] = 0;
  param_1[0x1023] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1024,0,1);
  param_1[0x1026] = 0;
  *(undefined4 *)((long)param_1 + 0x8144) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1027,0,1);
  return;
}


