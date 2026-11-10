/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b5dc; name: FUN_0298b5dc
 */


void FUN_0298b5dc(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,long *param_4,
                 long *param_5,undefined2 param_6)

{
  undefined8 uVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined8 local_48;
  undefined1 local_28;
  undefined1 local_27;
  
  local_58 = (**(code **)(*param_4 + 0x98))(param_4);
  local_54 = (**(code **)(*param_5 + 0x98))(param_5);
  local_50 = 0;
  local_48 = 0;
  local_4e = param_6;
  FUN_01461214(param_1);
  uVar1 = FUN_02941314();
  FUN_0294131c(uVar1,&local_28,&local_58);
  *param_3 = local_27;
  *param_2 = local_28;
  return;
}


