/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01461d0c; name: FUN_01461d0c
 */


void FUN_01461d0c(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
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
  
  uVar2 = (**(code **)(*param_2 + 0x220))(param_2,0x22);
  if ((uVar2 & 1) != 0) {
    local_5e = 0;
    local_90 = 0x3100000000;
    local_88 = 0;
    local_60 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_01246154(auStack_58);
    local_90._0_4_ = (**(code **)(*param_2 + 0x98))(param_2);
    local_90._4_4_ = 0x22;
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    local_88 = CONCAT44(local_88._4_4_,uVar1);
    local_60 = 1;
    local_5e = CONCAT13(1,(undefined3)local_5e);
    FUN_01461214(param_1);
    uVar3 = FUN_018cdf0c();
    FUN_018cdf14(uVar3,auStack_a0,&local_90);
    uVar3 = FUN_01243584(param_1);
    FUN_01240198(uVar3,param_2,3);
    if ((param_3 & 1) != 0) {
      uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
      local_90 = CONCAT44(local_90._4_4_,uVar1);
      FUN_01461214(param_1);
      uVar3 = FUN_02982c60();
      FUN_0297e634(uVar3,auStack_a0,&local_90);
    }
  }
  return;
}


