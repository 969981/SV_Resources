/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298b8dc; name: FUN_0298b8dc
 */


void FUN_0298b8dc(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5e;
  undefined1 auStack_58 [40];
  
  local_5e = 0;
  local_60 = 0;
  local_90 = 0x3100000000;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_01246154(auStack_58);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_90 = CONCAT44(6,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_88 = CONCAT44(local_88._4_4_,uVar1);
  local_60 = 1;
  local_5e = CONCAT13(1,(undefined3)local_5e);
  FUN_02943244(auStack_58,2,0x76);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0294325c(auStack_58,uVar1);
  FUN_01461214(param_1);
  uVar2 = FUN_018cdf0c();
  FUN_018cdf14(uVar2,auStack_a0,&local_90);
  return;
}


