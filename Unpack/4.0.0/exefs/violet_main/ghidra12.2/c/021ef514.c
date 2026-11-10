/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ef514; name: FUN_021ef514
 */


void FUN_021ef514(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined1 local_94;
  undefined8 local_92;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = FUN_00e677bc(param_3);
  uVar2 = FUN_00e677bc(param_4);
  local_60 = param_3;
  uStack_58 = param_4;
  FUN_021ef6a4(&local_60);
  FUN_021ef6f8(&local_60);
  local_94 = 0;
  local_d8 = 0xffffffffffffffff;
  uStack_d0 = 0x3ffffffff;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0x1000000000000;
  local_92 = 0x10001000100;
  local_a8 = 0xffffffff;
  local_e8 = 0;
  local_e0 = 0;
  local_a4 = 0;
  local_6c = 0;
  local_70 = 0;
  local_88 = 0;
  local_b8 = 0x1ffffffffff00ff;
  uStack_b0 = 0xffffffffffffffff;
  local_9c = 0xffff00000000;
  local_80 = 0;
  uStack_78 = 0;
  FUN_021ef740(&local_e8,&local_60,param_5);
  FUN_00e679bc(param_3,uVar1 & 1);
  FUN_00e679bc(param_4,uVar2 & 1);
  uVar3 = FUN_021ef8f4(param_2,&local_e8);
  FUN_01d32cc4(param_1,uVar3);
  FUN_021efa24(param_2,*param_1,&local_e8,param_5);
  return;
}


