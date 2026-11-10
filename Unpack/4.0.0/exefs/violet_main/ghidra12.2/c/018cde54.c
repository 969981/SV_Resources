/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018cde54; name: FUN_018cde54
 */


void FUN_018cde54(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
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
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_01246154(auStack_58);
  local_90 = CONCAT44(local_90._4_4_,*param_2);
  uVar1 = FUN_019ffcd0(param_1,param_2,auStack_b8);
  if (0 < (int)uVar1) {
    memcpy(&uStack_88,auStack_b8,(ulong)uVar1 << 2);
  }
  local_90 = CONCAT44(0x32,(undefined4)local_90);
  local_60 = (undefined1)uVar1;
  local_5e = CONCAT13(1,(undefined3)local_5e);
  FUN_01461214(param_1);
  uVar2 = FUN_018cdf0c();
  FUN_018cdf14(uVar2,auStack_c8,&local_90);
  return;
}


