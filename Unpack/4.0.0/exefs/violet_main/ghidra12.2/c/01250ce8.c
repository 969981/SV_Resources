/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250ce8; name: FUN_01250ce8
 */


void FUN_01250ce8(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4e;
  undefined1 auStack_48 [40];
  
  local_4e = 0;
  local_50 = 0;
  local_80 = 0x3100000000;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_01246154(auStack_48);
  plVar2 = (long *)FUN_01242508(param_1);
  uVar1 = (**(code **)(*plVar2 + 0x98))();
  local_80 = CONCAT44(local_80._4_4_,uVar1);
  plVar2 = (long *)FUN_01242508(param_1);
  uVar1 = (**(code **)(*plVar2 + 0x98))();
  local_80 = CONCAT44(0x32,(undefined4)local_80);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  local_50 = 1;
  local_4e = CONCAT13(1,(undefined3)local_4e);
  FUN_01461214(param_1);
  uVar3 = FUN_018cdf0c();
  FUN_018cdf14(uVar3,auStack_90,&local_80);
  return;
}


