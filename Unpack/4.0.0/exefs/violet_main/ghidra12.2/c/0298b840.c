/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b840; name: FUN_0298b840
 */


void FUN_0298b840(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  uint local_4e;
  undefined1 auStack_48 [40];
  
  local_4e = 0;
  local_50 = 0;
  local_80 = 0x3100000000;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_01246154(auStack_48);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_80 = CONCAT44(2,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  local_78 = CONCAT44(local_78._4_4_,uVar1);
  local_50 = 1;
  local_4e = local_4e & 0xffffff;
  FUN_01461214(param_1);
  uVar2 = FUN_018cdf0c();
  FUN_018cdf14(uVar2,auStack_90,&local_80);
  return;
}


