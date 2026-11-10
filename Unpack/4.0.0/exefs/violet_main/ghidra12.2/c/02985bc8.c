/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985bc8; name: FUN_02985bc8
 */


void FUN_02985bc8(undefined8 param_1,long *param_2,long *param_3,undefined2 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 auStack_9c [36];
  undefined1 auStack_78 [40];
  undefined1 local_38 [8];
  
  FUN_02985c98(&local_a8);
  local_a8 = (**(code **)(*param_2 + 0x98))(param_2);
  local_a4 = (**(code **)(*param_3 + 0x98))(param_3);
  local_a0 = param_4;
  FUN_01920f40(auStack_9c,param_5);
  FUN_01920f40(auStack_78,param_6);
  local_38[0] = 0;
  FUN_01461214(param_1);
  uVar1 = FUN_02985cd4();
  FUN_02985cdc(uVar1,local_38,&local_a8);
  return;
}


