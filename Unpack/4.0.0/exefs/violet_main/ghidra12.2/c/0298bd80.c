/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298bd80; name: FUN_0298bd80
 */


void FUN_0298bd80(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_40 [16];
  undefined1 auStack_18 [8];
  
  local_40 = (**(code **)(*param_2 + 0x240))(param_2,0x26);
  local_58 = FUN_02978880(local_40);
  local_5c = 0x2b;
  local_50 = 0;
  local_48 = 0;
  local_68 = param_2;
  local_60 = param_3;
  FUN_01461214(param_1);
  uVar1 = FUN_01907cbc();
  FUN_0124af54(uVar1,auStack_18,&local_68);
  return;
}


