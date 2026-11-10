/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016803e4; name: FUN_016803e4
 */


void FUN_016803e4(undefined8 param_1,long *param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  undefined1 auStack_18 [8];
  
  local_40 = (**(code **)(*param_2 + 0x98))(param_2);
  local_3c = *param_3;
  local_38 = param_4;
  FUN_01461214(param_1);
  uVar1 = FUN_0167fda8();
  FUN_0167fdb0(uVar1,auStack_18,&local_40);
  return;
}


