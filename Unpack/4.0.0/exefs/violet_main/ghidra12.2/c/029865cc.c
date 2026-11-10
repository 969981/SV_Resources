/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029865cc; name: FUN_029865cc
 */


void FUN_029865cc(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined2 local_c8;
  undefined1 local_b0;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [40];
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_48 [8];
  
  plVar2 = (long *)FUN_01242508();
  local_d8 = 0;
  local_d4 = (uint)local_d4._2_2_ << 0x10;
  local_d8 = (**(code **)(*plVar2 + 0x98))();
  local_d4 = CONCAT22(local_d4._2_2_,param_2);
  FUN_01461214(param_1);
  uVar3 = FUN_02942268();
  FUN_02942270(uVar3,local_48,&local_d8);
  FUN_01246154(auStack_78);
  FUN_01920e80(&local_d8);
  local_d4 = 1;
  local_d0 = local_48[0];
  local_c8 = param_2;
  local_d8 = (**(code **)(*plVar2 + 0x98))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  local_50 = FUN_01689a40(param_1,uVar1);
  local_b0 = 9;
  local_4f = 0;
  FUN_01582534(param_1);
  uVar3 = FUN_01920e44();
  FUN_01920e4c(uVar3,auStack_84);
  uVar3 = FUN_01249340(param_1);
  FUN_01920eb8(uVar3,&local_d8);
  return;
}


