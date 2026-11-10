/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029605d0; name: FUN_029605d0
 */


void FUN_029605d0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_34 = 0;
  local_3c = 0;
  local_44 = 0;
  local_4c = 0;
  local_54 = 0;
  local_5c = 0;
  local_60 = CONCAT22(local_60._2_2_,0x97);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_0293d770(param_1,uVar2);
  local_60._0_3_ = CONCAT12(uVar1,(undefined2)local_60);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar1 = FUN_0293d770(param_1,uVar2);
  local_60 = CONCAT13(uVar1,(undefined3)local_60);
  FUN_02941ef0(param_1,&local_60);
  local_5c = local_5c & 0xffffffffffffff00;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_60 = (**(code **)(*param_2 + 0x98))(param_2);
  local_5c._0_6_ = CONCAT24(0x422,(undefined4)local_5c);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  local_54 = CONCAT44(local_54._4_4_,uVar2);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  local_54 = CONCAT44(uVar2,(undefined4)local_54);
  local_5c = CONCAT26(0x102,(undefined6)local_5c);
  FUN_01907920(param_1,&local_60);
  return;
}


