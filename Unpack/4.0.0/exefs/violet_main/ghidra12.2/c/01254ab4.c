/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01254ab4; name: FUN_01254ab4
 */


void FUN_01254ab4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined8 param_5,undefined2 param_6,undefined1 param_7,undefined4 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  
  local_38 = param_9;
  local_48 = param_5;
  local_40 = param_6;
  local_3e = param_7;
  local_3c = param_8;
  FUN_01461214();
  uVar1 = FUN_01254b2c();
  FUN_012556e4(uVar1,&local_18,&local_48);
  *param_2 = local_18;
  *param_3 = local_17;
  *param_4 = local_16;
  return;
}


