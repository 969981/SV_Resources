/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186989c; name: FUN_0186989c
 */


void FUN_0186989c(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char local_88 [8];
  long *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_60;
  undefined1 auStack_58 [40];
  
  FUN_01246154(auStack_58);
  FUN_02943244(auStack_58,2,0x7f);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0294325c(auStack_58,uVar1);
  local_74 = 4;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = (**(code **)(*param_2 + 0x98))(param_2);
  local_60 = 1;
  local_68 = auStack_58;
  FUN_01461214(param_1);
  uVar2 = FUN_01907cbc();
  FUN_0124af54(uVar2,local_88,&local_80);
  if (local_88[0] != '\0') {
    uVar2 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_02981c58(uVar2,uVar1,4,param_3);
  }
  return;
}


