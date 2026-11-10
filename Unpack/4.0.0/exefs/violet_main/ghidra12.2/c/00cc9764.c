/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc9764; name: FUN_00cc9764
 */


void FUN_00cc9764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_00cc9f3c();
  uVar1 = param_1[1];
  *param_1 = &PTR_LAB_045d7ba0;
  param_1[4] = &PTR_LAB_045d7bd0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_110 = 0x3fffffffffffffff;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0x3fffffffffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_118 = uVar1;
  local_e8 = uVar1;
  memcpy(param_1 + 0xd,&uStack_120,0x28);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  param_1[0x12] = 0;
  memcpy(param_1 + 0x13,&uStack_f0,0x28);
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_00cc995c(&local_138);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 300) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = 0x1fffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x24,0,1);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x28,0,1);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_00cca194(param_1 + 0x2d);
  uVar1 = FUN_00cc9950();
  param_1[0x31] = uVar1;
  param_1[0x32] = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x33,0,1);
  local_a0 = param_1[1];
  local_90 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_128 = 0;
  uStack_98 = 0x3fffffffffffffff;
  local_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0x3fffffffffffffff;
  local_138 = 0;
  uStack_130 = 0;
  local_70 = local_a0;
  memcpy(&uStack_120,&uStack_a8,0x28);
  local_f8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  memcpy(&uStack_f0,&uStack_78,0x28);
  local_80 = 0;
  uStack_78 = 0;
  FUN_00cc995c(&local_c0);
  FUN_00cd3548(param_1 + 0x35,&local_138);
  FUN_00cc995c(&local_138);
  FUN_00cc9ce4(param_1 + 0x2a);
  return;
}


